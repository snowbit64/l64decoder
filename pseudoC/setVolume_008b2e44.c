// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVolume
// Entry Point: 008b2e44
// Size: 16 bytes
// Signature: undefined __thiscall setVolume(Sample * this, float param_1)


/* Sample::setVolume(float) */

void __thiscall Sample::setVolume(Sample *this,float param_1)

{
  *(float *)(this + 0x58) = param_1;
                    /* WARNING: Could not recover jumptable at 0x008b2e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x98))();
  return;
}


