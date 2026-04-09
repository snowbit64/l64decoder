// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d61744
// Entry Point: 00d61744
// Size: 120 bytes
// Signature: undefined FUN_00d61744(void)


void FUN_00d61744(long param_1,long *param_2,long param_3,uint param_4,int param_5)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  
  if (((0 < param_5) && (uVar3 = *(uint *)(param_1 + 0x5c), 0 < (int)uVar3)) &&
     (iVar4 = *(int *)(param_1 + 0x30), iVar4 != 0)) {
    do {
      uVar6 = 0;
      do {
        lVar8 = *param_2;
        puVar7 = *(undefined **)(*(long *)(param_3 + uVar6 * 8) + (ulong)param_4 * 8);
        iVar5 = iVar4;
        do {
          puVar2 = (undefined *)(lVar8 + uVar6);
          iVar5 = iVar5 + -1;
          lVar8 = lVar8 + (int)uVar3;
          *puVar7 = *puVar2;
          puVar7 = puVar7 + 1;
        } while (iVar5 != 0);
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar3);
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}


