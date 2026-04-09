// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: move<ThreadPool::TaskAndMgr,ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr&,ThreadPool::TaskAndMgr**,long,256l,ThreadPool::TaskAndMgr,ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr&,ThreadPool::TaskAndMgr**,long,256l>
// Entry Point: 00ba3e84
// Size: 400 bytes
// Signature: __deque_iterator __cdecl move<ThreadPool::TaskAndMgr,ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr&,ThreadPool::TaskAndMgr**,long,256l,ThreadPool::TaskAndMgr,ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr&,ThreadPool::TaskAndMgr**,long,256l>(__deque_iterator param_1, __deque_iterator param_2, __deque_iterator param_3)


/* std::__ndk1::__deque_iterator<ThreadPool::TaskAndMgr, ThreadPool::TaskAndMgr*,
   ThreadPool::TaskAndMgr&, ThreadPool::TaskAndMgr**, long, 256l>
   std::__ndk1::move<ThreadPool::TaskAndMgr, ThreadPool::TaskAndMgr*, ThreadPool::TaskAndMgr&,
   ThreadPool::TaskAndMgr**, long, 256l, ThreadPool::TaskAndMgr, ThreadPool::TaskAndMgr*,
   ThreadPool::TaskAndMgr&, ThreadPool::TaskAndMgr**, long,
   256l>(std::__ndk1::__deque_iterator<ThreadPool::TaskAndMgr, ThreadPool::TaskAndMgr*,
   ThreadPool::TaskAndMgr&, ThreadPool::TaskAndMgr**, long, 256l>,
   std::__ndk1::__deque_iterator<ThreadPool::TaskAndMgr, ThreadPool::TaskAndMgr*,
   ThreadPool::TaskAndMgr&, ThreadPool::TaskAndMgr**, long, 256l>,
   std::__ndk1::__deque_iterator<ThreadPool::TaskAndMgr, ThreadPool::TaskAndMgr*,
   ThreadPool::TaskAndMgr&, ThreadPool::TaskAndMgr**, long, 256l>) */

__deque_iterator
std::__ndk1::
move<ThreadPool::TaskAndMgr,ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr&,ThreadPool::TaskAndMgr**,long,256l,ThreadPool::TaskAndMgr,ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr&,ThreadPool::TaskAndMgr**,long,256l>
          (__deque_iterator param_1,__deque_iterator param_2,__deque_iterator param_3)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  void *__src;
  void *pvVar4;
  void *in_x3;
  long *in_x4;
  void *in_x5;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  pvVar4 = (void *)(ulong)param_2;
  plVar10 = (long *)(ulong)param_1;
  if (in_x3 != pvVar4) {
    lVar11 = (((long)in_x3 - *(long *)(ulong)param_3 >> 4) +
             ((long)(long *)(ulong)param_3 - (long)plVar10) * 0x20) - ((long)pvVar4 - *plVar10 >> 4)
    ;
    while (0 < lVar11) {
      lVar6 = (long)(void *)(*plVar10 + 0x1000) - (long)pvVar4 >> 4;
      __src = pvVar4;
      lVar2 = lVar11;
      pvVar1 = (void *)((long)pvVar4 + lVar11 * 0x10);
      if (lVar6 <= lVar11) {
        lVar2 = lVar6;
        pvVar1 = (void *)(*plVar10 + 0x1000);
      }
      while (__src != pvVar1) {
        lVar7 = (long)pvVar1 - (long)__src >> 4;
        lVar6 = (*in_x4 - (long)in_x5) + 0x1000;
        lVar9 = lVar6 >> 4;
        pvVar3 = (void *)((long)__src + lVar6);
        if (lVar7 <= lVar9) {
          lVar9 = lVar7;
          pvVar3 = pvVar1;
        }
        if ((long)pvVar3 - (long)__src != 0) {
          memmove(in_x5,__src,(long)pvVar3 - (long)__src);
        }
        __src = pvVar3;
        if (lVar9 != 0) {
          uVar5 = lVar9 + ((long)in_x5 - *in_x4 >> 4);
          if ((long)uVar5 < 1) {
            uVar8 = 0xff - uVar5;
            uVar5 = (ulong)~(uint)uVar8;
            uVar8 = -(uVar8 >> 5 & 0x7fffffffffffff8);
          }
          else {
            uVar8 = uVar5 >> 5 & 0x7fffffffffffff8;
          }
          in_x4 = (long *)((long)in_x4 + uVar8);
          in_x5 = (void *)(*in_x4 + (uVar5 & 0xff) * 0x10);
        }
      }
      lVar11 = lVar11 - lVar2;
      if (lVar2 != 0) {
        uVar5 = lVar2 + ((long)pvVar4 - *plVar10 >> 4);
        if ((long)uVar5 < 1) {
          uVar8 = 0xff - uVar5;
          uVar5 = (ulong)~(uint)uVar8;
          uVar8 = -(uVar8 >> 5 & 0x7fffffffffffff8);
        }
        else {
          uVar8 = uVar5 >> 5 & 0x7fffffffffffff8;
        }
        plVar10 = (long *)((long)plVar10 + uVar8);
        pvVar4 = (void *)(*plVar10 + (uVar5 & 0xff) * 0x10);
      }
    }
  }
  return (__deque_iterator)in_x4;
}


