// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_back_capacity
// Entry Point: 00978750
// Size: 444 bytes
// Signature: undefined __add_back_capacity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::deque<TextureStreamingManager::UpgradePipeline::WorkerResult,
   std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult>
   >::__add_back_capacity() */

void std::__ndk1::
     deque<TextureStreamingManager::UpgradePipeline::WorkerResult,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult>>
     ::__add_back_capacity(void)

{
  WorkerResult **ppWVar1;
  WorkerResult *pWVar2;
  long lVar3;
  WorkerResult **in_x0;
  WorkerResult *pWVar4;
  ulong uVar5;
  long lVar6;
  WorkerResult **ppWVar7;
  ulong uVar8;
  WorkerResult **ppWVar9;
  WorkerResult *local_68;
  WorkerResult *local_60;
  WorkerResult **local_58;
  WorkerResult **ppWStack_50;
  WorkerResult *local_48;
  WorkerResult **local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (in_x0[4] < (WorkerResult *)0x66) {
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
      local_60 = (WorkerResult *)operator_new(uVar5 * 8);
      local_58 = (WorkerResult **)(local_60 + uVar8 * 8);
      local_48 = local_60 + uVar5 * 8;
      ppWStack_50 = local_58;
                    /* try { // try from 0097881c to 00978823 has its CatchHandler @ 0097891c */
      local_68 = (WorkerResult *)operator_new(0xff0);
                    /* try { // try from 0097882c to 00978837 has its CatchHandler @ 0097890c */
      __split_buffer<TextureStreamingManager::UpgradePipeline::WorkerResult*,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult*>&>
      ::push_back((__split_buffer<TextureStreamingManager::UpgradePipeline::WorkerResult*,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult*>&>
                   *)&local_60,&local_68);
      ppWVar7 = (WorkerResult **)in_x0[2];
      ppWVar9 = ppWVar7 + 1;
      while (ppWVar7 != (WorkerResult **)in_x0[1]) {
        ppWVar7 = ppWVar7 + -1;
        ppWVar9 = ppWVar9 + -1;
                    /* try { // try from 00978854 to 0097885f has its CatchHandler @ 00978920 */
        __split_buffer<TextureStreamingManager::UpgradePipeline::WorkerResult*,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult*>&>
        ::push_front((__split_buffer<TextureStreamingManager::UpgradePipeline::WorkerResult*,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult*>&>
                      *)&local_60,ppWVar7);
      }
      pWVar4 = *in_x0;
      *in_x0 = local_60;
      ppWVar1 = (WorkerResult **)in_x0[2];
      pWVar2 = in_x0[3];
      in_x0[2] = (WorkerResult *)ppWStack_50;
      in_x0[1] = (WorkerResult *)local_58;
      in_x0[3] = local_48;
      ppWStack_50 = ppWVar1;
      if (ppWVar7 != ppWVar1) {
        ppWStack_50 = ppWVar1 + ((ulong)((long)ppWVar1 - (long)ppWVar9) >> 3 ^ 0xffffffffffffffff);
      }
      local_60 = pWVar4;
      local_58 = ppWVar7;
      local_48 = pWVar2;
      if (pWVar4 != (WorkerResult *)0x0) {
        operator_delete(pWVar4);
      }
      goto LAB_009788b0;
    }
    if (in_x0[3] != in_x0[2]) {
      local_60 = (WorkerResult *)operator_new(0xff0);
      __split_buffer<TextureStreamingManager::UpgradePipeline::WorkerResult*,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult*>>
      ::push_back((__split_buffer<TextureStreamingManager::UpgradePipeline::WorkerResult*,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult*>>
                   *)in_x0,&local_60);
      goto LAB_009788b0;
    }
    local_60 = (WorkerResult *)operator_new(0xff0);
    __split_buffer<TextureStreamingManager::UpgradePipeline::WorkerResult*,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult*>>
    ::push_front((__split_buffer<TextureStreamingManager::UpgradePipeline::WorkerResult*,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult*>>
                  *)in_x0,&local_60);
    local_60 = *(WorkerResult **)in_x0[1];
    in_x0[1] = (WorkerResult *)((long)in_x0[1] + 8);
  }
  else {
    in_x0[4] = in_x0[4] + -0x66;
    local_60 = *(WorkerResult **)in_x0[1];
    in_x0[1] = (WorkerResult *)((long)in_x0[1] + 8);
  }
  FUN_00978968();
LAB_009788b0:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


