// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getImportId
// Entry Point: 00efb7e8
// Size: 12 bytes
// Signature: undefined __cdecl getImportId(int param_1)


/* Luau::BytecodeBuilder::getImportId(int) */

uint Luau::BytecodeBuilder::getImportId(int param_1)

{
  return param_1 << 0x14 | 0x40000000;
}


