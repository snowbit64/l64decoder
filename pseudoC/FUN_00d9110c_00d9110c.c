// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d9110c
// Entry Point: 00d9110c
// Size: 228 bytes
// Signature: undefined FUN_00d9110c(void)


void FUN_00d9110c(long param_1,long param_2,long param_3,uint param_4)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  char *pcVar9;
  
  if ((0 < (int)param_4) && (iVar2 = *(int *)(param_1 + 0x74), iVar2 != 0)) {
    uVar6 = 0;
    lVar7 = *(long *)(*(long *)(param_1 + 0x270) + 0x30);
    do {
      pbVar8 = *(byte **)(param_2 + uVar6 * 8);
      pcVar9 = *(char **)(param_3 + uVar6 * 8);
      iVar4 = iVar2;
      do {
        psVar1 = (short *)(*(long *)(lVar7 + (ulong)(*pbVar8 >> 3) * 8) +
                           (ulong)(pbVar8[1] >> 2) * 0x40 + (ulong)(pbVar8[2] >> 3) * 2);
        sVar3 = *psVar1;
        cVar5 = (char)sVar3;
        if (sVar3 == 0) {
          FUN_00d91718(param_1);
          cVar5 = *(char *)psVar1;
        }
        iVar4 = iVar4 + -1;
        pbVar8 = pbVar8 + 3;
        *pcVar9 = cVar5 + -1;
        pcVar9 = pcVar9 + 1;
      } while (iVar4 != 0);
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_4);
  }
  return;
}


