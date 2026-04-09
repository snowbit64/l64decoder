// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVoiceRelativePlaySpeed
// Entry Point: 00e3faac
// Size: 88 bytes
// Signature: undefined __thiscall setVoiceRelativePlaySpeed(Soloud * this, uint param_1, float param_2)


/* SoLoud::Soloud::setVoiceRelativePlaySpeed(unsigned int, float) */

undefined8 __thiscall
SoLoud::Soloud::setVoiceRelativePlaySpeed(Soloud *this,uint param_1,float param_2)

{
  long lVar1;
  float fVar2;
  
  if (param_2 <= 0.0) {
    return 1;
  }
  lVar1 = *(long *)(this + (ulong)param_1 * 8 + 0xa0);
  if (lVar1 != 0) {
    *(float *)(lVar1 + 0x50) = param_2;
    fVar2 = *(float *)(this + (ulong)param_1 * 0x78 + 0x3524);
    *(float *)(lVar1 + 0x54) = fVar2 * param_2;
    *(float *)(lVar1 + 0x48) = fVar2 * param_2 * *(float *)(lVar1 + 0x44);
    return 0;
  }
  return 0;
}


