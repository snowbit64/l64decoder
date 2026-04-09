// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVertexDouble
// Entry Point: 00ec2660
// Size: 24 bytes
// Signature: undefined __thiscall getVertexDouble(MyVertexIndex * this, uint param_1)


/* FLOAT_MATH::MyVertexIndex::getVertexDouble(unsigned int) const */

long __thiscall FLOAT_MATH::MyVertexIndex::getVertexDouble(MyVertexIndex *this,uint param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(this + 0x48) != *(long *)(this + 0x50)) {
    lVar1 = *(long *)(this + 0x48);
  }
  return lVar1 + (ulong)(param_1 * 3) * 8;
}


