// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a7154
// Entry Point: 007a7154
// Size: 56 bytes
// Signature: undefined FUN_007a7154(void)


void FUN_007a7154(undefined8 param_1,float *param_2)

{
  Bt2PhysicsRBObject *this;
  
  this = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
  if (((byte)this[8] >> 3 & 1) == 0) {
    return;
  }
  Bt2PhysicsRBObject::setLinearDamping(this,*param_2);
  return;
}


