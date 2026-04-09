// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Manager
// Entry Point: 00a70368
// Size: 24 bytes
// Signature: undefined __thiscall ~Manager(Manager * this)


/* PlayerCenteredSystem::Manager::~Manager() */

void __thiscall PlayerCenteredSystem::Manager::~Manager(Manager *this)

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


