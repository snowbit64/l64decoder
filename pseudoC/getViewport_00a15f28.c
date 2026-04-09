// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getViewport
// Entry Point: 00a15f28
// Size: 36 bytes
// Signature: undefined __thiscall getViewport(Renderer * this, float * param_1, float * param_2, float * param_3, float * param_4)


/* Renderer::getViewport(float&, float&, float&, float&) const */

void __thiscall
Renderer::getViewport(Renderer *this,float *param_1,float *param_2,float *param_3,float *param_4)

{
  *param_1 = *(float *)(this + 0x550);
  *param_2 = *(float *)(this + 0x554);
  *param_3 = *(float *)(this + 0x558);
  *param_4 = *(float *)(this + 0x55c);
  return;
}


