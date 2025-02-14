# GamePatches
Game Patches for Minecraft 3DS. Customizing many features of the Game.

## Addressing Table
```
0x01E938 | 0x024F58 | 0x02512C = Viewport Scaling                 | Default Value: 1.0
0x2CF2A0                       = ViewBobbing Sensitivity          | Default Value: 5.0
0x54FB68                       = Player Reach                     | Default Value: 5.623
0x2C5398                       = Cloud Height                     | Default Value: 0.33
0x00B4D4                       = Camera Sensitivity               | Default Value: 3.0
0x2CEE80                       = Camera FOV                       | Default Value: 70.0
0x0A279C                       = Game Saturation per-weather      | Default Value: 5.0

* Each Offset/Address is a 32-Bit Floating Point Number in Big Endian.
* Adding 0x100000 to each offset to get address' in Memory.
* These are all code.bin offsets.
```
