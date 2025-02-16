# GamePatches
Game Patches for Minecraft 3DS. Customizing many features of the Game.
- If you used this guide/table to make your own Patches/Cheats. Please credit them properly, thanks!
## Addressing Table:

| Address | Name | Default Value | Value Type | Description | Is Value Variable? |
| ------- | ---- | ------------- | ---------- | ----------- | ------------------ |
| 0x01E938, 0x024F58, 0x02512C | Viewport Scaling             | 1.0    | 32-Bit Floating Point | Values that scale the viewport itself (screen size). | ✕ |
| 0x2CF2A0 | ViewBobbing Sensitivity      | 5.0    | 32-Bit Floating Point | The default value of player viewbobbing (on by default). | ✕ |
| 0x54FB68 | Player Reach                 | 5.623  | 32-Bit Floating Point | Sets the initial value of player reach for placing/breaking/interacting with blocks. | ✕ |
| 0x2C5398 | Cloud Height                 | 0.33   | 32-Bit Floating Point | The value of the clouds above World-Height. | ✕ |
| 0x00B4D4 | Camera Sensitivity           | 3.0    | 32-Bit Floating Point | Sets the initial Camera Sensitivity. | ✕ |
| 0x2CEE80 | Camera FOV                   | 70.0   | 32-Bit Floating Point | Sets the initial Camera FOV (field of view). | ✕ |
| 0x0A279C | Game Saturation per-weather  | 5.0    | 32-Bit Floating Point | Saturation for viewport when weather changes (do not affect normal). |✕ |
| 0x933898 | Ender Dragon Count           | 0      | 32-Bit Standard Bytes | The count of Ender Dragons' in the World. | ✓ |
| 0x9338A8 | Land Animal Count            | 0      | 32-Bit Standard Bytes | The count of Land Animals in the World. | ✓ |
| 0x9338AC | Hostile Mob Count            | 0      | 32-Bit Standard Bytes | The count of Hostile Mobs in the World. | ✓ |
| 0x9338B0 | Ocean Creature Count         | 0      | 32-Bit Standard Bytes | The count of Ocean Animals in the World. | ✓ |
| 0x9338B4 | Villager/Golem Count         | 0      | 32-Bit Standard Bytes | The count of both Villagers and Iron Golems in the World. | ✓ |
| 0x9338B8 | Mob-Spawner Count            | 0      | 32-Bit Standard Bytes | The count of MobSpawners' in the World. | ✓ |
| 0x9338BC | Wither Count                 | 0      | 32-Bit Standard Bytes | The count of Withers' in the World. | ✓ |
| 0x9338C0 | Elder Guardian Count         | 0      | 32-Bit Standard Bytes | The count of Elder Guardians' in the World. | ✓ |
| 0x6139F8 | Jump Velocity                | 0.421  | 32-Bit Floating Point | A vector that get's multiplied by player base-jump, which increases it. | ✕ |
| 0x502C64 | Falling Movement Speed       | 0.02   | 32-Bit Floating Point | The movement speed of being air-born and moving on X-Axis. | ✕ |
| 0x4F3268 | Radius of Item Drops         | 0.02   | 32-Bit Floating Point | Gets multiplied by initial velocity when leave player hand. | ✕ |
| 0x3EA090 | Swimming Movement Speed      | 0.02   | 32-Bit Floating Point | The movement speed of swimming and moving on the X-Axis. | ✕ |
| 0x4F6354, 0x4F635C | Head Movement Restrictions | -90.0, +90.0 | 32-Bit Floating Point | Restricts the movement of the player's head. | ✕ |
```
* Adding 0x100000 to each offset to get address' in Memory.
* Each Offset/Address' Values are in Big Endian (BE).
* These are all 'code.bin' offsets/configurations.
```

## Credits:
- [Cracko298](https://github.com/Cracko298).
- [FLIPS (Floating IPS)](https://github.com/Alcaro/Flips).
