// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00b0a7d4
// Size: 104 bytes
// Signature: undefined __thiscall update(NullAudioSource * this, float param_1)


/* NullAudioSource::update(float) */

NullAudioSource __thiscall NullAudioSource::update(NullAudioSource *this,float param_1)

{
  uint uVar1;
  uint uVar2;
  NullAudioSource NVar3;
  uint uVar4;
  float fVar5;
  
  NVar3 = this[8];
  if (NVar3 != (NullAudioSource)0x0) {
    uVar2 = *(uint *)(this + 0x14);
    fVar5 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x1c));
    uVar4 = (uint)(((1.0 / *(float *)(this + 0xc)) * fVar5 * param_1) / 1000.0);
    uVar1 = uVar4;
    if (uVar2 <= uVar4) {
      uVar1 = uVar2;
    }
    uVar4 = (uVar4 - uVar1) + *(int *)(this + 0x10);
    NVar3 = (NullAudioSource)(*(uint *)(this + 0x18) <= uVar4);
    if ((bool)NVar3) {
      uVar4 = 0;
    }
    *(uint *)(this + 0x10) = uVar4;
    *(uint *)(this + 0x14) = uVar2 - uVar1;
  }
  return NVar3;
}


