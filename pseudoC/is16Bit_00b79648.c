// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: is16Bit
// Entry Point: 00b79648
// Size: 16 bytes
// Signature: undefined is16Bit(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IndexedTriangleSet::is16Bit() const */

bool IndexedTriangleSet::is16Bit(void)

{
  long in_x0;
  
  return *(uint *)(in_x0 + 8) < 0x10001;
}


