// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCamera
// Entry Point: 00a15f74
// Size: 20 bytes
// Signature: undefined __thiscall setCamera(Renderer * this, Camera * param_1)


/* Renderer::setCamera(Camera*) */

void __thiscall Renderer::setCamera(Renderer *this,Camera *param_1)

{
  Camera *pCVar1;
  
  pCVar1 = *(Camera **)(this + 0x10);
  if (param_1 != (Camera *)0x0) {
    pCVar1 = param_1;
  }
  *(Camera **)(this + 8) = pCVar1;
  return;
}


