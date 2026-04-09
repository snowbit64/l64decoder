// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endFrame
// Entry Point: 00723de4
// Size: 76 bytes
// Signature: undefined endFrame(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VehicleNavigationManager::endFrame() */

void VehicleNavigationManager::endFrame(void)

{
  long in_x0;
  ulong uVar1;
  
  if (*(long *)(in_x0 + 0x10) != *(long *)(in_x0 + 8)) {
    uVar1 = 0;
    do {
      DynamicAvoidance::callHandler();
      uVar1 = (ulong)((int)uVar1 + 1);
    } while (uVar1 < (ulong)(*(long *)(in_x0 + 0x10) - *(long *)(in_x0 + 8) >> 3));
  }
  return;
}


