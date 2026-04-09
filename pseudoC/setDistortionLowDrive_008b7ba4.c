// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDistortionLowDrive
// Entry Point: 008b7ba4
// Size: 8 bytes
// Signature: undefined __thiscall setDistortionLowDrive(BandDistortion * this, float param_1)


/* BandDistortion::setDistortionLowDrive(float) */

void __thiscall BandDistortion::setDistortionLowDrive(BandDistortion *this,float param_1)

{
  Distortion::setDrive((Distortion *)(this + 8),param_1);
  return;
}


