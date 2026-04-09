// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateMaxVertexVolumeSlope
// Entry Point: 008c96e4
// Size: 68 bytes
// Signature: undefined updateMaxVertexVolumeSlope(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FillPlaneGeometry::updateMaxVertexVolumeSlope() */

void FillPlaneGeometry::updateMaxVertexVolumeSlope(void)

{
  long in_x0;
  float fVar1;
  
  fVar1 = tanf(*(float *)(in_x0 + 0x194));
  *(float *)(in_x0 + 0x124) =
       fVar1 / (*(float *)(in_x0 + 0x11c) *
               (float)(unkuint9)(ulong)(*(long *)(in_x0 + 0xe8) - *(long *)(in_x0 + 0xe0) >> 5));
  return;
}


