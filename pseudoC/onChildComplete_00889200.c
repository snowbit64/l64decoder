// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onChildComplete
// Entry Point: 00889200
// Size: 56 bytes
// Signature: undefined onChildComplete(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTModifyResult::onChildComplete() */

void BTModifyResult::onChildComplete(void)

{
  long in_x0;
  int iVar1;
  
  iVar1 = *(int *)(in_x0 + 0x3c);
  if (iVar1 != 2) {
    if (iVar1 != 0) {
      *(undefined4 *)(in_x0 + 0x38) = 1;
      return;
    }
    iVar1 = 1;
    if (*(int *)(*(long *)(in_x0 + 0x30) + 8) == 1) {
      iVar1 = 2;
    }
  }
  *(int *)(in_x0 + 0x38) = iVar1;
  return;
}


