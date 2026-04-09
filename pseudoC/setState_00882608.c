// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setState
// Entry Point: 00882608
// Size: 124 bytes
// Signature: undefined __thiscall setState(StateMachine * this, State * param_1, StateTransition * param_2)


/* StateMachine::setState(State*, StateTransition*) */

void __thiscall StateMachine::setState(StateMachine *this,State *param_1,StateTransition *param_2)

{
  long lVar1;
  
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 0x18))();
  }
  *(StateTransition **)(this + 8) = param_2;
  if (param_2 != (StateTransition *)0x0) {
    (**(code **)(*(long *)param_2 + 0x10))(param_2);
    *(State **)(this + 0x10) = param_1;
    return;
  }
  lVar1 = *(long *)param_1;
  *(State **)this = param_1;
                    /* WARNING: Could not recover jumptable at 0x00882680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(param_1);
  return;
}


