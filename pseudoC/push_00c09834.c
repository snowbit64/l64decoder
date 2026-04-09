// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push
// Entry Point: 00c09834
// Size: 300 bytes
// Signature: undefined __thiscall push(GsTSymbolTable * this, SHC_PoolAllocator * param_1)


/* GsTSymbolTable::push(SHC_PoolAllocator&) */

void __thiscall GsTSymbolTable::push(GsTSymbolTable *this,SHC_PoolAllocator *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  size_t __n;
  
  puVar3 = (undefined8 *)SHC_PoolAllocator::allocate(param_1,0x20);
  puVar3[2] = param_1;
  puVar3[3] = 0;
  puVar3[1] = 0;
  *puVar3 = puVar3 + 1;
  puVar2 = *(undefined8 **)(this + 8);
  if (puVar2 < *(undefined8 **)(this + 0x10)) {
    *puVar2 = puVar3;
    *(undefined8 **)(this + 8) = puVar2 + 1;
  }
  else {
    __src = *(void **)this;
    __n = (long)puVar2 - (long)__src;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar4 = (long)*(undefined8 **)(this + 0x10) - (long)__src;
    uVar5 = (long)uVar4 >> 2;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x7ffffffffffffff7 < uVar4) {
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
    *puVar2 = puVar3;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)this = __dest;
    *(undefined8 **)(this + 8) = puVar2 + 1;
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


