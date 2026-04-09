// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVolume
// Entry Point: 008c05b8
// Size: 68 bytes
// Signature: undefined __thiscall setVolume(StreamedSample * this, float param_1)


/* StreamedSample::setVolume(float) */

void __thiscall StreamedSample::setVolume(StreamedSample *this,float param_1)

{
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 0x50))(*(undefined4 *)(this + 0x2c));
  }
  *(float *)(this + 0x2c) = param_1;
  return;
}


