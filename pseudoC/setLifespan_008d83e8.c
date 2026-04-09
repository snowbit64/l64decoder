// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLifespan
// Entry Point: 008d83e8
// Size: 128 bytes
// Signature: undefined __thiscall setLifespan(ParticleSystem * this, float param_1, bool param_2)


/* ParticleSystem::setLifespan(float, bool) */

void __thiscall ParticleSystem::setLifespan(ParticleSystem *this,float param_1,bool param_2)

{
  bool bVar1;
  float fVar2;
  ulong uVar3;
  float fVar4;
  
  fVar2 = *(float *)(this + 0x134);
  if (param_2) {
    fVar4 = (float)NEON_fmsub(*(undefined4 *)(this + 0xb0),fVar2,fVar2);
    *(float *)(this + 0xb0) = (param_1 - fVar4) / param_1;
  }
  if (fVar2 != param_1) {
    *(float *)(this + 0x134) = param_1;
    bVar1 = this[0x138] == (ParticleSystem)0x0;
    fVar2 = *(float *)(this + 0x170) * param_1;
    fVar4 = *(float *)(this + 0x174) * param_1;
    uVar3 = NEON_cmlt(CONCAT44((uint)bVar1 << 0x1f,(uint)bVar1 << 0x1f),0,4);
    if (!bVar1) {
      fVar2 = 0.0;
      fVar4 = 0.0;
    }
    *(ulong *)(this + 0xa0) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0x144) >> 0x20) * param_1 * 0.5,
                  (float)*(undefined8 *)(this + 0x144) * param_1 * 0.5) & uVar3;
    *(float *)(this + 0xb8) = fVar2;
    *(float *)(this + 0xbc) = fVar4;
  }
  return;
}


