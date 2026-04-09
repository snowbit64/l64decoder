// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeBC2
// Entry Point: 00a8c28c
// Size: 704 bytes
// Signature: undefined __cdecl decodeBC2(uchar * param_1, uint param_2, uint param_3, uchar * param_4, uint param_5)


/* DXTUtil::decodeBC2(unsigned char const*, unsigned int, unsigned int, unsigned char*, unsigned
   int) */

void DXTUtil::decodeBC2(uchar *param_1,uint param_2,uint param_3,uchar *param_4,uint param_5)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar2 = param_2;
  if (3 < param_2) {
    uVar2 = 4;
  }
  uVar3 = param_3;
  if (3 < param_3) {
    uVar3 = 4;
  }
  if (param_3 != 0) {
    uVar4 = uVar2;
    if ((int)uVar2 < 2) {
      uVar4 = 1;
    }
    uVar7 = param_5 * param_2;
    uVar13 = 0;
    uVar11 = 0;
    uVar12 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar7 << 1;
    uVar5 = uVar3;
    if ((int)uVar3 < 2) {
      uVar5 = 1;
    }
    do {
      if (param_2 != 0) {
        uVar15 = 0;
        uVar14 = uVar13;
        do {
          uVar6 = *(ushort *)param_1;
          pbVar10 = param_4 + uVar14 + 3;
          *pbVar10 = (byte)(uVar6 & 0xf) | (byte)((uVar6 & 0xf) << 4);
          if (1 < (int)uVar2) {
            uVar8 = uVar6 >> 4 & 0xf;
            pbVar1 = pbVar10 + (int)param_5;
            *pbVar1 = (byte)uVar8 | (byte)(uVar8 << 4);
            if (uVar4 != 2) {
              bVar9 = (byte)(uVar6 >> 8);
              pbVar1[(int)param_5] = bVar9 & 0xf | (byte)((uVar6 >> 8 & 0xf) << 4);
              if (uVar4 != 3) {
                (pbVar1 + (int)param_5)[(int)param_5] = bVar9 >> 4 | bVar9 & 0xf0;
              }
            }
          }
          if (1 < (int)uVar3) {
            uVar6 = *(ushort *)((long)param_1 + 2);
            pbVar1 = pbVar10 + (int)uVar7;
            *pbVar1 = (byte)uVar6 & 0xf | (byte)((uVar6 & 0xf) << 4);
            if (1 < (int)uVar2) {
              uVar8 = uVar6 >> 4 & 0xf;
              pbVar1 = pbVar1 + (int)param_5;
              *pbVar1 = (byte)uVar8 | (byte)(uVar8 << 4);
              if (uVar4 != 2) {
                bVar9 = (byte)(uVar6 >> 8);
                pbVar1[(int)param_5] = bVar9 & 0xf | (byte)((uVar6 >> 8 & 0xf) << 4);
                if (uVar4 != 3) {
                  (pbVar1 + (int)param_5)[(int)param_5] = bVar9 >> 4 | bVar9 & 0xf0;
                }
              }
            }
            if (uVar5 != 2) {
              uVar6 = *(ushort *)((long)param_1 + 4);
              pbVar1 = pbVar10 + uVar12;
              *pbVar1 = (byte)uVar6 & 0xf | (byte)((uVar6 & 0xf) << 4);
              if (1 < (int)uVar2) {
                uVar8 = uVar6 >> 4 & 0xf;
                pbVar1 = pbVar1 + (int)param_5;
                *pbVar1 = (byte)uVar8 | (byte)(uVar8 << 4);
                if (uVar4 != 2) {
                  bVar9 = (byte)(uVar6 >> 8);
                  pbVar1[(int)param_5] = bVar9 & 0xf | (byte)((uVar6 >> 8 & 0xf) << 4);
                  if (uVar4 != 3) {
                    (pbVar1 + (int)param_5)[(int)param_5] = bVar9 >> 4 | bVar9 & 0xf0;
                  }
                }
              }
              if (uVar5 != 3) {
                uVar6 = *(ushort *)((long)param_1 + 6);
                pbVar10 = pbVar10 + uVar12 + (long)(int)uVar7;
                *pbVar10 = (byte)uVar6 & 0xf | (byte)((uVar6 & 0xf) << 4);
                if (1 < (int)uVar2) {
                  uVar8 = uVar6 >> 4 & 0xf;
                  pbVar10 = pbVar10 + (int)param_5;
                  *pbVar10 = (byte)uVar8 | (byte)(uVar8 << 4);
                  if (uVar4 != 2) {
                    bVar9 = (byte)(uVar6 >> 8);
                    pbVar10[(int)param_5] = bVar9 & 0xf | (byte)((uVar6 >> 8 & 0xf) << 4);
                    if (uVar4 != 3) {
                      (pbVar10 + (int)param_5)[(int)param_5] = bVar9 >> 4 | bVar9 & 0xf0;
                    }
                  }
                }
              }
            }
          }
          decodeDXTColor((uchar *)((long)param_1 + 8),uVar2,uVar3,param_5,uVar7,param_4 + uVar14);
          param_1 = (uchar *)((long)param_1 + 0x10);
          uVar15 = uVar15 + 4;
          uVar14 = uVar14 + param_5 * 4;
        } while (uVar15 < param_2);
      }
      uVar11 = uVar11 + 4;
      uVar13 = uVar13 + uVar7 * 4;
    } while (uVar11 < param_3);
  }
  return;
}


