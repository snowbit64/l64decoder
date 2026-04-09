// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDistortionHighDrive
// Entry Point: 008b7bb4
// Size: 8 bytes
// Signature: undefined __thiscall setDistortionHighDrive(BandDistortion * this, float param_1)


/* BandDistortion::setDistortionHighDrive(float) */

void __thiscall BandDistortion::setDistortionHighDrive(BandDistortion *this,float param_1)

{
  Distortion::setDrive((Distortion *)(this + 0x20),param_1);
  return;
}


