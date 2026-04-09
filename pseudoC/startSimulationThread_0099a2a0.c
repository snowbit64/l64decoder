// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startSimulationThread
// Entry Point: 0099a2a0
// Size: 44 bytes
// Signature: undefined startSimulationThread(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2ScenegraphPhysicsContext::startSimulationThread() */

void Bt2ScenegraphPhysicsContext::startSimulationThread(void)

{
  void *in_x0;
  
  Thread::start((Thread *)((long)in_x0 + 0x490),simulationThreadFunction,in_x0,0xffffffff,
                "PhysicsThread",2,0x80000);
  return;
}


