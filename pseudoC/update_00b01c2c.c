// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00b01c2c
// Size: 156 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SaveHelperManager::update() */

void SaveHelperManager::update(void)

{
  void *__dest;
  size_t __n;
  long *in_x0;
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = in_x0[1] - *in_x0;
  if (lVar2 != 0) {
    uVar3 = 0;
    do {
      if (*(char *)(*(long *)(*in_x0 + uVar3 * 8) + 0x51) != '\0') {
        SaveHelper::finishSave();
        lVar2 = *in_x0;
        plVar1 = *(long **)(lVar2 + uVar3 * 8);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
          lVar2 = *in_x0;
        }
        __dest = (void *)(lVar2 + uVar3 * 8);
        __n = in_x0[1] - (long)(void *)((long)__dest + 8);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 8),__n);
        }
        in_x0[1] = (long)__dest + __n;
        return;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(lVar2 >> 3));
  }
  return;
}


