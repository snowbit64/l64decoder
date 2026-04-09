// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TimerManager
// Entry Point: 00b03eac
// Size: 68 bytes
// Signature: undefined __thiscall ~TimerManager(TimerManager * this)


/* TimerManager::~TimerManager() */

void __thiscall TimerManager::~TimerManager(TimerManager *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x20);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


