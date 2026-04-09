// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: interpolateLFO
// Entry Point: 008b7604
// Size: 144 bytes
// Signature: undefined __thiscall interpolateLFO(LoadSoundSimulation * this, float param_1, uint param_2, uint param_3, float * param_4, float * param_5)


/* LoadSoundSimulation::interpolateLFO(float, unsigned int, unsigned int, float&, float&) const */

void __thiscall
LoadSoundSimulation::interpolateLFO
          (LoadSoundSimulation *this,float param_1,uint param_2,uint param_3,float *param_4,
          float *param_5)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = *(long *)this;
  lVar1 = *(long *)(lVar2 + 0x48);
  fVar3 = (float)AudioMathUtil::lerp(*(float *)(lVar1 + (ulong)param_2 * 0x40 + 4),
                                     *(float *)(lVar1 + (ulong)param_3 * 0x40 + 4),param_1);
  lVar1 = *(long *)(lVar2 + 0x48);
  *param_4 = fVar3;
  fVar3 = (float)AudioMathUtil::lerp(*(float *)(lVar1 + (ulong)param_2 * 0x40 + 8),
                                     *(float *)(lVar1 + (ulong)param_3 * 0x40 + 8),param_1);
  *param_5 = fVar3;
  return;
}


