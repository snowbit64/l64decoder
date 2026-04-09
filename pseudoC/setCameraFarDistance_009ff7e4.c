// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCameraFarDistance
// Entry Point: 009ff7e4
// Size: 8 bytes
// Signature: undefined __thiscall setCameraFarDistance(LightList * this, float param_1)


/* LightList::setCameraFarDistance(float) */

void __thiscall LightList::setCameraFarDistance(LightList *this,float param_1)

{
  *(float *)(this + 200) = param_1;
  return;
}


