// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f16914
// Entry Point: 00f16914
// Size: 112 bytes
// Signature: undefined FUN_00f16914(void)


void FUN_00f16914(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(undefined1 **)(param_2 + 0x20) == luaH_dummynode) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1 << (ulong)(*(byte *)(param_2 + 6) & 0x1f);
  }
  uVar1 = FUN_00f16984(param_2,param_3,0);
  FUN_00f16b10(param_1,param_2,uVar1,iVar2);
  return;
}


