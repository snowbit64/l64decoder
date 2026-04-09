// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeFileErrorListener
// Entry Point: 00b32bf4
// Size: 140 bytes
// Signature: undefined __thiscall removeFileErrorListener(FileManager * this, FileErrorListener * param_1)


/* FileManager::removeFileErrorListener(FileManager::FileErrorListener*) */

void __thiscall FileManager::removeFileErrorListener(FileManager *this,FileErrorListener *param_1)

{
  void *__dest;
  long lVar1;
  long lVar2;
  size_t __n;
  ulong uVar3;
  
  Mutex::enterCriticalSection();
  lVar1 = *(long *)(this + 0x18);
  lVar2 = *(long *)(this + 0x20) - lVar1;
  if (lVar2 != 0) {
    uVar3 = 0;
    do {
      if (*(FileErrorListener **)(lVar1 + uVar3 * 8) == param_1) {
        __dest = (void *)(lVar1 + uVar3 * 8);
        __n = *(long *)(this + 0x20) - (long)(void *)((long)__dest + 8);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 8),__n);
        }
        *(size_t *)(this + 0x20) = (long)__dest + __n;
        break;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(lVar2 >> 3));
  }
  Mutex::leaveCriticalSection();
  return;
}


