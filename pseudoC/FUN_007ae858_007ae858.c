// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ae858
// Entry Point: 007ae858
// Size: 48 bytes
// Signature: undefined FUN_007ae858(void)


void FUN_007ae858(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = AudioSourceSample::getNumElements();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 1;
  return;
}


