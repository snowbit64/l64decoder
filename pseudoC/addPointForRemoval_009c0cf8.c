// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addPointForRemoval
// Entry Point: 009c0cf8
// Size: 276 bytes
// Signature: undefined __thiscall addPointForRemoval(DistanceMatrixTypeField * this, int param_1, int param_2)


/* ProceduralPlacementCacheManager::DistanceMatrixTypeField::addPointForRemoval(int, int) */

void __thiscall
ProceduralPlacementCacheManager::DistanceMatrixTypeField::addPointForRemoval
          (DistanceMatrixTypeField *this,int param_1,int param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  puVar2 = *(undefined8 **)(this + 0x30);
  if (puVar2 == *(undefined8 **)(this + 0x38)) {
    __src = *(void **)(this + 0x28);
    __n = (long)puVar2 - (long)__src;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)__n >> 2)) {
      uVar1 = (long)__n >> 2;
    }
    if (0x7ffffffffffffff7 < __n) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar1 << 3);
    }
    puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
    *puVar2 = CONCAT44(param_2,param_1);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x28) = __dest;
    *(undefined8 **)(this + 0x30) = puVar2 + 1;
    *(void **)(this + 0x38) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *puVar2 = CONCAT44(param_2,param_1);
    *(undefined8 **)(this + 0x30) = puVar2 + 1;
  }
  return;
}


