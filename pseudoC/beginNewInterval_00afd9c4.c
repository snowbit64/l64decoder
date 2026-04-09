// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginNewInterval
// Entry Point: 00afd9c4
// Size: 136 bytes
// Signature: undefined __thiscall beginNewInterval(GlobalTimeManager * this, float param_1)


/* GlobalTimeManager::beginNewInterval(float) */

void __thiscall GlobalTimeManager::beginNewInterval(GlobalTimeManager *this,float param_1)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  lVar1 = Watch::getCurrentTicks();
  dVar2 = (double)Watch::convertTicksToMs(lVar1 - *(long *)(this + 0x10));
  *(long *)(this + 0x10) = lVar1;
  dVar3 = (double)param_1;
  if (dVar2 <= (double)param_1) {
    dVar3 = dVar2;
  }
  dVar2 = (double)NEON_fmin(dVar3,0x3f1a36e2eb1c432d);
  if (this[0xc] != (GlobalTimeManager)0x0) {
    dVar3 = dVar2;
  }
  *(double *)this = *(double *)this + dVar3;
  *(float *)(this + 8) = (float)dVar3;
  return;
}


