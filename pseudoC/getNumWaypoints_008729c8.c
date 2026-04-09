// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumWaypoints
// Entry Point: 008729c8
// Size: 16 bytes
// Signature: undefined getNumWaypoints(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NavigationPath::getNumWaypoints() const */

void NavigationPath::getNumWaypoints(void)

{
  long in_x0;
  
  if (*(long *)(in_x0 + 0x20) != 0) {
    Spline::getNumOfCV();
    return;
  }
  return;
}


