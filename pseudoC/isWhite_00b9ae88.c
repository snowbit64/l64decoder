// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isWhite
// Entry Point: 00b9ae88
// Size: 36 bytes
// Signature: undefined __cdecl isWhite(char param_1)


/* StringArithmeticUtil::isWhite(char) */

uint StringArithmeticUtil::isWhite(char param_1)

{
  return (uint)(((byte)param_1 - 9 & 0xff) < 0x18) & 0x800003U >> (ulong)((byte)param_1 - 9 & 0x1f);
}


