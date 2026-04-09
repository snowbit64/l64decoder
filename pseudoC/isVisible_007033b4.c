// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isVisible
// Entry Point: 007033b4
// Size: 28 bytes
// Signature: undefined isVisible(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Animal::isVisible() const */

byte Animal::isVisible(void)

{
  long in_x0;
  
  if (*(long *)(in_x0 + 0x698) != 0) {
    return *(byte *)(*(long *)(in_x0 + 0x698) + 0x40) & 1;
  }
  return 0;
}


