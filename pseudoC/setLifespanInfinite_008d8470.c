// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLifespanInfinite
// Entry Point: 008d8470
// Size: 104 bytes
// Signature: undefined __thiscall setLifespanInfinite(ParticleSystem * this, bool param_1)


/* ParticleSystem::setLifespanInfinite(bool) */

void __thiscall ParticleSystem::setLifespanInfinite(ParticleSystem *this,bool param_1)

{
  uint uVar1;
  float fVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = param_1 & 1;
  if ((byte)this[0x138] != uVar1) {
    fVar4 = *(float *)(this + 0x134);
    this[0x138] = SUB41(uVar1,0);
    uVar3 = NEON_cmge(CONCAT44((uint)param_1 << 0x1f,(uint)param_1 << 0x1f),0,4);
    fVar5 = 0.0;
    fVar2 = 0.0;
    if (!param_1) {
      fVar5 = fVar4 * *(float *)(this + 0x174);
      fVar2 = fVar4 * *(float *)(this + 0x170);
    }
    *(ulong *)(this + 0xa0) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0x144) >> 0x20) * fVar4 * 0.5,
                  (float)*(undefined8 *)(this + 0x144) * fVar4 * 0.5) & uVar3;
    *(float *)(this + 0xb8) = fVar2;
    *(float *)(this + 0xbc) = fVar5;
  }
  return;
}


