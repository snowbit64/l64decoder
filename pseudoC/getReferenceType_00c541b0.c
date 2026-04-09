// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getReferenceType
// Entry Point: 00c541b0
// Size: 336 bytes
// Signature: undefined __thiscall getReferenceType(IR_TypeSet * this, IR_Type * param_1)


/* IR_TypeSet::getReferenceType(IR_Type*) */

undefined4 * __thiscall IR_TypeSet::getReferenceType(IR_TypeSet *this,IR_Type *param_1)

{
  size_t __n;
  void *__dest;
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  void *__src;
  undefined4 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  puVar6 = *(undefined8 **)(this + 0xd60);
  __src = *(void **)(this + 0xd58);
  __n = (long)puVar6 - (long)__src;
  uVar7 = (long)__n >> 4;
  if (__n != 0) {
    uVar1 = 0;
    do {
      puVar5 = *(undefined4 **)((long)__src + uVar1 * 0x10);
      if (*(IR_Type **)(puVar5 + 2) == param_1) {
        return puVar5;
      }
      uVar1 = (ulong)((int)uVar1 + 1);
    } while (uVar1 < uVar7);
  }
  puVar5 = (undefined4 *)operator_new(0x20);
  puVar2 = *(undefined8 **)(this + 0xd68);
  *(IR_Type **)(puVar5 + 2) = param_1;
  *puVar5 = 5;
  if (puVar6 < puVar2) {
    *puVar6 = puVar5;
    *(undefined *)(puVar6 + 1) = 1;
    *(undefined8 **)(this + 0xd60) = puVar6 + 2;
  }
  else {
    uVar1 = uVar7 + 1;
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar3 = (long)puVar2 - (long)__src;
    uVar4 = (long)uVar3 >> 3;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    if (0x7fffffffffffffef < uVar3) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar1 * 0x10);
    puVar6 = (undefined8 *)((long)__dest + uVar7 * 0x10);
    *puVar6 = puVar5;
    *(undefined *)(puVar6 + 1) = 1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0xd58) = __dest;
    *(undefined8 **)(this + 0xd60) = puVar6 + 2;
    *(void **)(this + 0xd68) = (void *)((long)__dest + uVar1 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  return puVar5;
}


