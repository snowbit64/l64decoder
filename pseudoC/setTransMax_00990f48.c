// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTransMax
// Entry Point: 00990f48
// Size: 12 bytes
// Signature: undefined __thiscall setTransMax(Bt2PhysicsJointObject * this, uint param_1, float param_2)


/* Bt2PhysicsJointObject::setTransMax(unsigned int, float) */

void __thiscall
Bt2PhysicsJointObject::setTransMax(Bt2PhysicsJointObject *this,uint param_1,float param_2)

{
  *(float *)(this + (ulong)param_1 * 4 + 0x74) = param_2;
  return;
}


