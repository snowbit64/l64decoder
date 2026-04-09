// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_back_capacity
// Entry Point: 00ba4fdc
// Size: 444 bytes
// Signature: undefined __add_back_capacity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::deque<ThreadPool::Task*, std::__ndk1::allocator<ThreadPool::Task*>
   >::__add_back_capacity() */

void std::__ndk1::deque<ThreadPool::Task*,std::__ndk1::allocator<ThreadPool::Task*>>::
     __add_back_capacity(void)

{
  Task ***pppTVar1;
  void *pvVar2;
  long lVar3;
  void **in_x0;
  Task **ppTVar4;
  ulong uVar5;
  long lVar6;
  Task ***pppTVar7;
  ulong uVar8;
  Task ***pppTVar9;
  Task **local_68;
  Task **local_60;
  Task ***local_58;
  Task ***pppTStack_50;
  Task **local_48;
  void **local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (in_x0[4] < (void *)0x200) {
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
      local_60 = (Task **)operator_new(uVar5 * 8);
      local_58 = (Task ***)(local_60 + uVar8);
      local_48 = local_60 + uVar5;
      pppTStack_50 = local_58;
                    /* try { // try from 00ba50a8 to 00ba50af has its CatchHandler @ 00ba51a8 */
      local_68 = (Task **)operator_new(0x1000);
                    /* try { // try from 00ba50b8 to 00ba50c3 has its CatchHandler @ 00ba5198 */
      __split_buffer<ThreadPool::Task**,std::__ndk1::allocator<ThreadPool::Task**>&>::push_back
                ((__split_buffer<ThreadPool::Task**,std::__ndk1::allocator<ThreadPool::Task**>&> *)
                 &local_60,&local_68);
      pppTVar7 = (Task ***)in_x0[2];
      pppTVar9 = pppTVar7 + 1;
      while (pppTVar7 != (Task ***)in_x0[1]) {
        pppTVar7 = pppTVar7 + -1;
        pppTVar9 = pppTVar9 + -1;
                    /* try { // try from 00ba50e0 to 00ba50eb has its CatchHandler @ 00ba51ac */
        __split_buffer<ThreadPool::Task**,std::__ndk1::allocator<ThreadPool::Task**>&>::push_front
                  ((__split_buffer<ThreadPool::Task**,std::__ndk1::allocator<ThreadPool::Task**>&> *
                   )&local_60,pppTVar7);
      }
      ppTVar4 = (Task **)*in_x0;
      *in_x0 = local_60;
      pppTVar1 = (Task ***)in_x0[2];
      pvVar2 = in_x0[3];
      in_x0[2] = pppTStack_50;
      in_x0[1] = local_58;
      in_x0[3] = local_48;
      pppTStack_50 = pppTVar1;
      if (pppTVar7 != pppTVar1) {
        pppTStack_50 = pppTVar1 +
                       ((ulong)((long)pppTVar1 - (long)pppTVar9) >> 3 ^ 0xffffffffffffffff);
      }
      local_60 = ppTVar4;
      local_58 = pppTVar7;
      local_48 = (Task **)pvVar2;
      if (ppTVar4 != (Task **)0x0) {
        operator_delete(ppTVar4);
      }
      goto LAB_00ba513c;
    }
    if (in_x0[3] != in_x0[2]) {
      local_60 = (Task **)operator_new(0x1000);
      __split_buffer<ThreadPool::Task**,std::__ndk1::allocator<ThreadPool::Task**>>::push_back
                ((__split_buffer<ThreadPool::Task**,std::__ndk1::allocator<ThreadPool::Task**>> *)
                 in_x0,&local_60);
      goto LAB_00ba513c;
    }
    local_60 = (Task **)operator_new(0x1000);
    __split_buffer<ThreadPool::Task**,std::__ndk1::allocator<ThreadPool::Task**>>::push_front
              ((__split_buffer<ThreadPool::Task**,std::__ndk1::allocator<ThreadPool::Task**>> *)
               in_x0,&local_60);
                    /* WARNING: Load size is inaccurate */
    local_60 = *in_x0[1];
    in_x0[1] = (void **)((long)in_x0[1] + 8);
  }
  else {
    in_x0[4] = (void *)((long)in_x0[4] + -0x200);
                    /* WARNING: Load size is inaccurate */
    local_60 = *in_x0[1];
    in_x0[1] = (void **)((long)in_x0[1] + 8);
  }
  FUN_00ba51f4();
LAB_00ba513c:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


