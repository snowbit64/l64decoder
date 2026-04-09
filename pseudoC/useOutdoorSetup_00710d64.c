// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: useOutdoorSetup
// Entry Point: 00710d64
// Size: 256 bytes
// Signature: undefined __thiscall useOutdoorSetup(AnimalSoundSystem * this, bool param_1)


/* AnimalSoundSystem::useOutdoorSetup(bool) */

void __thiscall AnimalSoundSystem::useOutdoorSetup(AnimalSoundSystem *this,bool param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  
  lVar2 = *(long *)(this + 0x30);
  this[0x51] = (AnimalSoundSystem)param_1;
  if (*(long *)(this + 0x38) != lVar2) {
    uVar5 = 0;
    do {
      fVar6 = *(float *)(lVar2 + uVar5 * 0x1c + 0x14);
      if (!param_1) {
        lVar1 = *(long *)(this + 0x18);
        if (*(long *)(this + 0x20) - lVar1 != 0) {
          uVar3 = (*(long *)(this + 0x20) - lVar1 >> 3) * 0x2e8ba2e8ba2e8ba3;
          uVar4 = 0;
          do {
            if (*(int *)(lVar1 + uVar4 * 0x58) == *(int *)(lVar2 + uVar5 * 0x1c)) {
              fVar6 = *(float *)(lVar1 + uVar4 * 0x58 + 0x3c);
              break;
            }
            uVar4 = (ulong)((int)uVar4 + 1);
          } while (uVar4 <= uVar3 && uVar3 - uVar4 != 0);
        }
      }
      AudioSource::setVolume
                (*(AudioSource **)(*(long *)this + (ulong)*(uint *)(lVar2 + uVar5 * 0x1c + 4) * 8),
                 fVar6);
      lVar2 = *(long *)(this + 0x30);
      uVar5 = (ulong)((int)uVar5 + 1);
      uVar3 = (*(long *)(this + 0x38) - lVar2 >> 2) * 0x6db6db6db6db6db7;
    } while (uVar5 <= uVar3 && uVar3 - uVar5 != 0);
  }
  return;
}


