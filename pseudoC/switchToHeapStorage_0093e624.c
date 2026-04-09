// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: switchToHeapStorage
// Entry Point: 0093e624
// Size: 392 bytes
// Signature: undefined __thiscall switchToHeapStorage(SmallVector<float,1u> * this, uint param_1)


/* SmallVector<float, 1u>::switchToHeapStorage(unsigned int) */

void __thiscall SmallVector<float,1u>::switchToHeapStorage(SmallVector<float,1u> *this,uint param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *pvVar4;
  size_t __n;
  ulong __n_00;
  ulong uVar5;
  uint uVar6;
  
  pvVar4 = *(void **)(this + 8);
  if ((ulong)(*(long *)(this + 0x18) - (long)pvVar4 >> 2) < (ulong)param_1) {
    uVar5 = (ulong)param_1 * 4;
    __n = *(long *)(this + 0x10) - (long)pvVar4;
    pvVar3 = operator_new(uVar5);
    if (0 < (long)__n) {
      memcpy(pvVar3,pvVar4,__n);
    }
    *(void **)(this + 8) = pvVar3;
    *(size_t *)(this + 0x10) = (long)pvVar3 + __n;
    *(void **)(this + 0x18) = (void *)((long)pvVar3 + uVar5);
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
  }
  uVar6 = *(uint *)this;
  if (uVar6 != 0) {
    uVar5 = 0;
    do {
      puVar2 = *(undefined4 **)(this + 0x10);
      if (puVar2 == *(undefined4 **)(this + 0x18)) {
        pvVar4 = *(void **)(this + 8);
        __n_00 = (long)puVar2 - (long)pvVar4;
        uVar1 = ((long)__n_00 >> 2) + 1;
        if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar1 <= (ulong)((long)__n_00 >> 1)) {
          uVar1 = (long)__n_00 >> 1;
        }
        if (0x7ffffffffffffffb < __n_00) {
          uVar1 = 0x3fffffffffffffff;
        }
        if (uVar1 == 0) {
          pvVar3 = (void *)0x0;
        }
        else {
          if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar3 = operator_new(uVar1 << 2);
        }
        puVar2 = (undefined4 *)((long)pvVar3 + ((long)__n_00 >> 2) * 4);
        *puVar2 = *(undefined4 *)(this + uVar5 * 4 + 4);
        if (0 < (long)__n_00) {
          memcpy(pvVar3,pvVar4,__n_00);
        }
        *(void **)(this + 8) = pvVar3;
        *(undefined4 **)(this + 0x10) = puVar2 + 1;
        *(void **)(this + 0x18) = (void *)((long)pvVar3 + uVar1 * 4);
        if (pvVar4 != (void *)0x0) {
          operator_delete(pvVar4);
          uVar6 = *(uint *)this;
        }
      }
      else {
        *puVar2 = *(undefined4 *)(this + uVar5 * 4 + 4);
        *(undefined4 **)(this + 0x10) = puVar2 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  return;
}


