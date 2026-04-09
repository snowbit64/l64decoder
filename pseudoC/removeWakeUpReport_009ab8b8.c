// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeWakeUpReport
// Entry Point: 009ab8b8
// Size: 120 bytes
// Signature: undefined __thiscall removeWakeUpReport(Bt2ScenegraphPhysicsContext * this, IWakeUpReport * param_1)


/* Bt2ScenegraphPhysicsContext::removeWakeUpReport(IWakeUpReport*) */

void __thiscall
Bt2ScenegraphPhysicsContext::removeWakeUpReport
          (Bt2ScenegraphPhysicsContext *this,IWakeUpReport *param_1)

{
  void *__dest;
  long lVar1;
  long lVar2;
  size_t __n;
  ulong uVar3;
  
  lVar1 = *(long *)(this + 0xf8);
  lVar2 = *(long *)(this + 0x100) - lVar1;
  if (lVar2 != 0) {
    uVar3 = 0;
    do {
      if (*(IWakeUpReport **)(lVar1 + uVar3 * 8) == param_1) {
        __dest = (void *)(lVar1 + uVar3 * 8);
        __n = *(long *)(this + 0x100) - (long)(void *)((long)__dest + 8);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 8),__n);
        }
        *(size_t *)(this + 0x100) = (long)__dest + __n;
        return;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(lVar2 >> 3));
  }
  return;
}


