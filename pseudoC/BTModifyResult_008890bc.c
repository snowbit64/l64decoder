// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BTModifyResult
// Entry Point: 008890bc
// Size: 68 bytes
// Signature: undefined __thiscall ~BTModifyResult(BTModifyResult * this)


/* BTModifyResult::~BTModifyResult() */

void __thiscall BTModifyResult::~BTModifyResult(BTModifyResult *this)

{
  *(undefined ***)this = &PTR__BTModifyResult_00fdcd08;
  if (*(long **)(this + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x30) + 8))();
    *(undefined8 *)(this + 0x30) = 0;
  }
  return;
}


