// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df47c8
// Entry Point: 00df47c8
// Size: 436 bytes
// Signature: undefined FUN_00df47c8(void)


void FUN_00df47c8(undefined8 *param_1,char *param_2,uint param_3,undefined4 param_4,long *param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  
  if (0 < (int)param_3) {
    do {
      if (*param_2 == '\0') goto LAB_00df4844;
      uVar3 = param_3 - 1;
      FUN_00df47c8(param_1,*(undefined8 *)(param_2 + 8),uVar3,param_4,param_5);
      param_2 = *(char **)(param_2 + 0x10);
      param_1 = param_1 + (1 << (ulong)(uVar3 & 0x1f));
      bVar1 = 1 < (int)param_3;
      param_3 = uVar3;
    } while (bVar1);
    param_3 = 0;
  }
LAB_00df4844:
  cVar2 = (char)param_4 - (char)param_3;
  param_2[2] = cVar2;
  uVar3 = FUN_00df4704(param_2);
  iVar13 = 1 << (ulong)(uVar3 & 0x1f);
  do {
    uVar12 = uVar3;
    iVar4 = FUN_00df4758(param_2,uVar12 + 1);
    if (iVar4 <= iVar13) break;
    iVar13 = iVar4;
    uVar3 = uVar12 + 1;
  } while (1 << (ulong)(uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU) & 0x1f) <= iVar4);
  if ((int)uVar12 < 2) {
    puVar5 = (undefined *)FUN_00df4490(param_2,param_5);
    *param_1 = puVar5;
  }
  else {
    puVar5 = (undefined *)*param_5;
    *puVar5 = (char)uVar12;
    puVar5[2] = cVar2;
    *param_5 = (long)(puVar5 + (long)(1 << (ulong)(uVar12 & 0x1f)) * 8 + 8);
    FUN_00df47c8(puVar5 + 8,param_2,uVar12,uVar12,param_5);
    *param_1 = puVar5;
  }
  uVar3 = 1 << (ulong)(param_3 & 0x1f);
  if (1 < (int)uVar3) {
    uVar8 = (ulong)uVar3 - 1;
    if (uVar8 < 4) {
      uVar7 = 1;
    }
    else {
      uVar10 = uVar8 & 0xfffffffffffffffc;
      puVar9 = param_1 + 3;
      uVar7 = uVar10 | 1;
      uVar11 = uVar10;
      do {
        puVar9[-1] = puVar5;
        puVar9[-2] = puVar5;
        puVar9[1] = puVar5;
        *puVar9 = puVar5;
        puVar9 = puVar9 + 4;
        uVar11 = uVar11 - 4;
      } while (uVar11 != 0);
      if (uVar8 == uVar10) {
        return;
      }
    }
    lVar6 = uVar3 - uVar7;
    puVar9 = param_1 + uVar7;
    do {
      lVar6 = lVar6 + -1;
      *puVar9 = puVar5;
      puVar9 = puVar9 + 1;
    } while (lVar6 != 0);
  }
  return;
}


