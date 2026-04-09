// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMinMaxDistance
// Entry Point: 008b2ec8
// Size: 60 bytes
// Signature: undefined __thiscall setMinMaxDistance(Sample * this, float param_1, float param_2)


/* Sample::setMinMaxDistance(float, float) */

void __thiscall Sample::setMinMaxDistance(Sample *this,float param_1,float param_2)

{
  (**(code **)(*(long *)this + 0xb8))();
  *(float *)(this + 0x5c) = param_1;
  *(float *)(this + 0x60) = param_2;
  return;
}


