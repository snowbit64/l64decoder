// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a7028
// Entry Point: 007a7028
// Size: 64 bytes
// Signature: undefined FUN_007a7028(void)


void FUN_007a7028(undefined8 param_1,uint *param_2)

{
  Bt2PhysicsRBObject *this;
  
  this = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
  if (((*(uint *)(this + 8) ^ 0xffffffff) & 0x88) == 0) {
    Bt2PhysicsRBObject::setSolverIterationCount(this,*param_2);
    return;
  }
  return;
}


