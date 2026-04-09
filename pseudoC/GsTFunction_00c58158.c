// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GsTFunction
// Entry Point: 00c58158
// Size: 32 bytes
// Signature: undefined __thiscall ~GsTFunction(GsTFunction * this)


/* GsTFunction::~GsTFunction() */

void __thiscall GsTFunction::~GsTFunction(GsTFunction *this)

{
  *(undefined ***)this = &PTR__GsTFunction_00fee7a0;
  if (*(long *)(this + 0x20) != 0) {
    *(long *)(this + 0x28) = *(long *)(this + 0x20);
  }
  return;
}


