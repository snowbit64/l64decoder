// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00b03f10
// Size: 464 bytes
// Signature: undefined __thiscall update(TimerManager * this, float param_1)


/* TimerManager::update(float) */

void __thiscall TimerManager::update(TimerManager *this,float param_1)

{
  ulong uVar1;
  size_t __n;
  uint uVar2;
  void *__dest;
  double *pdVar3;
  long lVar4;
  ulong uVar5;
  void *__src;
  double *__dest_00;
  ulong __n_00;
  uint uVar6;
  double dVar7;
  
  dVar7 = *(double *)this;
  __dest_00 = *(double **)(this + 8);
  pdVar3 = *(double **)(this + 0x10);
  *(double *)this = dVar7 + (double)param_1;
  if (pdVar3 != __dest_00) {
    if (*__dest_00 <= dVar7 + (double)param_1) {
      uVar5 = 0;
      uVar2 = 1;
      do {
        uVar6 = uVar2;
        pdVar3 = *(double **)(this + 0x28);
        if (pdVar3 == *(double **)(this + 0x30)) {
          __src = *(void **)(this + 0x20);
          __n_00 = (long)pdVar3 - (long)__src;
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
            __dest = (void *)0x0;
          }
          else {
            if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            __dest = operator_new(uVar1 << 3);
          }
          pdVar3 = (double *)((long)__dest + ((long)__n_00 >> 3) * 8);
          *pdVar3 = __dest_00[uVar5 * 2 + 1];
          if (0 < (long)__n_00) {
            memcpy(__dest,__src,__n_00);
          }
          *(void **)(this + 0x20) = __dest;
          *(double **)(this + 0x28) = pdVar3 + 1;
          *(void **)(this + 0x30) = (void *)((long)__dest + uVar1 * 8);
          if (__src != (void *)0x0) {
            operator_delete(__src);
          }
        }
        else {
          *pdVar3 = __dest_00[uVar5 * 2 + 1];
          *(double **)(this + 0x28) = pdVar3 + 1;
        }
        __dest_00 = *(double **)(this + 8);
        pdVar3 = *(double **)(this + 0x10);
        uVar5 = (ulong)uVar6;
        if ((ulong)((long)pdVar3 - (long)__dest_00 >> 4) <= uVar5) break;
        uVar2 = uVar6 + 1;
      } while (__dest_00[uVar5 * 2] <= *(double *)this);
    }
    else {
      uVar6 = 0;
    }
    if (uVar6 != 0) {
      __n = (long)pdVar3 - (long)(__dest_00 + (ulong)uVar6 * 2);
      if (__n != 0) {
        memmove(__dest_00,__dest_00 + (ulong)uVar6 * 2,__n);
      }
      *(size_t *)(this + 0x10) = (long)__dest_00 + __n;
    }
  }
  lVar4 = *(long *)(this + 0x20);
  if (*(long *)(this + 0x28) != lVar4) {
    uVar5 = 0;
    do {
      (**(code **)**(undefined8 **)(lVar4 + uVar5 * 8))();
      lVar4 = *(long *)(this + 0x20);
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < (ulong)(*(long *)(this + 0x28) - lVar4 >> 3));
    if (*(long *)(this + 0x28) - lVar4 != 0) {
      *(long *)(this + 0x28) = lVar4;
    }
  }
  return;
}


