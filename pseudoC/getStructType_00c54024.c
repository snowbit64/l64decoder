// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStructType
// Entry Point: 00c54024
// Size: 396 bytes
// Signature: undefined __thiscall getStructType(IR_TypeSet * this, IR_Struct * param_1)


/* IR_TypeSet::getStructType(IR_Struct*) */

undefined4 * __thiscall IR_TypeSet::getStructType(IR_TypeSet *this,IR_Struct *param_1)

{
  size_t __n;
  int iVar1;
  void *__dest;
  IR_Struct *pIVar2;
  undefined8 *puVar3;
  ulong uVar4;
  IR_Struct *__s1;
  ulong uVar5;
  void *__src;
  undefined4 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar7 = *(undefined8 **)(this + 0xda8);
  __src = *(void **)(this + 0xda0);
  __n = (long)puVar7 - (long)__src;
  uVar8 = (long)__n >> 4;
  if (__n != 0) {
    uVar9 = 0;
    do {
      puVar6 = *(undefined4 **)((long)__src + uVar9 * 0x10);
      pIVar2 = *(IR_Struct **)(puVar6 + 2);
      if (pIVar2 == param_1) {
        return puVar6;
      }
      __s1 = *(IR_Struct **)(pIVar2 + 0x10);
      if (((byte)*pIVar2 & 1) == 0) {
        __s1 = pIVar2 + 1;
      }
      pIVar2 = param_1 + 1;
      if (((byte)*param_1 & 1) != 0) {
        pIVar2 = *(IR_Struct **)(param_1 + 0x10);
      }
      iVar1 = strcmp((char *)__s1,(char *)pIVar2);
      if (iVar1 == 0) {
        return (undefined4 *)0x0;
      }
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (uVar9 < uVar8);
  }
  puVar6 = (undefined4 *)operator_new(0x20);
  puVar3 = *(undefined8 **)(this + 0xdb0);
  *(IR_Struct **)(puVar6 + 2) = param_1;
  *puVar6 = 3;
  if (puVar7 < puVar3) {
    *puVar7 = puVar6;
    *(undefined *)(puVar7 + 1) = 1;
    *(undefined8 **)(this + 0xda8) = puVar7 + 2;
  }
  else {
    uVar9 = uVar8 + 1;
    if (uVar9 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar4 = (long)puVar3 - (long)__src;
    uVar5 = (long)uVar4 >> 3;
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar9 = 0xfffffffffffffff;
    }
    if (uVar9 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar9 * 0x10);
    puVar7 = (undefined8 *)((long)__dest + uVar8 * 0x10);
    *puVar7 = puVar6;
    *(undefined *)(puVar7 + 1) = 1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0xda0) = __dest;
    *(undefined8 **)(this + 0xda8) = puVar7 + 2;
    *(void **)(this + 0xdb0) = (void *)((long)__dest + uVar9 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  return puVar6;
}


