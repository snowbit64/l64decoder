// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _vp_noisemask
// Entry Point: 00e0f368
// Size: 532 bytes
// Signature: undefined _vp_noisemask(void)


void _vp_noisemask(uint *param_1,long param_2,float *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  float *pfVar8;
  uint uVar9;
  undefined8 *puVar10;
  float *pfVar11;
  undefined8 *puVar12;
  float *pfVar13;
  ulong uVar14;
  ulong uVar15;
  float *pfVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float afStack_60 [2];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar9 = *param_1;
  uVar15 = (ulong)uVar9;
  lVar6 = -((long)(int)uVar9 * 4 + 0xfU & 0xfffffffffffffff0);
  pfVar16 = (float *)((long)afStack_60 + lVar6);
  FUN_00e0f57c(0x430c0000,uVar9,*(undefined8 *)(param_1 + 0xc),param_2,param_3,0xffffffff);
  if (0 < (int)uVar9) {
    if (uVar9 < 8) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar15 & 0xfffffff8;
      puVar7 = (undefined8 *)(param_2 + 0x10);
      puVar10 = (undefined8 *)(param_3 + 4);
      puVar12 = (undefined8 *)(&stack0xffffffffffffffb0 + lVar6);
      uVar14 = uVar4;
      do {
        puVar2 = puVar7 + -1;
        uVar17 = puVar7[-2];
        uVar19 = puVar7[1];
        uVar18 = *puVar7;
        puVar7 = puVar7 + 4;
        uVar14 = uVar14 - 8;
        puVar3 = puVar10 + -1;
        uVar20 = puVar10[-2];
        uVar22 = puVar10[1];
        uVar21 = *puVar10;
        puVar10 = puVar10 + 4;
        puVar12[-1] = CONCAT44((float)((ulong)*puVar2 >> 0x20) - (float)((ulong)*puVar3 >> 0x20),
                               (float)*puVar2 - (float)*puVar3);
        puVar12[-2] = CONCAT44((float)((ulong)uVar17 >> 0x20) - (float)((ulong)uVar20 >> 0x20),
                               (float)uVar17 - (float)uVar20);
        puVar12[1] = CONCAT44((float)((ulong)uVar19 >> 0x20) - (float)((ulong)uVar22 >> 0x20),
                              (float)uVar19 - (float)uVar22);
        *puVar12 = CONCAT44((float)((ulong)uVar18 >> 0x20) - (float)((ulong)uVar21 >> 0x20),
                            (float)uVar18 - (float)uVar21);
        puVar12 = puVar12 + 4;
      } while (uVar14 != 0);
      if (uVar4 == uVar15) goto LAB_00e0f464;
    }
    lVar5 = uVar15 - uVar4;
    pfVar8 = pfVar16 + uVar4;
    pfVar11 = param_3 + uVar4;
    pfVar13 = (float *)(param_2 + uVar4 * 4);
    do {
      lVar5 = lVar5 + -1;
      *pfVar8 = *pfVar13 - *pfVar11;
      pfVar8 = pfVar8 + 1;
      pfVar11 = pfVar11 + 1;
      pfVar13 = pfVar13 + 1;
    } while (lVar5 != 0);
  }
LAB_00e0f464:
  FUN_00e0f57c(0,uVar15,*(undefined8 *)(param_1 + 0xc),pfVar16,param_3,
               *(undefined4 *)(*(long *)(param_1 + 2) + 0x80));
  if ((int)uVar9 < 1) goto LAB_00e0f54c;
  if (uVar9 < 8) {
    uVar4 = 0;
LAB_00e0f4d8:
    lVar6 = uVar15 - uVar4;
    pfVar8 = pfVar16 + uVar4;
    pfVar11 = (float *)(param_2 + uVar4 * 4);
    do {
      lVar6 = lVar6 + -1;
      *pfVar8 = *pfVar11 - *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar11 = pfVar11 + 1;
    } while (lVar6 != 0);
  }
  else {
    uVar4 = uVar15 & 0xfffffff8;
    puVar7 = (undefined8 *)(param_2 + 0x10);
    puVar10 = (undefined8 *)(&stack0xffffffffffffffb0 + lVar6);
    uVar14 = uVar4;
    do {
      puVar12 = puVar7 + -1;
      uVar17 = puVar7[-2];
      uVar19 = puVar7[1];
      uVar18 = *puVar7;
      puVar7 = puVar7 + 4;
      uVar14 = uVar14 - 8;
      puVar10[-1] = CONCAT44((float)((ulong)*puVar12 >> 0x20) - (float)((ulong)puVar10[-1] >> 0x20),
                             (float)*puVar12 - (float)puVar10[-1]);
      puVar10[-2] = CONCAT44((float)((ulong)uVar17 >> 0x20) - (float)((ulong)puVar10[-2] >> 0x20),
                             (float)uVar17 - (float)puVar10[-2]);
      puVar10[1] = CONCAT44((float)((ulong)uVar19 >> 0x20) - (float)((ulong)puVar10[1] >> 0x20),
                            (float)uVar19 - (float)puVar10[1]);
      *puVar10 = CONCAT44((float)((ulong)uVar18 >> 0x20) - (float)((ulong)*puVar10 >> 0x20),
                          (float)uVar18 - (float)*puVar10);
      puVar10 = puVar10 + 4;
    } while (uVar14 != 0);
    if (uVar4 != uVar15) goto LAB_00e0f4d8;
  }
  if (0 < (int)uVar9) {
    lVar6 = *(long *)(param_1 + 2);
    do {
      uVar9 = (uint)(*param_3 + 0.5);
      if (0x26 < (int)uVar9) {
        uVar9 = 0x27;
      }
      uVar15 = uVar15 - 1;
      *param_3 = *pfVar16 +
                 *(float *)(lVar6 + (ulong)(uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU)) * 4 + 0x150)
      ;
      param_3 = param_3 + 1;
      pfVar16 = pfVar16 + 1;
    } while (uVar15 != 0);
  }
LAB_00e0f54c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


