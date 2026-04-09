// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onTerminate
// Entry Point: 0071177c
// Size: 24 bytes
// Signature: undefined __cdecl onTerminate(Status param_1)


/* AnimalEatAction::onTerminate(BTBehavior::Status) */

void AnimalEatAction::onTerminate(Status param_1)

{
  ScenegraphNode *this;
  
  this = *(ScenegraphNode **)(*(long *)((ulong)param_1 + 0x30) + 0x188);
  if (this != (ScenegraphNode *)0x0) {
    ScenegraphNode::setVisibility(this,false);
    return;
  }
  return;
}


