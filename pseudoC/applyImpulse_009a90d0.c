// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyImpulse
// Entry Point: 009a90d0
// Size: 272 bytes
// Signature: undefined __thiscall applyImpulse(btRigidBody * this, btVector3 * param_1, btVector3 * param_2)


/* btRigidBody::applyImpulse(btVector3 const&, btVector3 const&) */

void __thiscall btRigidBody::applyImpulse(btRigidBody *this,btVector3 *param_1,btVector3 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  fVar1 = *(float *)(this + 0x19c);
  if (fVar1 != 0.0) {
    fVar6 = *(float *)(param_1 + 8);
    fVar7 = (float)*(undefined8 *)(this + 0x1a0);
    fVar4 = (float)((ulong)*(undefined8 *)(this + 0x1a0) >> 0x20);
    uVar9 = *(undefined8 *)(this + 0x17c);
    *(ulong *)(this + 0x17c) =
         CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) * fVar4 * fVar1 +
                  (float)((ulong)uVar9 >> 0x20),
                  (float)*(undefined8 *)param_1 * fVar7 * fVar1 + (float)uVar9);
    *(float *)(this + 0x184) = fVar1 * fVar6 * *(float *)(this + 0x1a8) + *(float *)(this + 0x184);
    fVar1 = *(float *)(param_1 + 8) * *(float *)(this + 0x1a8);
    fVar7 = *(float *)param_1 * fVar7;
    fVar4 = *(float *)(param_1 + 4) * fVar4;
    fVar6 = (float)NEON_fmadd(*(float *)(param_2 + 8),fVar7,fVar1 * -*(float *)param_2);
    uVar2 = NEON_fmadd(*(float *)(param_2 + 4),fVar1,fVar4 * -*(float *)(param_2 + 8));
    uVar3 = NEON_fmadd(*(float *)param_2,fVar4,fVar7 * -*(float *)(param_2 + 4));
    uVar5 = NEON_fmadd(*(undefined4 *)(this + 0x14c),uVar2,*(float *)(this + 0x150) * fVar6);
    uVar8 = NEON_fmadd(*(undefined4 *)(this + 0x15c),uVar2,fVar6 * *(float *)(this + 0x160));
    uVar2 = NEON_fmadd(*(undefined4 *)(this + 0x16c),uVar2,fVar6 * *(float *)(this + 0x170));
    fVar7 = (float)NEON_fmadd(*(undefined4 *)(this + 0x154),uVar3,uVar5);
    fVar4 = (float)NEON_fmadd(*(undefined4 *)(this + 0x164),uVar3,uVar8);
    fVar1 = (float)NEON_fmadd(*(undefined4 *)(this + 0x174),uVar3,uVar2);
    *(float *)(this + 0x18c) = fVar7 * *(float *)(this + 0x278) + *(float *)(this + 0x18c);
    *(float *)(this + 400) = fVar4 * *(float *)(this + 0x27c) + *(float *)(this + 400);
    *(float *)(this + 0x194) = fVar1 * *(float *)(this + 0x280) + *(float *)(this + 0x194);
  }
  return;
}


