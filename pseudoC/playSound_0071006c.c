// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: playSound
// Entry Point: 0071006c
// Size: 280 bytes
// Signature: undefined __thiscall playSound(AnimalSoundSystem * this, uint param_1, Vector3 * param_2, bool param_3)


/* AnimalSoundSystem::playSound(unsigned int, Vector3 const&, bool) */

void __thiscall
AnimalSoundSystem::playSound(AnimalSoundSystem *this,uint param_1,Vector3 *param_2,bool param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((param_1 != 0xffffffff) && (lVar2 = *(long *)(this + 0x18), *(long *)(this + 0x20) != lVar2))
  {
    uVar4 = 0;
    do {
      if ((*(uint *)(lVar2 + uVar4 * 0x58) == param_1) &&
         (uVar1 = getFreeSample(this,(uint)uVar4), uVar1 != 0xffffffff)) {
        lVar2 = *(long *)(this + 0x18) + uVar4 * 0x58;
        fVar7 = *(float *)(lVar2 + 0x50);
        fVar5 = (float)MathUtil::getRandomMinMax(*(float *)(lVar2 + 0x40),*(float *)(lVar2 + 0x44));
        lVar2 = *(long *)(this + 0x18) + uVar4 * 0x58;
        fVar8 = *(float *)(lVar2 + 0x38);
        fVar6 = (float)MathUtil::getRandomMinMax(*(float *)(lVar2 + 0x48),*(float *)(lVar2 + 0x4c));
        playSound(this,param_1,uVar1,param_2,param_3,fVar8 + fVar6,fVar7 + fVar5);
      }
      lVar2 = *(long *)(this + 0x18);
      uVar4 = (ulong)((uint)uVar4 + 1);
      uVar3 = (*(long *)(this + 0x20) - lVar2 >> 3) * 0x2e8ba2e8ba2e8ba3;
    } while (uVar4 <= uVar3 && uVar3 - uVar4 != 0);
  }
  return;
}


