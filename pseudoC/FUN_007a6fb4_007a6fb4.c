// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a6fb4
// Entry Point: 007a6fb4
// Size: 116 bytes
// Signature: undefined FUN_007a6fb4(void)


void FUN_007a6fb4(undefined8 param_1,float *param_2)

{
  long lVar1;
  Bt2PhysicsRBObject *this;
  float local_34;
  float fStack_30;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
  if (((*(uint *)(this + 8) ^ 0xffffffff) & 0x88) == 0) {
    local_34 = *param_2;
    fStack_30 = param_2[4];
    local_2c = param_2[8];
    Bt2PhysicsRBObject::setCenterOfMass(this,&local_34);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


