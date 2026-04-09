// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a9238
// Entry Point: 007a9238
// Size: 48 bytes
// Signature: undefined FUN_007a9238(void)


void FUN_007a9238(undefined8 param_1,long param_2)

{
  byte bVar1;
  
  bVar1 = LightSource::isMergedShadowActive();
  *(undefined4 *)(param_2 + 0x108) = 3;
  *(byte *)(param_2 + 0x100) = bVar1 & 1;
  return;
}


