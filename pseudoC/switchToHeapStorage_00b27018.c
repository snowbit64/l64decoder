// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: switchToHeapStorage
// Entry Point: 00b27018
// Size: 404 bytes
// Signature: undefined __thiscall switchToHeapStorage(SmallVector<DomXMLFile::CacheEntry,8u> * this, uint param_1)


/* SmallVector<DomXMLFile::CacheEntry, 8u>::switchToHeapStorage(unsigned int) */

void __thiscall
SmallVector<DomXMLFile::CacheEntry,8u>::switchToHeapStorage
          (SmallVector<DomXMLFile::CacheEntry,8u> *this,uint param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  size_t __n;
  ulong __n_00;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  pvVar4 = *(void **)(this + 0x88);
  if ((ulong)(*(long *)(this + 0x98) - (long)pvVar4 >> 4) < (ulong)param_1) {
    uVar5 = (ulong)param_1 * 0x10;
    __n = *(long *)(this + 0x90) - (long)pvVar4;
    pvVar3 = operator_new(uVar5);
    if (0 < (long)__n) {
      memcpy(pvVar3,pvVar4,__n);
    }
    *(void **)(this + 0x88) = pvVar3;
    *(size_t *)(this + 0x90) = (long)pvVar3 + __n;
    *(void **)(this + 0x98) = (void *)((long)pvVar3 + uVar5);
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
  }
  if (*(int *)this != 0) {
    uVar5 = 0;
    puVar6 = (undefined8 *)(this + 4);
    do {
      puVar2 = *(undefined8 **)(this + 0x90);
      if (puVar2 == *(undefined8 **)(this + 0x98)) {
        pvVar4 = *(void **)(this + 0x88);
        __n_00 = (long)puVar2 - (long)pvVar4;
        uVar1 = ((long)__n_00 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar1 <= (ulong)((long)__n_00 >> 3)) {
          uVar1 = (long)__n_00 >> 3;
        }
        if (0x7fffffffffffffef < __n_00) {
          uVar1 = 0xfffffffffffffff;
        }
        if (uVar1 == 0) {
          pvVar3 = (void *)0x0;
        }
        else {
          if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar3 = operator_new(uVar1 << 4);
        }
        puVar2 = (undefined8 *)((long)pvVar3 + ((long)__n_00 >> 4) * 0x10);
        uVar7 = *puVar6;
        puVar2[1] = puVar6[1];
        *puVar2 = uVar7;
        if (0 < (long)__n_00) {
          memcpy(pvVar3,pvVar4,__n_00);
        }
        *(void **)(this + 0x88) = pvVar3;
        *(undefined8 **)(this + 0x90) = puVar2 + 2;
        *(void **)(this + 0x98) = (void *)((long)pvVar3 + uVar1 * 0x10);
        if (pvVar4 != (void *)0x0) {
          operator_delete(pvVar4);
        }
      }
      else {
        uVar7 = *puVar6;
        puVar2[1] = puVar6[1];
        *puVar2 = uVar7;
        *(undefined8 **)(this + 0x90) = puVar2 + 2;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 2;
    } while (uVar5 < *(uint *)this);
  }
  return;
}


