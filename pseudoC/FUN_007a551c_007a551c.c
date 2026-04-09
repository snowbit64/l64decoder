// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a551c
// Entry Point: 007a551c
// Size: 60 bytes
// Signature: undefined FUN_007a551c(void)


void FUN_007a551c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined4 *)(param_2 + 0x108) = 0;
  lVar1 = UserAttributes::getAttributeMap();
  *(int *)(param_2 + 0x100) = (int)*(undefined8 *)(lVar1 + 0x10);
  *(undefined4 *)(param_2 + 0x108) = 1;
  return;
}


