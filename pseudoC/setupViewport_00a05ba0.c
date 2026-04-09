// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setupViewport
// Entry Point: 00a05ba0
// Size: 20 bytes
// Signature: undefined __thiscall setupViewport(RenderArgs * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* RenderArgs::setupViewport(unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
RenderArgs::setupViewport(RenderArgs *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  *(uint *)(this + 0x3d8) = param_3;
  *(uint *)(this + 0x3dc) = param_4;
  *(uint *)(this + 0x3e4) = param_2;
  *(uint *)(this + 0x3e0) = param_1;
  return;
}


