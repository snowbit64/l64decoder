// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BTSelector
// Entry Point: 00889240
// Size: 64 bytes
// Signature: undefined __thiscall BTSelector(BTSelector * this, BehaviorTree * param_1)


/* BTSelector::BTSelector(BehaviorTree*) */

void __thiscall BTSelector::BTSelector(BTSelector *this,BehaviorTree *param_1)

{
  BTBehavior::BTBehavior((BTBehavior *)this);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(BehaviorTree **)(this + 0x40) = param_1;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR__BTComposite_00fdcd58;
  return;
}


