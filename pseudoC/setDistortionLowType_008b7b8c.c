// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDistortionLowType
// Entry Point: 008b7b8c
// Size: 8 bytes
// Signature: undefined __thiscall setDistortionLowType(BandDistortion * this, Type param_1)


/* BandDistortion::setDistortionLowType(DistortionSettings::Type) */

void __thiscall BandDistortion::setDistortionLowType(BandDistortion *this,Type param_1)

{
  Distortion::setType((Distortion *)(this + 8),param_1);
  return;
}


