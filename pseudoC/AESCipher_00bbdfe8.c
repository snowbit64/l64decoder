// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AESCipher
// Entry Point: 00bbdfe8
// Size: 92 bytes
// Signature: undefined __thiscall ~AESCipher(AESCipher * this)


/* AESCipher::~AESCipher() */

void __thiscall AESCipher::~AESCipher(AESCipher *this)

{
  *(undefined ***)this = &PTR__AESCipher_00feb610;
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 8))();
  }
  if (*(long **)(this + 0x40) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00bbe034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x40) + 8))();
    return;
  }
  return;
}


