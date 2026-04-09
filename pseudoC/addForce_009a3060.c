// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addForce
// Entry Point: 009a3060
// Size: 524 bytes
// Signature: undefined __thiscall addForce(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, AddForce * param_2)


/* Bt2ScenegraphPhysicsContext::addForce(TransformGroup*, Bt2ScenegraphPhysicsContext::AddForce
   const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::addForce
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,AddForce *param_2)

{
  long lVar1;
  long lVar2;
  btRigidBody *this_00;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float local_58;
  float fStack_54;
  float local_50;
  undefined4 local_4c;
  undefined8 local_48;
  float local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = RawTransformGroup::getPhysicsObject();
  if ((*(byte *)(lVar2 + 8) >> 3 & 1) != 0) {
    lVar2 = RawTransformGroup::getPhysicsObject();
    this_00 = *(btRigidBody **)(lVar2 + 0x30);
    if ((this_00 != (btRigidBody *)0x0) && (((byte)this_00[0xe0] & 3) == 0)) {
      local_40 = *(float *)(param_2 + 8);
      local_58 = *(float *)(param_2 + 0xc);
      fStack_54 = *(float *)(param_2 + 0x10);
      local_50 = *(float *)(param_2 + 0x14);
      local_48 = *(undefined8 *)param_2;
      local_3c = 0;
      if (param_2[0x18] == (AddForce)0x0) {
        local_58 = local_58 - *(float *)(this_00 + 0x38);
        fStack_54 = fStack_54 - *(float *)(this_00 + 0x3c);
        local_50 = local_50 - *(float *)(this_00 + 0x40);
      }
      else {
        lVar2 = *(long *)(this_00 + 0x228);
        if (lVar2 != 0) {
          uVar8 = NEON_fmadd(local_58,*(undefined4 *)(lVar2 + 0x58),
                             fStack_54 * *(float *)(lVar2 + 0x5c));
          uVar9 = NEON_fmadd(local_58,*(undefined4 *)(lVar2 + 0x68),
                             fStack_54 * *(float *)(lVar2 + 0x6c));
          uVar6 = NEON_fmadd(local_58,*(undefined4 *)(lVar2 + 0x78),
                             fStack_54 * *(float *)(lVar2 + 0x7c));
          local_58 = (float)NEON_fmadd(local_50,*(undefined4 *)(lVar2 + 0x60),uVar8);
          fStack_54 = (float)NEON_fmadd(local_50,*(undefined4 *)(lVar2 + 0x70),uVar9);
          local_50 = (float)NEON_fmadd(local_50,*(undefined4 *)(lVar2 + 0x80),uVar6);
          local_58 = local_58 + *(float *)(lVar2 + 0x88);
          fStack_54 = fStack_54 + *(float *)(lVar2 + 0x8c);
          local_50 = local_50 + *(float *)(lVar2 + 0x90);
        }
        uVar6 = NEON_fmadd(*(undefined4 *)(this_00 + 8),local_58,
                           *(float *)(this_00 + 0xc) * fStack_54);
        uVar8 = NEON_fmadd(*(undefined4 *)(this_00 + 0x18),local_58,
                           fStack_54 * *(float *)(this_00 + 0x1c));
        uVar9 = NEON_fmadd(*(undefined4 *)(this_00 + 0x28),local_58,
                           fStack_54 * *(float *)(this_00 + 0x2c));
        local_58 = (float)NEON_fmadd(*(undefined4 *)(this_00 + 0x10),local_50,uVar6);
        fStack_54 = (float)NEON_fmadd(*(undefined4 *)(this_00 + 0x20),local_50,uVar8);
        local_50 = (float)NEON_fmadd(*(undefined4 *)(this_00 + 0x30),local_50,uVar9);
      }
      local_4c = 0;
      if (param_2[0x19] == (AddForce)0x0) {
        fVar4 = (float)local_48 * (float)*(undefined8 *)(this_00 + 0x1a0);
        fVar5 = (float)((ulong)local_48 >> 0x20) *
                (float)((ulong)*(undefined8 *)(this_00 + 0x1a0) >> 0x20);
        fVar3 = local_40 * *(float *)(this_00 + 0x1a8);
        fVar7 = (float)NEON_fmadd(fStack_54,fVar3,-local_50 * fVar5);
        *(ulong *)(this_00 + 0x1e0) =
             CONCAT44(fVar5 + (float)((ulong)*(undefined8 *)(this_00 + 0x1e0) >> 0x20),
                      fVar4 + (float)*(undefined8 *)(this_00 + 0x1e0));
        *(float *)(this_00 + 0x1e8) = fVar3 + *(float *)(this_00 + 0x1e8);
        *(float *)(this_00 + 0x1f0) =
             fVar7 * *(float *)(this_00 + 0x278) + *(float *)(this_00 + 0x1f0);
        *(float *)(this_00 + 500) =
             (fVar3 * -local_58 + local_50 * fVar4) * *(float *)(this_00 + 0x27c) +
             *(float *)(this_00 + 500);
        *(float *)(this_00 + 0x1f8) =
             (-fStack_54 * fVar4 + local_58 * fVar5) * *(float *)(this_00 + 0x280) +
             *(float *)(this_00 + 0x1f8);
      }
      else {
        btRigidBody::applyImpulse(this_00,(btVector3 *)&local_48,(btVector3 *)&local_58);
      }
      btCollisionObject::activate((btCollisionObject *)this_00,false);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


