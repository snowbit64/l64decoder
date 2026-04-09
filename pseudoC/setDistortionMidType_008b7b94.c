// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDistortionMidType
// Entry Point: 008b7b94
// Size: 8 bytes
// Signature: undefined __thiscall setDistortionMidType(BandDistortion * this, Type param_1)


/* BandDistortion::setDistortionMidType(DistortionSettings::Type) */

void __thiscall BandDistortion::setDistortionMidType(BandDistortion *this,Type param_1)

{
  Distortion::setType((Distortion *)(this + 0x14),param_1);
  return;
}


