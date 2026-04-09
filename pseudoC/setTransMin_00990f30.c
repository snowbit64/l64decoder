// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTransMin
// Entry Point: 00990f30
// Size: 12 bytes
// Signature: undefined __thiscall setTransMin(Bt2PhysicsJointObject * this, uint param_1, float param_2)


/* Bt2PhysicsJointObject::setTransMin(unsigned int, float) */

void __thiscall
Bt2PhysicsJointObject::setTransMin(Bt2PhysicsJointObject *this,uint param_1,float param_2)

{
  *(float *)(this + (ulong)param_1 * 4 + 0x68) = param_2;
  return;
}


