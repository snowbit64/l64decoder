// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BehaviorContext
// Entry Point: 00881b28
// Size: 100 bytes
// Signature: undefined __thiscall BehaviorContext(BehaviorContext * this)


/* BehaviorContext::BehaviorContext() */

void __thiscall BehaviorContext::BehaviorContext(BehaviorContext *this)

{
  *(undefined ***)this = &PTR__BehaviorContext_00fdc410;
  StateMachine::StateMachine((StateMachine *)(this + 8));
                    /* try { // try from 00881b5c to 00881b63 has its CatchHandler @ 00881b8c */
  BehaviorTree::BehaviorTree((BehaviorTree *)(this + 0x68));
  *(undefined4 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  return;
}


