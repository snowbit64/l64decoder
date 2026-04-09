// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078d17c
// Entry Point: 0078d17c
// Size: 44 bytes
// Signature: undefined FUN_0078d17c(void)


void FUN_0078d17c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = Watch::getTimeSec();
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 5;
  return;
}


