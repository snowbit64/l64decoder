// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d6cfdc
// Entry Point: 00d6cfdc
// Size: 244 bytes
// Signature: undefined FUN_00d6cfdc(void)


void FUN_00d6cfdc(long param_1,long param_2,long *param_3,long param_4)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined *puVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  
  uVar7 = *(uint *)(param_1 + 0x30);
  uVar10 = *(uint *)(param_1 + 0x154);
  uVar11 = (ulong)uVar10;
  iVar4 = *(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x1c);
  if (0 < (int)(iVar4 * 2 - uVar7)) {
    if ((int)uVar10 < 1) {
      return;
    }
    plVar12 = param_3;
    do {
      memset((void *)(*plVar12 + (ulong)uVar7),
             (uint)*(byte *)((long)(void *)(*plVar12 + (ulong)uVar7) + -1),
             (ulong)(iVar4 * 2 + ~uVar7) + 1);
      uVar11 = uVar11 - 1;
      plVar12 = plVar12 + 1;
    } while (uVar11 != 0);
    uVar10 = *(uint *)(param_1 + 0x154);
  }
  if ((0 < (int)uVar10) && (iVar4 != 0)) {
    lVar6 = 0;
    do {
      uVar7 = 0;
      pbVar9 = (byte *)param_3[lVar6];
      puVar8 = *(undefined **)(param_4 + lVar6 * 8);
      iVar5 = iVar4;
      do {
        bVar3 = *pbVar9;
        iVar5 = iVar5 + -1;
        pbVar1 = pbVar9 + 1;
        pbVar9 = pbVar9 + 2;
        iVar2 = uVar7 + bVar3;
        uVar7 = uVar7 ^ 1;
        *puVar8 = (char)(iVar2 + (uint)*pbVar1 >> 1);
        puVar8 = puVar8 + 1;
      } while (iVar5 != 0);
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x154));
  }
  return;
}


