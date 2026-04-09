// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: project
// Entry Point: 00f69558
// Size: 336 bytes
// Signature: undefined __thiscall project(btConvexPolyhedron * this, btTransform * param_1, btVector3 * param_2, float * param_3, float * param_4, btVector3 * param_5, btVector3 * param_6)


/* btConvexPolyhedron::project(btTransform const&, btVector3 const&, float&, float&, btVector3&,
   btVector3&) const */

void __thiscall
btConvexPolyhedron::project
          (btConvexPolyhedron *this,btTransform *param_1,btVector3 *param_2,float *param_3,
          float *param_4,btVector3 *param_5,btVector3 *param_6)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  *param_3 = 3.402823e+38;
  fVar7 = -3.402823e+38;
  *param_4 = -3.402823e+38;
  uVar2 = *(uint *)(this + 0xc);
  if (0 < (int)uVar2) {
    lVar4 = 0;
    do {
      pfVar1 = (float *)(*(long *)(this + 0x18) + lVar4);
      fVar9 = *pfVar1;
      fVar12 = pfVar1[1];
      fVar15 = pfVar1[2];
      uVar6 = NEON_fmadd(*(undefined4 *)(param_1 + 4),fVar12,*(float *)param_1 * fVar9);
      uVar13 = NEON_fmadd(*(undefined4 *)(param_1 + 0x14),fVar12,*(float *)(param_1 + 0x10) * fVar9)
      ;
      fVar7 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),fVar15,uVar6);
      fVar14 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x18),fVar15,uVar13);
      uVar6 = NEON_fmadd(*(undefined4 *)(param_1 + 0x24),fVar12,*(float *)(param_1 + 0x20) * fVar9);
      fVar9 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),fVar15,uVar6);
      fVar7 = fVar7 + *(float *)(param_1 + 0x30);
      fVar14 = fVar14 + *(float *)(param_1 + 0x34);
      fVar9 = fVar9 + *(float *)(param_1 + 0x38);
      uVar6 = NEON_fmadd(*(undefined4 *)(param_2 + 4),fVar14,*(float *)param_2 * fVar7);
      fVar12 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 8),fVar9,uVar6);
      if (fVar12 < *param_3) {
        *param_3 = fVar12;
        *(float *)param_5 = fVar7;
        *(float *)(param_5 + 4) = fVar14;
        *(float *)(param_5 + 8) = fVar9;
        *(undefined4 *)(param_5 + 0xc) = 0;
      }
      if (*param_4 < fVar12) {
        *param_4 = fVar12;
        *(float *)param_6 = fVar7;
        *(float *)(param_6 + 4) = fVar14;
        *(float *)(param_6 + 8) = fVar9;
        *(undefined4 *)(param_6 + 0xc) = 0;
      }
      lVar4 = lVar4 + 0x10;
    } while ((ulong)uVar2 * 0x10 - lVar4 != 0);
    fVar7 = *param_4;
  }
  fVar9 = *param_3;
  if (fVar7 < fVar9) {
    *param_3 = fVar7;
    *param_4 = fVar9;
    uVar8 = *(undefined8 *)param_6;
    uVar11 = *(undefined8 *)(param_5 + 8);
    uVar10 = *(undefined8 *)param_5;
    *(undefined8 *)(param_5 + 8) = *(undefined8 *)(param_6 + 8);
    *(undefined8 *)param_5 = uVar8;
    *(undefined8 *)(param_6 + 8) = uVar11;
    *(undefined8 *)param_6 = uVar10;
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


