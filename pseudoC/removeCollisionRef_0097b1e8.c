// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeCollisionRef
// Entry Point: 0097b1e8
// Size: 72 bytes
// Signature: undefined removeCollisionRef(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MeshSplitGeometry::removeCollisionRef() */

void MeshSplitGeometry::removeCollisionRef(void)

{
  int iVar1;
  long *in_x0;
  
  iVar1 = FUN_00f27700(0xffffffff,in_x0 + 1);
  if (iVar1 < 2) {
                    /* WARNING: Could not recover jumptable at 0x0097b220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_x0 + 0x10))();
    return;
  }
  return;
}


