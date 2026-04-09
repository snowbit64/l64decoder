// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: remove
// Entry Point: 00f42e8c
// Size: 92 bytes
// Signature: undefined __thiscall remove(btDbvt * this, btDbvtNode * param_1)


/* btDbvt::remove(btDbvtNode*) */

void __thiscall btDbvt::remove(btDbvt *this,btDbvtNode *param_1)

{
  FUN_00f424e4();
  if (*(long *)(this + 8) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(btDbvtNode **)(this + 8) = param_1;
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
  return;
}


