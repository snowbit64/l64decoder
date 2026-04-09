// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_back_capacity
// Entry Point: 008be0a0
// Size: 444 bytes
// Signature: undefined __add_back_capacity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::deque<SoundPlayer::SampleLoadInfo,
   std::__ndk1::allocator<SoundPlayer::SampleLoadInfo> >::__add_back_capacity() */

void std::__ndk1::
     deque<SoundPlayer::SampleLoadInfo,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo>>::
     __add_back_capacity(void)

{
  SampleLoadInfo **ppSVar1;
  SampleLoadInfo *pSVar2;
  long lVar3;
  SampleLoadInfo **in_x0;
  SampleLoadInfo *pSVar4;
  ulong uVar5;
  long lVar6;
  SampleLoadInfo **ppSVar7;
  ulong uVar8;
  SampleLoadInfo **ppSVar9;
  SampleLoadInfo *local_68;
  SampleLoadInfo *local_60;
  SampleLoadInfo **local_58;
  SampleLoadInfo **ppSStack_50;
  SampleLoadInfo *local_48;
  SampleLoadInfo **local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (in_x0[4] < (SampleLoadInfo *)0x80) {
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
      local_60 = (SampleLoadInfo *)operator_new(uVar5 * 8);
      local_58 = (SampleLoadInfo **)(local_60 + uVar8 * 8);
      local_48 = local_60 + uVar5 * 8;
      ppSStack_50 = local_58;
                    /* try { // try from 008be16c to 008be173 has its CatchHandler @ 008be26c */
      local_68 = (SampleLoadInfo *)operator_new(0x1000);
                    /* try { // try from 008be17c to 008be187 has its CatchHandler @ 008be25c */
      __split_buffer<SoundPlayer::SampleLoadInfo*,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo*>&>
      ::push_back((__split_buffer<SoundPlayer::SampleLoadInfo*,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo*>&>
                   *)&local_60,&local_68);
      ppSVar7 = (SampleLoadInfo **)in_x0[2];
      ppSVar9 = ppSVar7 + 1;
      while (ppSVar7 != (SampleLoadInfo **)in_x0[1]) {
        ppSVar7 = ppSVar7 + -1;
        ppSVar9 = ppSVar9 + -1;
                    /* try { // try from 008be1a4 to 008be1af has its CatchHandler @ 008be270 */
        __split_buffer<SoundPlayer::SampleLoadInfo*,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo*>&>
        ::push_front((__split_buffer<SoundPlayer::SampleLoadInfo*,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo*>&>
                      *)&local_60,ppSVar7);
      }
      pSVar4 = *in_x0;
      *in_x0 = local_60;
      ppSVar1 = (SampleLoadInfo **)in_x0[2];
      pSVar2 = in_x0[3];
      in_x0[2] = (SampleLoadInfo *)ppSStack_50;
      in_x0[1] = (SampleLoadInfo *)local_58;
      in_x0[3] = local_48;
      ppSStack_50 = ppSVar1;
      if (ppSVar7 != ppSVar1) {
        ppSStack_50 = ppSVar1 + ((ulong)((long)ppSVar1 - (long)ppSVar9) >> 3 ^ 0xffffffffffffffff);
      }
      local_60 = pSVar4;
      local_58 = ppSVar7;
      local_48 = pSVar2;
      if (pSVar4 != (SampleLoadInfo *)0x0) {
        operator_delete(pSVar4);
      }
      goto LAB_008be200;
    }
    if (in_x0[3] != in_x0[2]) {
      local_60 = (SampleLoadInfo *)operator_new(0x1000);
      __split_buffer<SoundPlayer::SampleLoadInfo*,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo*>>
      ::push_back((__split_buffer<SoundPlayer::SampleLoadInfo*,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo*>>
                   *)in_x0,&local_60);
      goto LAB_008be200;
    }
    local_60 = (SampleLoadInfo *)operator_new(0x1000);
    __split_buffer<SoundPlayer::SampleLoadInfo*,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo*>>
    ::push_front((__split_buffer<SoundPlayer::SampleLoadInfo*,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo*>>
                  *)in_x0,&local_60);
    local_60 = *(SampleLoadInfo **)in_x0[1];
    in_x0[1] = (SampleLoadInfo *)((long)in_x0[1] + 8);
  }
  else {
    in_x0[4] = in_x0[4] + -0x80;
    local_60 = *(SampleLoadInfo **)in_x0[1];
    in_x0[1] = (SampleLoadInfo *)((long)in_x0[1] + 8);
  }
  FUN_008be2b8();
LAB_008be200:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


