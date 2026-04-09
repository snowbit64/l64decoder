// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: maxx
// Entry Point: 008a32ec
// Size: 64 bytes
// Signature: undefined maxx(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainDeformation::SoftBrush::maxx() const */

float TerrainDeformation::SoftBrush::maxx(void)

{
  int *in_x0;
  
  if (*in_x0 == 1) {
    return (float)in_x0[1] + (float)in_x0[3] * 0.5;
  }
  if (*in_x0 == 0) {
    return (float)in_x0[1] + (float)in_x0[3];
  }
  return (float)in_x0[1];
}


