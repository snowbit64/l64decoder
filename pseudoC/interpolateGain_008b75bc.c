// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: interpolateGain
// Entry Point: 008b75bc
// Size: 72 bytes
// Signature: undefined __thiscall interpolateGain(LoadSoundSimulation * this, float param_1, uint param_2, uint param_3, float * param_4)


/* LoadSoundSimulation::interpolateGain(float, unsigned int, unsigned int, float&) const */

void __thiscall
LoadSoundSimulation::interpolateGain
          (LoadSoundSimulation *this,float param_1,uint param_2,uint param_3,float *param_4)

{
  float fVar1;
  
  fVar1 = (float)AudioMathUtil::lerp(*(float *)(*(long *)(*(long *)this + 0x48) +
                                                (ulong)param_2 * 0x40 + 0x3c),
                                     *(float *)(*(long *)(*(long *)this + 0x48) +
                                                (ulong)param_3 * 0x40 + 0x3c),param_1);
  *param_4 = fVar1;
  return;
}


