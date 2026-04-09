// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_do_invert
// Entry Point: 00dc3fe0
// Size: 404 bytes
// Signature: undefined png_do_invert(void)


void png_do_invert(long param_1,byte *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (*(char *)(param_1 + 0x10) == '\x04') {
    if (*(char *)(param_1 + 0x11) == '\x10') {
      uVar1 = *(ulong *)(param_1 + 8);
      if (uVar1 == 0) {
        return;
      }
      uVar4 = 0;
      do {
        pbVar6 = param_2 + uVar4;
        uVar4 = uVar4 + 4;
        *pbVar6 = ~*pbVar6;
        pbVar6[1] = ~pbVar6[1];
      } while (uVar4 < uVar1);
      return;
    }
    if (*(char *)(param_1 + 0x11) != '\b') {
      return;
    }
    uVar1 = *(ulong *)(param_1 + 8);
    if (uVar1 == 0) {
      return;
    }
    if (uVar1 - 1 < 2) {
      uVar3 = 0;
      pbVar6 = param_2;
    }
    else {
      uVar4 = (uVar1 - 1 >> 1) + 1;
      uVar7 = uVar4 & 0xfffffffffffffffe;
      uVar3 = uVar7 * 2;
      pbVar6 = param_2 + uVar3;
      pbVar8 = param_2 + 2;
      uVar9 = uVar7;
      do {
        uVar9 = uVar9 - 2;
        pbVar8[-2] = ~pbVar8[-2];
        *pbVar8 = ~*pbVar8;
        pbVar8 = pbVar8 + 4;
      } while (uVar9 != 0);
      if (uVar4 == uVar7) {
        return;
      }
    }
    do {
      uVar3 = uVar3 + 2;
      *pbVar6 = ~*pbVar6;
      pbVar6 = pbVar6 + 2;
    } while (uVar3 < uVar1);
    return;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    return;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 == 0) {
    return;
  }
  if (uVar1 < 8) {
    uVar3 = 0;
    pbVar6 = param_2;
  }
  else {
    if (uVar1 < 0x20) {
      uVar4 = 0;
    }
    else {
      uVar3 = uVar1 & 0xffffffffffffffe0;
      puVar5 = (undefined8 *)(param_2 + 0x10);
      uVar4 = uVar3;
      do {
        uVar11 = puVar5[-1];
        uVar10 = puVar5[-2];
        uVar13 = puVar5[1];
        uVar12 = *puVar5;
        uVar4 = uVar4 - 0x20;
        puVar5[-1] = CONCAT17(~(byte)((ulong)uVar11 >> 0x38),
                              CONCAT16(~(byte)((ulong)uVar11 >> 0x30),
                                       CONCAT15(~(byte)((ulong)uVar11 >> 0x28),
                                                CONCAT14(~(byte)((ulong)uVar11 >> 0x20),
                                                         CONCAT13(~(byte)((ulong)uVar11 >> 0x18),
                                                                  CONCAT12(~(byte)((ulong)uVar11 >>
                                                                                  0x10),
                                                                           CONCAT11(~(byte)((ulong)
                                                  uVar11 >> 8),~(byte)uVar11)))))));
        puVar5[-2] = CONCAT17(~(byte)((ulong)uVar10 >> 0x38),
                              CONCAT16(~(byte)((ulong)uVar10 >> 0x30),
                                       CONCAT15(~(byte)((ulong)uVar10 >> 0x28),
                                                CONCAT14(~(byte)((ulong)uVar10 >> 0x20),
                                                         CONCAT13(~(byte)((ulong)uVar10 >> 0x18),
                                                                  CONCAT12(~(byte)((ulong)uVar10 >>
                                                                                  0x10),
                                                                           CONCAT11(~(byte)((ulong)
                                                  uVar10 >> 8),~(byte)uVar10)))))));
        puVar5[1] = CONCAT17(~(byte)((ulong)uVar13 >> 0x38),
                             CONCAT16(~(byte)((ulong)uVar13 >> 0x30),
                                      CONCAT15(~(byte)((ulong)uVar13 >> 0x28),
                                               CONCAT14(~(byte)((ulong)uVar13 >> 0x20),
                                                        CONCAT13(~(byte)((ulong)uVar13 >> 0x18),
                                                                 CONCAT12(~(byte)((ulong)uVar13 >>
                                                                                 0x10),
                                                                          CONCAT11(~(byte)((ulong)
                                                  uVar13 >> 8),~(byte)uVar13)))))));
        *puVar5 = CONCAT17(~(byte)((ulong)uVar12 >> 0x38),
                           CONCAT16(~(byte)((ulong)uVar12 >> 0x30),
                                    CONCAT15(~(byte)((ulong)uVar12 >> 0x28),
                                             CONCAT14(~(byte)((ulong)uVar12 >> 0x20),
                                                      CONCAT13(~(byte)((ulong)uVar12 >> 0x18),
                                                               CONCAT12(~(byte)((ulong)uVar12 >>
                                                                               0x10),
                                                                        CONCAT11(~(byte)((ulong)
                                                  uVar12 >> 8),~(byte)uVar12)))))));
        puVar5 = puVar5 + 4;
      } while (uVar4 != 0);
      if (uVar1 == uVar3) {
        return;
      }
      uVar4 = uVar3;
      if ((uVar1 & 0x18) == 0) {
        pbVar6 = param_2 + uVar3;
        goto LAB_00dc4158;
      }
    }
    uVar3 = uVar1 & 0xfffffffffffffff8;
    pbVar6 = param_2 + uVar3;
    lVar2 = uVar4 - uVar3;
    puVar5 = (undefined8 *)(param_2 + uVar4);
    do {
      uVar10 = *puVar5;
      lVar2 = lVar2 + 8;
      *puVar5 = CONCAT17(~(byte)((ulong)uVar10 >> 0x38),
                         CONCAT16(~(byte)((ulong)uVar10 >> 0x30),
                                  CONCAT15(~(byte)((ulong)uVar10 >> 0x28),
                                           CONCAT14(~(byte)((ulong)uVar10 >> 0x20),
                                                    CONCAT13(~(byte)((ulong)uVar10 >> 0x18),
                                                             CONCAT12(~(byte)((ulong)uVar10 >> 0x10)
                                                                      ,CONCAT11(~(byte)((ulong)
                                                  uVar10 >> 8),~(byte)uVar10)))))));
      puVar5 = puVar5 + 1;
    } while (lVar2 != 0);
    if (uVar1 == uVar3) {
      return;
    }
  }
LAB_00dc4158:
  lVar2 = uVar1 - uVar3;
  do {
    lVar2 = lVar2 + -1;
    *pbVar6 = ~*pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (lVar2 != 0);
  return;
}


