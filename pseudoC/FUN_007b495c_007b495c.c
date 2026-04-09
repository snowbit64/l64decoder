// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b495c
// Entry Point: 007b495c
// Size: 44 bytes
// Signature: undefined FUN_007b495c(void)


void FUN_007b495c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = CharacterSet::getNumClips();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 1;
  return;
}


