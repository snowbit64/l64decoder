// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetVolume
// Entry Point: 00710f8c
// Size: 196 bytes
// Signature: undefined __thiscall GetVolume(AnimalSoundSystem * this, uint param_1)


/* AnimalSoundSystem::GetVolume(unsigned int) */

float __thiscall AnimalSoundSystem::GetVolume(AnimalSoundSystem *this,uint param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = 0.0;
  if (param_1 != 0xffffffff) {
    lVar2 = *(long *)(this + 0x18);
    lVar1 = *(long *)(this + 0x20);
    if (lVar1 != lVar2) {
      fVar6 = 0.0;
      uVar4 = 0;
      do {
        if (*(uint *)(lVar2 + uVar4 * 0x58) == param_1) {
          if (this[0x51] == (AnimalSoundSystem)0x0) {
            fVar6 = *(float *)(lVar2 + uVar4 * 0x58 + 0x3c);
          }
          else {
            lVar2 = lVar2 + uVar4 * 0x58;
            fVar6 = *(float *)(lVar2 + 0x38);
            fVar5 = (float)MathUtil::getRandomMinMax
                                     (*(float *)(lVar2 + 0x48),*(float *)(lVar2 + 0x4c));
            lVar2 = *(long *)(this + 0x18);
            lVar1 = *(long *)(this + 0x20);
            fVar6 = fVar6 + fVar5;
          }
        }
        uVar4 = (ulong)((int)uVar4 + 1);
        uVar3 = (lVar1 - lVar2 >> 3) * 0x2e8ba2e8ba2e8ba3;
      } while (uVar4 <= uVar3 && uVar3 - uVar4 != 0);
    }
  }
  return fVar6;
}


