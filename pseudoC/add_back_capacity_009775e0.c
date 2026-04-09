// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_back_capacity
// Entry Point: 009775e0
// Size: 444 bytes
// Signature: undefined __add_back_capacity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::deque<TextureStreamingManager::ChangeRequest,
   std::__ndk1::allocator<TextureStreamingManager::ChangeRequest> >::__add_back_capacity() */

void std::__ndk1::
     deque<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
     ::__add_back_capacity(void)

{
  ChangeRequest **ppCVar1;
  ChangeRequest *pCVar2;
  long lVar3;
  ChangeRequest **in_x0;
  ChangeRequest *pCVar4;
  ulong uVar5;
  long lVar6;
  ChangeRequest **ppCVar7;
  ulong uVar8;
  ChangeRequest **ppCVar9;
  ChangeRequest *local_68;
  ChangeRequest *local_60;
  ChangeRequest **local_58;
  ChangeRequest **ppCStack_50;
  ChangeRequest *local_48;
  ChangeRequest **local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (in_x0[4] < (ChangeRequest *)0xaa) {
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
      local_60 = (ChangeRequest *)operator_new(uVar5 * 8);
      local_58 = (ChangeRequest **)(local_60 + uVar8 * 8);
      local_48 = local_60 + uVar5 * 8;
      ppCStack_50 = local_58;
                    /* try { // try from 009776ac to 009776b3 has its CatchHandler @ 009777ac */
      local_68 = (ChangeRequest *)operator_new(0xff0);
                    /* try { // try from 009776bc to 009776c7 has its CatchHandler @ 0097779c */
      __split_buffer<TextureStreamingManager::ChangeRequest*,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest*>&>
      ::push_back((__split_buffer<TextureStreamingManager::ChangeRequest*,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest*>&>
                   *)&local_60,&local_68);
      ppCVar7 = (ChangeRequest **)in_x0[2];
      ppCVar9 = ppCVar7 + 1;
      while (ppCVar7 != (ChangeRequest **)in_x0[1]) {
        ppCVar7 = ppCVar7 + -1;
        ppCVar9 = ppCVar9 + -1;
                    /* try { // try from 009776e4 to 009776ef has its CatchHandler @ 009777b0 */
        __split_buffer<TextureStreamingManager::ChangeRequest*,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest*>&>
        ::push_front((__split_buffer<TextureStreamingManager::ChangeRequest*,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest*>&>
                      *)&local_60,ppCVar7);
      }
      pCVar4 = *in_x0;
      *in_x0 = local_60;
      ppCVar1 = (ChangeRequest **)in_x0[2];
      pCVar2 = in_x0[3];
      in_x0[2] = (ChangeRequest *)ppCStack_50;
      in_x0[1] = (ChangeRequest *)local_58;
      in_x0[3] = local_48;
      ppCStack_50 = ppCVar1;
      if (ppCVar7 != ppCVar1) {
        ppCStack_50 = ppCVar1 + ((ulong)((long)ppCVar1 - (long)ppCVar9) >> 3 ^ 0xffffffffffffffff);
      }
      local_60 = pCVar4;
      local_58 = ppCVar7;
      local_48 = pCVar2;
      if (pCVar4 != (ChangeRequest *)0x0) {
        operator_delete(pCVar4);
      }
      goto LAB_00977740;
    }
    if (in_x0[3] != in_x0[2]) {
      local_60 = (ChangeRequest *)operator_new(0xff0);
      __split_buffer<TextureStreamingManager::ChangeRequest*,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest*>>
      ::push_back((__split_buffer<TextureStreamingManager::ChangeRequest*,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest*>>
                   *)in_x0,&local_60);
      goto LAB_00977740;
    }
    local_60 = (ChangeRequest *)operator_new(0xff0);
    __split_buffer<TextureStreamingManager::ChangeRequest*,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest*>>
    ::push_front((__split_buffer<TextureStreamingManager::ChangeRequest*,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest*>>
                  *)in_x0,&local_60);
    local_60 = *(ChangeRequest **)in_x0[1];
    in_x0[1] = (ChangeRequest *)((long)in_x0[1] + 8);
  }
  else {
    in_x0[4] = in_x0[4] + -0xaa;
    local_60 = *(ChangeRequest **)in_x0[1];
    in_x0[1] = (ChangeRequest *)((long)in_x0[1] + 8);
  }
  FUN_009777f8();
LAB_00977740:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


