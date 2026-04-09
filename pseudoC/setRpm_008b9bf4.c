// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRpm
// Entry Point: 008b9bf4
// Size: 16 bytes
// Signature: undefined __thiscall setRpm(GranularSynthesisSoundGenerator * this, float param_1)


/* GranularSynthesisSoundGenerator::setRpm(float) */

void __thiscall
GranularSynthesisSoundGenerator::setRpm(GranularSynthesisSoundGenerator *this,float param_1)

{
  if (0.0 <= param_1) {
    *(float *)(this + 8) = param_1;
  }
  return;
}


