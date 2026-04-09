// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRenderSize
// Entry Point: 009ff878
// Size: 8 bytes
// Signature: undefined __thiscall setRenderSize(LightList * this, uint param_1, uint param_2)


/* LightList::setRenderSize(unsigned int, unsigned int) */

void __thiscall LightList::setRenderSize(LightList *this,uint param_1,uint param_2)

{
  *(uint *)this = param_1;
  *(uint *)(this + 4) = param_2;
  return;
}


