// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSimdRegisterCount
// Entry Point: 00c50a18
// Size: 196 bytes
// Signature: undefined getSimdRegisterCount(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Type::getSimdRegisterCount() const */

int IR_Type::getSimdRegisterCount(void)

{
  long lVar1;
  int iVar2;
  int *in_x0;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  iVar3 = 1;
  for (; iVar4 = *in_x0, iVar4 == 4; in_x0 = *(int **)(in_x0 + 2)) {
    iVar3 = in_x0[4] * iVar3;
  }
  if (iVar4 == 3) {
    lVar1 = *(long *)(*(long *)(in_x0 + 2) + 0x38) - *(long *)(*(long *)(in_x0 + 2) + 0x30);
    if (lVar1 == 0) {
      iVar4 = 0;
    }
    else {
      uVar5 = 0;
      iVar4 = 0;
      uVar6 = (lVar1 >> 3) * 0x6db6db6db6db6db7;
      do {
        iVar2 = getSimdRegisterCount();
        uVar5 = (ulong)((int)uVar5 + 1);
        iVar4 = iVar2 + iVar4;
      } while (uVar5 <= uVar6 && uVar6 - uVar5 != 0);
    }
  }
  else if (iVar4 == 2) {
    iVar4 = in_x0[5];
  }
  else {
    iVar4 = 1;
  }
  return iVar4 * iVar3;
}


