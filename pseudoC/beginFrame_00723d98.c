// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginFrame
// Entry Point: 00723d98
// Size: 76 bytes
// Signature: undefined beginFrame(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VehicleNavigationManager::beginFrame() */

void VehicleNavigationManager::beginFrame(void)

{
  long in_x0;
  ulong uVar1;
  
  if (*(long *)(in_x0 + 0x10) != *(long *)(in_x0 + 8)) {
    uVar1 = 0;
    do {
      DynamicAvoidance::waitHandler();
      uVar1 = (ulong)((int)uVar1 + 1);
    } while (uVar1 < (ulong)(*(long *)(in_x0 + 0x10) - *(long *)(in_x0 + 8) >> 3));
  }
  return;
}


