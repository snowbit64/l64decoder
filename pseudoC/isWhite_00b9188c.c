// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isWhite
// Entry Point: 00b9188c
// Size: 36 bytes
// Signature: undefined __cdecl isWhite(char param_1)


/* Preprocessor::isWhite(char) */

uint Preprocessor::isWhite(char param_1)

{
  return (uint)(((byte)param_1 - 9 & 0xff) < 0x18) & 0x800003U >> (ulong)((byte)param_1 - 9 & 0x1f);
}


