// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d42af8
// Entry Point: 00d42af8
// Size: 84 bytes
// Signature: undefined FUN_00d42af8(void)


undefined8
FUN_00d42af8(undefined8 param_1,long *param_2,undefined *param_3,ulong *param_4,ulong param_5)

{
  undefined uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = (undefined *)*param_2;
  while( true ) {
    if (param_3 <= puVar2) {
      return 0;
    }
    if (param_5 <= *param_4) break;
    *param_2 = (long)(puVar2 + 1);
    puVar3 = (undefined *)*param_4;
    uVar1 = *puVar2;
    *param_4 = (ulong)(puVar3 + 1);
    *puVar3 = uVar1;
    puVar2 = (undefined *)*param_2;
  }
  if (*param_4 != param_5) {
    return 0;
  }
  return 2;
}


