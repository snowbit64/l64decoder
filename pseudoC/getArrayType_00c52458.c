// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getArrayType
// Entry Point: 00c52458
// Size: 364 bytes
// Signature: undefined __thiscall getArrayType(IR_TypeSet * this, IR_Type * param_1, uint param_2)


/* IR_TypeSet::getArrayType(IR_Type*, unsigned int) */

undefined4 * __thiscall IR_TypeSet::getArrayType(IR_TypeSet *this,IR_Type *param_1,uint param_2)

{
  size_t __n;
  void *__dest;
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  void *__src;
  undefined4 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(this + 0xd48);
  __src = *(void **)(this + 0xd40);
  __n = (long)puVar7 - (long)__src;
  uVar6 = (long)__n >> 4;
  if (__n != 0) {
    uVar1 = 0;
    do {
      puVar5 = *(undefined4 **)((long)__src + uVar1 * 0x10);
      if ((*(IR_Type **)(puVar5 + 2) == param_1) && (puVar5[4] == param_2)) {
        return puVar5;
      }
      uVar1 = (ulong)((int)uVar1 + 1);
    } while (uVar1 < uVar6);
  }
  puVar5 = (undefined4 *)operator_new(0x20);
  puVar2 = *(undefined8 **)(this + 0xd50);
  *(IR_Type **)(puVar5 + 2) = param_1;
  puVar5[4] = param_2;
  *puVar5 = 4;
  if (puVar7 < puVar2) {
    *puVar7 = puVar5;
    *(undefined *)(puVar7 + 1) = 1;
    *(undefined8 **)(this + 0xd48) = puVar7 + 2;
  }
  else {
    uVar1 = uVar6 + 1;
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
    puVar7 = (undefined8 *)((long)__dest + uVar6 * 0x10);
    *puVar7 = puVar5;
    *(undefined *)(puVar7 + 1) = 1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0xd40) = __dest;
    *(undefined8 **)(this + 0xd48) = puVar7 + 2;
    *(void **)(this + 0xd50) = (void *)((long)__dest + uVar1 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  return puVar5;
}


