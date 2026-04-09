// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_createTriangulate
// Entry Point: 00eba724
// Size: 44 bytes
// Signature: undefined fm_createTriangulate(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FLOAT_MATH::fm_createTriangulate() */

void FLOAT_MATH::fm_createTriangulate(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_triangulate3d_010146c0;
  return;
}


