// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDistortionMidDrive
// Entry Point: 008b7bac
// Size: 8 bytes
// Signature: undefined __thiscall setDistortionMidDrive(BandDistortion * this, float param_1)


/* BandDistortion::setDistortionMidDrive(float) */

void __thiscall BandDistortion::setDistortionMidDrive(BandDistortion *this,float param_1)

{
  Distortion::setDrive((Distortion *)(this + 0x14),param_1);
  return;
}


