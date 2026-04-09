// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Solve
// Entry Point: 00f7bab0
// Size: 784 bytes
// Signature: undefined __thiscall Solve(LJoint * this, float param_1, float param_2)


/* WARNING: Removing unreachable block (ram,0x00f7bd30) */
/* WARNING: Removing unreachable block (ram,0x00f7bd38) */
/* btSoftBody::LJoint::Solve(float, float) */

void __thiscall btSoftBody::LJoint::Solve(LJoint *this,float param_1,float param_2)

{
  long *this_00;
  long *this_01;
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  float local_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  this_00 = (long *)(this + 8);
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0x10);
  if (lVar2 == 0) {
    lVar2 = *this_00;
    if (lVar2 == 0) {
      fVar4 = 0.0;
      fVar5 = 0.0;
      fVar3 = 0.0;
      fVar8 = 0.0;
      fVar10 = 0.0;
      fVar6 = 0.0;
    }
    else {
      fVar12 = (float)((ulong)*(undefined8 *)(this + 0xbc) >> 0x20);
      fVar8 = *(float *)(lVar2 + 0x164);
      fVar5 = (float)((ulong)*(undefined8 *)(lVar2 + 0x174) >> 0x20);
      fVar4 = (float)*(undefined8 *)(lVar2 + 0x174);
      fVar10 = (float)*(undefined8 *)(this + 0xbc);
      fVar6 = -(*(float *)(this + 0xb8) * fVar4) + *(float *)(lVar2 + 0x170) * fVar10;
      fVar3 = *(float *)(lVar2 + 0x168);
      fVar4 = -(fVar5 * fVar10) + fVar4 * fVar12;
      fVar5 = -(*(float *)(lVar2 + 0x170) * fVar12) + fVar5 * *(float *)(this + 0xb8);
      fVar10 = *(float *)(lVar2 + 0x160);
    }
  }
  else {
    fVar5 = (float)((ulong)*(undefined8 *)(lVar2 + 400) >> 0x20);
    fVar8 = *(float *)(lVar2 + 0x180);
    fVar12 = (float)((ulong)*(undefined8 *)(this + 0xbc) >> 0x20);
    fVar4 = (float)*(undefined8 *)(lVar2 + 400);
    fVar10 = (float)*(undefined8 *)(this + 0xbc);
    fVar6 = -(*(float *)(this + 0xb8) * fVar4) + *(float *)(lVar2 + 0x18c) * fVar10;
    fVar3 = *(float *)(lVar2 + 0x184);
    fVar4 = -(fVar5 * fVar10) + fVar4 * fVar12;
    fVar5 = -(*(float *)(lVar2 + 0x18c) * fVar12) + fVar5 * *(float *)(this + 0xb8);
    fVar10 = *(float *)(lVar2 + 0x17c);
  }
  lVar2 = *(long *)(this + 0x28);
  this_01 = (long *)(this + 0x20);
  if (lVar2 == 0) {
    lVar2 = *this_01;
    if (lVar2 == 0) {
      fVar13 = 0.0;
      fVar14 = 0.0;
      fVar12 = 0.0;
      fVar16 = 0.0;
      fVar18 = 0.0;
      fVar15 = 0.0;
    }
    else {
      fVar19 = (float)((ulong)*(undefined8 *)(this + 0xcc) >> 0x20);
      fVar16 = *(float *)(lVar2 + 0x164);
      fVar14 = (float)((ulong)*(undefined8 *)(lVar2 + 0x174) >> 0x20);
      fVar13 = (float)*(undefined8 *)(lVar2 + 0x174);
      fVar18 = (float)*(undefined8 *)(this + 0xcc);
      fVar15 = -(*(float *)(this + 200) * fVar13) + *(float *)(lVar2 + 0x170) * fVar18;
      fVar12 = *(float *)(lVar2 + 0x168);
      fVar13 = -(fVar14 * fVar18) + fVar13 * fVar19;
      fVar14 = -(*(float *)(lVar2 + 0x170) * fVar19) + fVar14 * *(float *)(this + 200);
      fVar18 = *(float *)(lVar2 + 0x160);
    }
  }
  else {
    fVar14 = (float)((ulong)*(undefined8 *)(lVar2 + 400) >> 0x20);
    fVar16 = *(float *)(lVar2 + 0x180);
    fVar19 = (float)((ulong)*(undefined8 *)(this + 0xcc) >> 0x20);
    fVar13 = (float)*(undefined8 *)(lVar2 + 400);
    fVar18 = (float)*(undefined8 *)(this + 0xcc);
    fVar15 = -(*(float *)(this + 200) * fVar13) + *(float *)(lVar2 + 0x18c) * fVar18;
    fVar12 = *(float *)(lVar2 + 0x184);
    fVar13 = -(fVar14 * fVar18) + fVar13 * fVar19;
    fVar14 = -(*(float *)(lVar2 + 0x18c) * fVar19) + fVar14 * *(float *)(this + 200);
    fVar18 = *(float *)(lVar2 + 0x17c);
  }
  uStack_64 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uVar17 = *(undefined4 *)(this + 0x58);
  local_50 = CONCAT31(local_50._1_3_,1);
  fVar4 = (float)NEON_fmadd(uVar17,(fVar4 + fVar10) - (fVar18 + fVar13),*(undefined4 *)(this + 100))
  ;
  uVar9 = NEON_fmadd(uVar17,(fVar5 + fVar8) - (fVar16 + fVar14),*(undefined4 *)(this + 0x68));
  uVar17 = NEON_fmadd(uVar17,(fVar6 + fVar3) - (fVar12 + fVar15),*(undefined4 *)(this + 0x6c));
  uVar11 = NEON_fmadd(*(undefined4 *)(this + 0x98),uVar9,*(float *)(this + 0x94) * fVar4);
  uVar7 = NEON_fmadd(*(undefined4 *)(this + 0x88),uVar9,*(float *)(this + 0x84) * fVar4);
  fStack_6c = (float)NEON_fmadd(*(undefined4 *)(this + 0x9c),uVar17,uVar11);
  uVar9 = NEON_fmadd(*(undefined4 *)(this + 0xa8),uVar9,*(float *)(this + 0xa4) * fVar4);
  local_70 = (float)NEON_fmadd(*(undefined4 *)(this + 0x8c),uVar17,uVar7);
  fStack_68 = (float)NEON_fmadd(*(undefined4 *)(this + 0xac),uVar17,uVar9);
  local_70 = local_70 * param_2;
  fStack_6c = fStack_6c * param_2;
  fStack_68 = fStack_68 * param_2;
  local_80 = local_50;
  local_a0 = CONCAT44(-fStack_6c,-local_70);
  local_90 = 0x8000000080000000;
  uStack_98 = (ulong)(uint)-fStack_68;
  local_88 = 0x80000000;
  Body::applyVImpulse((Body *)this_00,(btVector3 *)&local_a0,(btVector3 *)(this + 0xb8));
  if (((byte)local_80 >> 1 & 1) != 0) {
    Body::applyDImpulse((Body *)this_00,(btVector3 *)&local_90,(btVector3 *)(this + 0xb8));
  }
  Body::applyVImpulse((Body *)this_01,(btVector3 *)&local_70,(btVector3 *)(this + 200));
  if (((byte)local_50 >> 1 & 1) != 0) {
    Body::applyDImpulse((Body *)this_01,(btVector3 *)&local_60,(btVector3 *)(this + 200));
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


