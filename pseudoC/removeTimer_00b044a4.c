// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeTimer
// Entry Point: 00b044a4
// Size: 120 bytes
// Signature: undefined __thiscall removeTimer(TimerManager * this, TimerListener * param_1)


/* TimerManager::removeTimer(TimerManager::TimerListener*) */

void __thiscall TimerManager::removeTimer(TimerManager *this,TimerListener *param_1)

{
  void *__dest;
  long lVar1;
  size_t __n;
  ulong uVar2;
  
  lVar1 = *(long *)(this + 0x10) - *(long *)(this + 8);
  if (lVar1 != 0) {
    uVar2 = 0;
    do {
      __dest = (void *)(*(long *)(this + 8) + uVar2 * 0x10);
      if (*(TimerListener **)((long)__dest + 8) == param_1) {
        __n = *(long *)(this + 0x10) - (long)(void *)((long)__dest + 0x10);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 0x10),__n);
        }
        *(size_t *)(this + 0x10) = (long)__dest + __n;
        return;
      }
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (uVar2 < (ulong)(lVar1 >> 4));
  }
  return;
}


