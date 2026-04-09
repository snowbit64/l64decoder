// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a8e9c
// Entry Point: 007a8e9c
// Size: 48 bytes
// Signature: undefined FUN_007a8e9c(void)


void FUN_007a8e9c(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = LightSource::getLightFlags();
  *(undefined4 *)(param_2 + 0x108) = 3;
  *(byte *)(param_2 + 0x100) = (byte)(uVar1 >> 5) & 1;
  return;
}


