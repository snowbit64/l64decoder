// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeTriggerReport
// Entry Point: 009ab70c
// Size: 140 bytes
// Signature: undefined __thiscall removeTriggerReport(Bt2ScenegraphPhysicsContext * this, ITriggerReport * param_1)


/* Bt2ScenegraphPhysicsContext::removeTriggerReport(ITriggerReport*) */

void __thiscall
Bt2ScenegraphPhysicsContext::removeTriggerReport
          (Bt2ScenegraphPhysicsContext *this,ITriggerReport *param_1)

{
  ITriggerReport **__dest;
  size_t __n;
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(this + 0xe0);
  lVar2 = *(long *)(this + 0xe8);
  if (lVar2 != lVar1) {
    uVar3 = 0;
    do {
      __dest = (ITriggerReport **)(lVar1 + uVar3 * 8);
      if (*__dest == param_1) {
        __n = lVar2 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
          lVar1 = *(long *)(this + 0xe0);
        }
        lVar2 = (long)__dest + __n;
        *(long *)(this + 0xe8) = lVar2;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(lVar2 - lVar1 >> 3));
  }
  return;
}


