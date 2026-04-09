// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMass
// Entry Point: 00a5a554
// Size: 72 bytes
// Signature: undefined __cdecl setMass(TransformGroup * param_1, float param_2)


/* PhysicsObjectUtil::setMass(TransformGroup*, float) */

undefined4 PhysicsObjectUtil::setMass(TransformGroup *param_1,float param_2)

{
  Bt2PhysicsRBObject *this;
  undefined4 uVar1;
  
  this = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
  uVar1 = 0;
  if ((*(uint *)(this + 8) & 0x48) == 8) {
    uVar1 = *(undefined4 *)(this + 0x78);
    Bt2PhysicsRBObject::setMass(this,param_2);
  }
  return uVar1;
}


