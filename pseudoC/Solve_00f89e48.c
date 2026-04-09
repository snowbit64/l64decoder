// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Solve
// Entry Point: 00f89e48
// Size: 1092 bytes
// Signature: undefined __thiscall Solve(CJoint * this, float param_1, float param_2)


/* WARNING: Removing unreachable block (ram,0x00f8a100) */
/* WARNING: Removing unreachable block (ram,0x00f8a108) */
/* WARNING: Removing unreachable block (ram,0x00f8a158) */
/* WARNING: Removing unreachable block (ram,0x00f8a160) */
/* btSoftBody::CJoint::Solve(float, float) */

void __thiscall btSoftBody::CJoint::Solve(CJoint *this,float param_1,float param_2)

{
  long *this_00;
  long *this_01;
  btVector3 *pbVar1;
  btVector3 *pbVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_80;
  float local_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  puVar5 = &local_a0;
  lVar3 = tpidr_el0;
  this_00 = (long *)(this + 8);
  local_48 = *(long *)(lVar3 + 0x28);
  lVar4 = *(long *)(this + 0x10);
  if (lVar4 == 0) {
    lVar4 = *this_00;
    if (lVar4 == 0) {
      fVar6 = 0.0;
      fVar7 = 0.0;
      fVar8 = 0.0;
      fVar9 = 0.0;
      uVar10 = 0;
    }
    else {
      fVar12 = (float)((ulong)*(undefined8 *)(this + 0xc4) >> 0x20);
      fVar7 = (float)((ulong)*(undefined8 *)(lVar4 + 0x174) >> 0x20);
      fVar6 = (float)*(undefined8 *)(lVar4 + 0x174);
      fVar8 = *(float *)(lVar4 + 0x168);
      fVar11 = (float)*(undefined8 *)(this + 0xc4);
      fVar9 = -(*(float *)(this + 0xc0) * fVar6) + *(float *)(lVar4 + 0x170) * fVar11;
      fVar6 = -(fVar11 * fVar7) + fVar6 * fVar12;
      fVar7 = -(fVar12 * *(float *)(lVar4 + 0x170)) + fVar7 * *(float *)(this + 0xc0);
      uVar10 = *(undefined8 *)(lVar4 + 0x160);
    }
  }
  else {
    fVar7 = (float)((ulong)*(undefined8 *)(lVar4 + 400) >> 0x20);
    fVar12 = (float)((ulong)*(undefined8 *)(this + 0xc4) >> 0x20);
    fVar6 = (float)*(undefined8 *)(lVar4 + 400);
    fVar8 = *(float *)(lVar4 + 0x184);
    fVar11 = (float)*(undefined8 *)(this + 0xc4);
    fVar9 = -(*(float *)(this + 0xc0) * fVar6) + *(float *)(lVar4 + 0x18c) * fVar11;
    fVar6 = -(fVar11 * fVar7) + fVar6 * fVar12;
    fVar7 = -(fVar12 * *(float *)(lVar4 + 0x18c)) + fVar7 * *(float *)(this + 0xc0);
    uVar10 = *(undefined8 *)(lVar4 + 0x17c);
  }
  lVar4 = *(long *)(this + 0x28);
  this_01 = (long *)(this + 0x20);
  if (lVar4 == 0) {
    lVar4 = *this_01;
    if (lVar4 == 0) {
      uVar16 = 0;
      fVar11 = 0.0;
      fVar12 = 0.0;
      fVar14 = 0.0;
      fVar15 = 0.0;
    }
    else {
      fVar18 = (float)((ulong)*(undefined8 *)(this + 0xd4) >> 0x20);
      fVar15 = (float)((ulong)*(undefined8 *)(lVar4 + 0x174) >> 0x20);
      fVar14 = (float)*(undefined8 *)(lVar4 + 0x174);
      fVar17 = (float)*(undefined8 *)(this + 0xd4);
      fVar12 = -(*(float *)(this + 0xd0) * fVar14) + *(float *)(lVar4 + 0x170) * fVar17;
      fVar11 = *(float *)(lVar4 + 0x168);
      fVar14 = -(fVar17 * fVar15) + fVar14 * fVar18;
      fVar15 = -(fVar18 * *(float *)(lVar4 + 0x170)) + fVar15 * *(float *)(this + 0xd0);
      uVar16 = *(undefined8 *)(lVar4 + 0x160);
    }
  }
  else {
    fVar15 = (float)((ulong)*(undefined8 *)(lVar4 + 400) >> 0x20);
    fVar18 = (float)((ulong)*(undefined8 *)(this + 0xd4) >> 0x20);
    fVar14 = (float)*(undefined8 *)(lVar4 + 400);
    fVar17 = (float)*(undefined8 *)(this + 0xd4);
    fVar12 = -(*(float *)(this + 0xd0) * fVar14) + *(float *)(lVar4 + 0x18c) * fVar17;
    fVar11 = *(float *)(lVar4 + 0x184);
    fVar14 = -(fVar17 * fVar15) + fVar14 * fVar18;
    fVar15 = -(fVar18 * *(float *)(lVar4 + 0x18c)) + fVar15 * *(float *)(this + 0xd0);
    uVar16 = *(undefined8 *)(lVar4 + 0x17c);
  }
  pbVar1 = (btVector3 *)(this + 0xc0);
  uVar13 = *(undefined8 *)(this + 100);
  pbVar2 = (btVector3 *)(this + 0xd0);
  fVar6 = (fVar6 + (float)uVar10) - ((float)uVar16 + fVar14);
  fVar7 = (fVar7 + (float)((ulong)uVar10 >> 0x20)) - ((float)((ulong)uVar16 >> 0x20) + fVar15);
  fVar8 = (fVar9 + fVar8) - (fVar11 + fVar12);
  local_50 = CONCAT31(local_50._1_3_,1);
  local_60 = 0;
  uStack_58 = 0;
  fVar11 = (float)*(undefined8 *)(this + 0xe0);
  fVar12 = (float)((ulong)*(undefined8 *)(this + 0xe0) >> 0x20);
  fVar9 = (float)NEON_fmadd(*(float *)(this + 0xe8),fVar8,fVar11 * fVar6 + fVar12 * fVar7);
  fStack_68 = (float)*(undefined8 *)(this + 0x6c);
  if (fVar9 < 0.0) {
    fVar11 = fVar11 * fVar9;
    fVar12 = fVar12 * fVar9;
    fVar9 = fVar9 * *(float *)(this + 0xe8);
    fVar14 = *(float *)(this + 0xf0);
    fVar8 = (float)NEON_fmadd(fVar14,fVar8 - fVar9,fVar9);
    uVar13 = CONCAT44(fVar12 + (fVar7 - fVar12) * fVar14 + (float)((ulong)uVar13 >> 0x20),
                      fVar11 + (fVar6 - fVar11) * fVar14 + (float)uVar13);
    fStack_68 = fVar8 + fStack_68;
  }
  fVar8 = (float)uVar13;
  fVar11 = (float)((ulong)uVar13 >> 0x20);
  uVar10 = NEON_rev64(CONCAT44(fVar11 * *(float *)(this + 0x88),
                               fVar8 * (float)*(undefined8 *)(this + 0x94)),4);
  lVar4 = *(long *)(this + 8);
  fVar9 = (float)NEON_fmadd(*(undefined4 *)(this + 0xac),fStack_68,
                            *(float *)(this + 0xa4) * fVar8 + *(float *)(this + 0xa8) * fVar11);
  fVar6 = (float)*(undefined8 *)(this + 0x8c) * fStack_68;
  fVar7 = *(float *)(this + 0x9c) * fStack_68;
  fStack_68 = fVar9 * param_2;
  local_70 = ((float)uVar10 + (float)*(undefined8 *)(this + 0x84) * fVar8 + fVar6) * param_2;
  fStack_6c = ((float)((ulong)uVar10 >> 0x20) + *(float *)(this + 0x98) * fVar11 + fVar7) * param_2;
  uStack_64 = 0;
  if (lVar4 == *(long *)(this + 0x20)) {
    fVar6 = (float)NEON_fmadd(fStack_68,fStack_68,local_70 * local_70 + fStack_6c * fStack_6c);
    if (SQRT(fVar6) < *(float *)(lVar4 + 0x198)) goto LAB_00f8a260;
    fVar6 = *(float *)(lVar4 + 0x19c);
    local_90 = 0;
    local_88 = 0;
    local_a0 = CONCAT44(-fStack_6c * fVar6,-local_70 * fVar6);
    local_80 = local_50;
    uStack_98 = (ulong)(uint)(fVar6 * -fStack_68);
    Body::applyVImpulse((Body *)this_00,(btVector3 *)&local_a0,pbVar1);
    if (((byte)local_80 >> 1 & 1) != 0) {
      Body::applyDImpulse((Body *)this_00,(btVector3 *)&local_90,pbVar1);
    }
    fVar6 = *(float *)(*this_00 + 0x19c);
    local_88._0_4_ = (float)uStack_58;
    local_a0 = CONCAT44(fStack_6c * fVar6,local_70 * fVar6);
    local_90 = CONCAT44((float)((ulong)local_60 >> 0x20) * fVar6,(float)local_60 * fVar6);
    uStack_98 = CONCAT44(uStack_64,fStack_68 * fVar6);
    local_80 = local_50;
    local_88 = CONCAT44((int)((ulong)uStack_58 >> 0x20),(float)local_88 * fVar6);
    if ((local_50 & 1) == 0) {
      puVar5 = &local_a0;
      if (((local_50 & 0xff) >> 1 & 1) == 0) goto LAB_00f8a260;
    }
    else {
      Body::applyVImpulse((Body *)this_01,(btVector3 *)&local_a0,pbVar2);
      if (((byte)local_80 >> 1 & 1) == 0) goto LAB_00f8a260;
    }
  }
  else {
    local_80 = local_50;
    local_a0 = CONCAT44(-fStack_6c,-local_70);
    local_90 = 0x8000000080000000;
    uStack_98 = (ulong)(uint)-fStack_68;
    local_88 = 0x80000000;
    Body::applyVImpulse((Body *)this_00,(btVector3 *)&local_a0,pbVar1);
    if (((byte)local_80 >> 1 & 1) != 0) {
      Body::applyDImpulse((Body *)this_00,(btVector3 *)&local_90,pbVar1);
    }
    Body::applyVImpulse((Body *)this_01,(btVector3 *)&local_70,pbVar2);
    if (((byte)local_50 >> 1 & 1) == 0) goto LAB_00f8a260;
    puVar5 = (undefined8 *)&local_70;
  }
  Body::applyDImpulse((Body *)this_01,(btVector3 *)((long)puVar5 + 0x10),pbVar2);
LAB_00f8a260:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


