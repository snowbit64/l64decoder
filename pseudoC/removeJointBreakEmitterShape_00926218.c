// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeJointBreakEmitterShape
// Entry Point: 00926218
// Size: 124 bytes
// Signature: undefined __thiscall removeJointBreakEmitterShape(DestructionShape * this, DestructionEmitterShape * param_1)


/* DestructionShape::removeJointBreakEmitterShape(DestructionEmitterShape*) */

void __thiscall
DestructionShape::removeJointBreakEmitterShape
          (DestructionShape *this,DestructionEmitterShape *param_1)

{
  void *__dest;
  long lVar1;
  size_t __n;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(this + 0x360);
  lVar1 = *(long *)(this + 0x368) - lVar2;
  if (lVar1 != 0) {
    uVar3 = 0;
    do {
      if (*(DestructionEmitterShape **)(lVar2 + uVar3 * 8) == param_1) {
        __dest = (void *)(lVar2 + uVar3 * 8);
        __n = *(long *)(this + 0x368) - (long)(void *)((long)__dest + 8);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 8),__n);
        }
        *(size_t *)(this + 0x368) = (long)__dest + __n;
        return;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(lVar1 >> 3));
  }
  return;
}


