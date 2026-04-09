// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_back_capacity
// Entry Point: 0096fecc
// Size: 444 bytes
// Signature: undefined __add_back_capacity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::deque<TextureStreamingManager::UpgradePipeline::ReallocateRequest,
   std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest>
   >::__add_back_capacity() */

void std::__ndk1::
     deque<TextureStreamingManager::UpgradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest>>
     ::__add_back_capacity(void)

{
  ReallocateRequest **ppRVar1;
  ReallocateRequest *pRVar2;
  long lVar3;
  ReallocateRequest **in_x0;
  ReallocateRequest *pRVar4;
  ulong uVar5;
  long lVar6;
  ReallocateRequest **ppRVar7;
  ulong uVar8;
  ReallocateRequest **ppRVar9;
  ReallocateRequest *local_68;
  ReallocateRequest *local_60;
  ReallocateRequest **local_58;
  ReallocateRequest **ppRStack_50;
  ReallocateRequest *local_48;
  ReallocateRequest **local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (in_x0[4] < (ReallocateRequest *)0x55) {
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
      local_60 = (ReallocateRequest *)operator_new(uVar5 * 8);
      local_58 = (ReallocateRequest **)(local_60 + uVar8 * 8);
      local_48 = local_60 + uVar5 * 8;
      ppRStack_50 = local_58;
                    /* try { // try from 0096ff98 to 0096ff9f has its CatchHandler @ 00970098 */
      local_68 = (ReallocateRequest *)operator_new(0xff0);
                    /* try { // try from 0096ffa8 to 0096ffb3 has its CatchHandler @ 00970088 */
      __split_buffer<TextureStreamingManager::UpgradePipeline::ReallocateRequest*,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest*>&>
      ::push_back((__split_buffer<TextureStreamingManager::UpgradePipeline::ReallocateRequest*,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest*>&>
                   *)&local_60,&local_68);
      ppRVar7 = (ReallocateRequest **)in_x0[2];
      ppRVar9 = ppRVar7 + 1;
      while (ppRVar7 != (ReallocateRequest **)in_x0[1]) {
        ppRVar7 = ppRVar7 + -1;
        ppRVar9 = ppRVar9 + -1;
                    /* try { // try from 0096ffd0 to 0096ffdb has its CatchHandler @ 0097009c */
        __split_buffer<TextureStreamingManager::UpgradePipeline::ReallocateRequest*,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest*>&>
        ::push_front((__split_buffer<TextureStreamingManager::UpgradePipeline::ReallocateRequest*,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest*>&>
                      *)&local_60,ppRVar7);
      }
      pRVar4 = *in_x0;
      *in_x0 = local_60;
      ppRVar1 = (ReallocateRequest **)in_x0[2];
      pRVar2 = in_x0[3];
      in_x0[2] = (ReallocateRequest *)ppRStack_50;
      in_x0[1] = (ReallocateRequest *)local_58;
      in_x0[3] = local_48;
      ppRStack_50 = ppRVar1;
      if (ppRVar7 != ppRVar1) {
        ppRStack_50 = ppRVar1 + ((ulong)((long)ppRVar1 - (long)ppRVar9) >> 3 ^ 0xffffffffffffffff);
      }
      local_60 = pRVar4;
      local_58 = ppRVar7;
      local_48 = pRVar2;
      if (pRVar4 != (ReallocateRequest *)0x0) {
        operator_delete(pRVar4);
      }
      goto LAB_0097002c;
    }
    if (in_x0[3] != in_x0[2]) {
      local_60 = (ReallocateRequest *)operator_new(0xff0);
      __split_buffer<TextureStreamingManager::UpgradePipeline::ReallocateRequest*,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest*>>
      ::push_back((__split_buffer<TextureStreamingManager::UpgradePipeline::ReallocateRequest*,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest*>>
                   *)in_x0,&local_60);
      goto LAB_0097002c;
    }
    local_60 = (ReallocateRequest *)operator_new(0xff0);
    __split_buffer<TextureStreamingManager::UpgradePipeline::ReallocateRequest*,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest*>>
    ::push_front((__split_buffer<TextureStreamingManager::UpgradePipeline::ReallocateRequest*,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest*>>
                  *)in_x0,&local_60);
    local_60 = *(ReallocateRequest **)in_x0[1];
    in_x0[1] = (ReallocateRequest *)((long)in_x0[1] + 8);
  }
  else {
    in_x0[4] = in_x0[4] + -0x55;
    local_60 = *(ReallocateRequest **)in_x0[1];
    in_x0[1] = (ReallocateRequest *)((long)in_x0[1] + 8);
  }
  FUN_009700e4();
LAB_0097002c:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


