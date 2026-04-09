// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setIsRotLimited
// Entry Point: 00990ed0
// Size: 12 bytes
// Signature: undefined __thiscall setIsRotLimited(Bt2PhysicsJointObject * this, uint param_1, bool param_2)


/* Bt2PhysicsJointObject::setIsRotLimited(unsigned int, bool) */

void __thiscall
Bt2PhysicsJointObject::setIsRotLimited(Bt2PhysicsJointObject *this,uint param_1,bool param_2)

{
  this[(ulong)param_1 + 0x48] = (Bt2PhysicsJointObject)param_2;
  return;
}


