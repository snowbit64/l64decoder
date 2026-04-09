// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isLoaded
// Entry Point: 00a78894
// Size: 16 bytes
// Signature: undefined isLoaded(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BitmapImage::isLoaded() const */

bool BitmapImage::isLoaded(void)

{
  long in_x0;
  
  return *(long *)(in_x0 + 0x20) != 0;
}


