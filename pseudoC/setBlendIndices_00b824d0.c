// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBlendIndices
// Entry Point: 00b824d0
// Size: 36 bytes
// Signature: undefined __thiscall setBlendIndices(TriangleSet * this, uchar * param_1, uint param_2)


/* TriangleSet::setBlendIndices(unsigned char*, unsigned int) */

void __thiscall TriangleSet::setBlendIndices(TriangleSet *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if ((*(uint *)(this + 0xc) & 0x100) != 0) {
    uVar1 = 1;
  }
  memcpy((void *)(*(long *)(this + 0x58) + (ulong)(uVar1 * param_2)),param_1,(ulong)uVar1);
  return;
}


