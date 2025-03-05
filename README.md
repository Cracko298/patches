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
| 0x4EBA90 | Fall Damage Constant         | -9.01  | 32-Bit Floating Point | Constant*Velocity on Y-Axis. | ✕ |
| 0x0C3E4C | Damage Multiplier            | 1.0    | 32-Bit Floating Point | Damage multiplier for everything. | ✕ |
| 0x2CEE80 | Camera FOV                   | 70.0   | 32-Bit Floating Point | Sets the initial Camera FOV (field of view). | ✕ |
| 0x0A279C | Game Saturation per-weather  | 5.0    | 32-Bit Floating Point | Saturation for viewport when weather changes (do not affect normal). | ✕ |
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
| 0x4F3268 | Radius of Item Drops         | 0.02   | 32-Bit Floating Point | Gets multiplied by initial velocity when leave player hand, in direction of calculated vector. | ✕ |
| 0x3EA090 | Swimming Movement Speed      | 0.02   | 32-Bit Floating Point | The movement speed of swimming and moving on the X-Axis. | ✕ |
| 0x4F6354, 0x4F635C | Head Movement Restrictions | -90.0, +90.0 | 32-Bit Floating Point | Restricts the movement of the player's head. | ✕ |
| 0x?????? | Render Distance              | 3.0    | 32-Bit Floating Point | Sets the initial render distance, and fog distance from player coords. | ✕ |
| 0x500BF0, 0x50370C, 0x507270, 0x507274, 0x50804C, 0x6218F4, 0x635020, 0x888BB8 | Player Scaling | 1.62 | 32-Bit Floating Point | Values that scale the player's hitbox, and portions to work at different scaling sizes. | ✕ |
| 0x3ED468 | World Gravity                | 0.08   | 32-Bit Floating Point | Sets the gravity of the World (all entities). | ✕ |
| 0x098D00 | Creative Mode Up/Down Velocity | 0.15 | 32-Bit Floating Point | Sets the up/down velocity for Creative Mode when acsending/descending. | ✕ |
| 0x09870C | Player V-Velocity            | 1.0    | 32-Bit Floating Point | The Players' Velocity-Vector, get's multiplied by inverse of Player Speed. | ✕ |
| 0x3EA0A0 | All Entity Walking Speed     | 0.5460 | 32-Bit Floating Point | Speed of every entities Walk/Wander Phase. | ✕ |
| 0x24BF14 | Player Running Speed         | 1.0    | 32-Bit Floating Point | The speed of the Player while Running. | ✕ |


```
* Assume all values are positive unless otherwise provided.
* Adding 0x100000 to each offset to get address' in Memory.
* Each Offset/Address' Values are in Big Endian (BE).
* These are all 'code.bin' offsets/configurations (above addressing table).
```
<br>

## Memory Table:
| Address | Name | Default Value | Value Type | Description | Is Value Variable? | 
| ----------- | ---------- | ------------- | --------------------- | ----------- | ------------------ | 
| 0x3504A092 | Get Mob ID | 0 | 16-Bit Standard Bytes | Gets the Mob ID from player hand (can be used to make conditional statements). | ✓ |
| 0xB329E8, 0xB32948, 0xB32A00, 0xB32A18, 0xB32A30, 0xB32A48, 0xB32A60, 0xB32A78, 0xB32A90, 0xB32AB0 | Get Keypad Codes | 0 | 32-Bit Standard Bytes | Gets the Keypad Inputs from 3DS console directly (can be used to make macros). | ✓ |
| 0x3018AEF0 | Is 3D Engine Running? | 1 | 32-Bit Standard Bytes | Enables The 3D Engine | ✕ |
| 0xAC1E48, 0xAC1E4C, 0xAC1E50 | Player.X, Player.Y, Player.Z | 0.0 | 32-Bit Floating Point | The player coordinates, cannot be changed directly. | ✕ |
```
All Player.POS are as follows:
Offset-0x04 = Player.Y Off.
Offset-0x08 = Player.X Off.
Offset-0x00 = Player.Z Off.

Offset/Address':
0xAC1E50 = Player.Z #1
0xAC1E5C = Player.Z #2 
0xAC29A8 = Player.Z #3 
0xAC38F0 = Player.Z #4
0xAC38FC = Player.Z #5
0xB2DE1C = Player.Z #6
```

```
* Assume all values are positive unless otherwise provided.
* These are true and always static address' inside of Memory.
* Each Offset/Address' Values are in Big Endian (BE).
* These are all 'memory' address' and have no coorilation with 'code.bin'.
```

## Credits:
- [Cracko298](https://github.com/Cracko298).
- [DarkSiders](https://github.com/LeDarksiders).
- [rairai6895](https://github.com/rai6895).
- [IPS Patch Tool (MC3DS)](https://github.com/Minecraft-3DS-Community/IPS-Patch-Tool).
- [FLIPS (Floating IPS)](https://github.com/Alcaro/Flips).

## Tutorial:
- [Minecraft New Nintendo 3DS Edition - Making Game Patches (YouTube)](https://youtu.be/NhtE1RH-RJc?si=-dzcFFO0mKgVXEyH).
