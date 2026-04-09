// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getChunkRenderTransformation
// Entry Point: 00928314
// Size: 20 bytes
// Signature: undefined __thiscall getChunkRenderTransformation(DestructionGeometry * this, uint param_1)


/* DestructionGeometry::getChunkRenderTransformation(unsigned int) */

long __thiscall
DestructionGeometry::getChunkRenderTransformation(DestructionGeometry *this,uint param_1)

{
  return *(long *)(this + 0xd8) + (ulong)param_1 * 0x94 + 0x10;
}


