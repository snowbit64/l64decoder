// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTexCoords
// Entry Point: 00b82728
// Size: 12 bytes
// Signature: undefined __thiscall getTexCoords(TriangleSet * this, uint param_1)


/* TriangleSet::getTexCoords(unsigned int) const */

undefined8 __thiscall TriangleSet::getTexCoords(TriangleSet *this,uint param_1)

{
  return *(undefined8 *)(this + (ulong)param_1 * 8 + 0x18);
}


