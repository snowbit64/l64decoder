// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAnimalNode
// Entry Point: 00876924
// Size: 20 bytes
// Signature: undefined __thiscall getAnimalNode(AnimalCompanionManager * this, uint param_1)


/* AnimalCompanionManager::getAnimalNode(unsigned int) */

undefined8 __thiscall
AnimalCompanionManager::getAnimalNode(AnimalCompanionManager *this,uint param_1)

{
  return *(undefined8 *)(*(long *)(this + 0xb0) + (ulong)param_1 * 0x58 + 0x10);
}


