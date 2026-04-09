// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AdsBrockerManager
// Entry Point: 006f8990
// Size: 60 bytes
// Signature: undefined __thiscall ~AdsBrockerManager(AdsBrockerManager * this)


/* AdsBrockerManager::~AdsBrockerManager() */

void __thiscall AdsBrockerManager::~AdsBrockerManager(AdsBrockerManager *this)

{
  void *pvVar1;
  
  Mutex::~Mutex((Mutex *)(this + 0x8b8));
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 8) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


