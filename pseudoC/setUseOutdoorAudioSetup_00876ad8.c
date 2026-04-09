// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setUseOutdoorAudioSetup
// Entry Point: 00876ad8
// Size: 120 bytes
// Signature: undefined __thiscall setUseOutdoorAudioSetup(AnimalCompanionManager * this, bool param_1)


/* AnimalCompanionManager::setUseOutdoorAudioSetup(bool) */

void __thiscall
AnimalCompanionManager::setUseOutdoorAudioSetup(AnimalCompanionManager *this,bool param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (this[0x238] != (AnimalCompanionManager)param_1) {
    if (*(int *)(this + 0x18c) != 0) {
      lVar1 = 0;
      uVar2 = 0;
      do {
        AnimalSoundSystem::useOutdoorSetup
                  ((AnimalSoundSystem *)(*(long *)(this + 0x140) + lVar1),param_1);
        uVar2 = uVar2 + 1;
        lVar1 = lVar1 + 0x58;
      } while (uVar2 < *(uint *)(this + 0x18c));
    }
    this[0x238] = (AnimalCompanionManager)param_1;
  }
  return;
}


