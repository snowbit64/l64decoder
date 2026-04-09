// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ae77c
// Entry Point: 007ae77c
// Size: 44 bytes
// Signature: undefined FUN_007ae77c(void)


void FUN_007ae77c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = AudioSource::getRange();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 4;
  return;
}


