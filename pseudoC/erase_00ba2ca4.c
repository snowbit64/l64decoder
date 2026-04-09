// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: erase
// Entry Point: 00ba2ca4
// Size: 696 bytes
// Signature: undefined __cdecl erase(__deque_iterator param_1)


/* std::__ndk1::deque<ThreadPool::TaskAndMgr, std::__ndk1::allocator<ThreadPool::TaskAndMgr>
   >::erase(std::__ndk1::__deque_iterator<ThreadPool::TaskAndMgr, ThreadPool::TaskAndMgr const*,
   ThreadPool::TaskAndMgr const&, ThreadPool::TaskAndMgr const* const*, long, 256l>) */

void std::__ndk1::deque<ThreadPool::TaskAndMgr,std::__ndk1::allocator<ThreadPool::TaskAndMgr>>::
     erase(__deque_iterator param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *in_x1;
  long in_x2;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  uVar5 = (ulong)param_1;
  uVar8 = *(ulong *)(uVar5 + 0x20);
  lVar3 = *(long *)(uVar5 + 8);
  plVar2 = (long *)(lVar3 + (uVar8 >> 5 & 0x7fffffffffffff8));
  plVar7 = plVar2;
  if (*(long *)(uVar5 + 0x10) == lVar3) {
    lVar9 = 0;
    if (in_x2 == 0) goto LAB_00ba2da0;
  }
  else {
    lVar9 = *plVar2 + (uVar8 & 0xff) * 0x10;
    if (in_x2 == lVar9) goto LAB_00ba2da0;
  }
  uVar10 = (in_x2 - *in_x1 >> 4) + ((long)in_x1 - (long)plVar2) * 0x20;
  uVar6 = lVar9 - *plVar2 >> 4;
  uVar4 = uVar10 - uVar6;
  if (uVar10 != uVar6) {
    if ((long)uVar10 < 1) {
      uVar6 = 0xff - uVar10;
      uVar10 = (ulong)~(uint)uVar6;
      uVar6 = -(uVar6 >> 5 & 0x7fffffffffffff8);
    }
    else {
      uVar6 = uVar10 >> 5 & 0x7fffffffffffff8;
    }
    plVar7 = (long *)((long)plVar2 + uVar6);
    lVar1 = (uVar10 & 0xff) * 0x10;
    if (*(long *)(uVar5 + 0x28) - 1U >> 1 < uVar4) {
      lVar9 = lVar1 >> 4;
      if (SCARRY8(lVar1,0xf) == false) {
        uVar6 = lVar9 + 1;
        uVar10 = uVar6 >> 5 & 0x7fffffffffffff8;
      }
      else {
        uVar10 = 0xfe - lVar9;
        uVar6 = (ulong)~(uint)uVar10;
        uVar10 = -(uVar10 >> 5 & 0x7fffffffffffff8);
      }
      move<ThreadPool::TaskAndMgr,ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr&,ThreadPool::TaskAndMgr**,long,256l,ThreadPool::TaskAndMgr,ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr&,ThreadPool::TaskAndMgr**,long,256l>
                ((__deque_iterator)(undefined8 *)((long)plVar7 + uVar10),
                 (int)*(undefined8 *)((long)plVar7 + uVar10) + ((uint)uVar6 & 0xff) * 0x10,
                 (int)lVar3 + ((uint)(*(long *)(uVar5 + 0x28) + uVar8 >> 5) & 0xfffffff8));
      lVar9 = *(long *)(uVar5 + 0x10) - *(long *)(uVar5 + 8);
      lVar3 = 0;
      if (lVar9 != 0) {
        lVar3 = lVar9 * 0x20 + -1;
      }
      lVar9 = *(long *)(uVar5 + 0x28) + -1;
      *(long *)(uVar5 + 0x28) = lVar9;
      if ((ulong)(lVar3 - (lVar9 + *(long *)(uVar5 + 0x20))) < 0x200) {
        return;
      }
      operator_delete(*(void **)(*(long *)(uVar5 + 0x10) + -8));
      *(long *)(uVar5 + 0x10) = *(long *)(uVar5 + 0x10) + -8;
      return;
    }
  }
LAB_00ba2da0:
  move_backward<ThreadPool::TaskAndMgr,ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr&,ThreadPool::TaskAndMgr**,long,256l,ThreadPool::TaskAndMgr,ThreadPool::TaskAndMgr*,ThreadPool::TaskAndMgr&,ThreadPool::TaskAndMgr**,long,256l>
            ((__deque_iterator)plVar2,(__deque_iterator)lVar9,(__deque_iterator)plVar7);
  uVar8 = *(long *)(uVar5 + 0x20) + 1;
  *(ulong *)(uVar5 + 0x20) = uVar8;
  *(long *)(uVar5 + 0x28) = *(long *)(uVar5 + 0x28) + -1;
  if (0x1ff < uVar8) {
    operator_delete(**(void ***)(uVar5 + 8));
    *(long *)(uVar5 + 8) = *(long *)(uVar5 + 8) + 8;
    *(long *)(uVar5 + 0x20) = *(long *)(uVar5 + 0x20) + -0x100;
  }
  return;
}


