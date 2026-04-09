// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 00a27b44
// Size: 8 bytes
// Signature: undefined __thiscall reset(LightListRasterizer * this, LightList * param_1)


/* LightListRasterizer::reset(LightList const*) */

void __thiscall LightListRasterizer::reset(LightListRasterizer *this,LightList *param_1)

{
  *(LightList **)this = param_1;
  return;
}


