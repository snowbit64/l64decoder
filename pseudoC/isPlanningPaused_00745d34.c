// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isPlanningPaused
// Entry Point: 00745d34
// Size: 80 bytes
// Signature: undefined isPlanningPaused(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VehicleNavigationPlanner::isPlanningPaused() */

byte VehicleNavigationPlanner::isPlanningPaused(void)

{
  byte bVar1;
  long in_x0;
  long lVar2;
  
  Mutex::enterCriticalSection();
  bVar1 = *(byte *)(in_x0 + 0xcd);
  lVar2 = *(long *)(in_x0 + 0x90);
                    /* try { // try from 00745d60 to 00745d67 has its CatchHandler @ 00745d84 */
  Mutex::leaveCriticalSection();
  return bVar1 & lVar2 == 0;
}


