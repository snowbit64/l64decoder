// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRotMax
// Entry Point: 00990f00
// Size: 12 bytes
// Signature: undefined __thiscall setRotMax(Bt2PhysicsJointObject * this, uint param_1, float param_2)


/* Bt2PhysicsJointObject::setRotMax(unsigned int, float) */

void __thiscall
Bt2PhysicsJointObject::setRotMax(Bt2PhysicsJointObject *this,uint param_1,float param_2)

{
  *(float *)(this + (ulong)param_1 * 4 + 0x58) = param_2;
  return;
}


