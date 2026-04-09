// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDefaultCamera
// Entry Point: 00a15f60
// Size: 20 bytes
// Signature: undefined __thiscall setDefaultCamera(Renderer * this, Camera * param_1)


/* Renderer::setDefaultCamera(Camera*) */

void __thiscall Renderer::setDefaultCamera(Renderer *this,Camera *param_1)

{
  Camera *pCVar1;
  
  pCVar1 = param_1;
  if (*(Camera **)(this + 8) != (Camera *)0x0) {
    pCVar1 = *(Camera **)(this + 8);
  }
  *(Camera **)(this + 8) = pCVar1;
  *(Camera **)(this + 0x10) = param_1;
  return;
}


