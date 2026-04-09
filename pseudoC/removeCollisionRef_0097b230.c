// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeCollisionRef
// Entry Point: 0097b230
// Size: 72 bytes
// Signature: undefined __thiscall removeCollisionRef(MeshSplitGeometry * this)


/* non-virtual thunk to MeshSplitGeometry::removeCollisionRef() */

void __thiscall MeshSplitGeometry::removeCollisionRef(MeshSplitGeometry *this)

{
  int iVar1;
  
  iVar1 = FUN_00f27700(0xffffffff,this + -0x160);
  if (iVar1 < 2) {
                    /* WARNING: Could not recover jumptable at 0x0097b268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(this + -0x168) + 0x10))();
    return;
  }
  return;
}


