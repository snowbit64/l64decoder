// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2Rope
// Entry Point: 009bb2d8
// Size: 16 bytes
// Signature: undefined __thiscall ~Bt2Rope(Bt2Rope * this)


/* Bt2Rope::~Bt2Rope() */

void __thiscall Bt2Rope::~Bt2Rope(Bt2Rope *this)

{
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
    return;
  }
  return;
}


