// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteUnusedCallbacks
// Entry Point: 00b01e3c
// Size: 116 bytes
// Signature: undefined deleteUnusedCallbacks(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StreamManager::deleteUnusedCallbacks() */

void StreamManager::deleteUnusedCallbacks(void)

{
  long **pplVar1;
  long in_x0;
  long **pplVar2;
  
  Mutex::enterCriticalSection();
  pplVar2 = *(long ***)(in_x0 + 0xe8);
  pplVar1 = *(long ***)(in_x0 + 0xf0);
  if (pplVar2 != pplVar1) {
    do {
      if (*pplVar2 != (long *)0x0) {
        (**(code **)(**pplVar2 + 8))();
      }
      pplVar2 = pplVar2 + 1;
    } while (pplVar2 != pplVar1);
    pplVar2 = *(long ***)(in_x0 + 0xe8);
  }
  *(long ***)(in_x0 + 0xf0) = pplVar2;
                    /* try { // try from 00b01e98 to 00b01e9f has its CatchHandler @ 00b01eb0 */
  Mutex::leaveCriticalSection();
  return;
}


