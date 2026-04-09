// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0bc18
// Entry Point: 00f0bc18
// Size: 48 bytes
// Signature: undefined FUN_00f0bc18(void)


void FUN_00f0bc18(undefined8 param_1,long param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)(param_2 + 0x10);
  *(long *)(*(long *)(param_2 + 0x18) + 0x10) = *plVar1;
  *(undefined8 *)(*plVar1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  if ((param_3 & 1) != 0) {
    return;
  }
  lVar3 = (*(long **)(param_2 + 8))[1];
  lVar2 = **(long **)(param_2 + 8);
  *(long **)(param_2 + 8) = plVar1;
  *(long *)(param_2 + 0x18) = lVar3;
  *plVar1 = lVar2;
  FUN_00f0ca40();
  return;
}


