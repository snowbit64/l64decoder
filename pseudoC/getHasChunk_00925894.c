// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHasChunk
// Entry Point: 00925894
// Size: 28 bytes
// Signature: undefined __thiscall getHasChunk(DestructionShape * this, uint param_1)


/* DestructionShape::getHasChunk(unsigned int) const */

bool __thiscall DestructionShape::getHasChunk(DestructionShape *this,uint param_1)

{
  return *(int *)(*(long *)(this + 0x228) + (ulong)param_1 * 0x30 + 0x20) != 0;
}


