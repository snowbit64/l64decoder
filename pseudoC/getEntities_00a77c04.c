// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEntities
// Entry Point: 00a77c04
// Size: 404 bytes
// Signature: undefined __thiscall getEntities(EntityRegistryManager * this, vector * param_1)


/* EntityRegistryManager::getEntities(std::__ndk1::vector<Entity*, std::__ndk1::allocator<Entity*>
   >&) */

void __thiscall EntityRegistryManager::getEntities(EntityRegistryManager *this,vector *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  ulong __n;
  size_t __n_00;
  long *plVar5;
  
  Mutex::enterCriticalSection();
  pvVar4 = *(void **)param_1;
  __n_00 = *(long *)(param_1 + 8) - (long)pvVar4;
  uVar1 = ((long)__n_00 >> 3) + *(long *)(this + 0x18);
  if ((ulong)(*(long *)(param_1 + 0x10) - (long)pvVar4 >> 3) < uVar1) {
    if (uVar1 >> 0x3d != 0) {
LAB_00a77d8c:
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar3 = operator_new(uVar1 * 8);
    if (0 < (long)__n_00) {
      memcpy(pvVar3,pvVar4,__n_00);
    }
    *(void **)param_1 = pvVar3;
    *(void **)(param_1 + 8) = (void *)((long)pvVar3 + ((long)__n_00 >> 3) * 8);
    *(void **)(param_1 + 0x10) = (void *)((long)pvVar3 + uVar1 * 8);
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
  }
  plVar5 = *(long **)(this + 0x10);
  do {
    if (plVar5 == (long *)0x0) {
      Mutex::leaveCriticalSection();
      return;
    }
    puVar2 = *(undefined8 **)(param_1 + 8);
    if (puVar2 == *(undefined8 **)(param_1 + 0x10)) {
      pvVar4 = *(void **)param_1;
      __n = (long)puVar2 - (long)pvVar4;
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
        pvVar3 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3d != 0) goto LAB_00a77d8c;
        pvVar3 = operator_new(uVar1 << 3);
      }
      puVar2 = (undefined8 *)((long)pvVar3 + ((long)__n >> 3) * 8);
      *puVar2 = plVar5[3];
      if (0 < (long)__n) {
        memcpy(pvVar3,pvVar4,__n);
      }
      *(void **)param_1 = pvVar3;
      *(undefined8 **)(param_1 + 8) = puVar2 + 1;
      *(void **)(param_1 + 0x10) = (void *)((long)pvVar3 + uVar1 * 8);
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
    }
    else {
      *puVar2 = plVar5[3];
      *(undefined8 **)(param_1 + 8) = puVar2 + 1;
    }
    plVar5 = (long *)*plVar5;
  } while( true );
}


