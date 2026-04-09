// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00711898
// Size: 40 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalGrazingAction::update() */

undefined4 AnimalGrazingAction::update(void)

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


