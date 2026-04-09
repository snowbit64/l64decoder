// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onFoliageTransformGroupDeleted
// Entry Point: 008d4ed0
// Size: 120 bytes
// Signature: undefined __thiscall onFoliageTransformGroupDeleted(FoliageBendingSystem * this, FoliageTransformGroup * param_1)


/* FoliageBendingSystem::onFoliageTransformGroupDeleted(FoliageTransformGroup*) */

void __thiscall
FoliageBendingSystem::onFoliageTransformGroupDeleted
          (FoliageBendingSystem *this,FoliageTransformGroup *param_1)

{
  void *__dest;
  long lVar1;
  long lVar2;
  size_t __n;
  ulong uVar3;
  
  lVar1 = *(long *)(this + 0x78);
  lVar2 = *(long *)(this + 0x80) - lVar1;
  if (lVar2 != 0) {
    uVar3 = 0;
    do {
      if (*(FoliageTransformGroup **)(lVar1 + uVar3 * 8) == param_1) {
        __dest = (void *)(lVar1 + uVar3 * 8);
        __n = *(long *)(this + 0x80) - (long)(void *)((long)__dest + 8);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 8),__n);
        }
        *(size_t *)(this + 0x80) = (long)__dest + __n;
        return;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(lVar2 >> 3));
  }
  return;
}


