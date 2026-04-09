// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearBlocked
// Entry Point: 007419f4
// Size: 52 bytes
// Signature: undefined clearBlocked(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VehicleNavigationGridAdapter::clearBlocked() */

void VehicleNavigationGridAdapter::clearBlocked(void)

{
  long in_x0;
  
  memset(*(void **)(in_x0 + 0x40),0xff,*(long *)(in_x0 + 0x48) - (long)*(void **)(in_x0 + 0x40));
  *(undefined8 *)(in_x0 + 0x58) = 0;
  return;
}


