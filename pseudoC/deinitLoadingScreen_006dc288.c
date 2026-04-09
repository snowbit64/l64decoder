// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deinitLoadingScreen
// Entry Point: 006dc288
// Size: 124 bytes
// Signature: undefined deinitLoadingScreen(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineApplication::deinitLoadingScreen() */

void EngineApplication::deinitLoadingScreen(void)

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
  if (*(long **)(in_x0 + 0x290) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x290) + 8))();
  }
  *(undefined8 *)(in_x0 + 0x290) = 0;
  return;
}


