// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~StatsOverlayManager
// Entry Point: 006f54d0
// Size: 24 bytes
// Signature: undefined __thiscall ~StatsOverlayManager(StatsOverlayManager * this)


/* StatsOverlayManager::~StatsOverlayManager() */

void __thiscall StatsOverlayManager::~StatsOverlayManager(StatsOverlayManager *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 8) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


