// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sizeIsValid
// Entry Point: 00a99a84
// Size: 32 bytes
// Signature: undefined __cdecl sizeIsValid(uint param_1)


/* SoftVirtualTextureDesc::sizeIsValid(unsigned int) */

bool SoftVirtualTextureDesc::sizeIsValid(uint param_1)

{
  if (param_1 < 0x4001) {
    return (param_1 & param_1 - 1) == 0;
  }
  return false;
}


