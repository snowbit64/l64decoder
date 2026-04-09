// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 00a652e4
// Size: 92 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FoliageSystemDesc::Shape::reset() */

void FoliageSystemDesc::Shape::reset(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 *in_x0;
  
  lVar1 = *(long *)(in_x0 + 2);
  *in_x0 = 0;
  lVar3 = *(long *)(in_x0 + 4);
  while (lVar2 = lVar3, lVar2 != lVar1) {
    lVar3 = lVar2 + -0x40;
    if ((*(byte *)(lVar2 + -0x38) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -0x28));
    }
  }
  *(long *)(in_x0 + 4) = lVar1;
  return;
}


