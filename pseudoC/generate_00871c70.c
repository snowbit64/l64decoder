// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generate
// Entry Point: 00871c70
// Size: 44 bytes
// Signature: undefined generate(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DensityMapVisualizationOverlay::generate() */

void DensityMapVisualizationOverlay::generate(void)

{
  long in_x0;
  
  *(undefined8 *)(in_x0 + 0x293e8) = 0;
  *(undefined8 *)(in_x0 + 0x293e0) = 1;
  memset(*(void **)(in_x0 + 0x293c8),0,
         (ulong)(uint)(*(int *)(in_x0 + 0x293d4) * *(int *)(in_x0 + 0x293d0)) << 2);
  return;
}


