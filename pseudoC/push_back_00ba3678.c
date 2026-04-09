// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 00ba3678
// Size: 440 bytes
// Signature: undefined __thiscall push_back(__split_buffer<ThreadPool::TaskAndMgr*,std::__ndk1::allocator<ThreadPool::TaskAndMgr*>> * this, TaskAndMgr * * param_1)


/* std::__ndk1::__split_buffer<ThreadPool::TaskAndMgr*,
   std::__ndk1::allocator<ThreadPool::TaskAndMgr*> >::push_back(ThreadPool::TaskAndMgr*&&) */

void __thiscall
std::__ndk1::__split_buffer<ThreadPool::TaskAndMgr*,std::__ndk1::allocator<ThreadPool::TaskAndMgr*>>
::push_back(__split_buffer<ThreadPool::TaskAndMgr*,std::__ndk1::allocator<ThreadPool::TaskAndMgr*>>
            *this,TaskAndMgr **param_1)

{
  long lVar1;
  TaskAndMgr **ppTVar2;
  TaskAndMgr **ppTVar3;
  size_t __n;
  TaskAndMgr **ppTVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  TaskAndMgr **ppTVar8;
  ulong uVar9;
  ulong uVar10;
  TaskAndMgr **ppTVar11;
  TaskAndMgr **__src;
  TaskAndMgr **ppTVar12;
  ulong uVar13;
  TaskAndMgr *pTVar14;
  TaskAndMgr *pTVar15;
  TaskAndMgr *pTVar16;
  
  ppTVar12 = *(TaskAndMgr ***)(this + 0x10);
  if (ppTVar12 != *(TaskAndMgr ***)(this + 0x18)) goto LAB_00ba37f8;
  ppTVar3 = *(TaskAndMgr ***)this;
  __src = *(TaskAndMgr ***)(this + 8);
  if (ppTVar3 <= __src && (long)__src - (long)ppTVar3 != 0) {
    lVar6 = (long)__src - (long)ppTVar3 >> 3;
    lVar1 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      lVar1 = lVar6 + 1;
    }
    __n = (long)ppTVar12 - (long)__src;
    ppTVar12 = __src + -(lVar1 >> 1);
    if (__n != 0) {
      memmove(ppTVar12,__src,__n);
      __src = *(TaskAndMgr ***)(this + 8);
    }
    ppTVar12 = (TaskAndMgr **)((long)ppTVar12 + __n);
    *(TaskAndMgr ***)(this + 8) = __src + -(lVar1 >> 1);
    *(TaskAndMgr ***)(this + 0x10) = ppTVar12;
    goto LAB_00ba37f8;
  }
  uVar7 = (long)ppTVar12 - (long)ppTVar3 >> 2;
  if ((long)ppTVar12 - (long)ppTVar3 == 0) {
    uVar7 = 1;
  }
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  uVar13 = uVar7 >> 2;
  pvVar5 = operator_new(uVar7 * 8);
  ppTVar2 = (TaskAndMgr **)((long)pvVar5 + uVar13 * 8);
  uVar9 = (long)ppTVar12 - (long)__src;
  ppTVar12 = ppTVar2;
  if (uVar9 != 0) {
    ppTVar12 = (TaskAndMgr **)((long)ppTVar2 + (uVar9 & 0xfffffffffffffff8));
    uVar9 = uVar9 - 8;
    ppTVar8 = ppTVar2;
    if (0x17 < uVar9) {
      if (((void *)((long)__src + (uVar9 & 0xfffffffffffffff8) + 8) <=
           (void *)((long)pvVar5 + uVar13 * 8)) ||
         ((TaskAndMgr **)((long)pvVar5 + uVar13 * 8 + (uVar9 & 0xfffffffffffffff8) + 8) <= __src)) {
        uVar9 = (uVar9 >> 3) + 1;
        ppTVar8 = __src + 2;
        uVar10 = uVar9 & 0x3ffffffffffffffc;
        ppTVar11 = (TaskAndMgr **)((long)pvVar5 + uVar13 * 8 + 0x10);
        __src = __src + uVar10;
        uVar13 = uVar10;
        do {
          ppTVar4 = ppTVar8 + -1;
          pTVar14 = ppTVar8[-2];
          pTVar16 = ppTVar8[1];
          pTVar15 = *ppTVar8;
          ppTVar8 = ppTVar8 + 4;
          uVar13 = uVar13 - 4;
          ppTVar11[-1] = *ppTVar4;
          ppTVar11[-2] = pTVar14;
          ppTVar11[1] = pTVar16;
          *ppTVar11 = pTVar15;
          ppTVar11 = ppTVar11 + 4;
        } while (uVar13 != 0);
        ppTVar8 = ppTVar2 + uVar10;
        if (uVar9 == uVar10) goto LAB_00ba37e0;
      }
    }
    do {
      ppTVar11 = ppTVar8 + 1;
      *ppTVar8 = *__src;
      ppTVar8 = ppTVar11;
      __src = __src + 1;
    } while (ppTVar11 != ppTVar12);
  }
LAB_00ba37e0:
  *(void **)this = pvVar5;
  *(TaskAndMgr ***)(this + 8) = ppTVar2;
  *(TaskAndMgr ***)(this + 0x10) = ppTVar12;
  *(void **)(this + 0x18) = (void *)((long)pvVar5 + uVar7 * 8);
  if (ppTVar3 != (TaskAndMgr **)0x0) {
    operator_delete(ppTVar3);
    ppTVar12 = *(TaskAndMgr ***)(this + 0x10);
  }
LAB_00ba37f8:
  *ppTVar12 = *param_1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  return;
}


