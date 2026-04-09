// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d78494
// Entry Point: 00d78494
// Size: 120 bytes
// Signature: undefined FUN_00d78494(void)


void FUN_00d78494(long param_1,long param_2,uint param_3,long *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  
  if (((0 < param_5) && (uVar2 = *(uint *)(param_1 + 0x38), 0 < (int)uVar2)) &&
     (iVar3 = *(int *)(param_1 + 0x74), iVar3 != 0)) {
    do {
      uVar5 = 0;
      do {
        lVar7 = *param_4;
        puVar6 = *(undefined **)(*(long *)(param_2 + uVar5 * 8) + (ulong)param_3 * 8);
        iVar4 = iVar3;
        do {
          iVar4 = iVar4 + -1;
          *(undefined *)(lVar7 + uVar5) = *puVar6;
          lVar7 = lVar7 + (int)uVar2;
          puVar6 = puVar6 + 1;
        } while (iVar4 != 0);
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar2);
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}


