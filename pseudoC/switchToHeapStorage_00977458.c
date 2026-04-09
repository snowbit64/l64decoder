// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: switchToHeapStorage
// Entry Point: 00977458
// Size: 392 bytes
// Signature: undefined __thiscall switchToHeapStorage(SmallVector<ICommandList*,5u> * this, uint param_1)


/* SmallVector<ICommandList*, 5u>::switchToHeapStorage(unsigned int) */

void __thiscall
SmallVector<ICommandList*,5u>::switchToHeapStorage(SmallVector<ICommandList*,5u> *this,uint param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  size_t __n;
  ulong __n_00;
  ulong uVar5;
  uint uVar6;
  
  pvVar4 = *(void **)(this + 0x30);
  if ((ulong)(*(long *)(this + 0x40) - (long)pvVar4 >> 3) < (ulong)param_1) {
    uVar5 = (ulong)param_1 * 8;
    __n = *(long *)(this + 0x38) - (long)pvVar4;
    pvVar3 = operator_new(uVar5);
    if (0 < (long)__n) {
      memcpy(pvVar3,pvVar4,__n);
    }
    *(void **)(this + 0x30) = pvVar3;
    *(size_t *)(this + 0x38) = (long)pvVar3 + __n;
    *(void **)(this + 0x40) = (void *)((long)pvVar3 + uVar5);
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
  }
  uVar6 = *(uint *)this;
  if (uVar6 != 0) {
    uVar5 = 0;
    do {
      puVar2 = *(undefined8 **)(this + 0x38);
      if (puVar2 == *(undefined8 **)(this + 0x40)) {
        pvVar4 = *(void **)(this + 0x30);
        __n_00 = (long)puVar2 - (long)pvVar4;
        uVar1 = ((long)__n_00 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar1 <= (ulong)((long)__n_00 >> 2)) {
          uVar1 = (long)__n_00 >> 2;
        }
        if (0x7ffffffffffffff7 < __n_00) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 == 0) {
          pvVar3 = (void *)0x0;
        }
        else {
          if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar3 = operator_new(uVar1 << 3);
        }
        puVar2 = (undefined8 *)((long)pvVar3 + ((long)__n_00 >> 3) * 8);
        *puVar2 = *(undefined8 *)(this + uVar5 * 8 + 4);
        if (0 < (long)__n_00) {
          memcpy(pvVar3,pvVar4,__n_00);
        }
        *(void **)(this + 0x30) = pvVar3;
        *(undefined8 **)(this + 0x38) = puVar2 + 1;
        *(void **)(this + 0x40) = (void *)((long)pvVar3 + uVar1 * 8);
        if (pvVar4 != (void *)0x0) {
          operator_delete(pvVar4);
          uVar6 = *(uint *)this;
        }
      }
      else {
        *puVar2 = *(undefined8 *)(this + uVar5 * 8 + 4);
        *(undefined8 **)(this + 0x38) = puVar2 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  return;
}


