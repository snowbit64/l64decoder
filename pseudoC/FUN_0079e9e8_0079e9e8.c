// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079e9e8
// Entry Point: 0079e9e8
// Size: 72 bytes
// Signature: undefined FUN_0079e9e8(void)


void FUN_0079e9e8(long param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined *)(param_2 + 0x22) = 0;
  *(undefined4 *)(param_2 + 0x23) = 3;
  bVar1 = (**(code **)(lVar2 + 0x20))((long *)(param_1 + 0x20),*param_2,param_2 + 0x22);
  *(undefined4 *)(param_2 + 0x21) = 3;
  *(byte *)(param_2 + 0x20) = bVar1 & 1;
  return;
}


