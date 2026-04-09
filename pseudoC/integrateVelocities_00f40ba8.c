// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: integrateVelocities
// Entry Point: 00f40ba8
// Size: 264 bytes
// Signature: undefined __thiscall integrateVelocities(btRigidBody * this, float param_1)


/* btRigidBody::integrateVelocities(float) */

void __thiscall btRigidBody::integrateVelocities(btRigidBody *this,float param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  
  if (((byte)this[0xe0] & 3) == 0) {
    fVar2 = *(float *)(this + 0x1f0);
    uVar8 = *(undefined4 *)(this + 500);
    uVar10 = *(undefined4 *)(this + 0x1f8);
    uVar1 = NEON_fmadd(uVar8,*(undefined4 *)(this + 0x150),fVar2 * *(float *)(this + 0x14c));
    uVar4 = NEON_fmadd(*(undefined4 *)(this + 0x160),uVar8,*(float *)(this + 0x15c) * fVar2);
    uVar1 = NEON_fmadd(uVar10,*(undefined4 *)(this + 0x154),uVar1);
    uVar5 = NEON_fmadd(*(undefined4 *)(this + 0x164),uVar10,uVar4);
    uVar4 = NEON_fmadd(*(undefined4 *)(this + 0x170),uVar8,*(float *)(this + 0x16c) * fVar2);
    fVar2 = (float)NEON_fmadd(uVar1,param_1,*(undefined4 *)(this + 0x18c));
    uVar1 = NEON_fmadd(*(undefined4 *)(this + 0x174),uVar10,uVar4);
    fVar3 = (float)NEON_fmadd(uVar5,param_1,*(undefined4 *)(this + 400));
    uVar11 = *(undefined8 *)(this + 0x17c);
    *(float *)(this + 0x18c) = fVar2;
    fVar6 = (float)NEON_fmadd(uVar1,param_1,*(undefined4 *)(this + 0x194));
    *(float *)(this + 400) = fVar3;
    uVar1 = NEON_fmadd(fVar3,fVar3,fVar2 * fVar2);
    fVar9 = *(float *)(this + 0x19c) * param_1;
    *(float *)(this + 0x194) = fVar6;
    fVar7 = (float)NEON_fmadd(fVar6,fVar6,uVar1);
    uVar1 = NEON_fmadd(*(undefined4 *)(this + 0x1e8),fVar9,*(undefined4 *)(this + 0x184));
    *(ulong *)(this + 0x17c) =
         CONCAT44((float)((ulong)uVar11 >> 0x20) +
                  (float)((ulong)*(undefined8 *)(this + 0x1e0) >> 0x20) * fVar9,
                  (float)uVar11 + (float)*(undefined8 *)(this + 0x1e0) * fVar9);
    *(undefined4 *)(this + 0x184) = uVar1;
    if (1.570796 < SQRT(fVar7) * param_1) {
      fVar7 = 1.570796 / (SQRT(fVar7) * param_1);
      *(float *)(this + 0x18c) = fVar7 * fVar2;
      *(float *)(this + 400) = fVar7 * fVar3;
      *(float *)(this + 0x194) = fVar7 * fVar6;
      return;
    }
  }
  return;
}


