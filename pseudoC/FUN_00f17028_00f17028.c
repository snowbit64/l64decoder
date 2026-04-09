// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f17028
// Entry Point: 00f17028
// Size: 140 bytes
// Signature: undefined FUN_00f17028(void)


void FUN_00f17028(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  
  if (*(undefined1 **)(param_2 + 0x20) != luaH_dummynode) {
    uVar1 = 1 << (ulong)(*(byte *)(param_2 + 6) & 0x1f);
    FUN_00f1043c(param_1,*(undefined1 **)(param_2 + 0x20),
                 -(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5,
                 *(undefined *)(param_2 + 2));
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    FUN_00f1043c(param_1,*(long *)(param_2 + 0x18),(long)*(int *)(param_2 + 8) << 4,
                 *(undefined *)(param_2 + 2));
  }
  FUN_00f10568(param_1,param_2,0x30,*(undefined *)(param_2 + 2),param_3);
  return;
}


