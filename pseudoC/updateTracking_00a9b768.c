// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateTracking
// Entry Point: 00a9b768
// Size: 72 bytes
// Signature: undefined updateTracking(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HeadMountedDisplayManager::updateTracking() */

void HeadMountedDisplayManager::updateTracking(void)

{
  byte bVar1;
  long in_x0;
  long *plVar2;
  
  plVar2 = *(long **)(in_x0 + 0x20);
  if (plVar2 == (long *)0x0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (**(code **)(*plVar2 + 0x48))(plVar2,in_x0 + 0x34,in_x0 + 0x40);
    bVar1 = bVar1 & 1;
  }
  *(byte *)(in_x0 + 0x30) = bVar1;
  return;
}


