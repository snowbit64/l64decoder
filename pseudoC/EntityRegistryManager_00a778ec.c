// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~EntityRegistryManager
// Entry Point: 00a778ec
// Size: 84 bytes
// Signature: undefined __thiscall ~EntityRegistryManager(EntityRegistryManager * this)


/* EntityRegistryManager::~EntityRegistryManager() */

void __thiscall EntityRegistryManager::~EntityRegistryManager(EntityRegistryManager *this)

{
  void **ppvVar1;
  void *pvVar2;
  
  Mutex::~Mutex((Mutex *)(this + 0x2c));
  ppvVar1 = (void **)*(void **)(this + 0x10);
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = *ppvVar1;
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar2;
  }
  pvVar2 = *(void **)this;
  *(undefined8 *)this = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


