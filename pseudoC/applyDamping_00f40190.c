// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyDamping
// Entry Point: 00f40190
// Size: 476 bytes
// Signature: undefined __thiscall applyDamping(btRigidBody * this, float param_1)


/* btRigidBody::applyDamping(float) */

void __thiscall btRigidBody::applyDamping(btRigidBody *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar10 = *(float *)(this + 0x200);
  fVar1 = powf(1.0 - fVar10,param_1);
  fVar9 = *(float *)(this + 0x204);
  fVar12 = fVar1 * *(float *)(this + 0x17c);
  fVar11 = *(float *)(this + 0x180) * fVar1;
  fVar1 = *(float *)(this + 0x184) * fVar1;
  *(float *)(this + 0x17c) = fVar12;
  *(float *)(this + 0x180) = fVar11;
  *(float *)(this + 0x184) = fVar1;
  fVar2 = powf(1.0 - fVar9,param_1);
  fVar4 = fVar2 * *(float *)(this + 0x18c);
  fVar3 = *(float *)(this + 400) * fVar2;
  fVar2 = *(float *)(this + 0x194) * fVar2;
  *(float *)(this + 0x18c) = fVar4;
  *(float *)(this + 400) = fVar3;
  *(float *)(this + 0x194) = fVar2;
  if (this[0x208] != (btRigidBody)0x0) {
    uVar5 = NEON_fmadd(fVar3,fVar3,fVar4 * fVar4);
    fVar6 = (float)NEON_fmadd(fVar2,fVar2,uVar5);
    if (fVar6 < *(float *)(this + 0x214)) {
      uVar5 = NEON_fmadd(fVar11,fVar11,fVar12 * fVar12);
      fVar6 = (float)NEON_fmadd(fVar1,fVar1,uVar5);
      if (fVar6 < *(float *)(this + 0x210)) {
        fVar6 = *(float *)(this + 0x20c);
        fVar4 = fVar6 * fVar4;
        fVar3 = fVar6 * fVar3;
        fVar2 = fVar6 * fVar2;
        fVar12 = fVar6 * fVar12;
        fVar11 = fVar6 * fVar11;
        fVar1 = fVar6 * fVar1;
        *(float *)(this + 0x18c) = fVar4;
        *(float *)(this + 400) = fVar3;
        *(float *)(this + 0x194) = fVar2;
        *(float *)(this + 0x17c) = fVar12;
        *(float *)(this + 0x180) = fVar11;
        *(float *)(this + 0x184) = fVar1;
      }
    }
    uVar5 = NEON_fmadd(fVar11,fVar11,fVar12 * fVar12);
    fVar6 = (float)NEON_fmadd(fVar1,fVar1,uVar5);
    fVar6 = SQRT(fVar6);
    if (fVar6 < fVar10) {
      if (fVar6 <= 0.005) {
        *(undefined8 *)(this + 0x17c) = 0;
        *(undefined8 *)(this + 0x184) = 0;
      }
      else {
        fVar6 = -0.005 / fVar6;
        uVar7 = NEON_fmadd(fVar6,fVar12,fVar12);
        uVar8 = NEON_fmadd(fVar6,fVar11,fVar11);
        uVar5 = NEON_fmadd(fVar6,fVar1,fVar1);
        *(undefined4 *)(this + 0x17c) = uVar7;
        *(undefined4 *)(this + 0x180) = uVar8;
        *(undefined4 *)(this + 0x184) = uVar5;
      }
    }
    uVar5 = NEON_fmadd(fVar3,fVar3,fVar4 * fVar4);
    fVar1 = (float)NEON_fmadd(fVar2,fVar2,uVar5);
    fVar1 = SQRT(fVar1);
    if (fVar1 < fVar9) {
      if (fVar1 <= 0.005) {
        *(undefined8 *)(this + 0x18c) = 0;
        *(undefined8 *)(this + 0x194) = 0;
      }
      else {
        fVar1 = -0.005 / fVar1;
        uVar8 = NEON_fmadd(fVar1,fVar4,fVar4);
        uVar7 = NEON_fmadd(fVar1,fVar3,fVar3);
        uVar5 = NEON_fmadd(fVar1,fVar2,fVar2);
        *(undefined4 *)(this + 0x18c) = uVar8;
        *(undefined4 *)(this + 400) = uVar7;
        *(undefined4 *)(this + 0x194) = uVar5;
      }
    }
  }
  return;
}


