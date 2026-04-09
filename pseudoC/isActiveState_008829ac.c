// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isActiveState
// Entry Point: 008829ac
// Size: 16 bytes
// Signature: undefined __thiscall isActiveState(StateMachine * this, State * param_1)


/* StateMachine::isActiveState(State*) */

bool __thiscall StateMachine::isActiveState(StateMachine *this,State *param_1)

{
  return *(State **)this == param_1;
}


