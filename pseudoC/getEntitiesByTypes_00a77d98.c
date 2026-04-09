// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEntitiesByTypes
// Entry Point: 00a77d98
// Size: 432 bytes
// Signature: undefined __thiscall getEntitiesByTypes(EntityRegistryManager * this, ulonglong param_1, vector * param_2)


/* EntityRegistryManager::getEntitiesByTypes(unsigned long long, std::__ndk1::vector<Entity*,
   std::__ndk1::allocator<Entity*> >&) */

void __thiscall
EntityRegistryManager::getEntitiesByTypes
          (EntityRegistryManager *this,ulonglong param_1,vector *param_2)

{
  ulong uVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  ulong __n;
  size_t __n_00;
  long *plVar6;
  
  Mutex::enterCriticalSection();
  pvVar5 = *(void **)param_2;
  __n_00 = *(long *)(param_2 + 8) - (long)pvVar5;
  uVar1 = ((long)__n_00 >> 3) + *(long *)(this + 0x18);
  if ((ulong)(*(long *)(param_2 + 0x10) - (long)pvVar5 >> 3) < uVar1) {
    if (uVar1 >> 0x3d != 0) {
LAB_00a77f3c:
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar3 = operator_new(uVar1 * 8);
    if (0 < (long)__n_00) {
      memcpy(pvVar3,pvVar5,__n_00);
    }
    *(void **)param_2 = pvVar3;
    *(void **)(param_2 + 8) = (void *)((long)pvVar3 + ((long)__n_00 >> 3) * 8);
    *(void **)(param_2 + 0x10) = (void *)((long)pvVar3 + uVar1 * 8);
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
  }
  plVar6 = *(long **)(this + 0x10);
  do {
    if (plVar6 == (long *)0x0) {
      Mutex::leaveCriticalSection();
      return;
    }
    lVar4 = plVar6[3];
    if ((*(ulong *)(lVar4 + 0x10) & param_1) != 0) {
      plVar2 = *(long **)(param_2 + 8);
      if (plVar2 == *(long **)(param_2 + 0x10)) {
        pvVar5 = *(void **)param_2;
        __n = (long)plVar2 - (long)pvVar5;
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
          if (uVar1 >> 0x3d != 0) goto LAB_00a77f3c;
          pvVar3 = operator_new(uVar1 << 3);
          lVar4 = plVar6[3];
        }
        plVar2 = (long *)((long)pvVar3 + ((long)__n >> 3) * 8);
        *plVar2 = lVar4;
        if (0 < (long)__n) {
          memcpy(pvVar3,pvVar5,__n);
        }
        *(void **)param_2 = pvVar3;
        *(long **)(param_2 + 8) = plVar2 + 1;
        *(void **)(param_2 + 0x10) = (void *)((long)pvVar3 + uVar1 * 8);
        if (pvVar5 != (void *)0x0) {
          operator_delete(pvVar5);
        }
      }
      else {
        *plVar2 = lVar4;
        *(long **)(param_2 + 8) = plVar2 + 1;
      }
    }
    plVar6 = (long *)*plVar6;
  } while( true );
}


