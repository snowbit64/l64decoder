// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: minz
// Entry Point: 008a332c
// Size: 60 bytes
// Signature: undefined minz(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainDeformation::SoftBrush::minz() const */

float TerrainDeformation::SoftBrush::minz(void)

{
  int *in_x0;
  
  if (*in_x0 == 1) {
    return (float)in_x0[2] + (float)in_x0[3] * -0.5;
  }
  if (*in_x0 == 0) {
    return (float)in_x0[2] - (float)in_x0[3];
  }
  return (float)in_x0[2];
}


