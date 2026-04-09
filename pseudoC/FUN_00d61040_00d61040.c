// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d61040
// Entry Point: 00d61040
// Size: 84 bytes
// Signature: undefined FUN_00d61040(void)


void FUN_00d61040(long param_1,undefined8 *param_2,long *param_3,uint param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  undefined uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  
  if ((0 < param_5) && (uVar2 = *(uint *)(param_1 + 0x30), uVar2 != 0)) {
    iVar4 = *(int *)(param_1 + 0x38);
    do {
      puVar6 = (undefined *)*param_2;
      puVar5 = *(undefined **)(*param_3 + (ulong)param_4 * 8);
      uVar7 = (ulong)uVar2;
      do {
        uVar3 = *puVar6;
        puVar6 = puVar6 + iVar4;
        uVar7 = uVar7 - 1;
        *puVar5 = uVar3;
        puVar5 = puVar5 + 1;
      } while (uVar7 != 0);
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}


