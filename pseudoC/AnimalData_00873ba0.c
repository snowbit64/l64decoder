// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AnimalData
// Entry Point: 00873ba0
// Size: 112 bytes
// Signature: undefined __thiscall ~AnimalData(AnimalData * this)


/* AnimalCompanionManager::AnimalData::~AnimalData() */

void __thiscall AnimalCompanionManager::AnimalData::~AnimalData(AnimalData *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  if (((byte)this[0x30] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x40));
  return;
}


