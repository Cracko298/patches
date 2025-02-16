# GamePatches
Game Patches for Minecraft 3DS. Customizing many features of the Game.

## Addressing Table
```
0x01E938 | 0x024F58 | 0x02512C = Viewport Scaling             | Default Value: 1.0    | 32-Bit Floating Point | Values that scale the viewport itself (screen size).
0x2CF2A0                       = ViewBobbing Sensitivity      | Default Value: 5.0    | 32-Bit Floating Point | The default value of player viewbobbing (on by default).
0x54FB68                       = Player Reach                 | Default Value: 5.623  | 32-Bit Floating Point | Sets the initial value of player reach for placing/breaking/interacting with blocks.
0x2C5398                       = Cloud Height                 | Default Value: 0.33   | 32-Bit Floating Point | The value of the clouds above World-Height.
0x00B4D4                       = Camera Sensitivity           | Default Value: 3.0    | 32-Bit Floating Point | Sets the initial Camera Sensitivity.
0x2CEE80                       = Camera FOV                   | Default Value: 70.0   | 32-Bit Floating Point | Sets the initial Camera FOV (field of view).
0x0A279C                       = Game Saturation per-weather  | Default Value: 5.0    | 32-Bit Floating Point | Saturation for viewport when weather changes (do not affect normal).
0x933898                       = Ender Dragon Count           | Default Value: 0      | 32-Bit Standard Bytes | The count of Ender Dragons' in the World.
0x9338A8                       = Land Animal Count            | Default Value: 0      | 32-Bit Standard Bytes | The count of Land Animals in the World.
0x9338AC                       = Hostile Mob Count            | Default Value: 0      | 32-Bit Standard Bytes | The count of Hostile Mobs in the World.
0x9338B0                       = Ocean Creature Count         | Default Value: 0      | 32-Bit Standard Bytes | The count of Ocean Animals in the World.
0x9338B4                       = Villager/Golem Count         | Default Value: 0      | 32-Bit Standard Bytes | The count of both Villagers and Iron Golems in the World.
0x9338B8                       = Mob-Spawner Count            | Default Value: 0      | 32-Bit Standard Bytes | The count of MobSpawners' in the World.
0x9338BC                       = Wither Count                 | Default Value: 0      | 32-Bit Standard Bytes | The count of Withers' in the World.
0x9338C0                       = Elder Guardian Count         | Default Value: 0      | 32-Bit Standard Bytes | The count of Elder Guardians' in the World.
0x6139F8                       = Jump Velocity                | Default Value: 0.421  | 32-Bit Floating Point | A vector that get's multiplied by player base-jump, which increases it.
0x502C64                       = Falling Movement Speed       | Default Value: 0.02   | 32-Bit Floating Point | The movement speed of being air-born and moving on X-Axis.
0x4F3268                       = Radius of Item Drops         | Default Value: 0.02   | 32-Bit Floating Point | Gets multiplied by initial velocity when leave player hand.

* Adding 0x100000 to each offset to get address' in Memory.
* Each Offset/Address' Values are in Big Endian (BE).
* These are all 'code.bin' offsets/configurations.
```

## Credits:
- [Cracko298](https://github.com/Cracko298).
- [FLIPS (Floating IPS)](https://github.com/Alcaro/Flips).
- [Minecraft 3DS Community](https://github.com/Minecraft-3DS-Community).

