// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setViewport
// Entry Point: 00a15f14
// Size: 20 bytes
// Signature: undefined __thiscall setViewport(Renderer * this, float param_1, float param_2, float param_3, float param_4)


/* Renderer::setViewport(float, float, float, float) */

void __thiscall
Renderer::setViewport(Renderer *this,float param_1,float param_2,float param_3,float param_4)

{
  *(float *)(this + 0x550) = param_1;
  *(float *)(this + 0x554) = param_2;
  *(float *)(this + 0x558) = param_3;
  *(float *)(this + 0x55c) = param_4;
  return;
}


