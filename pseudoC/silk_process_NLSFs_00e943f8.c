// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_process_NLSFs
// Entry Point: 00e943f8
// Size: 600 bytes
// Signature: undefined silk_process_NLSFs(void)


void silk_process_NLSFs(long param_1,void *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  short *psVar11;
  undefined8 *puVar12;
  short *psVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 local_b8 [4];
  undefined8 local_98 [4];
  undefined auStack_78 [32];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  iVar1 = (int)((ulong)((long)*(short *)(param_1 + 0x11b4) * -0x41892) >> 0x10) + 0xc4a;
  iVar2 = iVar1 >> 1;
  if (*(int *)(param_1 + 0x11e4) != 2) {
    iVar2 = 0;
  }
  silk_NLSF_VQ_weights_laroia(local_98,param_3,*(undefined4 *)(param_1 + 0x1220));
  bVar6 = false;
  if (*(int *)(param_1 + 0x1218) != 1) goto LAB_00e9459c;
  if ('\x03' < *(char *)(param_1 + 0x12af)) {
    bVar6 = false;
    goto LAB_00e9459c;
  }
  silk_interpolate(auStack_78,param_4,param_3,(long)*(char *)(param_1 + 0x12af),
                   *(undefined4 *)(param_1 + 0x1220));
  silk_NLSF_VQ_weights_laroia(local_b8,auStack_78,*(undefined4 *)(param_1 + 0x1220));
  uVar3 = *(uint *)(param_1 + 0x1220);
  uVar7 = (ulong)uVar3;
  if (0 < (int)uVar3) {
    iVar4 = (int)(short)((ushort)*(byte *)(param_1 + 0x12af) * (ushort)*(byte *)(param_1 + 0x12af) *
                        0x800);
    if (uVar3 < 0x10) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar7 & 0xfffffff0;
      puVar10 = local_98 + 2;
      puVar12 = local_b8 + 2;
      uVar14 = uVar9;
      do {
        uVar17 = puVar12[-1];
        uVar15 = puVar12[-2];
        uVar20 = puVar12[1];
        uVar19 = *puVar12;
        puVar12 = puVar12 + 4;
        uVar14 = uVar14 - 0x10;
        uVar22 = puVar10[-1];
        uVar21 = puVar10[-2];
        uVar18 = puVar10[1];
        uVar16 = *puVar10;
        puVar10[-1] = CONCAT26((short)((uint)(iVar4 * (short)((ulong)uVar17 >> 0x30)) >> 0x10) +
                               (short)((long)uVar22 >> 0x31),
                               CONCAT24((short)((uint)(iVar4 * (short)((ulong)uVar17 >> 0x20)) >>
                                               0x10) + ((short)((ulong)uVar22 >> 0x20) >> 1),
                                        CONCAT22((short)((uint)(iVar4 * (short)((ulong)uVar17 >>
                                                                               0x10)) >> 0x10) +
                                                 ((short)((ulong)uVar22 >> 0x10) >> 1),
                                                 (short)((uint)(iVar4 * (short)uVar17) >> 0x10) +
                                                 ((short)uVar22 >> 1))));
        puVar10[-2] = CONCAT26((short)((uint)(iVar4 * (short)((ulong)uVar15 >> 0x30)) >> 0x10) +
                               (short)((long)uVar21 >> 0x31),
                               CONCAT24((short)((uint)(iVar4 * (short)((ulong)uVar15 >> 0x20)) >>
                                               0x10) + ((short)((ulong)uVar21 >> 0x20) >> 1),
                                        CONCAT22((short)((uint)(iVar4 * (short)((ulong)uVar15 >>
                                                                               0x10)) >> 0x10) +
                                                 ((short)((ulong)uVar21 >> 0x10) >> 1),
                                                 (short)((uint)(iVar4 * (short)uVar15) >> 0x10) +
                                                 ((short)uVar21 >> 1))));
        puVar10[1] = CONCAT26((short)((uint)(iVar4 * (short)((ulong)uVar20 >> 0x30)) >> 0x10) +
                              (short)((long)uVar18 >> 0x31),
                              CONCAT24((short)((uint)(iVar4 * (short)((ulong)uVar20 >> 0x20)) >>
                                              0x10) + ((short)((ulong)uVar18 >> 0x20) >> 1),
                                       CONCAT22((short)((uint)(iVar4 * (short)((ulong)uVar20 >> 0x10
                                                                              )) >> 0x10) +
                                                ((short)((ulong)uVar18 >> 0x10) >> 1),
                                                (short)((uint)(iVar4 * (short)uVar20) >> 0x10) +
                                                ((short)uVar18 >> 1))));
        *puVar10 = CONCAT26((short)((uint)(iVar4 * (short)((ulong)uVar19 >> 0x30)) >> 0x10) +
                            (short)((long)uVar16 >> 0x31),
                            CONCAT24((short)((uint)(iVar4 * (short)((ulong)uVar19 >> 0x20)) >> 0x10)
                                     + ((short)((ulong)uVar16 >> 0x20) >> 1),
                                     CONCAT22((short)((uint)(iVar4 * (short)((ulong)uVar19 >> 0x10))
                                                     >> 0x10) +
                                              ((short)((ulong)uVar16 >> 0x10) >> 1),
                                              (short)((uint)(iVar4 * (short)uVar19) >> 0x10) +
                                              ((short)uVar16 >> 1))));
        puVar10 = puVar10 + 4;
      } while (uVar14 != 0);
      if (uVar9 == uVar7) goto LAB_00e94598;
    }
    lVar8 = uVar7 - uVar9;
    psVar11 = (short *)((long)local_b8 + uVar9 * 2);
    psVar13 = (short *)((long)local_98 + uVar9 * 2);
    do {
      lVar8 = lVar8 + -1;
      *psVar13 = (short)((ulong)(long)*psVar13 >> 1) + (short)((uint)(*psVar11 * iVar4) >> 0x10);
      psVar11 = psVar11 + 1;
      psVar13 = psVar13 + 1;
    } while (lVar8 != 0);
  }
LAB_00e94598:
  bVar6 = true;
LAB_00e9459c:
  silk_NLSF_encode(param_1 + 0x1298,param_3,*(undefined8 *)(param_1 + 0x1260),local_98,iVar2 + iVar1
                   ,*(undefined4 *)(param_1 + 0x1234),(long)*(char *)(param_1 + 0x12ad));
  silk_NLSF2A((void *)((long)param_2 + 0x20),param_3,*(undefined4 *)(param_1 + 0x1220),
              *(undefined4 *)(param_1 + 0x13f4));
  if (bVar6) {
    silk_interpolate(auStack_78,param_4,param_3,(long)*(char *)(param_1 + 0x12af),
                     *(undefined4 *)(param_1 + 0x1220));
    silk_NLSF2A(param_2,auStack_78,*(undefined4 *)(param_1 + 0x1220),
                *(undefined4 *)(param_1 + 0x13f4));
  }
  else {
    memcpy(param_2,(void *)((long)param_2 + 0x20),(long)*(int *)(param_1 + 0x1220) << 1);
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


