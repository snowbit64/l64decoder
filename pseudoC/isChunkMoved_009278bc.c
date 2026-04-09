// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isChunkMoved
// Entry Point: 009278bc
// Size: 28 bytes
// Signature: undefined __thiscall isChunkMoved(DestructionGeometry * this, uint param_1)


/* DestructionGeometry::isChunkMoved(unsigned int) */

bool __thiscall DestructionGeometry::isChunkMoved(DestructionGeometry *this,uint param_1)

{
  return *(int *)(*(long *)(this + 0xd8) + (ulong)param_1 * 0x94 + 0xc) == 2;
}


