// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00876018
// Size: 48 bytes
// Signature: undefined __thiscall update(AnimalCompanionManager * this, float param_1)


/* non-virtual thunk to AnimalCompanionManager::update(float) */

void __thiscall AnimalCompanionManager::update(AnimalCompanionManager *this,float param_1)

{
  if (this[0x16a] != (AnimalCompanionManager)0x0) {
    if (this[0x16b] != (AnimalCompanionManager)0x0) {
      updateAnimals(this + -0x20,param_1);
      return;
    }
    if (*(long *)(this + 0x28) != 0) {
      this[0x16b] = (AnimalCompanionManager)0x1;
      addAnimalsToWorld();
      return;
    }
  }
  return;
}


