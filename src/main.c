#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void extract_ips_addresses(const char *filename, const char *output_filename) {
    FILE *ips_file = fopen(filename, "rb");
    FILE *output_file = fopen(output_filename, "w");

    if (!ips_file || !output_file) {
        printf("Error opening file.\n");
        return;
    }

    char header[5];
    fread(header, 1, 5, ips_file);
    if (strncmp(header, "PATCH", 5) != 0) {
        printf("Not a valid IPS file.\n");
        fclose(ips_file);
        fclose(output_file);
        return;
    }

    while (1) {
        unsigned char address_bytes[3];
        if (fread(address_bytes, 1, 3, ips_file) != 3) break;
        if (address_bytes[0] == 'E' && address_bytes[1] == 'O' && address_bytes[2] == 'F') break;
        unsigned int address = (address_bytes[0] << 16) | (address_bytes[1] << 8) | address_bytes[2];
        unsigned char size_bytes[2];
        if (fread(size_bytes, 1, 2, ips_file) != 2) break;
        unsigned int size = (size_bytes[0] << 8) | size_bytes[1];
        fprintf(output_file, "0x%06X: ", address);
        for (unsigned int i = 0; i < size; i += 4) {
            unsigned char byte[4];
            if (fread(byte, 1, 4, ips_file) != 4) break;
            float float_value;
            unsigned int *int_ptr = (unsigned int *)byte;
            float_value = *((float *)int_ptr);
            fprintf(output_file, "%f ", float_value);
        }

        fprintf(output_file, "\n");
    }

    fclose(ips_file);
    fclose(output_file);
    printf("Extraction complete. Check output.txt.\n");
}

int main() {
    extract_ips_addresses(".\\code.ips", ".\\output.txt");
    return 0;
}
