// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d37678
// Entry Point: 00d37678
// Size: 300 bytes
// Signature: undefined FUN_00d37678(void)


void FUN_00d37678(long param_1,ulong param_2,undefined8 *param_3,long *param_4,char **param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  int *piVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)(param_1 + 0x2a0);
  lVar7 = *(long *)(lVar9 + 0x148);
  uVar11 = *(undefined8 *)
            (lVar7 + (-(param_2 >> 0x1f & 1) & 0xffffffe000000000 | (param_2 & 0xffffffff) << 5));
  lVar4 = (long)(int)param_2;
  *param_3 = uVar11;
  if ((int)uVar11 == 4) {
    pcVar5 = *(char **)(lVar7 + lVar4 * 0x20 + 8);
    param_3[1] = *param_5;
    do {
      pcVar8 = *param_5;
      cVar2 = *pcVar5;
      *param_5 = pcVar8 + 1;
      *pcVar8 = cVar2;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    *(undefined4 *)(param_3 + 2) = 0;
    param_3[3] = 0;
    return;
  }
  param_3[3] = *param_4;
  uVar1 = *(uint *)(lVar7 + lVar4 * 0x20 + 0x18);
  lVar7 = *param_4;
  *(uint *)(param_3 + 2) = uVar1;
  *param_4 = lVar7 + (ulong)uVar1 * 0x20;
  if (uVar1 != 0) {
    lVar7 = 0;
    uVar10 = 0;
    piVar6 = (int *)(*(long *)(lVar9 + 0x148) + lVar4 * 0x20 + 0x10);
    do {
      iVar3 = *piVar6;
      FUN_00d37678(param_1,iVar3,param_3[3] + lVar7,param_4,param_5);
      uVar10 = uVar10 + 1;
      lVar7 = lVar7 + 0x20;
      piVar6 = (int *)(*(long *)(lVar9 + 0x148) + (long)iVar3 * 0x20 + 0x1c);
    } while (uVar10 < *(uint *)(param_3 + 2));
  }
  param_3[1] = 0;
  return;
}


