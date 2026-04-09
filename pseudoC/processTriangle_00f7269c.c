// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processTriangle
// Entry Point: 00f7269c
// Size: 588 bytes
// Signature: undefined __thiscall processTriangle(btTriangleRaycastCallback * this, btVector3 * param_1, int param_2, int param_3)


/* btTriangleRaycastCallback::processTriangle(btVector3*, int, int) */

undefined8 __thiscall
btTriangleRaycastCallback::processTriangle
          (btTriangleRaycastCallback *this,btVector3 *param_1,int param_2,int param_3)

{
  long lVar1;
  float *pfVar2;
  code *pcVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float local_48;
  float fStack_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  float fStack_34;
  float local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar15 = *(float *)param_1;
  fVar9 = *(float *)(param_1 + 4);
  fVar18 = *(float *)(param_1 + 8);
  local_2c = 0;
  fVar4 = *(float *)(param_1 + 0x14) - fVar9;
  fVar10 = *(float *)(param_1 + 0x20) - fVar15;
  fVar11 = *(float *)(param_1 + 0x18) - fVar18;
  fVar6 = *(float *)(param_1 + 0x24) - fVar9;
  fVar8 = *(float *)(param_1 + 0x10) - fVar15;
  fVar20 = *(float *)(param_1 + 0x28) - fVar18;
  fVar7 = (float)NEON_fnmsub(fVar6,fVar8,fVar10 * fVar4);
  fVar6 = (float)NEON_fnmsub(fVar20,fVar4,fVar6 * fVar11);
  fVar8 = (float)NEON_fnmsub(fVar10,fVar11,fVar20 * fVar8);
  uVar5 = NEON_fmadd(fVar6,fVar15,fVar7 * fVar18);
  uVar12 = NEON_fmadd(*(undefined4 *)(this + 0xc),fVar8,*(float *)(this + 8) * fVar6);
  uVar21 = NEON_fmadd(*(float *)(this + 0x1c),fVar8,*(float *)(this + 0x18) * fVar6);
  fVar20 = (float)NEON_fmadd(fVar8,fVar9,uVar5);
  fVar4 = (float)NEON_fmadd(*(undefined4 *)(this + 0x10),fVar7,uVar12);
  fVar11 = (float)NEON_fmadd(*(float *)(this + 0x20),fVar7,uVar21);
  fVar10 = fVar4 - fVar20;
  if (((fVar11 - fVar20) * fVar10 < 0.0) &&
     ((((*(uint *)(this + 0x28) & 1) == 0 || (0.0 < fVar10)) &&
      (fVar4 = fVar10 / (fVar4 - fVar11), fVar4 < *(float *)(this + 0x2c))))) {
    fVar11 = 1.0 - fVar4;
    fVar20 = (float)NEON_fmadd(fVar11,*(undefined4 *)(this + 0xc),fVar4 * *(float *)(this + 0x1c));
    fVar22 = (float)NEON_fmadd(fVar11,*(undefined4 *)(this + 0x10),fVar4 * *(float *)(this + 0x20));
    fVar11 = (float)NEON_fmadd(fVar11,*(float *)(this + 8),fVar4 * *(float *)(this + 0x18));
    fVar18 = fVar18 - fVar22;
    fVar16 = *(float *)(param_1 + 0x14) - fVar20;
    fVar17 = *(float *)(param_1 + 0x18) - fVar22;
    fVar13 = *(float *)(param_1 + 0x24) - fVar20;
    fVar15 = fVar15 - fVar11;
    fVar9 = fVar9 - fVar20;
    uVar5 = NEON_fmadd(fVar6,fVar6,fVar7 * fVar7);
    fVar22 = *(float *)(param_1 + 0x28) - fVar22;
    fVar20 = *(float *)(param_1 + 0x10) - fVar11;
    fVar11 = *(float *)(param_1 + 0x20) - fVar11;
    fVar25 = (float)NEON_fnmsub(fVar17,fVar9,fVar16 * fVar18);
    fVar4 = (float)NEON_fmadd(fVar8,fVar8,uVar5);
    fVar24 = (float)NEON_fnmsub(fVar22,fVar16,fVar13 * fVar17);
    uVar12 = NEON_fnmsub(fVar20,fVar18,fVar15 * fVar17);
    fVar19 = (float)NEON_fnmsub(fVar18,fVar13,fVar9 * fVar22);
    uVar21 = NEON_fnmsub(fVar11,fVar17,fVar20 * fVar22);
    uVar5 = NEON_fnmsub(fVar15,fVar16,fVar20 * fVar9);
    uVar23 = NEON_fmadd(uVar12,fVar8,fVar25 * fVar6);
    uVar14 = NEON_fnmsub(fVar15,fVar22,fVar11 * fVar18);
    uVar12 = NEON_fnmsub(fVar20,fVar13,fVar11 * fVar16);
    uVar21 = NEON_fmadd(uVar21,fVar8,fVar24 * fVar6);
    fVar20 = fVar4 * -0.0001;
    fVar18 = (float)NEON_fmadd(uVar5,fVar7,uVar23);
    uVar5 = NEON_fnmsub(fVar11,fVar9,fVar15 * fVar13);
    uVar14 = NEON_fmadd(uVar14,fVar8,fVar19 * fVar6);
    fVar11 = (float)NEON_fmadd(uVar12,fVar7,uVar21);
    fVar9 = (float)NEON_fmadd(uVar5,fVar7,uVar14);
    if ((fVar20 <= fVar18 && fVar20 <= fVar11) && fVar20 <= fVar9) {
      local_30 = 1.0 / SQRT(fVar4);
      local_38 = local_30 * fVar6;
      fStack_34 = local_30 * fVar8;
      local_30 = local_30 * fVar7;
      if (((*(uint *)(this + 0x28) >> 1 & 1) != 0) || (0.0 < fVar10)) {
        pfVar2 = &local_38;
        pcVar3 = *(code **)(*(long *)this + 0x20);
      }
      else {
        local_48 = -local_38;
        fStack_44 = -fStack_34;
        local_40 = -local_30;
        local_3c = 0;
        pfVar2 = &local_48;
        pcVar3 = *(code **)(*(long *)this + 0x20);
      }
      uVar5 = (*pcVar3)(this,pfVar2,param_2,param_3,param_1);
      *(undefined4 *)(this + 0x2c) = uVar5;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


