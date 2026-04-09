// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: interpolateDistortion
// Entry Point: 008b7508
// Size: 180 bytes
// Signature: undefined __thiscall interpolateDistortion(LoadSoundSimulation * this, float param_1, uint param_2, uint param_3, float * param_4, float * param_5, float * param_6)


/* LoadSoundSimulation::interpolateDistortion(float, unsigned int, unsigned int, float&, float&,
   float&) const */

void __thiscall
LoadSoundSimulation::interpolateDistortion
          (LoadSoundSimulation *this,float param_1,uint param_2,uint param_3,float *param_4,
          float *param_5,float *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  lVar2 = *(long *)this;
  lVar3 = (ulong)param_2 * 0x40;
  lVar4 = (ulong)param_3 * 0x40;
  fVar5 = (float)AudioMathUtil::lerp(*(float *)(*(long *)(lVar2 + 0x48) + lVar3 + 0x28),
                                     *(float *)(*(long *)(lVar2 + 0x48) + lVar4 + 0x28),param_1);
  lVar1 = *(long *)(lVar2 + 0x48);
  *param_4 = fVar5;
  fVar5 = (float)AudioMathUtil::lerp(*(float *)(lVar1 + lVar3 + 0x2c),
                                     *(float *)(lVar1 + lVar4 + 0x2c),param_1);
  lVar1 = *(long *)(lVar2 + 0x48);
  *param_5 = fVar5;
  fVar5 = (float)AudioMathUtil::lerp(*(float *)(lVar1 + lVar3 + 0x30),
                                     *(float *)(lVar1 + lVar4 + 0x30),param_1);
  *param_6 = fVar5;
  return;
}


