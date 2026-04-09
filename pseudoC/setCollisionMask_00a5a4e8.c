// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCollisionMask
// Entry Point: 00a5a4e8
// Size: 64 bytes
// Signature: undefined __cdecl setCollisionMask(TransformGroup * param_1, uint param_2)


/* PhysicsObjectUtil::setCollisionMask(TransformGroup*, unsigned int) */

undefined4 PhysicsObjectUtil::setCollisionMask(TransformGroup *param_1,uint param_2)

{
  Bt2PhysicsRBObject *this;
  undefined4 uVar1;
  
  this = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
  if (((byte)this[8] >> 3 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(this + 0x58);
    Bt2PhysicsRBObject::setCollisionMask(this,param_2);
  }
  return uVar1;
}


