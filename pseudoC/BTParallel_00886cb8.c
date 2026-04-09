// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BTParallel
// Entry Point: 00886cb8
// Size: 88 bytes
// Signature: undefined __thiscall BTParallel(BTParallel * this, BehaviorTree * param_1, bool param_2, bool param_3)


/* BTParallel::BTParallel(BehaviorTree*, bool, bool) */

void __thiscall
BTParallel::BTParallel(BTParallel *this,BehaviorTree *param_1,bool param_2,bool param_3)

{
  BTBehavior::BTBehavior((BTBehavior *)this);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(BehaviorTree **)(this + 0x40) = param_1;
  this[0x50] = (BTParallel)param_2;
  this[0x51] = (BTParallel)param_3;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR__BTComposite_00fdca88;
  return;
}


