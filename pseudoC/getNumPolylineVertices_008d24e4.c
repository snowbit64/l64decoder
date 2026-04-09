// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumPolylineVertices
// Entry Point: 008d24e4
// Size: 36 bytes
// Signature: undefined __thiscall getNumPolylineVertices(FillPlaneGeometry * this, uint param_1)


/* FillPlaneGeometry::getNumPolylineVertices(unsigned int) const */

int __thiscall FillPlaneGeometry::getNumPolylineVertices(FillPlaneGeometry *this,uint param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(this + 0xb0) + (ulong)param_1 * 8);
  return (int)((ulong)(*(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10)) >> 2) * -0x55555555;
}


