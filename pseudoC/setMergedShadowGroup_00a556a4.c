// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMergedShadowGroup
// Entry Point: 00a556a4
// Size: 8 bytes
// Signature: undefined __thiscall setMergedShadowGroup(LightSource * this, MergedShadowGroup * param_1)


/* LightSource::setMergedShadowGroup(LightSource::MergedShadowGroup*) */

void __thiscall LightSource::setMergedShadowGroup(LightSource *this,MergedShadowGroup *param_1)

{
  *(MergedShadowGroup **)(this + 0x158) = param_1;
  return;
}


