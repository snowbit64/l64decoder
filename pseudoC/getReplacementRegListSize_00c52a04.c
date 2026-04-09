// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getReplacementRegListSize
// Entry Point: 00c52a04
// Size: 160 bytes
// Signature: undefined getReplacementRegListSize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Struct::getReplacementRegListSize() */

int IR_Struct::getReplacementRegListSize(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long in_x0;
  int *piVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = *(long *)(in_x0 + 0x30);
  lVar2 = *(long *)(in_x0 + 0x38) - lVar1;
  if (lVar2 == 0) {
    iVar5 = 0;
  }
  else {
    uVar6 = 0;
    iVar5 = 0;
    uVar7 = (lVar2 >> 3) * 0x6db6db6db6db6db7;
    do {
      piVar4 = *(int **)(lVar1 + uVar6 * 0x38 + 0x10);
      if ((*piVar4 == 3) && (*(char *)(*(long *)(piVar4 + 2) + 0x55) == '\0')) {
        iVar3 = getReplacementRegListSize();
        iVar5 = iVar3 + iVar5;
      }
      else {
        iVar5 = iVar5 + 1;
      }
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 <= uVar7 && uVar7 - uVar6 != 0);
  }
  return iVar5;
}


