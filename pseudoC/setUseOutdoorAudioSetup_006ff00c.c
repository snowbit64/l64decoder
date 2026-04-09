// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setUseOutdoorAudioSetup
// Entry Point: 006ff00c
// Size: 288 bytes
// Signature: undefined __thiscall setUseOutdoorAudioSetup(AnimalHusbandry * this, bool param_1)


/* AnimalHusbandry::setUseOutdoorAudioSetup(bool) */

void __thiscall AnimalHusbandry::setUseOutdoorAudioSetup(AnimalHusbandry *this,bool param_1)

{
  AnimalSoundSystem *this_00;
  uint uVar1;
  AudioSource *pAVar2;
  ulong uVar3;
  AudioSource **ppAVar4;
  float fVar5;
  
  if (this[0x52] != (AnimalHusbandry)param_1) {
    this_00 = (AnimalSoundSystem *)(this + 0x1fcb0);
    AnimalSoundSystem::useOutdoorSetup(this_00,param_1);
    this[0x52] = (AnimalHusbandry)param_1;
    if (*(uint *)(this + 0x1fb38) != 0) {
      uVar3 = 0;
      ppAVar4 = (AudioSource **)(this + 0x1fbc8);
      do {
        pAVar2 = ppAVar4[-0xb];
        fVar5 = (float)AnimalSoundSystem::GetVolume(this_00,*(uint *)(this + 0x1fd08));
        AudioSource::setVolume(pAVar2,fVar5);
        pAVar2 = ppAVar4[-1];
        fVar5 = (float)AnimalSoundSystem::GetVolume(this_00,*(uint *)(this + 0x1fd0c));
        AudioSource::setVolume(pAVar2,fVar5);
        pAVar2 = *ppAVar4;
        fVar5 = (float)AnimalSoundSystem::GetVolume(this_00,*(uint *)(this + 0x1fd0c));
        AudioSource::setVolume(pAVar2,fVar5);
        uVar3 = uVar3 + 1;
        ppAVar4 = ppAVar4 + 0x12;
      } while (uVar3 < *(uint *)(this + 0x1fb38));
    }
    uVar1 = *(uint *)(this + 0x5c);
    if (uVar1 != 0) {
      uVar3 = 0;
      do {
        pAVar2 = *(AudioSource **)(*(long *)(this + uVar3 * 8 + 0x1f568) + 400);
        if (pAVar2 != (AudioSource *)0x0) {
          fVar5 = (float)AnimalSoundSystem::GetVolume
                                   (this_00,*(uint *)(this + (ulong)*(uint *)(*(long *)(this + uVar3
                                                                                               * 8 +
                                                                                                                                                                                              
                                                  0x1f568) + 0x19c) * 0x3ea0 + 0x3ed0));
          AudioSource::setVolume(pAVar2,fVar5);
          uVar1 = *(uint *)(this + 0x5c);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  return;
}


