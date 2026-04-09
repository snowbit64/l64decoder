// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_back_capacity
// Entry Point: 00ad6540
// Size: 444 bytes
// Signature: undefined __add_back_capacity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::deque<VulkanRenderWindow::ReleasedSwapChain,
   std::__ndk1::allocator<VulkanRenderWindow::ReleasedSwapChain> >::__add_back_capacity() */

void std::__ndk1::
     deque<VulkanRenderWindow::ReleasedSwapChain,std::__ndk1::allocator<VulkanRenderWindow::ReleasedSwapChain>>
     ::__add_back_capacity(void)

{
  ReleasedSwapChain **ppRVar1;
  ReleasedSwapChain *pRVar2;
  long lVar3;
  ReleasedSwapChain **in_x0;
  ReleasedSwapChain *pRVar4;
  ulong uVar5;
  long lVar6;
  ReleasedSwapChain **ppRVar7;
  ulong uVar8;
  ReleasedSwapChain **ppRVar9;
  ReleasedSwapChain *local_68;
  ReleasedSwapChain *local_60;
  ReleasedSwapChain **local_58;
  ReleasedSwapChain **ppRStack_50;
  ReleasedSwapChain *local_48;
  ReleasedSwapChain **local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (in_x0[4] < (ReleasedSwapChain *)0x66) {
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
      local_60 = (ReleasedSwapChain *)operator_new(uVar5 * 8);
      local_58 = (ReleasedSwapChain **)(local_60 + uVar8 * 8);
      local_48 = local_60 + uVar5 * 8;
      ppRStack_50 = local_58;
                    /* try { // try from 00ad660c to 00ad6613 has its CatchHandler @ 00ad670c */
      local_68 = (ReleasedSwapChain *)operator_new(0xff0);
                    /* try { // try from 00ad661c to 00ad6627 has its CatchHandler @ 00ad66fc */
      __split_buffer<VulkanRenderWindow::ReleasedSwapChain*,std::__ndk1::allocator<VulkanRenderWindow::ReleasedSwapChain*>&>
      ::push_back((__split_buffer<VulkanRenderWindow::ReleasedSwapChain*,std::__ndk1::allocator<VulkanRenderWindow::ReleasedSwapChain*>&>
                   *)&local_60,&local_68);
      ppRVar7 = (ReleasedSwapChain **)in_x0[2];
      ppRVar9 = ppRVar7 + 1;
      while (ppRVar7 != (ReleasedSwapChain **)in_x0[1]) {
        ppRVar7 = ppRVar7 + -1;
        ppRVar9 = ppRVar9 + -1;
                    /* try { // try from 00ad6644 to 00ad664f has its CatchHandler @ 00ad6710 */
        __split_buffer<VulkanRenderWindow::ReleasedSwapChain*,std::__ndk1::allocator<VulkanRenderWindow::ReleasedSwapChain*>&>
        ::push_front((__split_buffer<VulkanRenderWindow::ReleasedSwapChain*,std::__ndk1::allocator<VulkanRenderWindow::ReleasedSwapChain*>&>
                      *)&local_60,ppRVar7);
      }
      pRVar4 = *in_x0;
      *in_x0 = local_60;
      ppRVar1 = (ReleasedSwapChain **)in_x0[2];
      pRVar2 = in_x0[3];
      in_x0[2] = (ReleasedSwapChain *)ppRStack_50;
      in_x0[1] = (ReleasedSwapChain *)local_58;
      in_x0[3] = local_48;
      ppRStack_50 = ppRVar1;
      if (ppRVar7 != ppRVar1) {
        ppRStack_50 = ppRVar1 + ((ulong)((long)ppRVar1 - (long)ppRVar9) >> 3 ^ 0xffffffffffffffff);
      }
      local_60 = pRVar4;
      local_58 = ppRVar7;
      local_48 = pRVar2;
      if (pRVar4 != (ReleasedSwapChain *)0x0) {
        operator_delete(pRVar4);
      }
      goto LAB_00ad66a0;
    }
    if (in_x0[3] != in_x0[2]) {
      local_60 = (ReleasedSwapChain *)operator_new(0xff0);
      __split_buffer<VulkanRenderWindow::ReleasedSwapChain*,std::__ndk1::allocator<VulkanRenderWindow::ReleasedSwapChain*>>
      ::push_back((__split_buffer<VulkanRenderWindow::ReleasedSwapChain*,std::__ndk1::allocator<VulkanRenderWindow::ReleasedSwapChain*>>
                   *)in_x0,&local_60);
      goto LAB_00ad66a0;
    }
    local_60 = (ReleasedSwapChain *)operator_new(0xff0);
    __split_buffer<VulkanRenderWindow::ReleasedSwapChain*,std::__ndk1::allocator<VulkanRenderWindow::ReleasedSwapChain*>>
    ::push_front((__split_buffer<VulkanRenderWindow::ReleasedSwapChain*,std::__ndk1::allocator<VulkanRenderWindow::ReleasedSwapChain*>>
                  *)in_x0,&local_60);
    local_60 = *(ReleasedSwapChain **)in_x0[1];
    in_x0[1] = (ReleasedSwapChain *)((long)in_x0[1] + 8);
  }
  else {
    in_x0[4] = in_x0[4] + -0x66;
    local_60 = *(ReleasedSwapChain **)in_x0[1];
    in_x0[1] = (ReleasedSwapChain *)((long)in_x0[1] + 8);
  }
  FUN_00ad6758();
LAB_00ad66a0:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


