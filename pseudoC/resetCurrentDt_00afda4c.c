// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resetCurrentDt
// Entry Point: 00afda4c
// Size: 40 bytes
// Signature: undefined resetCurrentDt(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GlobalTimeManager::resetCurrentDt() */

void GlobalTimeManager::resetCurrentDt(void)

{
  long in_x0;
  undefined8 uVar1;
  
  uVar1 = Watch::getCurrentTicks();
  *(undefined4 *)(in_x0 + 8) = 0;
  *(undefined8 *)(in_x0 + 0x10) = uVar1;
  return;
}


