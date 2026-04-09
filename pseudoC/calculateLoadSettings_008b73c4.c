// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateLoadSettings
// Entry Point: 008b73c4
// Size: 180 bytes
// Signature: undefined __thiscall calculateLoadSettings(LoadSoundSimulation * this, float param_1, uint * param_2, uint * param_3, float * param_4)


/* LoadSoundSimulation::calculateLoadSettings(float, unsigned int&, unsigned int&, float&) const */

void __thiscall
LoadSoundSimulation::calculateLoadSettings
          (LoadSoundSimulation *this,float param_1,uint *param_2,uint *param_3,float *param_4)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  
  lVar3 = *(long *)this;
  *param_2 = 0;
  *param_3 = 0;
  pfVar1 = *(float **)(lVar3 + 0x48);
  uVar5 = *(long *)(lVar3 + 0x50) - (long)pfVar1;
  if ((int)(uVar5 >> 6) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    uVar5 = uVar5 >> 6 & 0xffffffff;
    pfVar6 = pfVar1;
    do {
      fVar7 = *pfVar6;
      if (param_1 <= fVar7) {
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = uVar4 - 1;
        }
        *param_3 = uVar4;
        if (fVar7 != param_1) {
          uVar4 = uVar2;
        }
        *param_2 = uVar4;
        uVar4 = *param_3;
        goto LAB_008b7434;
      }
      uVar4 = uVar4 + 1;
      uVar5 = uVar5 - 1;
      pfVar6 = pfVar6 + 0x10;
    } while (uVar5 != 0);
    uVar4 = 0;
  }
LAB_008b7434:
  uVar2 = *param_2;
  if ((uVar2 == uVar4) ||
     (fVar7 = (param_1 - pfVar1[(ulong)uVar2 * 0x10]) /
              (pfVar1[(ulong)uVar4 * 0x10] - pfVar1[(ulong)uVar2 * 0x10]), *param_4 = fVar7,
     fVar7 <= 0.0)) {
    *param_3 = uVar2;
    *param_4 = 0.0;
  }
  return;
}


