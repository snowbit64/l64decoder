// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: flipBlocksBC5Y
// Entry Point: 00a9570c
// Size: 348 bytes
// Signature: undefined __cdecl flipBlocksBC5Y(uchar * param_1, uint param_2, bool * param_3)


/* ImageUtil::flipBlocksBC5Y(unsigned char*, unsigned int, bool&) */

void ImageUtil::flipBlocksBC5Y(uchar *param_1,uint param_2,bool *param_3)

{
  ulong *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint5 uVar4;
  uint5 uVar5;
  uint7 uVar6;
  uint7 uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  uint3 uVar16;
  uint3 uVar17;
  
  if (param_2 != 0) {
    if (param_2 - 1 == 0) {
      uVar9 = 0;
    }
    else {
      uVar13 = (ulong)(param_2 - 1) + 1;
      uVar9 = uVar13 & 0x1fffffffe;
      puVar1 = (ulong *)(param_1 + uVar9 * 0x10);
      uVar10 = uVar9;
      do {
        uVar11 = *(ulong *)param_1;
        uVar14 = *(ulong *)((long)param_1 + 8);
        uVar12 = *(ulong *)((long)param_1 + 0x10);
        uVar15 = *(ulong *)((long)param_1 + 0x18);
        uVar10 = uVar10 - 2;
        uVar16 = (uint3)((uVar14 << 0x24) >> 0x28) & 0xfff000;
        uVar17 = (uint3)((uVar15 << 0x24) >> 0x28) & 0xfff000;
        uVar6 = (uint7)(ushort)((uVar14 << 0xc) >> 0x28) & 0xfff;
        uVar7 = (uint7)(ushort)((uVar15 << 0xc) >> 0x28) & 0xfff;
        uVar2 = (ushort)((uVar11 >> 0xc) >> 0x18) & 0xfff0;
        uVar3 = (ushort)((uVar12 >> 0xc) >> 0x18) & 0xfff0;
        uVar4 = (uint5)(ushort)((uVar14 >> 0x14) >> 0x10) & 0xfff0;
        uVar5 = (uint5)(ushort)((uVar15 >> 0x14) >> 0x10) & 0xfff0;
        *(ulong *)param_1 =
             CONCAT17((char)((uVar11 << 0x24) >> 0x38),
                      CONCAT16((byte)((uVar11 << 0x24) >> 0x30) & 0xf0 |
                               (byte)((uVar11 << 0xc) >> 0x30) & 0xf,
                               CONCAT15((char)((uVar11 << 0xc) >> 0x28),
                                        CONCAT14((char)(uVar2 >> 8),
                                                 CONCAT13((byte)(uVar11 >> 0x3c) | (byte)uVar2,
                                                          CONCAT12((char)((uVar11 >> 0x24) >> 0x10),
                                                                   (short)uVar11))))));
        *(ulong *)((long)param_1 + 8) =
             CONCAT17((char)(uVar16 >> 0x10),
                      CONCAT16((byte)(uVar16 >> 8) | (byte)(uVar6 >> 8),
                               CONCAT15((char)uVar6,
                                        CONCAT14((char)(uVar4 >> 8),
                                                 CONCAT13((byte)(uVar14 >> 0x3c) | (byte)uVar4,
                                                          CONCAT12((char)((uVar14 >> 0x24) >> 0x10),
                                                                   (short)uVar14))))));
        *(ulong *)((long)param_1 + 0x10) =
             CONCAT17((char)((uVar12 << 0x24) >> 0x38),
                      CONCAT16((byte)((uVar12 << 0x24) >> 0x30) & 0xf0 |
                               (byte)((uVar12 << 0xc) >> 0x30) & 0xf,
                               CONCAT15((char)((uVar12 << 0xc) >> 0x28),
                                        CONCAT14((char)(uVar3 >> 8),
                                                 CONCAT13((byte)(uVar12 >> 0x3c) | (byte)uVar3,
                                                          CONCAT12((char)((uVar12 >> 0x24) >> 0x10),
                                                                   (short)uVar12))))));
        *(ulong *)((long)param_1 + 0x18) =
             CONCAT17((char)(uVar17 >> 0x10),
                      CONCAT16((byte)(uVar17 >> 8) | (byte)(uVar7 >> 8),
                               CONCAT15((char)uVar7,
                                        CONCAT14((char)(uVar5 >> 8),
                                                 CONCAT13((byte)(uVar15 >> 0x3c) | (byte)uVar5,
                                                          CONCAT12((char)((uVar15 >> 0x24) >> 0x10),
                                                                   (short)uVar15))))));
        param_1 = (uchar *)((long)param_1 + 0x20);
      } while (uVar10 != 0);
      param_1 = (uchar *)puVar1;
      if (uVar13 == uVar9) {
        return;
      }
    }
    iVar8 = param_2 - (int)uVar9;
    do {
      uVar13 = *(ulong *)((long)param_1 + 8);
      uVar9 = *(ulong *)param_1;
      iVar8 = iVar8 + -1;
      uVar4 = (uint5)(ushort)((uVar9 >> 0x14) >> 0x10) & 0xfff0;
      uVar5 = (uint5)(ushort)((uVar13 >> 0x14) >> 0x10) & 0xfff0;
      *(ulong *)((long)param_1 + 8) =
           CONCAT17((char)((uVar13 << 0x24) >> 0x38),
                    CONCAT16((byte)((uVar13 << 0x24) >> 0x30) & 0xf0 |
                             (byte)((uVar13 << 0xc) >> 0x30) & 0xf,
                             CONCAT15((char)((uVar13 << 0xc) >> 0x28),
                                      CONCAT14((char)(uVar5 >> 8),
                                               CONCAT13((byte)(uVar13 >> 0x3c) | (byte)uVar5,
                                                        CONCAT12((char)((uVar13 >> 0x2c) >> 8),
                                                                 (short)uVar13))))));
      *(ulong *)param_1 =
           CONCAT17((char)((uVar9 << 0x24) >> 0x38),
                    CONCAT16((byte)((uVar9 << 0x24) >> 0x30) & 0xf0 |
                             (byte)((uVar9 << 0xc) >> 0x30) & 0xf,
                             CONCAT15((char)((uVar9 << 0xc) >> 0x28),
                                      CONCAT14((char)(uVar4 >> 8),
                                               CONCAT13((byte)(uVar9 >> 0x3c) | (byte)uVar4,
                                                        CONCAT12((char)((uVar9 >> 0x2c) >> 8),
                                                                 (short)uVar9))))));
      param_1 = (uchar *)((long)param_1 + 0x10);
    } while (iVar8 != 0);
  }
  return;
}


