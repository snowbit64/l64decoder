// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setChild
// Entry Point: 008891f8
// Size: 8 bytes
// Signature: undefined __thiscall setChild(BTModifyResult * this, BTBehavior * param_1)


/* BTModifyResult::setChild(BTBehavior*) */

void __thiscall BTModifyResult::setChild(BTModifyResult *this,BTBehavior *param_1)

{
  *(BTBehavior **)(this + 0x30) = param_1;
  return;
}


