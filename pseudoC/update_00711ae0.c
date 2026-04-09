// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00711ae0
// Size: 40 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalMoveToTargetAction::update() */

undefined4 AnimalMoveToTargetAction::update(void)

{
  long in_x0;
  undefined4 uVar1;
  
  if (*(char *)(*(long *)(in_x0 + 0x30) + 0x24) != '\0') {
    return 3;
  }
  uVar1 = 1;
  if (*(char *)(*(long *)(in_x0 + 0x30) + 0x25) == '\0') {
    uVar1 = 2;
  }
  return uVar1;
}


