// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df422c
// Entry Point: 00df422c
// Size: 252 bytes
// Signature: undefined FUN_00df422c(void)


long FUN_00df422c(char *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  
  lVar5 = 8;
  if ((0 < (int)param_2) && (*param_1 != '\0')) {
    lVar5 = 0;
    do {
      lVar3 = FUN_00df422c(*(undefined8 *)(param_1 + 8),param_2 - 1);
      param_1 = *(char **)(param_1 + 0x10);
      lVar5 = lVar3 + lVar5;
      if (param_2 < 2) break;
      param_2 = param_2 - 1;
    } while (*param_1 != '\0');
    lVar5 = lVar5 + 8;
  }
  uVar1 = FUN_00df4704(param_1);
  iVar7 = 1 << (ulong)(uVar1 & 0x1f);
  do {
    uVar6 = uVar1;
    iVar2 = FUN_00df4758(param_1,uVar6 + 1);
    if (iVar2 <= iVar7) break;
    iVar7 = iVar2;
    uVar1 = uVar6 + 1;
  } while (1 << (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU) & 0x1f) <= iVar2);
  if (0 < (int)uVar6) {
    lVar3 = FUN_00df422c(*(undefined8 *)(param_1 + 8),uVar6 - 1);
    lVar4 = FUN_00df422c(*(undefined8 *)(param_1 + 0x10),uVar6 - 1);
    lVar5 = lVar5 + (long)(1 << (ulong)(uVar6 & 0x1f)) * 8 + lVar3 + lVar4;
  }
  return lVar5;
}


