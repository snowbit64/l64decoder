// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079e880
// Entry Point: 0079e880
// Size: 92 bytes
// Signature: undefined FUN_0079e880(void)


void FUN_0079e880(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = (**(code **)(*(long *)(param_1 + 0x20) + 0x10))((long *)(param_1 + 0x20),*param_2,0);
  if (lVar1 == 0) {
    uVar2 = 0;
    param_2[0x20] = 0;
  }
  else {
    param_2[0x20] = lVar1;
    uVar2 = 6;
    *(ushort *)((long)param_2 + 0x10c) = *(ushort *)((long)param_2 + 0x10c) & 0xfffe;
  }
  *(undefined4 *)(param_2 + 0x21) = uVar2;
  return;
}


