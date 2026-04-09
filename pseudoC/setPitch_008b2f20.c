// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPitch
// Entry Point: 008b2f20
// Size: 56 bytes
// Signature: undefined __thiscall setPitch(Sample * this, float param_1)


/* Sample::setPitch(float) */

void __thiscall Sample::setPitch(Sample *this,float param_1)

{
  (**(code **)(*(long *)this + 200))();
  *(float *)(this + 100) = param_1;
  return;
}


