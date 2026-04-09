// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDistortionHighType
// Entry Point: 008b7b9c
// Size: 8 bytes
// Signature: undefined __thiscall setDistortionHighType(BandDistortion * this, Type param_1)


/* BandDistortion::setDistortionHighType(DistortionSettings::Type) */

void __thiscall BandDistortion::setDistortionHighType(BandDistortion *this,Type param_1)

{
  Distortion::setType((Distortion *)(this + 0x20),param_1);
  return;
}


