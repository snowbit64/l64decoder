// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: move_backward<ThreadPool::TaskAndMgr,ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr&,ThreadPool::TaskAndMgr**,long,256l,ThreadPool::TaskAndMgr,ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr&,ThreadPool::TaskAndMgr**,long,256l>
// Entry Point: 00ba3d68
// Size: 284 bytes
// Signature: __deque_iterator __cdecl move_backward<ThreadPool::TaskAndMgr,ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr&,ThreadPool::TaskAndMgr**,long,256l,ThreadPool::TaskAndMgr,ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr&,ThreadPool::TaskAndMgr**,long,256l>(__deque_iterator param_1, __deque_iterator param_2, __deque_iterator param_3)


/* std::__ndk1::__deque_iterator<ThreadPool::TaskAndMgr, ThreadPool::TaskAndMgr*,
   ThreadPool::TaskAndMgr&, ThreadPool::TaskAndMgr**, long, 256l>
   std::__ndk1::move_backward<ThreadPool::TaskAndMgr, ThreadPool::TaskAndMgr*,
   ThreadPool::TaskAndMgr&, ThreadPool::TaskAndMgr**, long, 256l, ThreadPool::TaskAndMgr,
   ThreadPool::TaskAndMgr*, ThreadPool::TaskAndMgr&, ThreadPool::TaskAndMgr**, long,
   256l>(std::__ndk1::__deque_iterator<ThreadPool::TaskAndMgr, ThreadPool::TaskAndMgr*,
   ThreadPool::TaskAndMgr&, ThreadPool::TaskAndMgr**, long, 256l>,
   std::__ndk1::__deque_iterator<ThreadPool::TaskAndMgr, ThreadPool::TaskAndMgr*,
   ThreadPool::TaskAndMgr&, ThreadPool::TaskAndMgr**, long, 256l>,
   std::__ndk1::__deque_iterator<ThreadPool::TaskAndMgr, ThreadPool::TaskAndMgr*,
   ThreadPool::TaskAndMgr&, ThreadPool::TaskAndMgr**, long, 256l>) */

__deque_iterator
std::__ndk1::
move_backward<ThreadPool::TaskAndMgr,ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr&,ThreadPool::TaskAndMgr**,long,256l,ThreadPool::TaskAndMgr,ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr&,ThreadPool::TaskAndMgr**,long,256l>
          (__deque_iterator param_1,__deque_iterator param_2,__deque_iterator param_3)

{
  long lVar1;
  TaskAndMgr *pTVar2;
  TaskAndMgr *pTVar3;
  TaskAndMgr *in_x3;
  __deque_iterator in_w4;
  TaskAndMgr *in_x5;
  TaskAndMgr *pTVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  TaskAndMgr **ppTVar8;
  long lVar9;
  
  ppTVar8 = (TaskAndMgr **)(ulong)param_3;
  if (in_x3 != (TaskAndMgr *)(ulong)param_2) {
    lVar9 = (((long)in_x3 - (long)*ppTVar8 >> 4) +
            ((long)ppTVar8 - (long)(long *)(ulong)param_1) * 0x20) -
            ((long)(TaskAndMgr *)(ulong)param_2 - *(long *)(ulong)param_1 >> 4);
    while (0 < lVar9) {
      while( true ) {
        pTVar4 = *ppTVar8;
        pTVar3 = in_x3;
        if (in_x3 == pTVar4) {
          ppTVar8 = ppTVar8 + -1;
          pTVar4 = *ppTVar8;
          pTVar3 = pTVar4 + 0x1000;
        }
        lVar6 = (long)pTVar3 - (long)pTVar4 >> 4;
        in_x3 = pTVar3 + -0x10;
        lVar1 = lVar9;
        pTVar2 = pTVar3 + lVar9 * -0x10;
        if (lVar6 <= lVar9) {
          lVar1 = lVar6;
          pTVar2 = pTVar4;
        }
        in_w4 = move_backward<ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr,ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr&,ThreadPool::TaskAndMgr**,long,256l>
                          (pTVar2,pTVar3,in_w4,(type *)in_x5);
        lVar9 = lVar9 - lVar1;
        in_x5 = pTVar3;
        if (lVar1 + -1 == 0) break;
        uVar5 = ((long)in_x3 - (long)*ppTVar8 >> 4) - (lVar1 + -1);
        if ((long)uVar5 < 1) {
          uVar7 = 0xff - uVar5;
          uVar5 = (ulong)~(uint)uVar7;
          uVar7 = -(uVar7 >> 5 & 0x7fffffffffffff8);
        }
        else {
          uVar7 = uVar5 >> 5 & 0x7fffffffffffff8;
        }
        ppTVar8 = (TaskAndMgr **)((long)ppTVar8 + uVar7);
        in_x3 = *ppTVar8 + (uVar5 & 0xff) * 0x10;
        if (lVar9 < 1) {
          return in_w4;
        }
      }
    }
  }
  return in_w4;
}


