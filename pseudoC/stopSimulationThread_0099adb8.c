// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stopSimulationThread
// Entry Point: 0099adb8
// Size: 52 bytes
// Signature: undefined stopSimulationThread(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2ScenegraphPhysicsContext::stopSimulationThread() */

void Bt2ScenegraphPhysicsContext::stopSimulationThread(void)

{
  Thread::cancel();
  Event::post();
  Thread::join();
  return;
}


