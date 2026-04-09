// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TerrainPatchOccluderManager
// Entry Point: 008f5814
// Size: 88 bytes
// Signature: undefined __thiscall ~TerrainPatchOccluderManager(TerrainPatchOccluderManager * this)


/* TerrainPatchOccluderManager::~TerrainPatchOccluderManager() */

void __thiscall
TerrainPatchOccluderManager::~TerrainPatchOccluderManager(TerrainPatchOccluderManager *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x158);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x160) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x138);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x140) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x118);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x120) = pvVar1;
    operator_delete(pvVar1);
  }
  Mutex::~Mutex((Mutex *)(this + 0x70));
  Event::~Event((Event *)(this + 8));
  return;
}


