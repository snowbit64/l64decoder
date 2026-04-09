// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBlendWeights
// Entry Point: 00b824ac
// Size: 36 bytes
// Signature: undefined __thiscall setBlendWeights(TriangleSet * this, float * param_1, uint param_2)


/* TriangleSet::setBlendWeights(float const*, unsigned int) */

void __thiscall TriangleSet::setBlendWeights(TriangleSet *this,float *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 4;
  if ((*(uint *)(this + 0xc) & 0x100) != 0) {
    iVar1 = 1;
  }
  memcpy((void *)(*(long *)(this + 0x50) + (ulong)(iVar1 * param_2) * 4),param_1,
         (ulong)(uint)(iVar1 << 2));
  return;
}


