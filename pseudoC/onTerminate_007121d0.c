// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onTerminate
// Entry Point: 007121d0
// Size: 16 bytes
// Signature: undefined __cdecl onTerminate(Status param_1)


/* AnimalWanderAction::onTerminate(BTBehavior::Status) */

void AnimalWanderAction::onTerminate(Status param_1)

{
  *(undefined *)(*(long *)((ulong)param_1 + 0x30) + 0x178) = 1;
  return;
}


