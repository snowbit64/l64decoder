// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getImportId
// Entry Point: 00efb804
// Size: 20 bytes
// Signature: undefined __cdecl getImportId(int param_1, int param_2, int param_3)


/* Luau::BytecodeBuilder::getImportId(int, int, int) */

uint Luau::BytecodeBuilder::getImportId(int param_1,int param_2,int param_3)

{
  return param_1 << 0x14 | param_2 << 10 | param_3 | 0xc0000000;
}


