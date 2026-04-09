// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BTRootSelector
// Entry Point: 00714744
// Size: 64 bytes
// Signature: undefined __thiscall BTRootSelector(BTRootSelector * this, BehaviorTree * param_1)


/* BTRootSelector::BTRootSelector(BehaviorTree*) */

void __thiscall BTRootSelector::BTRootSelector(BTRootSelector *this,BehaviorTree *param_1)

{
  BTBehavior::BTBehavior((BTBehavior *)this);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(BehaviorTree **)(this + 0x40) = param_1;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR__BTComposite_00fda1e0;
  return;
}


