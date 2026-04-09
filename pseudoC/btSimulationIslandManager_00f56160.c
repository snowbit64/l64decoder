// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btSimulationIslandManager
// Entry Point: 00f56160
// Size: 204 bytes
// Signature: undefined __thiscall ~btSimulationIslandManager(btSimulationIslandManager * this)


/* btSimulationIslandManager::~btSimulationIslandManager() */

void __thiscall
btSimulationIslandManager::~btSimulationIslandManager(btSimulationIslandManager *this)

{
  *(undefined ***)this = &PTR__btSimulationIslandManager_01019d88;
  if ((*(long *)(this + 0x58) != 0) && (this[0x60] != (btSimulationIslandManager)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x60] = (btSimulationIslandManager)0x1;
  if ((*(long *)(this + 0x38) != 0) && (this[0x40] != (btSimulationIslandManager)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x40] = (btSimulationIslandManager)0x1;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  if ((*(long *)(this + 0x18) != 0) && (this[0x20] != (btSimulationIslandManager)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  operator_delete(this);
  return;
}


