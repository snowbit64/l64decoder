// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTimer
// Entry Point: 00b040e0
// Size: 392 bytes
// Signature: undefined __thiscall addTimer(TimerManager * this, float param_1, TimerListener * param_2)


/* TimerManager::addTimer(float, TimerManager::TimerListener*) */

void __thiscall TimerManager::addTimer(TimerManager *this,float param_1,TimerListener *param_2)

{
  long lVar1;
  void *__dest;
  double *pdVar2;
  ulong uVar3;
  double *__src;
  ulong __n;
  double local_68;
  TimerListener *pTStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __src = *(double **)(this + 8);
  pdVar2 = *(double **)(this + 0x10);
  local_68 = *(double *)this + (double)param_1;
  pTStack_60 = param_2;
  if ((__src == pdVar2) || (pdVar2[-2] <= local_68)) {
    if (pdVar2 == *(double **)(this + 0x18)) {
      __n = (long)pdVar2 - (long)__src;
      uVar3 = ((long)__n >> 4) + 1;
      if (uVar3 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar3 <= (ulong)((long)__n >> 3)) {
        uVar3 = (long)__n >> 3;
      }
      if (0x7fffffffffffffef < __n) {
        uVar3 = 0xfffffffffffffff;
      }
      if (uVar3 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar3 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar3 << 4);
      }
      pdVar2 = (double *)((long)__dest + ((long)__n >> 4) * 0x10);
      pdVar2[1] = (double)pTStack_60;
      *pdVar2 = local_68;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)(this + 8) = __dest;
      *(double **)(this + 0x10) = pdVar2 + 2;
      *(void **)(this + 0x18) = (void *)((long)__dest + uVar3 * 0x10);
      if (__src != (double *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      pdVar2[1] = (double)param_2;
      *pdVar2 = local_68;
      *(double **)(this + 0x10) = pdVar2 + 2;
    }
  }
  else if ((long)pdVar2 - (long)__src != 0) {
    uVar3 = 0;
    do {
      if (local_68 < __src[uVar3 * 2]) {
        std::__ndk1::
        vector<TimerManager::TimerQueueItem,std::__ndk1::allocator<TimerManager::TimerQueueItem>>::
        insert((vector<TimerManager::TimerQueueItem,std::__ndk1::allocator<TimerManager::TimerQueueItem>>
                *)(this + 8),(__wrap_iter)(__src + uVar3 * 2),(TimerQueueItem *)&local_68);
        break;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)((long)pdVar2 - (long)__src >> 4));
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


