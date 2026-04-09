// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getErrorString
// Entry Point: 00e37b64
// Size: 40 bytes
// Signature: undefined __thiscall getErrorString(Soloud * this, uint param_1)


/* SoLoud::Soloud::getErrorString(unsigned int) const */

char * __thiscall SoLoud::Soloud::getErrorString(Soloud *this,uint param_1)

{
  if (param_1 < 7) {
    return &DAT_0055f9dc + *(int *)(&DAT_0055f9dc + (long)(int)param_1 * 4);
  }
  return "Other error";
}


