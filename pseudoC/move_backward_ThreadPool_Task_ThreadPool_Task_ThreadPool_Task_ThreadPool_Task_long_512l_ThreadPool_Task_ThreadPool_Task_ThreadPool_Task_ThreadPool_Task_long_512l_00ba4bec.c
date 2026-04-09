// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: move_backward<ThreadPool::Task*,ThreadPool::Task**,ThreadPool::Task*&,ThreadPool::Task***,long,512l,ThreadPool::Task*,ThreadPool::Task**,ThreadPool::Task*&,ThreadPool::Task***,long,512l>
// Entry Point: 00ba4bec
// Size: 288 bytes
// Signature: __deque_iterator __cdecl move_backward<ThreadPool::Task*,ThreadPool::Task**,ThreadPool::Task*&,ThreadPool::Task***,long,512l,ThreadPool::Task*,ThreadPool::Task**,ThreadPool::Task*&,ThreadPool::Task***,long,512l>(__deque_iterator param_1, __deque_iterator param_2, __deque_iterator param_3)


/* std::__ndk1::__deque_iterator<ThreadPool::Task*, ThreadPool::Task**, ThreadPool::Task*&,
   ThreadPool::Task***, long, 512l> std::__ndk1::move_backward<ThreadPool::Task*,
   ThreadPool::Task**, ThreadPool::Task*&, ThreadPool::Task***, long, 512l, ThreadPool::Task*,
   ThreadPool::Task**, ThreadPool::Task*&, ThreadPool::Task***, long,
   512l>(std::__ndk1::__deque_iterator<ThreadPool::Task*, ThreadPool::Task**, ThreadPool::Task*&,
   ThreadPool::Task***, long, 512l>, std::__ndk1::__deque_iterator<ThreadPool::Task*,
   ThreadPool::Task**, ThreadPool::Task*&, ThreadPool::Task***, long, 512l>,
   std::__ndk1::__deque_iterator<ThreadPool::Task*, ThreadPool::Task**, ThreadPool::Task*&,
   ThreadPool::Task***, long, 512l>) */

__deque_iterator
std::__ndk1::
move_backward<ThreadPool::Task*,ThreadPool::Task**,ThreadPool::Task*&,ThreadPool::Task***,long,512l,ThreadPool::Task*,ThreadPool::Task**,ThreadPool::Task*&,ThreadPool::Task***,long,512l>
          (__deque_iterator param_1,__deque_iterator param_2,__deque_iterator param_3)

{
  long lVar1;
  Task **ppTVar2;
  Task **ppTVar3;
  Task **in_x3;
  __deque_iterator in_w4;
  Task **in_x5;
  Task **ppTVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  
  plVar8 = (long *)(ulong)param_3;
  if (in_x3 != (Task **)(ulong)param_2) {
    lVar9 = (((long)in_x3 - *plVar8 >> 3) + ((long)plVar8 - (long)(long *)(ulong)param_1) * 0x40) -
            ((long)(Task **)(ulong)param_2 - *(long *)(ulong)param_1 >> 3);
    while (0 < lVar9) {
      while( true ) {
        ppTVar4 = (Task **)*plVar8;
        ppTVar3 = in_x3;
        if (in_x3 == ppTVar4) {
          plVar8 = plVar8 + -1;
          ppTVar4 = (Task **)*plVar8;
          ppTVar3 = ppTVar4 + 0x200;
        }
        lVar6 = (long)ppTVar3 - (long)ppTVar4 >> 3;
        in_x3 = ppTVar3 + -1;
        lVar1 = lVar9;
        ppTVar2 = ppTVar3 + -lVar9;
        if (lVar6 <= lVar9) {
          lVar1 = lVar6;
          ppTVar2 = ppTVar4;
        }
        in_w4 = move_backward<ThreadPool::Task**,ThreadPool::Task*,ThreadPool::Task**,ThreadPool::Task*&,ThreadPool::Task***,long,512l>
                          (ppTVar2,ppTVar3,in_w4,(type *)in_x5);
        lVar9 = lVar9 - lVar1;
        in_x5 = ppTVar3;
        if (lVar1 + -1 == 0) break;
        uVar5 = ((long)in_x3 - *plVar8 >> 3) - (lVar1 + -1);
        if ((long)uVar5 < 1) {
          uVar7 = 0x1ff - uVar5;
          uVar5 = (ulong)~(uint)uVar7;
          uVar7 = -(uVar7 >> 6 & 0x3fffffffffffff8);
        }
        else {
          uVar7 = uVar5 >> 6 & 0x3fffffffffffff8;
        }
        plVar8 = (long *)((long)plVar8 + uVar7);
        in_x3 = (Task **)(*plVar8 + (uVar5 & 0x1ff) * 8);
        if (lVar9 < 1) {
          return in_w4;
        }
      }
    }
  }
  return in_w4;
}


