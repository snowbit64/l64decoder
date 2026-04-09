// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ShaHash
// Entry Point: 00be5ca0
// Size: 92 bytes
// Signature: undefined __thiscall ~ShaHash(ShaHash * this)


/* ShaHash::~ShaHash() */

void __thiscall ShaHash::~ShaHash(ShaHash *this)

{
  *(undefined ***)this = &PTR__ShaHash_00fec210;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  if (*(long **)(this + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00be5cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}


