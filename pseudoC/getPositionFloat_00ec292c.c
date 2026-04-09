// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPositionFloat
// Entry Point: 00ec292c
// Size: 16 bytes
// Signature: undefined __thiscall getPositionFloat(KdTree * this, uint param_1)


/* FLOAT_MATH::VERTEX_INDEX::KdTree::getPositionFloat(unsigned int) const */

long __thiscall FLOAT_MATH::VERTEX_INDEX::KdTree::getPositionFloat(KdTree *this,uint param_1)

{
  return *(long *)(this + 0x40) + (ulong)(param_1 * 3) * 4;
}


