// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~UpdateRenderingManager
// Entry Point: 00a48578
// Size: 24 bytes
// Signature: undefined __thiscall ~UpdateRenderingManager(UpdateRenderingManager * this)


/* UpdateRenderingManager::~UpdateRenderingManager() */

void __thiscall UpdateRenderingManager::~UpdateRenderingManager(UpdateRenderingManager *this)

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


