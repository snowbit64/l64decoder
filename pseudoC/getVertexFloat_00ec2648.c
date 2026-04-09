// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVertexFloat
// Entry Point: 00ec2648
// Size: 24 bytes
// Signature: undefined __thiscall getVertexFloat(MyVertexIndex * this, uint param_1)


/* FLOAT_MATH::MyVertexIndex::getVertexFloat(unsigned int) const */

long __thiscall FLOAT_MATH::MyVertexIndex::getVertexFloat(MyVertexIndex *this,uint param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(this + 0x60) != *(long *)(this + 0x68)) {
    lVar1 = *(long *)(this + 0x60);
  }
  return lVar1 + (ulong)(param_1 * 3) * 4;
}


