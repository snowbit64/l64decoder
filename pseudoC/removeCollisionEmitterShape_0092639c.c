// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeCollisionEmitterShape
// Entry Point: 0092639c
// Size: 124 bytes
// Signature: undefined __thiscall removeCollisionEmitterShape(DestructionShape * this, DestructionEmitterShape * param_1)


/* DestructionShape::removeCollisionEmitterShape(DestructionEmitterShape*) */

void __thiscall
DestructionShape::removeCollisionEmitterShape
          (DestructionShape *this,DestructionEmitterShape *param_1)

{
  void *__dest;
  long lVar1;
  size_t __n;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(this + 0x378);
  lVar1 = *(long *)(this + 0x380) - lVar2;
  if (lVar1 != 0) {
    uVar3 = 0;
    do {
      if (*(DestructionEmitterShape **)(lVar2 + uVar3 * 8) == param_1) {
        __dest = (void *)(lVar2 + uVar3 * 8);
        __n = *(long *)(this + 0x380) - (long)(void *)((long)__dest + 8);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 8),__n);
        }
        *(size_t *)(this + 0x380) = (long)__dest + __n;
        return;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(lVar1 >> 3));
  }
  return;
}


