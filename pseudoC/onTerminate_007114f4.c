// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onTerminate
// Entry Point: 007114f4
// Size: 56 bytes
// Signature: undefined __cdecl onTerminate(Status param_1)


/* AnimalChewAction::onTerminate(BTBehavior::Status) */

void AnimalChewAction::onTerminate(Status param_1)

{
  long lVar1;
  
  lVar1 = *(long *)((ulong)param_1 + 0x30);
  if (*(ScenegraphNode **)(lVar1 + 0x188) != (ScenegraphNode *)0x0) {
    ScenegraphNode::setVisibility(*(ScenegraphNode **)(lVar1 + 0x188),false);
    lVar1 = *(long *)((ulong)param_1 + 0x30);
  }
  *(undefined *)(lVar1 + 0x19c) = 0;
  return;
}


