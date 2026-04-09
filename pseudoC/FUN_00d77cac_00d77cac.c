// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d77cac
// Entry Point: 00d77cac
// Size: 144 bytes
// Signature: undefined FUN_00d77cac(void)


void FUN_00d77cac(long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined *puVar9;
  
  if ((0 < param_5) && (uVar2 = *(uint *)(param_1 + 0x74), uVar2 != 0)) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x268) + 0x30);
    do {
      lVar6 = (ulong)param_3 * 8;
      param_3 = param_3 + 1;
      pbVar4 = *(byte **)(*param_2 + lVar6);
      pbVar5 = *(byte **)(param_2[1] + lVar6);
      pbVar7 = *(byte **)(param_2[2] + lVar6);
      uVar8 = (ulong)uVar2;
      puVar9 = (undefined *)*param_4;
      do {
        uVar8 = uVar8 - 1;
        *puVar9 = (char)((uint)(*(int *)(lVar3 + (ulong)*pbVar5 * 8 + 0x800) +
                                (int)*(undefined8 *)(lVar3 + (ulong)*pbVar4 * 8) +
                               *(int *)(lVar3 + (ulong)*pbVar7 * 8 + 0x1000)) >> 0x10);
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar5 + 1;
        pbVar7 = pbVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar8 != 0);
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}


