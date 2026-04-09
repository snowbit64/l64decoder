// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addToFoliageTransformGroup
// Entry Point: 008d4d94
// Size: 316 bytes
// Signature: undefined __thiscall addToFoliageTransformGroup(FoliageBendingSystem * this, FoliageTransformGroup * param_1)


/* FoliageBendingSystem::addToFoliageTransformGroup(FoliageTransformGroup*) */

void __thiscall
FoliageBendingSystem::addToFoliageTransformGroup
          (FoliageBendingSystem *this,FoliageTransformGroup *param_1)

{
  FoliageTransformGroup **ppFVar1;
  long lVar2;
  void *__dest;
  ulong uVar3;
  void *pvVar4;
  ulong __n;
  
  pvVar4 = *(void **)(this + 0x78);
  lVar2 = *(long *)(this + 0x80) - (long)pvVar4;
  if (lVar2 != 0) {
    uVar3 = 0;
    do {
      if (*(FoliageTransformGroup **)((long)pvVar4 + uVar3 * 8) == param_1) {
        return;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(lVar2 >> 3));
  }
  FoliageTransformGroup::setFoliageBendingSystem(param_1,this);
  ppFVar1 = *(FoliageTransformGroup ***)(this + 0x80);
  if (ppFVar1 == *(FoliageTransformGroup ***)(this + 0x88)) {
    pvVar4 = *(void **)(this + 0x78);
    __n = (long)ppFVar1 - (long)pvVar4;
    uVar3 = ((long)__n >> 3) + 1;
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar3 <= (ulong)((long)__n >> 2)) {
      uVar3 = (long)__n >> 2;
    }
    if (0x7ffffffffffffff7 < __n) {
      uVar3 = 0x1fffffffffffffff;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar3 << 3);
    }
    ppFVar1 = (FoliageTransformGroup **)((long)__dest + ((long)__n >> 3) * 8);
    *ppFVar1 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,pvVar4,__n);
    }
    *(void **)(this + 0x78) = __dest;
    *(FoliageTransformGroup ***)(this + 0x80) = ppFVar1 + 1;
    *(void **)(this + 0x88) = (void *)((long)__dest + uVar3 * 8);
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
      return;
    }
  }
  else {
    *ppFVar1 = param_1;
    *(FoliageTransformGroup ***)(this + 0x80) = ppFVar1 + 1;
  }
  return;
}


