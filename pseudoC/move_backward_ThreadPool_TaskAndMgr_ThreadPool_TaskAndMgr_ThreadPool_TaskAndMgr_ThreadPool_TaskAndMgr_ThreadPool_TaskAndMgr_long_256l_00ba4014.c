// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: move_backward<ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr,ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr&,ThreadPool::TaskAndMgr**,long,256l>
// Entry Point: 00ba4014
// Size: 300 bytes
// Signature: __deque_iterator __cdecl move_backward<ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr,ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr&,ThreadPool::TaskAndMgr**,long,256l>(TaskAndMgr * param_1, TaskAndMgr * param_2, __deque_iterator param_3, type * param_4)


/* std::__ndk1::__deque_iterator<ThreadPool::TaskAndMgr, ThreadPool::TaskAndMgr*,
   ThreadPool::TaskAndMgr&, ThreadPool::TaskAndMgr**, long, 256l>
   std::__ndk1::move_backward<ThreadPool::TaskAndMgr*, ThreadPool::TaskAndMgr,
   ThreadPool::TaskAndMgr*, ThreadPool::TaskAndMgr&, ThreadPool::TaskAndMgr**, long,
   256l>(ThreadPool::TaskAndMgr*, ThreadPool::TaskAndMgr*,
   std::__ndk1::__deque_iterator<ThreadPool::TaskAndMgr, ThreadPool::TaskAndMgr*,
   ThreadPool::TaskAndMgr&, ThreadPool::TaskAndMgr**, long, 256l>,
   std::__ndk1::enable_if<__is_cpp17_random_access_iterator<ThreadPool::TaskAndMgr*>::value,
   void>::type*) */

__deque_iterator
std::__ndk1::
move_backward<ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr,ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr&,ThreadPool::TaskAndMgr**,long,256l>
          (TaskAndMgr *param_1,TaskAndMgr *param_2,__deque_iterator param_3,type *param_4)

{
  long lVar1;
  size_t __n;
  TaskAndMgr *__src;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = (long *)(ulong)param_3;
  if (param_2 != param_1) {
    do {
      lVar3 = (long)param_4 - *plVar7 >> 4;
      if ((long)param_4 - *plVar7 < 0x11) {
        uVar2 = 0x100 - lVar3;
        uVar4 = (ulong)~(uint)uVar2;
        lVar3 = *(long *)((long)plVar7 - (uVar2 >> 5 & 0x7fffffffffffff8));
      }
      else {
        uVar4 = lVar3 - 1;
        lVar3 = *(long *)((long)plVar7 + (uVar4 >> 5 & 0x7fffffffffffff8));
      }
      lVar1 = lVar3 + (uVar4 & 0xff) * 0x10 + 0x10;
      lVar5 = (long)param_2 - (long)param_1 >> 4;
      lVar3 = lVar1 - lVar3;
      lVar6 = lVar3 >> 4;
      __src = param_2 + -lVar3;
      if (lVar5 <= lVar6) {
        lVar6 = lVar5;
        __src = param_1;
      }
      __n = (long)param_2 - (long)__src;
      if (__n != 0) {
        memmove((void *)(lVar1 - __n),__src,__n);
      }
      if (lVar6 != 0) {
        uVar2 = ((long)param_4 - *plVar7 >> 4) - lVar6;
        if ((long)uVar2 < 1) {
          uVar4 = 0xff - uVar2;
          uVar2 = (ulong)~(uint)uVar4;
          uVar4 = -(uVar4 >> 5 & 0x7fffffffffffff8);
        }
        else {
          uVar4 = uVar2 >> 5 & 0x7fffffffffffff8;
        }
        plVar7 = (long *)((long)plVar7 + uVar4);
        param_4 = (type *)(*plVar7 + (uVar2 & 0xff) * 0x10);
      }
      param_2 = __src;
    } while (__src != param_1);
  }
  return (__deque_iterator)plVar7;
}


