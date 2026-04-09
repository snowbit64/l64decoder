// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getChunkWorldTransformation
// Entry Point: 0092838c
// Size: 20 bytes
// Signature: undefined __thiscall getChunkWorldTransformation(DestructionGeometry * this, uint param_1)


/* DestructionGeometry::getChunkWorldTransformation(unsigned int) */

long __thiscall
DestructionGeometry::getChunkWorldTransformation(DestructionGeometry *this,uint param_1)

{
  return *(long *)(this + 0xd8) + (ulong)param_1 * 0x94 + 0x50;
}


