// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullProgramObject
// Entry Point: 00aab3c4
// Size: 4 bytes
// Signature: undefined __thiscall ~NullProgramObject(NullProgramObject * this)


/* NullProgramObject::~NullProgramObject() */

void __thiscall NullProgramObject::~NullProgramObject(NullProgramObject *this)

{
  operator_delete(this);
  return;
}


