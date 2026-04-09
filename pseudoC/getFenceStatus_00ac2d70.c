// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFenceStatus
// Entry Point: 00ac2d70
// Size: 144 bytes
// Signature: undefined getFenceStatus(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanResourceAllocator::getFenceStatus() */

long * VulkanResourceAllocator::getFenceStatus(void)

{
  long in_x0;
  long *unaff_x19;
  long lVar1;
  long lVar2;
  
  Mutex::enterCriticalSection();
  lVar1 = *(long *)(in_x0 + 0xa48);
  lVar2 = *(long *)(in_x0 + 0xa50);
  if (lVar1 != lVar2) {
    unaff_x19 = *(long **)(lVar2 + -8);
    *(long ***)(in_x0 + 0xa50) = (long **)(lVar2 + -8);
    *unaff_x19 = *unaff_x19 + 1;
  }
                    /* try { // try from 00ac2dc0 to 00ac2dc7 has its CatchHandler @ 00ac2e00 */
  Mutex::leaveCriticalSection();
  if (lVar1 == lVar2) {
    unaff_x19 = (long *)operator_new(0x10);
    unaff_x19[1] = 0;
    *unaff_x19 = 1;
  }
  return unaff_x19;
}


