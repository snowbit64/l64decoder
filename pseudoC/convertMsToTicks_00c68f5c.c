// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertMsToTicks
// Entry Point: 00c68f5c
// Size: 28 bytes
// Signature: undefined __cdecl convertMsToTicks(double param_1)


/* Watch::convertMsToTicks(double) */

long Watch::convertMsToTicks(double param_1)

{
  double dVar1;
  
  dVar1 = (double)NEON_fmadd(param_1,0x408f400000000000,0x3fe0000000000000);
  return (long)dVar1;
}


