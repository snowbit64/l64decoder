// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTriangle
// Entry Point: 00b7e8d4
// Size: 272 bytes
// Signature: undefined __thiscall addTriangle(IndexedTriangleSetBuilder * this, Triangle * param_1)


/* IndexedTriangleSetBuilder::addTriangle(IndexedTriangleSetBuilder::Triangle const&) */

void __thiscall
IndexedTriangleSetBuilder::addTriangle(IndexedTriangleSetBuilder *this,Triangle *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *__dest;
  void *__src;
  ulong __n;
  undefined8 uVar3;
  
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == *(undefined8 **)(this + 0x28)) {
    __src = *(void **)(this + 0x18);
    __n = (long)puVar2 - (long)__src;
    uVar1 = ((long)__n >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)__n >> 3)) {
      uVar1 = (long)__n >> 3;
    }
    if (0x7fffffffffffffef < __n) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar1 << 4);
    }
    puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 4) * 0x10);
    uVar3 = *(undefined8 *)param_1;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *puVar2 = uVar3;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x18) = __dest;
    *(undefined8 **)(this + 0x20) = puVar2 + 2;
    *(void **)(this + 0x28) = (void *)((long)__dest + uVar1 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    uVar3 = *(undefined8 *)param_1;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *puVar2 = uVar3;
    *(undefined8 **)(this + 0x20) = puVar2 + 2;
  }
  return;
}


