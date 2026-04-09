// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Prepare
// Entry Point: 00f89cb0
// Size: 408 bytes
// Signature: undefined __thiscall Prepare(CJoint * this, float param_1, int param_2)


/* btSoftBody::CJoint::Prepare(float, int) */

void __thiscall btSoftBody::CJoint::Prepare(CJoint *this,float param_1,int param_2)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  
  lVar2 = *(long *)(this + 0x10);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0xe0) & 3) == 0)) {
    if ((*(uint *)(lVar2 + 0xec) & 0xfffffffe) != 4) {
      *(undefined4 *)(lVar2 + 0xec) = 1;
    }
    *(undefined4 *)(lVar2 + 0xf0) = 0;
  }
  lVar2 = *(long *)(this + 0x18);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0xe0) & 3) == 0)) {
    if ((*(uint *)(lVar2 + 0xec) & 0xfffffffe) != 4) {
      *(undefined4 *)(lVar2 + 0xec) = 1;
    }
    *(undefined4 *)(lVar2 + 0xf0) = 0;
  }
  lVar2 = *(long *)(this + 0x28);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0xe0) & 3) == 0)) {
    if ((*(uint *)(lVar2 + 0xec) & 0xfffffffe) != 4) {
      *(undefined4 *)(lVar2 + 0xec) = 1;
    }
    *(undefined4 *)(lVar2 + 0xf0) = 0;
  }
  lVar2 = *(long *)(this + 0x30);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0xe0) & 3) == 0)) {
    if ((*(uint *)(lVar2 + 0xec) & 0xfffffffe) != 4) {
      *(undefined4 *)(lVar2 + 0xec) = 1;
    }
    *(undefined4 *)(lVar2 + 0xf0) = 0;
  }
  iVar1 = *(int *)(this + 0xb8);
  *(int *)(this + 0xb8) = iVar1 + 1;
  this[0xb4] = (CJoint)(*(int *)(this + 0xbc) <= iVar1);
  if (iVar1 != 0) {
    *(undefined8 *)(this + 0x7c) = 0;
    *(undefined8 *)(this + 0x74) = 0;
    *(undefined8 *)(this + 0x6c) = 0;
    *(undefined8 *)(this + 100) = 0;
    return;
  }
  fVar6 = *(float *)(this + 0x60);
  *(undefined4 *)(this + 0x70) = 0;
  fVar3 = *(float *)(this + 0x5c) / param_1;
  fVar4 = (float)*(undefined8 *)(this + 100) * fVar3;
  fVar5 = (float)((ulong)*(undefined8 *)(this + 100) >> 0x20) * fVar3;
  fVar3 = fVar3 * *(float *)(this + 0x6c);
  if (0.0 < fVar6) {
    fVar7 = fVar6 * fVar4;
    fVar11 = fVar6 * fVar5;
    *(undefined4 *)(this + 0x80) = 0;
    fVar12 = fVar3 * fVar6;
    uVar9 = NEON_fmadd(*(undefined4 *)(this + 0x88),fVar11,*(float *)(this + 0x84) * fVar7);
    uVar10 = NEON_fmadd(*(undefined4 *)(this + 0x98),fVar11,*(float *)(this + 0x94) * fVar7);
    uVar8 = NEON_fmadd(*(undefined4 *)(this + 0xa8),fVar11,*(float *)(this + 0xa4) * fVar7);
    fVar6 = 1.0 - fVar6;
    uVar9 = NEON_fmadd(*(undefined4 *)(this + 0x8c),fVar12,uVar9);
    uVar10 = NEON_fmadd(*(undefined4 *)(this + 0x9c),fVar12,uVar10);
    uVar8 = NEON_fmadd(*(undefined4 *)(this + 0xac),fVar12,uVar8);
    fVar4 = fVar4 * fVar6;
    fVar5 = fVar5 * fVar6;
    fVar3 = fVar3 * fVar6;
    *(undefined4 *)(this + 0x74) = uVar9;
    *(undefined4 *)(this + 0x78) = uVar10;
    *(undefined4 *)(this + 0x7c) = uVar8;
  }
  fVar6 = 1.0 / (float)param_2;
  *(ulong *)(this + 100) = CONCAT44(fVar5 * fVar6,fVar4 * fVar6);
  *(float *)(this + 0x6c) = fVar3 * fVar6;
  return;
}


