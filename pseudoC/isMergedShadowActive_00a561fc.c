// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isMergedShadowActive
// Entry Point: 00a561fc
// Size: 32 bytes
// Signature: undefined isMergedShadowActive(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LightSource::isMergedShadowActive() const */

bool LightSource::isMergedShadowActive(void)

{
  long in_x0;
  
  if (*(long *)(in_x0 + 0x158) != 0) {
    return *(char *)(*(long *)(in_x0 + 0x158) + 0x18) != '\0';
  }
  return false;
}


