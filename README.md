# GamePatches
Game Patches for Minecraft 3DS. Customizing many features of the Game.

## Addressing Table
```
0x01E938 | 0x024F58 | 0x02512C = Viewport Scaling             | Default Value: 1.0    | 32-Bit Floating Point
0x2CF2A0                       = ViewBobbing Sensitivity      | Default Value: 5.0    | 32-Bit Floating Point
0x54FB68                       = Player Reach                 | Default Value: 5.623  | 32-Bit Floating Point
0x2C5398                       = Cloud Height                 | Default Value: 0.33   | 32-Bit Floating Point
0x00B4D4                       = Camera Sensitivity           | Default Value: 3.0    | 32-Bit Floating Point
0x2CEE80                       = Camera FOV                   | Default Value: 70.0   | 32-Bit Floating Point
0x0A279C                       = Game Saturation per-weather  | Default Value: 5.0    | 32-Bit Floating Point
0x933898                       = Ender Dragon Count           | Default Value: 0      | 32-Bit Standard Bytes
0x9338A8                       = Land Animal Count            | Default Value: 0      | 32-Bit Standard Bytes
0x9338AC                       = Hostile Mob Count            | Default Value: 0      | 32-Bit Standard Bytes
0x9338B0                       = Ocean Creature Count         | Default Value: 0      | 32-Bit Standard Bytes
0x9338B4                       = Villager/Golem Count         | Default Value: 0      | 32-Bit Standard Bytes
0x9338B8                       = Mob-Spawner Count            | Default Value: 0      | 32-Bit Standard Bytes
0x9338BC                       = Wither Count                 | Default Value: 0      | 32-Bit Standard Bytes
0x9338C0                       = Elder Guardian Count         | Default Value: 0      | 32-Bit Standard Bytes

* Adding 0x100000 to each offset to get address' in Memory.
* Each Offset/Address' Values are in Big Endian (BE).
* These are all 'code.bin' offsets/configurations.
```

## Credits:
- [Cracko298](https://github.com/Cracko298)
- [Minecraft 3DS Community](https://github.com/Minecraft-3DS-Community)
- [FLIPS (Floating IPS)](https://github.com/Alcaro/Flips)
