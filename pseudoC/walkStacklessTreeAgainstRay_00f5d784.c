// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: walkStacklessTreeAgainstRay
// Entry Point: 00f5d784
// Size: 964 bytes
// Signature: undefined __cdecl walkStacklessTreeAgainstRay(btNodeOverlapCallback * param_1, btVector3 * param_2, btVector3 * param_3, btVector3 * param_4, btVector3 * param_5, int param_6, int param_7)


/* btQuantizedBvh::walkStacklessTreeAgainstRay(btNodeOverlapCallback*, btVector3 const&, btVector3
   const&, btVector3 const&, btVector3 const&, int, int) const */

void btQuantizedBvh::walkStacklessTreeAgainstRay
               (btNodeOverlapCallback *param_1,btVector3 *param_2,btVector3 *param_3,
               btVector3 *param_4,btVector3 *param_5,int param_6,int param_7)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  
  puVar7 = (undefined8 *)(ulong)(uint)param_6;
  lVar1 = tpidr_el0;
  local_b0 = *(long *)(lVar1 + 0x28);
  fVar24 = *(float *)param_3;
  fVar19 = *(float *)(param_3 + 4);
  fVar20 = *(float *)(param_3 + 8);
  fVar23 = 1e+18;
  fVar22 = *(float *)(param_4 + 8);
  fVar16 = *(float *)param_4 - fVar24;
  fVar26 = *(float *)(param_4 + 4) - fVar19;
  fVar21 = fVar22 - fVar20;
  uVar12 = NEON_fmadd(fVar26,fVar26,fVar16 * fVar16);
  fVar13 = (float)NEON_fmadd(fVar21,fVar21,uVar12);
  fVar14 = 1.0 / SQRT(fVar13);
  fVar27 = fVar14 * fVar26;
  fVar25 = fVar14 * fVar21;
  fVar14 = fVar14 * fVar16;
  iVar8 = *(int *)(param_1 + 0x3c);
  fVar13 = fVar23;
  if (fVar27 != 0.0) {
    fVar13 = 1.0 / fVar27;
  }
  fVar30 = fVar23;
  if (fVar25 != 0.0) {
    fVar30 = 1.0 / fVar25;
  }
  if (fVar14 != 0.0) {
    fVar23 = 1.0 / fVar14;
  }
  if (iVar8 < 1) {
    iVar11 = 0;
LAB_00f5daec:
    if (maxIterations < iVar11) {
      maxIterations = iVar11;
    }
    if (*(long *)(lVar1 + 0x28) == local_b0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar15 = *(undefined8 *)param_5;
  uVar17 = *puVar7;
  fVar28 = (float)NEON_fminnm(*(float *)param_4,fVar24);
  fVar29 = (float)NEON_fminnm(*(float *)(param_4 + 4),fVar19);
  uVar4 = (ulong)uVar15 >> 0x20;
  uVar12 = NEON_fmadd(fVar27,fVar26,fVar14 * fVar16);
  fVar14 = (float)NEON_fminnm(fVar22,fVar20);
  uVar5 = (ulong)uVar17 >> 0x20;
  if (fVar20 <= fVar22) {
    fVar20 = fVar22;
  }
  fVar22 = *(float *)(param_5 + 8);
  fVar26 = *(float *)(puVar7 + 1);
  fVar16 = (float)uVar15;
  fVar25 = (float)NEON_fmadd(fVar25,fVar21,uVar12);
  fVar14 = fVar22 + fVar14;
  fVar21 = (float)uVar17;
  fVar20 = fVar26 + fVar20;
  iVar9 = 0;
  puVar10 = *(undefined8 **)(param_1 + 0x78);
  iVar11 = 1;
  do {
    uStack_b8._0_4_ = (float)puVar10[3];
    local_c0 = CONCAT44((float)((ulong)puVar10[2] >> 0x20) - (float)((ulong)uVar15 >> 0x20),
                        (float)puVar10[2] - (float)uVar15);
    uStack_c8._0_4_ = (float)puVar10[1];
    uStack_b8 = CONCAT44((int)((ulong)puVar10[3] >> 0x20),(float)uStack_b8 - fVar22);
    local_d0 = CONCAT44((float)((ulong)*puVar10 >> 0x20) - (float)((ulong)uVar17 >> 0x20),
                        (float)*puVar10 - (float)uVar17);
    uStack_c8 = CONCAT44((int)((ulong)puVar10[1] >> 0x20),(float)uStack_c8 - fVar26);
    if ((*(float *)(puVar10 + 2) < fVar16 + fVar28) || (fVar21 + fVar24 < *(float *)puVar10)) {
      bVar2 = 0;
    }
    else {
      bVar2 = 1;
    }
    if ((*(float *)(puVar10 + 3) < fVar14) || (fVar20 < *(float *)(puVar10 + 1))) {
      bVar2 = 0;
    }
    if ((*(float *)((long)puVar10 + 0x14) < (float)uVar4 + fVar29) ||
       ((bool)(bVar2 ^ 1 | (float)uVar5 + fVar19 < *(float *)((long)puVar10 + 4)))) {
LAB_00f5dab8:
      fVar26 = *(float *)(puVar10 + 4);
      bVar3 = false;
      bVar6 = fVar26 == -NAN;
LAB_00f5dac8:
      if ((bVar3) || (bVar6)) goto LAB_00f5d940;
      iVar9 = (int)fVar26 + iVar9;
      puVar10 = puVar10 + (long)(int)fVar26 * 8;
      if (iVar8 <= iVar9) goto LAB_00f5daec;
    }
    else {
      fVar26 = (*(float *)(&local_d0 + (ulong)(fVar23 < 0.0) * 2) - *(float *)param_3) * fVar23;
      fVar22 = (*(float *)((ulong)(&local_d0 + (ulong)(fVar13 >= 0.0) * 2) | 4) -
               *(float *)(param_3 + 4)) * fVar13;
      if (fVar22 < fVar26) goto LAB_00f5dab8;
      fVar18 = (*(float *)(&local_d0 + (ulong)(fVar23 >= 0.0) * 2) - *(float *)param_3) * fVar23;
      fVar27 = (*(float *)((ulong)(&local_d0 + (ulong)(fVar13 < 0.0) * 2) | 4) -
               *(float *)(param_3 + 4)) * fVar13;
      if (fVar18 < fVar27) goto LAB_00f5dab8;
      if (fVar27 <= fVar26) {
        fVar27 = fVar26;
      }
      fVar26 = (*(float *)(&uStack_c8 + (ulong)(fVar30 >= 0.0) * 2) - *(float *)(param_3 + 8)) *
               fVar30;
      if (fVar26 < fVar27) goto LAB_00f5dab8;
      fVar18 = (float)NEON_fminnm(fVar22,fVar18);
      fVar22 = (*(float *)(&uStack_c8 + (ulong)(fVar30 < 0.0) * 2) - *(float *)(param_3 + 8)) *
               fVar30;
      if (fVar18 < fVar22) goto LAB_00f5dab8;
      if (fVar22 <= fVar27) {
        fVar22 = fVar27;
      }
      fVar27 = (float)NEON_fminnm(fVar26,fVar18);
      fVar26 = *(float *)(puVar10 + 4);
      bVar6 = fVar26 == -NAN;
      bVar3 = fVar22 < fVar25 && 0.0 < fVar27;
      if ((fVar22 >= fVar25 || 0.0 >= fVar27) || (fVar26 != -NAN)) goto LAB_00f5dac8;
      (**(code **)(*(long *)param_2 + 0x10))
                (param_2,*(float *)((long)puVar10 + 0x24),*(float *)(puVar10 + 5));
      iVar8 = *(int *)(param_1 + 0x3c);
LAB_00f5d940:
      puVar10 = puVar10 + 8;
      iVar9 = iVar9 + 1;
      if (iVar8 <= iVar9) goto LAB_00f5daec;
    }
    uVar17 = *puVar7;
    iVar11 = iVar11 + 1;
    fVar26 = *(float *)(puVar7 + 1);
    uVar15 = *(undefined8 *)param_5;
    fVar22 = *(float *)(param_5 + 8);
  } while( true );
}


