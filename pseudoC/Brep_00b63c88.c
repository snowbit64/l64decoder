// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Brep
// Entry Point: 00b63c88
// Size: 36 bytes
// Signature: undefined __thiscall ~Brep(Brep * this)


/* Brep::~Brep() */

void __thiscall Brep::~Brep(Brep *this)

{
  ~Brep(this);
  operator_delete(this);
  return;
}


