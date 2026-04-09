// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a8f00
// Entry Point: 007a8f00
// Size: 48 bytes
// Signature: undefined FUN_007a8f00(void)


void FUN_007a8f00(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = LightSource::getLightFlags();
  *(undefined4 *)(param_2 + 0x108) = 3;
  *(byte *)(param_2 + 0x100) = (byte)(uVar1 >> 7) & 1;
  return;
}


