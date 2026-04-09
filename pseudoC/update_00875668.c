// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00875668
// Size: 44 bytes
// Signature: undefined __thiscall update(AnimalCompanionManager * this, float param_1)


/* AnimalCompanionManager::update(float) */

void __thiscall AnimalCompanionManager::update(AnimalCompanionManager *this,float param_1)

{
  if (this[0x18a] != (AnimalCompanionManager)0x0) {
    if (this[0x18b] != (AnimalCompanionManager)0x0) {
      updateAnimals(this,param_1);
      return;
    }
    if (*(long *)(this + 0x48) != 0) {
      this[0x18b] = (AnimalCompanionManager)0x1;
      addAnimalsToWorld();
      return;
    }
  }
  return;
}


