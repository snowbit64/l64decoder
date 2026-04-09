// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRotMin
// Entry Point: 00990ee8
// Size: 12 bytes
// Signature: undefined __thiscall setRotMin(Bt2PhysicsJointObject * this, uint param_1, float param_2)


/* Bt2PhysicsJointObject::setRotMin(unsigned int, float) */

void __thiscall
Bt2PhysicsJointObject::setRotMin(Bt2PhysicsJointObject *this,uint param_1,float param_2)

{
  *(float *)(this + (ulong)param_1 * 4 + 0x4c) = param_2;
  return;
}


