// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resumePlanning
// Entry Point: 00745d28
// Size: 12 bytes
// Signature: undefined resumePlanning(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VehicleNavigationPlanner::resumePlanning() */

void VehicleNavigationPlanner::resumePlanning(void)

{
  long in_x0;
  
  *(undefined4 *)(in_x0 + 0xcd) = 0;
  Event::post();
  return;
}


