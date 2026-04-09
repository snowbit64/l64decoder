// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d77d3c
// Entry Point: 00d77d3c
// Size: 160 bytes
// Signature: undefined FUN_00d77d3c(void)


void FUN_00d77d3c(long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  byte *pbVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  undefined *puVar10;
  
  if ((0 < param_5) && (uVar3 = *(uint *)(param_1 + 0x74), uVar3 != 0)) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x268) + 0x30);
    do {
      lVar7 = (ulong)param_3 * 8;
      param_3 = param_3 + 1;
      pcVar5 = *(char **)(*param_2 + lVar7);
      pbVar6 = *(byte **)(param_2[1] + lVar7);
      pcVar8 = *(char **)(param_2[2] + lVar7);
      uVar9 = (ulong)uVar3;
      puVar10 = (undefined *)*param_4;
      do {
        cVar2 = *pbVar6 + 0x80;
        uVar9 = uVar9 - 1;
        *puVar10 = (char)((uint)(*(int *)(lVar4 + (ulong)*pbVar6 * 8 + 0x800) +
                                 (int)*(undefined8 *)(lVar4 + (ulong)(byte)(cVar2 + *pcVar5) * 8) +
                                *(int *)(lVar4 + (ulong)(byte)(cVar2 + *pcVar8) * 8 + 0x1000)) >>
                         0x10);
        pcVar5 = pcVar5 + 1;
        pbVar6 = pbVar6 + 1;
        pcVar8 = pcVar8 + 1;
        puVar10 = puVar10 + 1;
      } while (uVar9 != 0);
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}


