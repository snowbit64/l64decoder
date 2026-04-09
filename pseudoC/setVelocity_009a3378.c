// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVelocity
// Entry Point: 009a3378
// Size: 160 bytes
// Signature: undefined __thiscall setVelocity(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, SetVelocity * param_2)


/* Bt2ScenegraphPhysicsContext::setVelocity(TransformGroup*,
   Bt2ScenegraphPhysicsContext::SetVelocity const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::setVelocity
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,SetVelocity *param_2)

{
  SetVelocity SVar1;
  long lVar2;
  btCollisionObject *this_00;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  lVar2 = RawTransformGroup::getPhysicsObject();
  if ((*(byte *)(lVar2 + 8) >> 3 & 1) != 0) {
    lVar2 = RawTransformGroup::getPhysicsObject();
    this_00 = *(btCollisionObject **)(lVar2 + 0x30);
    if ((this_00 != (btCollisionObject *)0x0) && (((byte)this_00[0xe0] & 3) == 0)) {
      uVar6 = *(undefined4 *)param_2;
      uVar4 = *(undefined4 *)(param_2 + 4);
      SVar1 = param_2[0xc];
      uVar5 = *(undefined4 *)(param_2 + 8);
      *(int *)(this_00 + 0x148) = *(int *)(this_00 + 0x148) + 1;
      if (SVar1 == (SetVelocity)0x0) {
        puVar3 = (undefined4 *)(this_00 + 0x198);
        *(undefined4 *)(this_00 + 0x18c) = uVar6;
        *(undefined4 *)(this_00 + 400) = uVar4;
        *(undefined4 *)(this_00 + 0x194) = uVar5;
      }
      else {
        *(undefined4 *)(this_00 + 0x17c) = uVar6;
        puVar3 = (undefined4 *)(this_00 + 0x188);
        *(undefined4 *)(this_00 + 0x180) = uVar4;
        *(undefined4 *)(this_00 + 0x184) = uVar5;
      }
      *puVar3 = 0;
      btCollisionObject::activate(this_00,false);
      return;
    }
  }
  return;
}


