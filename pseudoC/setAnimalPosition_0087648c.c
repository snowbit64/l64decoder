// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAnimalPosition
// Entry Point: 0087648c
// Size: 20 bytes
// Signature: undefined __thiscall setAnimalPosition(AnimalCompanionManager * this, uint param_1, Vector3 * param_2)


/* AnimalCompanionManager::setAnimalPosition(unsigned int, Vector3 const&) */

void __thiscall
AnimalCompanionManager::setAnimalPosition
          (AnimalCompanionManager *this,uint param_1,Vector3 *param_2)

{
  AnimalSteering::setPosition
            ((AnimalSteering *)(*(long *)(this + 0xf8) + (ulong)param_1 * 0xe0),param_2);
  return;
}


