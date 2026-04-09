// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e0541c
// Entry Point: 00e0541c
// Size: 572 bytes
// Signature: undefined FUN_00e0541c(void)


void FUN_00e0541c(long param_1)

{
  undefined (*pauVar1) [16];
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined (*pauVar12) [16];
  undefined8 *puVar13;
  undefined (*pauVar14) [16];
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auStack_d0 [64];
  undefined4 auStack_90 [4];
  undefined auStack_80 [56];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar6 = (ulong)*(int *)(param_1 + 0x24);
  lVar4 = -(uVar6 * 4 + 0xf & 0xfffffffffffffff0);
  uVar16 = (long)auStack_90 + lVar4;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  if ((0x20 < (long)(uVar6 - *(long *)(param_1 + 0x50))) &&
     (0 < *(int *)(*(long *)(param_1 + 8) + 4))) {
    lVar17 = 0;
    do {
      uVar5 = (uint)uVar6;
      uVar6 = (ulong)(int)uVar5;
      if (0 < (int)uVar5) {
        uVar7 = *(ulong *)(*(long *)(param_1 + 0x10) + lVar17 * 8);
        if ((uVar5 < 8) || ((uVar16 < uVar7 + uVar6 * 4 && (uVar7 < uVar16 + uVar6 * 4)))) {
          uVar8 = 0;
        }
        else {
          uVar8 = uVar6 & 0xfffffffffffffff8;
          pauVar12 = (undefined (*) [16])(uVar7 + uVar6 * 4 + -0x10);
          uVar11 = uVar8;
          pauVar14 = (undefined (*) [16])(auStack_80 + lVar4);
          do {
            pauVar1 = pauVar12 + -1;
            auVar19 = *pauVar12;
            pauVar12 = pauVar12 + -2;
            uVar11 = uVar11 - 8;
            auVar18 = NEON_rev64(*pauVar1,4);
            auVar19 = NEON_rev64(auVar19,4);
            auVar18 = NEON_ext(auVar18,auVar18,8,1);
            auVar19 = NEON_ext(auVar19,auVar19,8,1);
            *(long *)(pauVar14[-1] + 8) = auVar19._8_8_;
            *(long *)pauVar14[-1] = auVar19._0_8_;
            *(long *)(*pauVar14 + 8) = auVar18._8_8_;
            *(long *)*pauVar14 = auVar18._0_8_;
            pauVar14 = pauVar14 + 2;
          } while (uVar11 != 0);
          if (uVar8 == uVar6) goto LAB_00e05500;
        }
        lVar10 = uVar6 - uVar8;
        puVar9 = (undefined4 *)(uVar16 + uVar8 * 4);
        do {
          lVar2 = lVar10 * 4;
          lVar10 = lVar10 + -1;
          *puVar9 = *(undefined4 *)((uVar7 - 4) + lVar2);
          puVar9 = puVar9 + 1;
        } while (lVar10 != 0);
      }
LAB_00e05500:
      vorbis_lpc_from_data(uVar16,auStack_90,uVar5 - *(int *)(param_1 + 0x50),0x10);
      vorbis_lpc_predict(auStack_90,
                         uVar16 + (long)*(int *)(param_1 + 0x24) * 4 +
                         *(long *)(param_1 + 0x50) * -4 + -0x40,0x10);
      uVar5 = *(uint *)(param_1 + 0x24);
      uVar6 = (ulong)uVar5;
      if (0 < (int)uVar5) {
        uVar8 = (ulong)(int)uVar5;
        uVar7 = *(ulong *)(*(long *)(param_1 + 0x10) + lVar17 * 8);
        if ((uVar5 < 8) || ((uVar7 < uVar16 + uVar8 * 4 && (uVar16 < uVar7 + uVar8 * 4)))) {
          uVar11 = 0;
        }
        else {
          uVar11 = uVar8 & 0xfffffffffffffff8;
          puVar13 = (undefined8 *)(uVar7 + uVar8 * 4 + -0x10);
          uVar15 = uVar11;
          pauVar14 = (undefined (*) [16])(auStack_80 + lVar4);
          do {
            pauVar12 = pauVar14 + -1;
            auVar19 = *pauVar14;
            pauVar14 = pauVar14 + 2;
            uVar15 = uVar15 - 8;
            auVar18 = NEON_rev64(*pauVar12,4);
            auVar20 = NEON_rev64(auVar19,4);
            auVar19 = NEON_ext(auVar18,auVar18,8,1);
            auVar18 = NEON_ext(auVar20,auVar20,8,1);
            puVar13[-1] = auVar18._8_8_;
            puVar13[-2] = auVar18._0_8_;
            puVar13[1] = auVar19._8_8_;
            *puVar13 = auVar19._0_8_;
            puVar13 = puVar13 + -4;
          } while (uVar15 != 0);
          if (uVar11 == uVar8) goto LAB_00e05494;
        }
        lVar10 = uVar8 - uVar11;
        puVar9 = (undefined4 *)(uVar16 + uVar11 * 4);
        do {
          *(undefined4 *)((uVar7 - 4) + lVar10 * 4) = *puVar9;
          lVar10 = lVar10 + -1;
          puVar9 = puVar9 + 1;
        } while (lVar10 != 0);
      }
LAB_00e05494:
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(*(long *)(param_1 + 8) + 4));
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


