// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: minx
// Entry Point: 008a32ac
// Size: 64 bytes
// Signature: undefined minx(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainDeformation::SoftBrush::minx() const */

float TerrainDeformation::SoftBrush::minx(void)

{
  int *in_x0;
  
  if (*in_x0 == 1) {
    return (float)in_x0[1] + (float)in_x0[3] * -0.5;
  }
  if (*in_x0 == 0) {
    return (float)in_x0[1] - (float)in_x0[3];
  }
  return (float)in_x0[1];
}


