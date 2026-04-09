// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearArcLengths
// Entry Point: 007366cc
// Size: 108 bytes
// Signature: undefined clearArcLengths(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VehicleNavigationAgent::clearArcLengths() */

void VehicleNavigationAgent::clearArcLengths(void)

{
  long in_x0;
  
  if (*(void **)(in_x0 + 0x12a8) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0x12a8));
  }
  if (*(void **)(in_x0 + 0x12c0) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0x12c0));
  }
  if (*(void **)(in_x0 + 0x12b0) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0x12b0));
  }
  if (*(void **)(in_x0 + 0x12c8) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0x12c8));
  }
  if (*(void **)(in_x0 + 0x12b8) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0x12b8));
  }
  if (*(void **)(in_x0 + 0x12d0) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0x12d0));
    return;
  }
  return;
}


