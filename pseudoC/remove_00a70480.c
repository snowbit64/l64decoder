// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: remove
// Entry Point: 00a70480
// Size: 120 bytes
// Signature: undefined __thiscall remove(Manager * this, PlayerCenteredSystem * param_1)


/* PlayerCenteredSystem::Manager::remove(PlayerCenteredSystem*) */

void __thiscall PlayerCenteredSystem::Manager::remove(Manager *this,PlayerCenteredSystem *param_1)

{
  void *__dest;
  long lVar1;
  long lVar2;
  size_t __n;
  long lVar3;
  
  lVar1 = *(long *)this;
  lVar2 = *(long *)(this + 8);
  if (lVar1 != lVar2) {
    lVar3 = 0;
    do {
      if (*(PlayerCenteredSystem **)(lVar1 + lVar3) == param_1) {
        __dest = (void *)(lVar1 + lVar3);
        __n = lVar2 - (long)(void *)((long)__dest + 8);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 8),__n);
        }
        *(size_t *)(this + 8) = (long)__dest + __n;
        return;
      }
      lVar3 = lVar3 + 8;
    } while (lVar1 + lVar3 != lVar2);
  }
  return;
}


