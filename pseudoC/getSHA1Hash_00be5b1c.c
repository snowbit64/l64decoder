// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSHA1Hash
// Entry Point: 00be5b1c
// Size: 24 bytes
// Signature: undefined __cdecl getSHA1Hash(uchar * param_1)


/* ShaHash::getSHA1Hash(unsigned char*) */

void ShaHash::getSHA1Hash(uchar *param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00be5b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x38))();
    return;
  }
  return;
}


