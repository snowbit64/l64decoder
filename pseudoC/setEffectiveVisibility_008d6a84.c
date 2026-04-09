// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setEffectiveVisibility
// Entry Point: 008d6a84
// Size: 100 bytes
// Signature: undefined __thiscall setEffectiveVisibility(ParticleSystem * this, bool param_1)


/* ParticleSystem::setEffectiveVisibility(bool) */

void __thiscall ParticleSystem::setEffectiveVisibility(ParticleSystem *this,bool param_1)

{
  UpdateManager *pUVar1;
  
  if (param_1) {
    if (this[0xf8] == (ParticleSystem)0x0) {
      this[0xf8] = (ParticleSystem)0x1;
      pUVar1 = (UpdateManager *)UpdateManager::getInstance();
      UpdateManager::addUpdateable(pUVar1,(Updateable *)(this + 0x70),false);
      return;
    }
  }
  else if (this[0xf8] != (ParticleSystem)0x0) {
    this[0xf8] = (ParticleSystem)0x0;
    pUVar1 = (UpdateManager *)UpdateManager::getInstance();
    UpdateManager::removeUpdateable(pUVar1,(Updateable *)(this + 0x70));
    return;
  }
  return;
}


