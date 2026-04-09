// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDepthMapResolution
// Entry Point: 00a54c14
// Size: 8 bytes
// Signature: undefined __thiscall setDepthMapResolution(LightSource * this, uint param_1)


/* LightSource::setDepthMapResolution(unsigned int) */

void __thiscall LightSource::setDepthMapResolution(LightSource *this,uint param_1)

{
  *(uint *)(this + 0x1b8) = param_1;
  return;
}


