// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isWhiteSep
// Entry Point: 00b9118c
// Size: 68 bytes
// Signature: undefined __cdecl isWhiteSep(char * param_1)


/* Preprocessor::isWhiteSep(char const*) */

bool Preprocessor::isWhiteSep(char *param_1)

{
  byte bVar1;
  
  for (; (bVar1 = *param_1, bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100000600U) != 0 ||
         (bVar1 - 1 < 4)); param_1 = (char *)((byte *)param_1 + 1)) {
  }
  return bVar1 == 0;
}


