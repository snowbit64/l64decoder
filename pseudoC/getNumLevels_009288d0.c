// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumLevels
// Entry Point: 009288d0
// Size: 88 bytes
// Signature: undefined __cdecl getNumLevels(uint param_1, uint param_2)


/* DestructionGeometryShared::getNumLevels(unsigned int, unsigned int) */

int DestructionGeometryShared::getNumLevels(uint param_1,uint param_2)

{
  int iVar1;
  
  while (iVar1 = DestructionChunk::getNumChildren(), iVar1 != 0) {
    param_2 = param_2 + 1;
    DestructionChunk::getFirstChildIndex();
  }
  return param_2 + 1;
}


