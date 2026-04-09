// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isJobQueueEmpty
// Entry Point: 00745d88
// Size: 60 bytes
// Signature: undefined isJobQueueEmpty(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VehicleNavigationPlanner::isJobQueueEmpty() */

bool VehicleNavigationPlanner::isJobQueueEmpty(void)

{
  long in_x0;
  long lVar1;
  
  Mutex::enterCriticalSection();
  lVar1 = *(long *)(in_x0 + 0x88);
                    /* try { // try from 00745da8 to 00745daf has its CatchHandler @ 00745dc4 */
  Mutex::leaveCriticalSection();
  return lVar1 == 0;
}


