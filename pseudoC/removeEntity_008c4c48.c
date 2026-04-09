// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeEntity
// Entry Point: 008c4c48
// Size: 120 bytes
// Signature: undefined __thiscall removeEntity(SimpleCullingStructure * this, TransformGroup * param_1)


/* SimpleCullingStructure::removeEntity(TransformGroup*) */

void __thiscall
SimpleCullingStructure::removeEntity(SimpleCullingStructure *this,TransformGroup *param_1)

{
  void *__dest;
  long lVar1;
  long lVar2;
  size_t __n;
  ulong uVar3;
  
  lVar1 = *(long *)this;
  lVar2 = *(long *)(this + 8) - lVar1;
  if (lVar2 != 0) {
    uVar3 = 0;
    do {
      if (*(TransformGroup **)(lVar1 + uVar3 * 8) == param_1) {
        __dest = (void *)(lVar1 + uVar3 * 8);
        __n = *(long *)(this + 8) - (long)(void *)((long)__dest + 8);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 8),__n);
        }
        *(size_t *)(this + 8) = (long)__dest + __n;
        return;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(lVar2 >> 3));
  }
  return;
}


