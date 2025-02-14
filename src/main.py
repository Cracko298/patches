import sys, os
def extract_ips_patch(ips_filename):
    with open(ips_filename, 'rb') as ips_file:
        header = ips_file.read(5)
        if header != b"PATCH":
            print("Invalid IPS patch file.")
            return

        patches = []
        while 1==1:
            address = ips_file.read(3)
            if address == b"EOF":
                break

            address_int = int.from_bytes(address, 'big')
            size_bytes = ips_file.read(2)
            size = int.from_bytes(size_bytes, 'big')
            data = ips_file.read(size)
            patches.append((address_int, data, size))
        return patches

try:
    inputFile, outputFile = str(sys.argv[1]), str(sys.argv[2])
except IndexError:
    print(f"Usage: py {os.path.basename(__file__)} [inputFile] [outputTextDoc]");os.system('pause');sys.exit(1)

patches = extract_ips_patch(inputFile)
with open(outputFile, 'w') as f:
    for address, data, size in patches:
        f.write(f"Address: 0x{address:06X}\nData: {data.hex()}\nData Size: {size}\n\n")
        print(f"0x{address:06X}")
