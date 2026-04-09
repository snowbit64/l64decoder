// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d6115c
// Entry Point: 00d6115c
// Size: 124 bytes
// Signature: undefined FUN_00d6115c(void)


void FUN_00d6115c(long param_1,byte **param_2,long *param_3,uint param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if ((0 < param_5) && (uVar2 = *(uint *)(param_1 + 0x30), uVar2 != 0)) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x208) + 0x10);
    do {
      puVar4 = *(undefined **)(*param_3 + (ulong)param_4 * 8);
      pbVar5 = *param_2;
      uVar6 = (ulong)uVar2;
      do {
        uVar6 = uVar6 - 1;
        *puVar4 = (char)((uint)(*(int *)(lVar3 + (ulong)pbVar5[1] * 8 + 0x800) +
                                (int)*(undefined8 *)(lVar3 + (ulong)*pbVar5 * 8) +
                               *(int *)(lVar3 + (ulong)pbVar5[2] * 8 + 0x1000)) >> 0x10);
        puVar4 = puVar4 + 1;
        pbVar5 = pbVar5 + 3;
      } while (uVar6 != 0);
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}


