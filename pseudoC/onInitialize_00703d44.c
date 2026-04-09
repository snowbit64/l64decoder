// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInitialize
// Entry Point: 00703d44
// Size: 24 bytes
// Signature: undefined onInitialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalNewFoodCondition::onInitialize() */

undefined4 AnimalNewFoodCondition::onInitialize(void)

{
  long in_x0;
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(int *)(*(long *)(in_x0 + 0x28) + 0x17c) == -1) {
    uVar1 = 2;
  }
  return uVar1;
}


