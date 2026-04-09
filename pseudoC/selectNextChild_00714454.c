// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: selectNextChild
// Entry Point: 00714454
// Size: 40 bytes
// Signature: undefined selectNextChild(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTRandomSelector::selectNextChild() */

void BTRandomSelector::selectNextChild(void)

{
  undefined4 uVar1;
  long in_x0;
  undefined4 *puVar2;
  
  if (*(long *)(in_x0 + 0x48) != *(long *)(in_x0 + 0x50)) {
    puVar2 = (undefined4 *)(*(long *)(in_x0 + 0x50) + -4);
    uVar1 = *puVar2;
    *(undefined4 **)(in_x0 + 0x50) = puVar2;
    *(undefined4 *)(in_x0 + 0x60) = uVar1;
    return;
  }
  *(undefined4 *)(in_x0 + 0x60) = 0xffffffff;
  return;
}


