// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getChunk
// Entry Point: 00929134
// Size: 12 bytes
// Signature: undefined __thiscall getChunk(DestructionGeometryShared * this, uint param_1)


/* DestructionGeometryShared::getChunk(unsigned int) */

undefined8 __thiscall
DestructionGeometryShared::getChunk(DestructionGeometryShared *this,uint param_1)

{
  return *(undefined8 *)(*(long *)(this + 0x58) + (ulong)param_1 * 8);
}


