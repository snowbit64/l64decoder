// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: quickSortInternal<btAngleCompareFunc>
// Entry Point: 00f67dec
// Size: 508 bytes
// Signature: void __thiscall quickSortInternal<btAngleCompareFunc>(btAlignedObjectArray<GrahamVector3> * this, btAngleCompareFunc * param_1, int param_2, int param_3)


/* void 
   btAlignedObjectArray<GrahamVector3>::quickSortInternal<btAngleCompareFunc>(btAngleCompareFunc
   const&, int, int) */

void __thiscall
btAlignedObjectArray<GrahamVector3>::quickSortInternal<btAngleCompareFunc>
          (btAlignedObjectArray<GrahamVector3> *this,btAngleCompareFunc *param_1,int param_2,
          int param_3)

{
  undefined8 *puVar1;
  float fVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
LAB_00f67e30:
  iVar12 = param_2 + param_3;
  lVar8 = *(long *)(this + 0x10);
  if (iVar12 < 0) {
    iVar12 = iVar12 + 1;
  }
  pfVar7 = (float *)(lVar8 + (long)(iVar12 >> 1) * 0x18);
  fVar13 = *pfVar7;
  fVar14 = pfVar7[1];
  fVar15 = pfVar7[2];
  fVar16 = pfVar7[4];
  fVar2 = pfVar7[5];
  iVar5 = param_3;
  iVar12 = param_2;
LAB_00f67e60:
  fVar17 = *(float *)param_1;
  fVar22 = *(float *)(param_1 + 4);
  puVar9 = (undefined8 *)(lVar8 + (long)iVar12 * 0x18);
  fVar23 = *(float *)(param_1 + 8);
  uVar24 = NEON_fmadd(fVar14 - fVar22,fVar14 - fVar22,(fVar13 - fVar17) * (fVar13 - fVar17));
  fVar25 = (float)NEON_fmadd(fVar15 - fVar23,fVar15 - fVar23,uVar24);
  do {
    if (*(float *)(puVar9 + 2) == fVar16) {
      fVar26 = *(float *)((long)puVar9 + 4) - fVar22;
      uVar24 = NEON_fmadd(fVar26,fVar26,(*(float *)puVar9 - fVar17) * (*(float *)puVar9 - fVar17));
      fVar26 = (float)NEON_fmadd(*(float *)(puVar9 + 1) - fVar23,*(float *)(puVar9 + 1) - fVar23,
                                 uVar24);
      bVar4 = fVar26 < fVar25;
      if (fVar26 == fVar25) {
        bVar4 = *(int *)((long)puVar9 + 0x14) < (int)fVar2;
      }
      if (!bVar4) break;
    }
    else if (fVar16 <= *(float *)(puVar9 + 2)) break;
    iVar12 = iVar12 + 1;
    puVar9 = puVar9 + 3;
  } while( true );
  lVar10 = (long)iVar5 * 0x18;
  do {
    pfVar7 = (float *)(lVar8 + lVar10);
    if (fVar16 == pfVar7[4]) {
      uVar24 = NEON_fmadd(pfVar7[1] - fVar22,pfVar7[1] - fVar22,
                          (*pfVar7 - fVar17) * (*pfVar7 - fVar17));
      fVar26 = (float)NEON_fmadd(pfVar7[2] - fVar23,pfVar7[2] - fVar23,uVar24);
      bVar4 = fVar25 < fVar26;
      if (fVar25 == fVar26) {
        bVar4 = (int)fVar2 < (int)pfVar7[5];
      }
      if (!bVar4) break;
    }
    else if (pfVar7[4] <= fVar16) break;
    lVar10 = lVar10 + -0x18;
    iVar5 = iVar5 + -1;
  } while( true );
  if (iVar12 <= iVar5) {
    puVar1 = (undefined8 *)(lVar8 + lVar10);
    uVar20 = puVar9[1];
    uVar18 = *puVar9;
    uVar11 = puVar9[2];
    iVar12 = iVar12 + 1;
    iVar5 = iVar5 + -1;
    uVar21 = puVar1[1];
    uVar19 = *puVar1;
    puVar9[2] = puVar1[2];
    puVar9[1] = uVar21;
    *puVar9 = uVar19;
    puVar9 = (undefined8 *)(*(long *)(this + 0x10) + lVar10);
    puVar9[1] = uVar20;
    *puVar9 = uVar18;
    puVar9[2] = uVar11;
  }
  if (iVar5 < iVar12) goto LAB_00f67fa4;
  lVar8 = *(long *)(this + 0x10);
  goto LAB_00f67e60;
LAB_00f67fa4:
  if (param_2 < iVar5) {
    quickSortInternal<btAngleCompareFunc>(this,param_1,param_2,iVar5);
  }
  param_2 = iVar12;
  if (param_3 <= iVar12) {
    if (*(long *)(lVar3 + 0x28) == lVar6) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_00f67e30;
}


