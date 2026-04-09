// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d9e674
// Entry Point: 00d9e674
// Size: 276 bytes
// Signature: undefined FUN_00d9e674(void)


void FUN_00d9e674(byte **param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  long lVar10;
  
  do {
    if (*(uint *)((long)param_1 + 0x14) < 4) {
      iVar2 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
      *param_1 = *param_1 + 1;
      *(int *)(param_1 + 1) = iVar2 + 1;
      if (iVar2 + 1 == *(int *)((long)param_1 + 0xc)) {
LAB_00d9e698:
        FUN_00d9dbd4(param_1);
      }
    }
    else {
      pbVar9 = *param_1;
      bVar8 = pbVar9[2];
      uVar5 = *(uint *)((long)param_1 + (ulong)*pbVar9 * 4 + 0x8c);
      bVar7 = pbVar9[1];
      iVar2 = *(int *)((long)param_1 + (ulong)pbVar9[3] * 4 + 0x8c);
      *param_1 = pbVar9 + 1;
      uVar5 = uVar5 ^ bVar7;
      uVar1 = uVar5 ^ (uint)bVar8 << 8;
      uVar4 = *(undefined4 *)(param_1 + 1);
      lVar10 = (ulong)(((uVar1 ^ iVar2 << 5) & *(uint *)(param_1 + 7)) + 0x10400) * 4;
      pbVar9 = param_1[5];
      pbVar3 = param_1[6];
      uVar6 = *(undefined4 *)(pbVar9 + lVar10);
      *(undefined4 *)(pbVar9 + lVar10) = uVar4;
      *(undefined4 *)(pbVar9 + (ulong)((uVar1 & 0xffff) + 0x400) * 4) = uVar4;
      *(undefined4 *)(pbVar9 + (ulong)(uVar5 & 0x3ff) * 4) = uVar4;
      *(undefined4 *)(pbVar3 + (ulong)*(uint *)(param_1 + 3) * 4) = uVar6;
      iVar2 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
      *(int *)(param_1 + 1) = iVar2 + 1;
      if (iVar2 + 1 == *(int *)((long)param_1 + 0xc)) goto LAB_00d9e698;
    }
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      return;
    }
  } while( true );
}


