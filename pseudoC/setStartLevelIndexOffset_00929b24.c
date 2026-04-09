// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setStartLevelIndexOffset
// Entry Point: 00929b24
// Size: 8 bytes
// Signature: undefined __thiscall setStartLevelIndexOffset(DestructionChunk * this, int param_1)


/* DestructionChunk::setStartLevelIndexOffset(int) */

void __thiscall DestructionChunk::setStartLevelIndexOffset(DestructionChunk *this,int param_1)

{
  *(int *)(this + 0x84) = param_1;
  return;
}


