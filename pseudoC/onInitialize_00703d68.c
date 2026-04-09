// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInitialize
// Entry Point: 00703d68
// Size: 68 bytes
// Signature: undefined onInitialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalCanFeedCondition::onInitialize() */

undefined8 AnimalCanFeedCondition::onInitialize(void)

{
  long in_x0;
  float fVar1;
  
  fVar1 = **(float **)(in_x0 + 0x28);
  if ((7.92e+07 < fVar1 || fVar1 < 1.8e+07) &&
     (*(char *)(*(float **)(in_x0 + 0x28) + 0x154) == '\0')) {
    return 2;
  }
  return 1;
}


