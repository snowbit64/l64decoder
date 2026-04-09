// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLightFlags
// Entry Point: 00a543b0
// Size: 8 bytes
// Signature: undefined __thiscall setLightFlags(LightSource * this, uint param_1)


/* LightSource::setLightFlags(unsigned int) */

void __thiscall LightSource::setLightFlags(LightSource *this,uint param_1)

{
  *(uint *)(this + 0x20c) = param_1;
  return;
}


