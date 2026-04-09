// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: simulationThreadFunction
// Entry Point: 0099bad4
// Size: 116 bytes
// Signature: undefined __thiscall simulationThreadFunction(Bt2ScenegraphPhysicsContext * this, bool * param_1)


/* Bt2ScenegraphPhysicsContext::simulationThreadFunction(bool volatile&) */

void __thiscall
Bt2ScenegraphPhysicsContext::simulationThreadFunction
          (Bt2ScenegraphPhysicsContext *this,bool *param_1)

{
  char cVar1;
  
  Event::wait((Event *)(this + 0x4d8),0xffffffff);
  cVar1 = *param_1;
  while (cVar1 == '\0') {
    doStepSimulation(this,*(float *)(this + 0x590),*(uint *)(this + 0x594));
    *(undefined8 *)(this + 0x590) = 0;
    Event::post();
    Event::wait((Event *)(this + 0x4d8),0xffffffff);
    cVar1 = *param_1;
  }
  return;
}


