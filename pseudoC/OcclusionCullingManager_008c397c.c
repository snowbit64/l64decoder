// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~OcclusionCullingManager
// Entry Point: 008c397c
// Size: 24 bytes
// Signature: undefined __thiscall ~OcclusionCullingManager(OcclusionCullingManager * this)


/* OcclusionCullingManager::~OcclusionCullingManager() */

void __thiscall OcclusionCullingManager::~OcclusionCullingManager(OcclusionCullingManager *this)

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


