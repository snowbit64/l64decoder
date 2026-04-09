// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isLoaded
// Entry Point: 00b875e8
// Size: 48 bytes
// Signature: undefined isLoaded(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DensityMap::isLoaded() const */

bool DensityMap::isLoaded(void)

{
  long in_x0;
  long lVar1;
  
  if (*(char *)(in_x0 + 0x90) == '\0') {
    lVar1 = *(long *)(in_x0 + 0xa0);
  }
  else {
    if (*(long *)(in_x0 + 0x98) == 0) {
      return false;
    }
    lVar1 = *(long *)(*(long *)(in_x0 + 0x98) + 0x28);
  }
  return lVar1 != 0;
}


