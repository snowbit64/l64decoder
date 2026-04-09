// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPositionDouble
// Entry Point: 00ec291c
// Size: 16 bytes
// Signature: undefined __thiscall getPositionDouble(KdTree * this, uint param_1)


/* FLOAT_MATH::VERTEX_INDEX::KdTree::getPositionDouble(unsigned int) const */

long __thiscall FLOAT_MATH::VERTEX_INDEX::KdTree::getPositionDouble(KdTree *this,uint param_1)

{
  return *(long *)(this + 0x28) + (ulong)(param_1 * 3) * 8;
}


