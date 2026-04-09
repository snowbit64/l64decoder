// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: simulationThreadFunction
// Entry Point: 0099adec
// Size: 120 bytes
// Signature: undefined __cdecl simulationThreadFunction(void * param_1, bool * param_2)


/* Bt2ScenegraphPhysicsContext::simulationThreadFunction(void*, bool volatile&) */

undefined8 Bt2ScenegraphPhysicsContext::simulationThreadFunction(void *param_1,bool *param_2)

{
  char cVar1;
  
  Event::wait((Event *)((long)param_1 + 0x4d8),0xffffffff);
  cVar1 = *param_2;
  while (cVar1 == '\0') {
    doStepSimulation((Bt2ScenegraphPhysicsContext *)param_1,*(float *)((long)param_1 + 0x590),
                     *(uint *)((long)param_1 + 0x594));
    *(undefined8 *)((long)param_1 + 0x590) = 0;
    Event::post();
    Event::wait((Event *)((long)param_1 + 0x4d8),0xffffffff);
    cVar1 = *param_2;
  }
  return 0;
}


