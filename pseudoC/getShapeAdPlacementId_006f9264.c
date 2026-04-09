// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShapeAdPlacementId
// Entry Point: 006f9264
// Size: 120 bytes
// Signature: undefined __thiscall getShapeAdPlacementId(AdsBrockerManager * this, GsShape * param_1)


/* AdsBrockerManager::getShapeAdPlacementId(GsShape*) */

undefined4 __thiscall
AdsBrockerManager::getShapeAdPlacementId(AdsBrockerManager *this,GsShape *param_1)

{
  long *plVar1;
  long lVar3;
  long *plVar2;
  
  Mutex::enterCriticalSection();
  if (*(long **)this != *(long **)(this + 8)) {
    plVar1 = *(long **)this;
    do {
      plVar2 = plVar1 + 1;
      lVar3 = *plVar1;
      if (*(int *)(lVar3 + 0xc) == *(int *)(param_1 + 0x18)) {
        Mutex::leaveCriticalSection();
        return *(undefined4 *)(lVar3 + 0x20);
      }
      plVar1 = plVar2;
    } while (plVar2 != *(long **)(this + 8));
  }
  Mutex::leaveCriticalSection();
  return 0;
}


