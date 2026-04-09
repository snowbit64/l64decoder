// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSHA256Hash
// Entry Point: 00be5be4
// Size: 24 bytes
// Signature: undefined __cdecl getSHA256Hash(uchar * param_1)


/* ShaHash::getSHA256Hash(unsigned char*) */

void ShaHash::getSHA256Hash(uchar *param_1)

{
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00be5bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x38))();
    return;
  }
  return;
}


