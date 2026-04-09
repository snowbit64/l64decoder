// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInitialize
// Entry Point: 00703db8
// Size: 52 bytes
// Signature: undefined onInitialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalIsDaytimeCondition::onInitialize() */

undefined4 AnimalIsDaytimeCondition::onInitialize(void)

{
  long in_x0;
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = **(float **)(in_x0 + 0x28);
  uVar1 = 1;
  if ((fVar2 < 1.8e+07 || fVar2 != 7.92e+07) && (fVar2 < 1.8e+07 || 7.92e+07 <= fVar2)) {
    uVar1 = 2;
  }
  return uVar1;
}


