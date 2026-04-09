// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setNodeFixed
// Entry Point: 009bb6c0
// Size: 52 bytes
// Signature: undefined __thiscall setNodeFixed(Bt2Rope * this, uint param_1, bool param_2)


/* Bt2Rope::setNodeFixed(unsigned int, bool) */

void __thiscall Bt2Rope::setNodeFixed(Bt2Rope *this,uint param_1,bool param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (!param_2) {
    fVar1 = 1.0 / (*(float *)(this + 0x24) * *(float *)(this + 0x28));
  }
  *(float *)(*(long *)(*(long *)this + 0x380) + (long)(int)param_1 * 0x78 + 0x60) = fVar1;
  return;
}


