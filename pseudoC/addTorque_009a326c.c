// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTorque
// Entry Point: 009a326c
// Size: 268 bytes
// Signature: undefined __thiscall addTorque(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, AddTorque * param_2)


/* Bt2ScenegraphPhysicsContext::addTorque(TransformGroup*, Bt2ScenegraphPhysicsContext::AddTorque
   const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::addTorque
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,AddTorque *param_2)

{
  long lVar1;
  btCollisionObject *this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  
  lVar1 = RawTransformGroup::getPhysicsObject();
  if ((*(byte *)(lVar1 + 8) >> 3 & 1) != 0) {
    lVar1 = RawTransformGroup::getPhysicsObject();
    this_00 = *(btCollisionObject **)(lVar1 + 0x30);
    if ((this_00 != (btCollisionObject *)0x0) && (((byte)this_00[0xe0] & 3) == 0)) {
      fVar2 = *(float *)(param_2 + 8);
      fVar4 = (float)*(undefined8 *)param_2;
      fVar5 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
      if (param_2[0xc] == (AddTorque)0x0) {
        *(ulong *)(this_00 + 0x1f0) =
             CONCAT44(fVar5 * (float)((ulong)*(undefined8 *)(this_00 + 0x278) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(this_00 + 0x1f0) >> 0x20),
                      fVar4 * (float)*(undefined8 *)(this_00 + 0x278) +
                      (float)*(undefined8 *)(this_00 + 0x1f0));
        *(float *)(this_00 + 0x1f8) =
             fVar2 * *(float *)(this_00 + 0x280) + *(float *)(this_00 + 0x1f8);
      }
      else {
        fVar3 = (float)NEON_fmadd(*(undefined4 *)(this_00 + 0x174),fVar2,
                                  *(float *)(this_00 + 0x170) * fVar5 +
                                  *(float *)(this_00 + 0x16c) * fVar4);
        uVar6 = *(undefined8 *)(this_00 + 0x18c);
        *(ulong *)(this_00 + 0x18c) =
             CONCAT44((*(float *)(this_00 + 0x160) * fVar5 + *(float *)(this_00 + 0x15c) * fVar4 +
                      *(float *)(this_00 + 0x164) * fVar2) *
                      (float)((ulong)*(undefined8 *)(this_00 + 0x278) >> 0x20) +
                      (float)((ulong)uVar6 >> 0x20),
                      (*(float *)(this_00 + 0x150) * fVar5 + *(float *)(this_00 + 0x14c) * fVar4 +
                      *(float *)(this_00 + 0x154) * fVar2) * (float)*(undefined8 *)(this_00 + 0x278)
                      + (float)uVar6);
        *(float *)(this_00 + 0x194) =
             fVar3 * *(float *)(this_00 + 0x280) + *(float *)(this_00 + 0x194);
      }
      btCollisionObject::activate(this_00,false);
      return;
    }
  }
  return;
}


