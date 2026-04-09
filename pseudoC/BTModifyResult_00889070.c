// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BTModifyResult
// Entry Point: 00889070
// Size: 76 bytes
// Signature: undefined __thiscall BTModifyResult(BTModifyResult * this, BehaviorTree * param_1, MODIFICATION_TYPE param_2)


/* BTModifyResult::BTModifyResult(BehaviorTree*, BTModifyResult::MODIFICATION_TYPE) */

void __thiscall
BTModifyResult::BTModifyResult(BTModifyResult *this,BehaviorTree *param_1,MODIFICATION_TYPE param_2)

{
  BTBehavior::BTBehavior((BTBehavior *)this);
  *(BehaviorTree **)(this + 0x28) = param_1;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 3;
  *(MODIFICATION_TYPE *)(this + 0x3c) = param_2;
  *(undefined ***)this = &PTR__BTModifyResult_00fdcd08;
  return;
}


