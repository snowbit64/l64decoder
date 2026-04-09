// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: interpolateWetDry
// Entry Point: 008b7478
// Size: 144 bytes
// Signature: undefined __thiscall interpolateWetDry(LoadSoundSimulation * this, float param_1, uint param_2, uint param_3, float * param_4, float * param_5)


/* LoadSoundSimulation::interpolateWetDry(float, unsigned int, unsigned int, float&, float&) const
    */

void __thiscall
LoadSoundSimulation::interpolateWetDry
          (LoadSoundSimulation *this,float param_1,uint param_2,uint param_3,float *param_4,
          float *param_5)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = *(long *)this;
  lVar1 = *(long *)(lVar2 + 0x48);
  fVar3 = (float)AudioMathUtil::lerp(*(float *)(lVar1 + (ulong)param_2 * 0x40 + 0x34),
                                     *(float *)(lVar1 + (ulong)param_3 * 0x40 + 0x34),param_1);
  lVar1 = *(long *)(lVar2 + 0x48);
  *param_4 = fVar3;
  fVar3 = (float)AudioMathUtil::lerp(*(float *)(lVar1 + (ulong)param_2 * 0x40 + 0x38),
                                     *(float *)(lVar1 + (ulong)param_3 * 0x40 + 0x38),param_1);
  *param_5 = fVar3;
  return;
}


