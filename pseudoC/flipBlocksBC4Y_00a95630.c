// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: flipBlocksBC4Y
// Entry Point: 00a95630
// Size: 220 bytes
// Signature: undefined __cdecl flipBlocksBC4Y(uchar * param_1, uint param_2, bool * param_3)


/* ImageUtil::flipBlocksBC4Y(unsigned char*, unsigned int, bool&) */

void ImageUtil::flipBlocksBC4Y(uchar *param_1,uint param_2,bool *param_3)

{
  ulong uVar1;
  uint5 uVar2;
  uint5 uVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 != 0) {
    if (param_2 - 1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar1 = (ulong)(param_2 - 1) + 1;
      uVar6 = uVar1 & 0x1fffffffe;
      puVar4 = (ulong *)param_1;
      uVar7 = uVar6;
      do {
        uVar9 = puVar4[1];
        uVar8 = *puVar4;
        uVar7 = uVar7 - 2;
        uVar2 = (uint5)(ushort)((uVar8 >> 0x14) >> 0x10) & 0xfff0;
        uVar3 = (uint5)(ushort)((uVar9 >> 0x14) >> 0x10) & 0xfff0;
        puVar4[1] = CONCAT17((char)((uVar9 << 0x24) >> 0x38),
                             CONCAT16((byte)((uVar9 << 0x24) >> 0x30) & 0xf0 |
                                      (byte)((uVar9 << 0xc) >> 0x30) & 0xf,
                                      CONCAT15((char)((uVar9 << 0xc) >> 0x28),
                                               CONCAT14((char)(uVar3 >> 8),
                                                        CONCAT13((byte)(uVar9 >> 0x3c) | (byte)uVar3
                                                                 ,CONCAT12((char)((uVar9 >> 0x2c) >>
                                                                                 8),(short)uVar9))))
                                     ));
        *puVar4 = CONCAT17((char)((uVar8 << 0x24) >> 0x38),
                           CONCAT16((byte)((uVar8 << 0x24) >> 0x30) & 0xf0 |
                                    (byte)((uVar8 << 0xc) >> 0x30) & 0xf,
                                    CONCAT15((char)((uVar8 << 0xc) >> 0x28),
                                             CONCAT14((char)(uVar2 >> 8),
                                                      CONCAT13((byte)(uVar8 >> 0x3c) | (byte)uVar2,
                                                               CONCAT12((char)((uVar8 >> 0x2c) >> 8)
                                                                        ,(short)uVar8))))));
        puVar4 = puVar4 + 2;
      } while (uVar7 != 0);
      param_1 = param_1 + uVar6 * 8;
      if (uVar1 == uVar6) {
        return;
      }
    }
    iVar5 = param_2 - (int)uVar6;
    do {
      uVar6 = *(ulong *)param_1;
      iVar5 = iVar5 + -1;
      *(ulong *)param_1 =
           (uVar6 >> 0x10) << 0x34 |
           uVar6 & 0xffff | uVar6 >> 0x24 & 0xfff0000 | (uVar6 >> 0x1c & 0xfff) << 0x28 |
           uVar6 >> 0xc & 0xfff0000000;
      param_1 = (uchar *)((long)param_1 + 8);
    } while (iVar5 != 0);
  }
  return;
}


