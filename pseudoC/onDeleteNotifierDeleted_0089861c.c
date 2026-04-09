// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onDeleteNotifierDeleted
// Entry Point: 0089861c
// Size: 8 bytes
// Signature: undefined __cdecl onDeleteNotifierDeleted(DeleteNotifier * param_1)


/* PedestrianSystem::onDeleteNotifierDeleted(DeleteNotifier*) */

void PedestrianSystem::onDeleteNotifierDeleted(DeleteNotifier *param_1)

{
  linkTrafficSystem((PedestrianSystem *)param_1,(TrafficSystem *)0x0);
  return;
}


