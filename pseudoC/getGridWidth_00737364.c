// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getGridWidth
// Entry Point: 00737364
// Size: 16 bytes
// Signature: undefined getGridWidth(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VehicleNavigationAgent::getGridWidth() const */

int VehicleNavigationAgent::getGridWidth(void)

{
  long in_x0;
  
  return *(ushort *)(*(long *)(in_x0 + 0x12a0) + 8) + 1;
}


