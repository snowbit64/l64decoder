// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BTRandomSelector
// Entry Point: 00714048
// Size: 92 bytes
// Signature: undefined __thiscall BTRandomSelector(BTRandomSelector * this, BehaviorTree * param_1, bool param_2)


/* BTRandomSelector::BTRandomSelector(BehaviorTree*, bool) */

void __thiscall
BTRandomSelector::BTRandomSelector(BTRandomSelector *this,BehaviorTree *param_1,bool param_2)

{
  BTBehavior::BTBehavior((BTBehavior *)this);
  *(undefined8 *)(this + 0x38) = 0;
  *(BehaviorTree **)(this + 0x40) = param_1;
  this[0x68] = (BTRandomSelector)param_2;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR__BTRandomSelector_00fda140;
  *(undefined8 *)(this + 0x60) = 0xffffffffffffffff;
  return;
}


