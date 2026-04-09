// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onDensityPixelSourceDeleted
// Entry Point: 00b8a0a0
// Size: 12 bytes
// Signature: undefined __cdecl onDensityPixelSourceDeleted(IDensityPixelSource * param_1)


/* DensityMapModifier::onDensityPixelSourceDeleted(IDensityPixelSource*) */

void DensityMapModifier::onDensityPixelSourceDeleted(IDensityPixelSource *param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


