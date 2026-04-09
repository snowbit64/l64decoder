// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTypeName
// Entry Point: 008adc8c
// Size: 32 bytes
// Signature: undefined __cdecl getTypeName(Type param_1)


/* DistortionSettings::getTypeName(DistortionSettings::Type) */

undefined * DistortionSettings::getTypeName(Type param_1)

{
  if (8 < param_1) {
    return (undefined *)0x0;
  }
  return (&s_typeNames)[param_1];
}


