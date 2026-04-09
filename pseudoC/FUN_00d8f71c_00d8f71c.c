// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d8f71c
// Entry Point: 00d8f71c
// Size: 120 bytes
// Signature: undefined FUN_00d8f71c(void)


void FUN_00d8f71c(long param_1,long param_2,long param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  byte *pbVar11;
  char *pcVar12;
  
  if ((0 < (int)param_4) && (iVar5 = *(int *)(param_1 + 0x74), iVar5 != 0)) {
    uVar8 = 0;
    plVar9 = *(long **)(*(long *)(param_1 + 0x270) + 0x30);
    lVar3 = *plVar9;
    lVar4 = plVar9[1];
    lVar10 = plVar9[2];
    do {
      pbVar11 = *(byte **)(param_2 + uVar8 * 8);
      pcVar12 = *(char **)(param_3 + uVar8 * 8);
      iVar7 = iVar5;
      do {
        bVar6 = *pbVar11;
        iVar7 = iVar7 + -1;
        pbVar1 = pbVar11 + 1;
        pbVar2 = pbVar11 + 2;
        pbVar11 = pbVar11 + 3;
        *pcVar12 = *(char *)(lVar4 + (ulong)*pbVar1) + *(char *)(lVar3 + (ulong)bVar6) +
                   *(char *)(lVar10 + (ulong)*pbVar2);
        pcVar12 = pcVar12 + 1;
      } while (iVar7 != 0);
      uVar8 = uVar8 + 1;
    } while (uVar8 != param_4);
  }
  return;
}


