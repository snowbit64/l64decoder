// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_back_capacity
// Entry Point: 00ba32a8
// Size: 444 bytes
// Signature: undefined __add_back_capacity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::deque<ThreadPool::TaskAndMgr, std::__ndk1::allocator<ThreadPool::TaskAndMgr>
   >::__add_back_capacity() */

void std::__ndk1::deque<ThreadPool::TaskAndMgr,std::__ndk1::allocator<ThreadPool::TaskAndMgr>>::
     __add_back_capacity(void)

{
  TaskAndMgr **ppTVar1;
  TaskAndMgr *pTVar2;
  long lVar3;
  TaskAndMgr **in_x0;
  TaskAndMgr *pTVar4;
  ulong uVar5;
  long lVar6;
  TaskAndMgr **ppTVar7;
  ulong uVar8;
  TaskAndMgr **ppTVar9;
  TaskAndMgr *local_68;
  TaskAndMgr *local_60;
  TaskAndMgr **local_58;
  TaskAndMgr **ppTStack_50;
  TaskAndMgr *local_48;
  TaskAndMgr **local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (in_x0[4] < (TaskAndMgr *)0x100) {
    lVar6 = (long)in_x0[3] - (long)*in_x0;
    uVar8 = (long)in_x0[2] - (long)in_x0[1] >> 3;
    if ((ulong)(lVar6 >> 3) <= uVar8) {
      uVar5 = lVar6 >> 2;
      if (lVar6 == 0) {
        uVar5 = 1;
      }
      local_40 = in_x0 + 3;
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_60 = (TaskAndMgr *)operator_new(uVar5 * 8);
      local_58 = (TaskAndMgr **)(local_60 + uVar8 * 8);
      local_48 = local_60 + uVar5 * 8;
      ppTStack_50 = local_58;
                    /* try { // try from 00ba3374 to 00ba337b has its CatchHandler @ 00ba3474 */
      local_68 = (TaskAndMgr *)operator_new(0x1000);
                    /* try { // try from 00ba3384 to 00ba338f has its CatchHandler @ 00ba3464 */
      __split_buffer<ThreadPool::TaskAndMgr*,std::__ndk1::allocator<ThreadPool::TaskAndMgr*>&>::
      push_back((__split_buffer<ThreadPool::TaskAndMgr*,std::__ndk1::allocator<ThreadPool::TaskAndMgr*>&>
                 *)&local_60,&local_68);
      ppTVar7 = (TaskAndMgr **)in_x0[2];
      ppTVar9 = ppTVar7 + 1;
      while (ppTVar7 != (TaskAndMgr **)in_x0[1]) {
        ppTVar7 = ppTVar7 + -1;
        ppTVar9 = ppTVar9 + -1;
                    /* try { // try from 00ba33ac to 00ba33b7 has its CatchHandler @ 00ba3478 */
        __split_buffer<ThreadPool::TaskAndMgr*,std::__ndk1::allocator<ThreadPool::TaskAndMgr*>&>::
        push_front((__split_buffer<ThreadPool::TaskAndMgr*,std::__ndk1::allocator<ThreadPool::TaskAndMgr*>&>
                    *)&local_60,ppTVar7);
      }
      pTVar4 = *in_x0;
      *in_x0 = local_60;
      ppTVar1 = (TaskAndMgr **)in_x0[2];
      pTVar2 = in_x0[3];
      in_x0[2] = (TaskAndMgr *)ppTStack_50;
      in_x0[1] = (TaskAndMgr *)local_58;
      in_x0[3] = local_48;
      ppTStack_50 = ppTVar1;
      if (ppTVar7 != ppTVar1) {
        ppTStack_50 = ppTVar1 + ((ulong)((long)ppTVar1 - (long)ppTVar9) >> 3 ^ 0xffffffffffffffff);
      }
      local_60 = pTVar4;
      local_58 = ppTVar7;
      local_48 = pTVar2;
      if (pTVar4 != (TaskAndMgr *)0x0) {
        operator_delete(pTVar4);
      }
      goto LAB_00ba3408;
    }
    if (in_x0[3] != in_x0[2]) {
      local_60 = (TaskAndMgr *)operator_new(0x1000);
      __split_buffer<ThreadPool::TaskAndMgr*,std::__ndk1::allocator<ThreadPool::TaskAndMgr*>>::
      push_back((__split_buffer<ThreadPool::TaskAndMgr*,std::__ndk1::allocator<ThreadPool::TaskAndMgr*>>
                 *)in_x0,&local_60);
      goto LAB_00ba3408;
    }
    local_60 = (TaskAndMgr *)operator_new(0x1000);
    __split_buffer<ThreadPool::TaskAndMgr*,std::__ndk1::allocator<ThreadPool::TaskAndMgr*>>::
    push_front((__split_buffer<ThreadPool::TaskAndMgr*,std::__ndk1::allocator<ThreadPool::TaskAndMgr*>>
                *)in_x0,&local_60);
    local_60 = *(TaskAndMgr **)in_x0[1];
    in_x0[1] = (TaskAndMgr *)((long)in_x0[1] + 8);
  }
  else {
    in_x0[4] = in_x0[4] + -0x100;
    local_60 = *(TaskAndMgr **)in_x0[1];
    in_x0[1] = (TaskAndMgr *)((long)in_x0[1] + 8);
  }
  FUN_00ba34c0();
LAB_00ba3408:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


