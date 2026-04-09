// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~UpdateManager
// Entry Point: 00b04548
// Size: 76 bytes
// Signature: undefined __thiscall ~UpdateManager(UpdateManager * this)


/* UpdateManager::~UpdateManager() */

void __thiscall UpdateManager::~UpdateManager(UpdateManager *this)

{
  void *pvVar1;
  
  Mutex::~Mutex((Mutex *)(this + 0x30));
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 8) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


