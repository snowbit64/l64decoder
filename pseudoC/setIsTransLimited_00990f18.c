// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setIsTransLimited
// Entry Point: 00990f18
// Size: 12 bytes
// Signature: undefined __thiscall setIsTransLimited(Bt2PhysicsJointObject * this, uint param_1, bool param_2)


/* Bt2PhysicsJointObject::setIsTransLimited(unsigned int, bool) */

void __thiscall
Bt2PhysicsJointObject::setIsTransLimited(Bt2PhysicsJointObject *this,uint param_1,bool param_2)

{
  this[(ulong)param_1 + 100] = (Bt2PhysicsJointObject)param_2;
  return;
}


