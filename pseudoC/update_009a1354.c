// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 009a1354
// Size: 200 bytes
// Signature: undefined __thiscall update(Bt2ScenegraphPhysicsContext * this, float param_1)


/* Bt2ScenegraphPhysicsContext::update(float) */

void __thiscall Bt2ScenegraphPhysicsContext::update(Bt2ScenegraphPhysicsContext *this,float param_1)

{
  uint uVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x68);
  uVar1 = *(uint *)(this + 100);
  if (0.0 < fVar2) {
    param_1 = fVar2 + param_1;
    *(undefined4 *)(this + 0x68) = 0;
    uVar1 = uVar1 + (int)(fVar2 / (*(float *)(this + 0x60) * 1000.0) + 0.5);
  }
  fVar2 = *(float *)(this + 0x5c);
  if (this[0x5d1] == (Bt2ScenegraphPhysicsContext)0x0) {
    simulate(this,param_1 * fVar2,uVar1);
  }
  fetchResults();
  updateUnblocked();
  if ((*(Bt2PhysicsStats **)(this + 0x88))[8] != (Bt2PhysicsStats)0x0) {
    Bt2PhysicsStats::update(*(Bt2PhysicsStats **)(this + 0x88),*(Bt2World **)(this + 0x30));
  }
  if (this[0x5d1] != (Bt2ScenegraphPhysicsContext)0x0) {
    simulate(this,param_1 * fVar2,uVar1);
    return;
  }
  return;
}


