// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getChunkDamage
// Entry Point: 00925db8
// Size: 20 bytes
// Signature: undefined __thiscall getChunkDamage(DestructionShape * this, uint param_1)


/* DestructionShape::getChunkDamage(unsigned int) const */

undefined4 __thiscall DestructionShape::getChunkDamage(DestructionShape *this,uint param_1)

{
  return *(undefined4 *)(*(long *)(this + 0x228) + (ulong)param_1 * 0x30);
}


