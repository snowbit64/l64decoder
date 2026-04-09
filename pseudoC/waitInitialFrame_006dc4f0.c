// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: waitInitialFrame
// Entry Point: 006dc4f0
// Size: 100 bytes
// Signature: undefined waitInitialFrame(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineApplication::waitInitialFrame() */

void EngineApplication::waitInitialFrame(void)

{
  long in_x0;
  long lVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = 0.0;
  if (*(char *)(in_x0 + 0x1e8) != '\0') {
    dVar3 = 3000.0;
  }
  while( true ) {
    lVar1 = Watch::getCurrentTicks();
    dVar2 = (double)Watch::convertTicksToMs(lVar1 - *(long *)(in_x0 + 0x260));
    if (dVar3 <= dVar2) break;
    ThreadUtil::usleep(1000);
  }
  return;
}


