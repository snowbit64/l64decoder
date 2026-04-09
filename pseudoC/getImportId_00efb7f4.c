// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getImportId
// Entry Point: 00efb7f4
// Size: 16 bytes
// Signature: undefined __cdecl getImportId(int param_1, int param_2)


/* Luau::BytecodeBuilder::getImportId(int, int) */

uint Luau::BytecodeBuilder::getImportId(int param_1,int param_2)

{
  return param_1 << 0x14 | param_2 << 10 | 0x80000000;
}


