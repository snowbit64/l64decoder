// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateStep
// Entry Point: 009a141c
// Size: 144 bytes
// Signature: undefined __thiscall updateStep(Bt2ScenegraphPhysicsContext * this, float param_1, uint param_2)


/* Bt2ScenegraphPhysicsContext::updateStep(float, unsigned int) */

void __thiscall
Bt2ScenegraphPhysicsContext::updateStep
          (Bt2ScenegraphPhysicsContext *this,float param_1,uint param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0x5c);
  if (this[0x5d1] == (Bt2ScenegraphPhysicsContext)0x0) {
    simulate(this,fVar1 * param_1,param_2);
  }
  fetchResults();
  updateUnblocked();
  if ((*(Bt2PhysicsStats **)(this + 0x88))[8] != (Bt2PhysicsStats)0x0) {
    Bt2PhysicsStats::update(*(Bt2PhysicsStats **)(this + 0x88),*(Bt2World **)(this + 0x30));
  }
  if (this[0x5d1] != (Bt2ScenegraphPhysicsContext)0x0) {
    simulate(this,fVar1 * param_1,param_2);
    return;
  }
  return;
}


