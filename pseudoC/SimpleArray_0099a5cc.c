// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SimpleArray
// Entry Point: 0099a5cc
// Size: 8 bytes
// Signature: undefined __thiscall ~SimpleArray(SimpleArray<Bt2ScenegraphPhysicsContext::JointCommand,true,32u> * this)


/* Bt2ScenegraphPhysicsContext::SimpleArray<Bt2ScenegraphPhysicsContext::JointCommand, true,
   32u>::~SimpleArray() */

void __thiscall
Bt2ScenegraphPhysicsContext::SimpleArray<Bt2ScenegraphPhysicsContext::JointCommand,true,32u>::
~SimpleArray(SimpleArray<Bt2ScenegraphPhysicsContext::JointCommand,true,32u> *this)

{
  operator_delete__(*(void **)this);
  return;
}


