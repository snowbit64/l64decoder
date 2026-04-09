// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reduceInterfaces
// Entry Point: 00c47688
// Size: 148 bytes
// Signature: undefined reduceInterfaces(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Section::reduceInterfaces() */

uint IR_Section::reduceInterfaces(void)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  IR_Section *in_x0;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  
  lVar4 = *(long *)(in_x0 + 0x20);
  if (*(long *)(in_x0 + 0x28) == lVar4) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar5 = 0;
    uVar7 = 1;
    do {
      uVar3 = (int)uVar7 - 1;
      iVar1 = **(int **)(lVar4 + uVar5 * 8);
      if (iVar1 == 4) {
        uVar3 = reduce_LOOP(in_x0,uVar3);
LAB_00c476c0:
        uVar6 = uVar6 | uVar3;
      }
      else if (iVar1 == 2) {
        uVar3 = reduce_COND(in_x0,uVar3);
        goto LAB_00c476c0;
      }
      lVar4 = *(long *)(in_x0 + 0x20);
      bVar2 = uVar7 < (ulong)(*(long *)(in_x0 + 0x28) - lVar4 >> 3);
      uVar5 = uVar7;
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (bVar2);
  }
  return uVar6 & 1;
}


