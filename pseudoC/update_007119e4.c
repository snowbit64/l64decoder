// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 007119e4
// Size: 40 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalIdleAction::update() */

undefined4 AnimalIdleAction::update(void)

{
  long in_x0;
  undefined4 uVar1;
  
  if (*(char *)(*(long *)(in_x0 + 0x38) + 0x24) != '\0') {
    return 3;
  }
  uVar1 = 1;
  if (*(char *)(*(long *)(in_x0 + 0x38) + 0x25) == '\0') {
    uVar1 = 2;
  }
  return uVar1;
}


