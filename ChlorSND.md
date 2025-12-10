# About ChlorSND

ChlorSND will be a FPGA-based sound card for the Commander X16.

Specifications are preliminary until I can get equipment, see the code in
`src/extern/chlorsnd` for more information.

## Envelope Generator Memory Map

### `0000h`: Control Byte
- Bit 0: Reset Position (bit clears)
- Bit 1: Sustain (bit retains)
- Bit 2: UNUSED
- Bit 3: UNUSED
- Bit 4: UNUSED
- Bit 5: UNUSED
- Bit 6: UNUSED
- Bit 7: UNUSED
### `0001h`: Amplitude Multiplier
### `0002h`: Hold Point
### `0003h`: Clock Skip Per Position
### `0080h` - `00FFh`: Amplitude Table Byte Entry

## Channel Memory Map

### `0000h`: Control Byte
- Bit 0: Reset Accumulator Current (bit clears)
- Bit 1: Reset Accumulator Maximum (bit clears)
- Bit 2: Reset Loop Start (bit clears)
- Bit 3: Reset Loop End (bit clears)
- Bit 4: UNUSED (bit clears)
- Bit 5: UNUSED (bit clears)
- Bit 6: UNUSED (bit clears)
- Bit 7: UNUSED (bit clears)
### `0001h`: Unused
### `0002h`: Left Volume (can be negative)
### `0003h`: Right Volume (can be negative)
### `0004h`: Accumulator Maximum
### `0006h`: Map Amplitude To Envelope Generator
### `0007h`: Map Filter 0 Coefficient *A1* To Envelope Generator
### `0008h`: Map Filter 0 Coefficient *A2* To Envelope Generator
### `0009h`: Map Filter 0 Coefficient *B0* To Envelope Generator
### `000Ah`: Map Filter 0 Coefficient *B1* To Envelope Generator
### `000Bh`: Map Filter 0 Coefficient *B2* To Envelope Generator
### `000Ch`: Map Amplitude To Envelope Generator
### `000Dh`: Map Amplitude To Envelope Generator
### `000Eh`: Map Amplitude To Envelope Generator
### `000Fh`: Map Amplitude To Envelope Generator
### `0010h`: Map Amplitude To Envelope Generator

## Root Memory Map (accesible by I/O directly)

Reading write-only registers returns `0xFF`.

### `9F60h`: Control Register (Read/write)
- Bit 0: Reset Envelope Generator Mask Word (bit clears)
- Bit 1: Reset Write Pointer Word (bit clears)
- Bit 2: Reset Write Data Word (bit clears)
- Bit 3: UNUSED (bit clears)
- Bit 4: Write Word To Selected Envelope Generator(s) (bit clears)
- Bit 5: Write Word To Selected Channel(s) (bit clears)
- Bit 6: UNUSED (bit clears)
- Bit 7: Write Byte To Sample RAM (bit clears)
### `9F61h`: Channel Select Mask (Write-only)
### `9F62h`: Envelope Generator Select Mask Lo Byte (Write-only)
### `9F63h`: Envelope Generator Select Mask Hi Byte (Write-only)
### `9F64h`: Write Pointer Lo Byte (Write-only)
### `9F65h`: Write Pointer Hi Byte (Write-only)
### `9F66h`: Write Data Lo Byte (Write-only)
### `9F67h`: Write Data Hi Byte (Write-only)
### `9F68h`: Channel 0 Control Register (Read-only)
### `9F69h`: Channel 1 Control Register (Read-only)
### `9F6Ah`: Channel 2 Control Register (Read-only)
### `9F6Bh`: Channel 3 Control Register (Read-only)
### `9F6Ch`: Channel 4 Control Register (Read-only)
### `9F6Dh`: Channel 5 Control Register (Read-only)
### `9F6Eh`: Channel 6 Control Register (Read-only)
### `9F6Fh`: Channel 7 Control Register (Read-only)
### `9F70h`: Envelope Generator 0 Control Register (Read-only)
### `9F71h`: Envelope Generator 1 Control Register (Read-only)
### `9F72h`: Envelope Generator 2 Control Register (Read-only)
### `9F73h`: Envelope Generator 3 Control Register (Read-only)
### `9F74h`: Envelope Generator 4 Control Register (Read-only)
### `9F75h`: Envelope Generator 5 Control Register (Read-only)
### `9F76h`: Envelope Generator 6 Control Register (Read-only)
### `9F77h`: Envelope Generator 7 Control Register (Read-only)
### `9F78h`: Envelope Generator 8 Control Register (Read-only)
### `9F79h`: Envelope Generator 9 Control Register (Read-only)
### `9F7Ah`: Envelope Generator 10 Control Register (Read-only)
### `9F7Bh`: Envelope Generator 11 Control Register (Read-only)
### `9F7Ch`: Envelope Generator 12 Control Register (Read-only)
### `9F7Dh`: Envelope Generator 13 Control Register (Read-only)
### `9F7Eh`: Envelope Generator 14 Control Register (Read-only)
### `9F7Fh`: Envelope Generator 15 Control Register (Read-only)