// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 00b04268
// Size: 548 bytes
// Signature: undefined __thiscall insert(vector<TimerManager::TimerQueueItem,std::__ndk1::allocator<TimerManager::TimerQueueItem>> * this, __wrap_iter param_1, TimerQueueItem * param_2)


/* std::__ndk1::vector<TimerManager::TimerQueueItem,
   std::__ndk1::allocator<TimerManager::TimerQueueItem>
   >::insert(std::__ndk1::__wrap_iter<TimerManager::TimerQueueItem const*>,
   TimerManager::TimerQueueItem const&) */

undefined8 * __thiscall
std::__ndk1::
vector<TimerManager::TimerQueueItem,std::__ndk1::allocator<TimerManager::TimerQueueItem>>::insert
          (vector<TimerManager::TimerQueueItem,std::__ndk1::allocator<TimerManager::TimerQueueItem>>
           *this,__wrap_iter param_1,TimerQueueItem *param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *__src;
  TimerQueueItem *__n;
  size_t __n_00;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  void *pvVar11;
  size_t __n_01;
  void *pvVar12;
  undefined8 uVar13;
  
  __src = (undefined8 *)(ulong)param_1;
  puVar10 = *(undefined8 **)(this + 8);
  if (puVar10 < *(undefined8 **)(this + 0x10)) {
    puVar9 = __src;
    if (__src == puVar10) {
      uVar13 = *(undefined8 *)param_2;
      __src[1] = *(undefined8 *)(param_2 + 8);
      *__src = uVar13;
      *(undefined8 **)(this + 8) = __src + 2;
    }
    else {
      __n = (TimerQueueItem *)((long)puVar10 + (-0x10 - (long)__src));
      puVar4 = puVar10;
      for (puVar7 = puVar10 + -2; puVar7 < puVar10; puVar7 = puVar7 + 2) {
        uVar13 = *puVar7;
        puVar4[1] = puVar7[1];
        *puVar4 = uVar13;
        puVar4 = puVar4 + 2;
      }
      *(undefined8 **)(this + 8) = puVar4;
      if (__n != (TimerQueueItem *)0x0) {
        memmove(puVar10 + ((long)__n >> 4) * -2,__src,(size_t)__n);
        puVar4 = *(undefined8 **)(this + 8);
      }
      uVar13 = *(undefined8 *)(param_2 + (ulong)(__src <= param_2 && param_2 < puVar4) * 0x10);
      __src[1] = *(undefined8 *)
                  ((long)(param_2 + (ulong)(__src <= param_2 && param_2 < puVar4) * 0x10) + 8);
      *__src = uVar13;
    }
  }
  else {
    pvVar11 = *(void **)this;
    uVar3 = ((long)puVar10 - (long)pvVar11 >> 4) + 1;
    if (uVar3 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar5 = (long)*(undefined8 **)(this + 0x10) - (long)pvVar11;
    uVar8 = (long)uVar5 >> 3;
    if (uVar3 <= uVar8) {
      uVar3 = uVar8;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar3 = 0xfffffffffffffff;
    }
    if (uVar3 == 0) {
      pvVar1 = (void *)0x0;
    }
    else {
      if (uVar3 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar1 = operator_new(uVar3 << 4);
    }
    lVar6 = (long)__src - (long)pvVar11;
    pvVar12 = (void *)((long)pvVar1 + uVar3 * 0x10);
    uVar5 = lVar6 >> 4;
    puVar9 = (undefined8 *)((long)pvVar1 + uVar5 * 0x10);
    if (uVar5 == uVar3) {
      if (lVar6 < 1) {
        uVar3 = lVar6 >> 3;
        if (lVar6 == 0) {
          uVar3 = 1;
        }
        if (uVar3 >> 0x3c != 0) {
                    /* try { // try from 00b04480 to 00b0448b has its CatchHandler @ 00b0448c */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00b043c8 to 00b043cb has its CatchHandler @ 00b0448c */
        pvVar2 = operator_new(uVar3 << 4);
        pvVar12 = (void *)((long)pvVar2 + uVar3 * 0x10);
        puVar9 = (undefined8 *)((long)pvVar2 + (uVar3 & 0x3ffffffffffffffc) * 4);
        if (pvVar1 != (void *)0x0) {
          operator_delete(pvVar1);
          pvVar11 = *(void **)this;
        }
      }
      else {
        uVar3 = uVar5 + 2;
        if (-1 < (long)(uVar5 + 1)) {
          uVar3 = uVar5 + 1;
        }
        puVar9 = puVar9 + -(uVar3 & 0x1ffffffffffffffe);
      }
    }
    __n_00 = (long)__src - (long)pvVar11;
    uVar13 = *(undefined8 *)param_2;
    puVar10 = puVar9 + 2;
    puVar9[1] = *(undefined8 *)(param_2 + 8);
    *puVar9 = uVar13;
    if (0 < (long)__n_00) {
      memcpy((void *)((long)puVar9 - __n_00),pvVar11,__n_00);
    }
    __n_01 = *(long *)(this + 8) - (long)__src;
    if (0 < (long)__n_01) {
      memcpy(puVar10,__src,__n_01);
      puVar10 = (undefined8 *)((long)puVar10 + __n_01);
    }
    pvVar11 = *(void **)this;
    *(void **)this = (void *)((long)puVar9 - __n_00);
    *(undefined8 **)(this + 8) = puVar10;
    *(void **)(this + 0x10) = pvVar12;
    if (pvVar11 != (void *)0x0) {
      operator_delete(pvVar11);
    }
  }
  return puVar9;
}


