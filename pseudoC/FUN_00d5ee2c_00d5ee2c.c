// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d5ee2c
// Entry Point: 00d5ee2c
// Size: 588 bytes
// Signature: undefined FUN_00d5ee2c(void)


void FUN_00d5ee2c(long param_1,long param_2,long param_3,long param_4,uint param_5,int param_6,
                 uint param_7)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_7 != 0) {
    puVar3 = *(undefined8 **)(param_2 + 0x58);
    uVar5 = (ulong)param_7;
    puVar6 = (undefined8 *)(param_4 + 0x40);
    pcVar4 = *(code **)(*(long *)(param_1 + 0x218) + (long)*(int *)(param_2 + 4) * 8 + 0xa8);
    do {
      (*pcVar4)(&local_168,param_3 + (ulong)param_5 * 8,param_6);
      uVar7 = puVar3[1];
      uVar5 = uVar5 - 1;
      uVar2 = (ulong)CONCAT24((short)(int)((float)((ulong)local_168 >> 0x20) *
                                           (float)((ulong)*puVar3 >> 0x20) + 16384.5),
                              (int)((float)local_168 * (float)*puVar3 + 16384.5)) &
              0xffffffff0000ffff;
      puVar6[-7] = CONCAT26((short)(int)((float)((ulong)uStack_150 >> 0x20) *
                                         (float)((ulong)puVar3[3] >> 0x20) + 16384.5) + -0x4000,
                            CONCAT24((short)(int)((float)uStack_150 * (float)puVar3[3] + 16384.5) +
                                     -0x4000,CONCAT22((short)(int)((float)((ulong)local_158 >> 0x20)
                                                                   * (float)((ulong)puVar3[2] >>
                                                                            0x20) + 16384.5) +
                                                      -0x4000,(short)(int)((float)local_158 *
                                                                           (float)puVar3[2] +
                                                                          16384.5) + -0x4000)));
      puVar6[-8] = CONCAT26((short)(int)((float)((ulong)uStack_160 >> 0x20) *
                                         (float)((ulong)uVar7 >> 0x20) + 16384.5) + -0x4000,
                            CONCAT24((short)(int)((float)uStack_160 * (float)uVar7 + 16384.5) +
                                     -0x4000,CONCAT22((short)(uVar2 >> 0x20) + -0x4000,
                                                      (short)uVar2 + -0x4000)));
      uVar7 = puVar3[5];
      uVar2 = (ulong)CONCAT24((short)(int)((float)((ulong)local_148 >> 0x20) *
                                           (float)((ulong)puVar3[4] >> 0x20) + 16384.5),
                              (int)((float)local_148 * (float)puVar3[4] + 16384.5)) &
              0xffffffff0000ffff;
      puVar6[-5] = CONCAT26((short)(int)((float)((ulong)uStack_130 >> 0x20) *
                                         (float)((ulong)puVar3[7] >> 0x20) + 16384.5) + -0x4000,
                            CONCAT24((short)(int)((float)uStack_130 * (float)puVar3[7] + 16384.5) +
                                     -0x4000,CONCAT22((short)(int)((float)((ulong)local_138 >> 0x20)
                                                                   * (float)((ulong)puVar3[6] >>
                                                                            0x20) + 16384.5) +
                                                      -0x4000,(short)(int)((float)local_138 *
                                                                           (float)puVar3[6] +
                                                                          16384.5) + -0x4000)));
      puVar6[-6] = CONCAT26((short)(int)((float)((ulong)uStack_140 >> 0x20) *
                                         (float)((ulong)uVar7 >> 0x20) + 16384.5) + -0x4000,
                            CONCAT24((short)(int)((float)uStack_140 * (float)uVar7 + 16384.5) +
                                     -0x4000,CONCAT22((short)(uVar2 >> 0x20) + -0x4000,
                                                      (short)uVar2 + -0x4000)));
      uVar7 = puVar3[9];
      uVar2 = (ulong)CONCAT24((short)(int)((float)((ulong)local_128 >> 0x20) *
                                           (float)((ulong)puVar3[8] >> 0x20) + 16384.5),
                              (int)((float)local_128 * (float)puVar3[8] + 16384.5)) &
              0xffffffff0000ffff;
      puVar6[-3] = CONCAT26((short)(int)((float)((ulong)uStack_110 >> 0x20) *
                                         (float)((ulong)puVar3[0xb] >> 0x20) + 16384.5) + -0x4000,
                            CONCAT24((short)(int)((float)uStack_110 * (float)puVar3[0xb] + 16384.5)
                                     + -0x4000,
                                     CONCAT22((short)(int)((float)((ulong)local_118 >> 0x20) *
                                                           (float)((ulong)puVar3[10] >> 0x20) +
                                                          16384.5) + -0x4000,
                                              (short)(int)((float)local_118 * (float)puVar3[10] +
                                                          16384.5) + -0x4000)));
      puVar6[-4] = CONCAT26((short)(int)((float)((ulong)uStack_120 >> 0x20) *
                                         (float)((ulong)uVar7 >> 0x20) + 16384.5) + -0x4000,
                            CONCAT24((short)(int)((float)uStack_120 * (float)uVar7 + 16384.5) +
                                     -0x4000,CONCAT22((short)(uVar2 >> 0x20) + -0x4000,
                                                      (short)uVar2 + -0x4000)));
      uVar7 = puVar3[0xd];
      uVar2 = (ulong)CONCAT24((short)(int)((float)((ulong)local_108 >> 0x20) *
                                           (float)((ulong)puVar3[0xc] >> 0x20) + 16384.5),
                              (int)((float)local_108 * (float)puVar3[0xc] + 16384.5)) &
              0xffffffff0000ffff;
      puVar6[-1] = CONCAT26((short)(int)((float)((ulong)uStack_f0 >> 0x20) *
                                         (float)((ulong)puVar3[0xf] >> 0x20) + 16384.5) + -0x4000,
                            CONCAT24((short)(int)((float)uStack_f0 * (float)puVar3[0xf] + 16384.5) +
                                     -0x4000,CONCAT22((short)(int)((float)((ulong)local_f8 >> 0x20)
                                                                   * (float)((ulong)puVar3[0xe] >>
                                                                            0x20) + 16384.5) +
                                                      -0x4000,(short)(int)((float)local_f8 *
                                                                           (float)puVar3[0xe] +
                                                                          16384.5) + -0x4000)));
      puVar6[-2] = CONCAT26((short)(int)((float)((ulong)uStack_100 >> 0x20) *
                                         (float)((ulong)uVar7 >> 0x20) + 16384.5) + -0x4000,
                            CONCAT24((short)(int)((float)uStack_100 * (float)uVar7 + 16384.5) +
                                     -0x4000,CONCAT22((short)(uVar2 >> 0x20) + -0x4000,
                                                      (short)uVar2 + -0x4000)));
      uVar7 = puVar3[0x11];
      uVar2 = (ulong)CONCAT24((short)(int)((float)((ulong)local_e8 >> 0x20) *
                                           (float)((ulong)puVar3[0x10] >> 0x20) + 16384.5),
                              (int)((float)local_e8 * (float)puVar3[0x10] + 16384.5)) &
              0xffffffff0000ffff;
      puVar6[1] = CONCAT26((short)(int)((float)((ulong)uStack_d0 >> 0x20) *
                                        (float)((ulong)puVar3[0x13] >> 0x20) + 16384.5) + -0x4000,
                           CONCAT24((short)(int)((float)uStack_d0 * (float)puVar3[0x13] + 16384.5) +
                                    -0x4000,CONCAT22((short)(int)((float)((ulong)local_d8 >> 0x20) *
                                                                  (float)((ulong)puVar3[0x12] >>
                                                                         0x20) + 16384.5) + -0x4000,
                                                     (short)(int)((float)local_d8 *
                                                                  (float)puVar3[0x12] + 16384.5) +
                                                     -0x4000)));
      *puVar6 = CONCAT26((short)(int)((float)((ulong)uStack_e0 >> 0x20) *
                                      (float)((ulong)uVar7 >> 0x20) + 16384.5) + -0x4000,
                         CONCAT24((short)(int)((float)uStack_e0 * (float)uVar7 + 16384.5) + -0x4000,
                                  CONCAT22((short)(uVar2 >> 0x20) + -0x4000,(short)uVar2 + -0x4000))
                        );
      uVar7 = puVar3[0x15];
      uVar2 = (ulong)CONCAT24((short)(int)((float)((ulong)local_c8 >> 0x20) *
                                           (float)((ulong)puVar3[0x14] >> 0x20) + 16384.5),
                              (int)((float)local_c8 * (float)puVar3[0x14] + 16384.5)) &
              0xffffffff0000ffff;
      puVar6[3] = CONCAT26((short)(int)((float)((ulong)uStack_b0 >> 0x20) *
                                        (float)((ulong)puVar3[0x17] >> 0x20) + 16384.5) + -0x4000,
                           CONCAT24((short)(int)((float)uStack_b0 * (float)puVar3[0x17] + 16384.5) +
                                    -0x4000,CONCAT22((short)(int)((float)((ulong)local_b8 >> 0x20) *
                                                                  (float)((ulong)puVar3[0x16] >>
                                                                         0x20) + 16384.5) + -0x4000,
                                                     (short)(int)((float)local_b8 *
                                                                  (float)puVar3[0x16] + 16384.5) +
                                                     -0x4000)));
      puVar6[2] = CONCAT26((short)(int)((float)((ulong)uStack_c0 >> 0x20) *
                                        (float)((ulong)uVar7 >> 0x20) + 16384.5) + -0x4000,
                           CONCAT24((short)(int)((float)uStack_c0 * (float)uVar7 + 16384.5) +
                                    -0x4000,CONCAT22((short)(uVar2 >> 0x20) + -0x4000,
                                                     (short)uVar2 + -0x4000)));
      uVar7 = puVar3[0x19];
      uVar2 = (ulong)CONCAT24((short)(int)((float)((ulong)local_a8 >> 0x20) *
                                           (float)((ulong)puVar3[0x18] >> 0x20) + 16384.5),
                              (int)((float)local_a8 * (float)puVar3[0x18] + 16384.5)) &
              0xffffffff0000ffff;
      puVar6[5] = CONCAT26((short)(int)((float)((ulong)uStack_90 >> 0x20) *
                                        (float)((ulong)puVar3[0x1b] >> 0x20) + 16384.5) + -0x4000,
                           CONCAT24((short)(int)((float)uStack_90 * (float)puVar3[0x1b] + 16384.5) +
                                    -0x4000,CONCAT22((short)(int)((float)((ulong)local_98 >> 0x20) *
                                                                  (float)((ulong)puVar3[0x1a] >>
                                                                         0x20) + 16384.5) + -0x4000,
                                                     (short)(int)((float)local_98 *
                                                                  (float)puVar3[0x1a] + 16384.5) +
                                                     -0x4000)));
      puVar6[4] = CONCAT26((short)(int)((float)((ulong)uStack_a0 >> 0x20) *
                                        (float)((ulong)uVar7 >> 0x20) + 16384.5) + -0x4000,
                           CONCAT24((short)(int)((float)uStack_a0 * (float)uVar7 + 16384.5) +
                                    -0x4000,CONCAT22((short)(uVar2 >> 0x20) + -0x4000,
                                                     (short)uVar2 + -0x4000)));
      uVar7 = puVar3[0x1d];
      uVar2 = (ulong)CONCAT24((short)(int)((float)((ulong)local_88 >> 0x20) *
                                           (float)((ulong)puVar3[0x1c] >> 0x20) + 16384.5),
                              (int)((float)local_88 * (float)puVar3[0x1c] + 16384.5)) &
              0xffffffff0000ffff;
      puVar6[7] = CONCAT26((short)(int)((float)((ulong)uStack_70 >> 0x20) *
                                        (float)((ulong)puVar3[0x1f] >> 0x20) + 16384.5) + -0x4000,
                           CONCAT24((short)(int)((float)uStack_70 * (float)puVar3[0x1f] + 16384.5) +
                                    -0x4000,CONCAT22((short)(int)((float)((ulong)local_78 >> 0x20) *
                                                                  (float)((ulong)puVar3[0x1e] >>
                                                                         0x20) + 16384.5) + -0x4000,
                                                     (short)(int)((float)local_78 *
                                                                  (float)puVar3[0x1e] + 16384.5) +
                                                     -0x4000)));
      puVar6[6] = CONCAT26((short)(int)((float)((ulong)uStack_80 >> 0x20) *
                                        (float)((ulong)uVar7 >> 0x20) + 16384.5) + -0x4000,
                           CONCAT24((short)(int)((float)uStack_80 * (float)uVar7 + 16384.5) +
                                    -0x4000,CONCAT22((short)(uVar2 >> 0x20) + -0x4000,
                                                     (short)uVar2 + -0x4000)));
      puVar6 = puVar6 + 0x10;
      param_6 = *(int *)(param_2 + 0x24) + param_6;
    } while (uVar5 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


