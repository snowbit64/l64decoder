// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a71fc
// Entry Point: 007a71fc
// Size: 56 bytes
// Signature: undefined FUN_007a71fc(void)


void FUN_007a71fc(undefined8 param_1,float *param_2)

{
  Bt2PhysicsRBObject *this;
  
  this = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
  if (((byte)this[8] >> 3 & 1) == 0) {
    return;
  }
  Bt2PhysicsRBObject::setFrictionVelocity(this,*param_2);
  return;
}


