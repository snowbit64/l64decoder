// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Clear
// Entry Point: 00eaf47c
// Size: 48 bytes
// Signature: undefined Clear(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VHACD::ICHull::Clear() */

void VHACD::ICHull::Clear(void)

{
  long in_x0;
  
  TMMesh::Clear();
  *(undefined8 *)(in_x0 + 0x240) = 0;
  *(undefined8 *)(in_x0 + 0x458) = 0;
  *(undefined8 *)(in_x0 + 0x670) = 0;
  *(undefined *)(in_x0 + 0x698) = 0;
  return;
}


