// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeFileLoader
// Entry Point: 00b32a60
// Size: 140 bytes
// Signature: undefined __thiscall removeFileLoader(FileManager * this, IFileLoader * param_1)


/* FileManager::removeFileLoader(IFileLoader*) */

void __thiscall FileManager::removeFileLoader(FileManager *this,IFileLoader *param_1)

{
  void *__dest;
  long lVar1;
  long lVar2;
  size_t __n;
  ulong uVar3;
  
  Mutex::enterCriticalSection();
  lVar1 = *(long *)this;
  lVar2 = *(long *)(this + 8) - lVar1;
  if (lVar2 != 0) {
    uVar3 = 0;
    do {
      if (*(IFileLoader **)(lVar1 + uVar3 * 8) == param_1) {
        __dest = (void *)(lVar1 + uVar3 * 8);
        __n = *(long *)(this + 8) - (long)(void *)((long)__dest + 8);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 8),__n);
        }
        *(size_t *)(this + 8) = (long)__dest + __n;
        break;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(lVar2 >> 3));
  }
  Mutex::leaveCriticalSection();
  return;
}


