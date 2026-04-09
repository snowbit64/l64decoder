// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_scale_copy_vector16
// Entry Point: 00e8d4ec
// Size: 204 bytes
// Signature: undefined silk_scale_copy_vector16(void)


void silk_scale_copy_vector16(ulong param_1,ulong param_2,int param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  short *psVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (0 < (int)param_4) {
    uVar1 = (ulong)param_4;
    if ((param_4 < 0x10) || ((param_1 < param_2 + uVar1 * 2 && (param_2 < param_1 + uVar1 * 2)))) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar1 & 0xfffffff0;
      puVar4 = (undefined8 *)(param_2 + 0x10);
      puVar6 = (undefined8 *)(param_1 + 0x10);
      uVar8 = uVar3;
      do {
        uVar10 = puVar4[-1];
        uVar9 = puVar4[-2];
        uVar12 = puVar4[1];
        uVar11 = *puVar4;
        puVar4 = puVar4 + 4;
        uVar8 = uVar8 - 0x10;
        puVar6[-1] = CONCAT26((short)((uint)(param_3 * (short)((ulong)uVar10 >> 0x30)) >> 0x10),
                              CONCAT24((short)((uint)(param_3 * (short)((ulong)uVar10 >> 0x20)) >>
                                              0x10),
                                       CONCAT22((short)((uint)(param_3 *
                                                              (short)((ulong)uVar10 >> 0x10)) >>
                                                       0x10),
                                                (short)((uint)(param_3 * (short)uVar10) >> 0x10))));
        puVar6[-2] = CONCAT26((short)((uint)(param_3 * (short)((ulong)uVar9 >> 0x30)) >> 0x10),
                              CONCAT24((short)((uint)(param_3 * (short)((ulong)uVar9 >> 0x20)) >>
                                              0x10),
                                       CONCAT22((short)((uint)(param_3 *
                                                              (short)((ulong)uVar9 >> 0x10)) >> 0x10
                                                       ),(short)((uint)(param_3 * (short)uVar9) >>
                                                                0x10))));
        puVar6[1] = CONCAT26((short)((uint)(param_3 * (short)((ulong)uVar12 >> 0x30)) >> 0x10),
                             CONCAT24((short)((uint)(param_3 * (short)((ulong)uVar12 >> 0x20)) >>
                                             0x10),
                                      CONCAT22((short)((uint)(param_3 *
                                                             (short)((ulong)uVar12 >> 0x10)) >> 0x10
                                                      ),(short)((uint)(param_3 * (short)uVar12) >>
                                                               0x10))));
        *puVar6 = CONCAT26((short)((uint)(param_3 * (short)((ulong)uVar11 >> 0x30)) >> 0x10),
                           CONCAT24((short)((uint)(param_3 * (short)((ulong)uVar11 >> 0x20)) >> 0x10
                                           ),CONCAT22((short)((uint)(param_3 *
                                                                    (short)((ulong)uVar11 >> 0x10))
                                                             >> 0x10),
                                                      (short)((uint)(param_3 * (short)uVar11) >>
                                                             0x10))));
        puVar6 = puVar6 + 4;
      } while (uVar8 != 0);
      if (uVar3 == uVar1) {
        return;
      }
    }
    lVar2 = uVar1 - uVar3;
    puVar5 = (undefined2 *)(param_1 + uVar3 * 2);
    psVar7 = (short *)(param_2 + uVar3 * 2);
    do {
      lVar2 = lVar2 + -1;
      *puVar5 = (short)((uint)(*psVar7 * param_3) >> 0x10);
      puVar5 = puVar5 + 1;
      psVar7 = psVar7 + 1;
    } while (lVar2 != 0);
  }
  return;
}


