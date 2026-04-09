// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: localGetSupportingVertexWithoutMargin
// Entry Point: 00f5ea0c
// Size: 504 bytes
// Signature: undefined __thiscall localGetSupportingVertexWithoutMargin(btCapsuleShape * this, btVector3 * param_1)


/* btCapsuleShape::localGetSupportingVertexWithoutMargin(btVector3 const&) const */

void __thiscall
btCapsuleShape::localGetSupportingVertexWithoutMargin(btCapsuleShape *this,btVector3 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float local_8c;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  fVar13 = 0.0;
  fVar12 = 0.0;
  fVar15 = 1.0;
  fVar4 = *(float *)param_1;
  fVar7 = *(float *)(param_1 + 4);
  local_8c = 0.0;
  uVar10 = NEON_fmadd(fVar7,fVar7,fVar4 * fVar4);
  fVar8 = *(float *)(param_1 + 8);
  fVar11 = (float)NEON_fmadd(fVar8,fVar8,uVar10);
  if (0.0001 <= fVar11) {
    fVar12 = 1.0 / SQRT(fVar11);
    fVar15 = fVar12 * fVar4;
    fVar13 = fVar12 * fVar7;
    fVar12 = fVar12 * fVar8;
  }
  iVar1 = *(int *)(this + 0x44);
  local_88 = 0;
  local_80 = 0;
  lVar3 = (long)iVar1 * 4;
  *(undefined4 *)((long)&local_88 + lVar3) = *(undefined4 *)(this + lVar3 + 0x2c);
  fVar7 = *(float *)(this + (long)((iVar1 + 2) % 3) * 4 + 0x2c);
  fVar4 = (float)local_88 + fVar7 * fVar15;
  fVar16 = local_88._4_4_ + fVar7 * fVar13;
  fVar11 = (float)local_80 + fVar7 * fVar12;
  uVar10 = (**(code **)(*(long *)this + 0x60))(this);
  fVar8 = (float)NEON_fmsub(uVar10,fVar15,fVar4);
  uVar9 = NEON_fmsub(uVar10,fVar13,fVar16);
  uVar5 = NEON_fmsub(uVar10,fVar12,fVar11);
  uVar10 = NEON_fmadd(uVar9,fVar13,fVar8 * fVar15);
  fVar11 = (float)NEON_fmadd(uVar5,fVar12,uVar10);
  fVar4 = -1e+18;
  uVar10 = 0;
  uVar14 = 0;
  if (-1e+18 < fVar11) {
    fVar4 = fVar11;
    uVar10 = uVar9;
    uVar14 = uVar5;
    local_8c = fVar8;
  }
  local_88 = 0;
  local_80 = 0;
  *(float *)((long)&local_88 + (long)*(int *)(this + 0x44) * 4) =
       -*(float *)(this + (long)*(int *)(this + 0x44) * 4 + 0x2c);
  fVar8 = (float)local_88 + fVar7 * fVar15;
  fVar11 = local_88._4_4_ + fVar7 * fVar13;
  fVar16 = (float)local_80 + fVar7 * fVar12;
  uVar5 = (**(code **)(*(long *)this + 0x60))(this);
  fVar7 = (float)NEON_fmsub(uVar5,fVar15,fVar8);
  uVar9 = NEON_fmsub(uVar5,fVar12,fVar16);
  uVar5 = NEON_fmsub(uVar5,fVar13,fVar11);
  uVar6 = NEON_fmadd(uVar5,fVar13,fVar7 * fVar15);
  fVar8 = (float)NEON_fmadd(uVar9,fVar12,uVar6);
  if (fVar8 <= fVar4) {
    uVar9 = uVar14;
    fVar7 = local_8c;
    uVar5 = uVar10;
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar7,uVar5,uVar9);
  }
  return;
}


