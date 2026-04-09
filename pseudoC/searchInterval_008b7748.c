// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: searchInterval
// Entry Point: 008b7748
// Size: 100 bytes
// Signature: undefined __thiscall searchInterval(LoadSoundSimulation * this, float param_1, uint * param_2, uint * param_3)


/* LoadSoundSimulation::searchInterval(float, unsigned int&, unsigned int&) const */

void __thiscall
LoadSoundSimulation::searchInterval
          (LoadSoundSimulation *this,float param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  float fVar6;
  
  lVar3 = *(long *)this;
  *param_2 = 0;
  *param_3 = 0;
  pfVar4 = *(float **)(lVar3 + 0x48);
  uVar5 = *(long *)(lVar3 + 0x50) - (long)pfVar4;
  if ((int)(uVar5 >> 6) != 0) {
    uVar2 = 0;
    uVar5 = uVar5 >> 6 & 0xffffffff;
    do {
      fVar6 = *pfVar4;
      if (param_1 <= fVar6) {
        uVar1 = 0;
        if (uVar2 != 0) {
          uVar1 = uVar2 - 1;
        }
        *param_3 = uVar2;
        if (fVar6 != param_1) {
          uVar2 = uVar1;
        }
        *param_2 = uVar2;
        return;
      }
      uVar2 = uVar2 + 1;
      pfVar4 = pfVar4 + 0x10;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}


