// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeChunkDeleteEmitterShape
// Entry Point: 00926520
// Size: 124 bytes
// Signature: undefined __thiscall removeChunkDeleteEmitterShape(DestructionShape * this, DestructionEmitterShape * param_1)


/* DestructionShape::removeChunkDeleteEmitterShape(DestructionEmitterShape*) */

void __thiscall
DestructionShape::removeChunkDeleteEmitterShape
          (DestructionShape *this,DestructionEmitterShape *param_1)

{
  void *__dest;
  long lVar1;
  size_t __n;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(this + 0x390);
  lVar1 = *(long *)(this + 0x398) - lVar2;
  if (lVar1 != 0) {
    uVar3 = 0;
    do {
      if (*(DestructionEmitterShape **)(lVar2 + uVar3 * 8) == param_1) {
        __dest = (void *)(lVar2 + uVar3 * 8);
        __n = *(long *)(this + 0x398) - (long)(void *)((long)__dest + 8);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 8),__n);
        }
        *(size_t *)(this + 0x398) = (long)__dest + __n;
        return;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(lVar1 >> 3));
  }
  return;
}


