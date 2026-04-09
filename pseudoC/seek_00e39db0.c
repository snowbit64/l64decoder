// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: seek
// Entry Point: 00e39db0
// Size: 212 bytes
// Signature: undefined __thiscall seek(AudioSourceInstance * this, double param_1, float * param_2, uint param_3)


/* SoLoud::AudioSourceInstance::seek(double, float*, unsigned int) */

undefined8 __thiscall
SoLoud::AudioSourceInstance::seek
          (AudioSourceInstance *this,double param_1,float *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  
  dVar5 = param_1 - *(double *)(this + 0x60);
  if ((param_1 - *(double *)(this + 0x60) <= 0.0) &&
     (iVar3 = (**(code **)(*(long *)this + 0x28))(this), dVar5 = param_1, iVar3 != 0)) {
    return 6;
  }
  for (uVar4 = (uint)(dVar5 * (double)*(float *)(this + 0x48)); uVar4 != 0; uVar4 = uVar4 - uVar1) {
    uVar2 = 0;
    if (*(uint *)(this + 0x4c) != 0) {
      uVar2 = param_3 / *(uint *)(this + 0x4c);
    }
    uVar1 = uVar4;
    if ((int)uVar2 <= (int)uVar4) {
      uVar1 = uVar2;
    }
    (**(code **)(*(long *)this + 0x10))(this,param_2,uVar1,uVar1);
  }
  *(double *)(this + 0x60) = dVar5;
  return 0;
}


