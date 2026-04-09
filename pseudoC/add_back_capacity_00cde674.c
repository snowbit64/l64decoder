// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_back_capacity
// Entry Point: 00cde674
// Size: 444 bytes
// Signature: undefined __add_back_capacity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::deque<CryptoPP::MeterFilter::MessageRange,
   std::__ndk1::allocator<CryptoPP::MeterFilter::MessageRange> >::__add_back_capacity() */

void std::__ndk1::
     deque<CryptoPP::MeterFilter::MessageRange,std::__ndk1::allocator<CryptoPP::MeterFilter::MessageRange>>
     ::__add_back_capacity(void)

{
  MessageRange **ppMVar1;
  MessageRange *pMVar2;
  long lVar3;
  MessageRange **in_x0;
  MessageRange *pMVar4;
  ulong uVar5;
  long lVar6;
  MessageRange **ppMVar7;
  ulong uVar8;
  MessageRange **ppMVar9;
  MessageRange *local_68;
  MessageRange *local_60;
  MessageRange **local_58;
  MessageRange **ppMStack_50;
  MessageRange *local_48;
  MessageRange **local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (in_x0[4] < (MessageRange *)0xaa) {
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
      local_60 = (MessageRange *)operator_new(uVar5 * 8);
      local_58 = (MessageRange **)(local_60 + uVar8 * 8);
      local_48 = local_60 + uVar5 * 8;
      ppMStack_50 = local_58;
                    /* try { // try from 00cde740 to 00cde747 has its CatchHandler @ 00cde840 */
      local_68 = (MessageRange *)operator_new(0xff0);
                    /* try { // try from 00cde750 to 00cde75b has its CatchHandler @ 00cde830 */
      __split_buffer<CryptoPP::MeterFilter::MessageRange*,std::__ndk1::allocator<CryptoPP::MeterFilter::MessageRange*>&>
      ::push_back((__split_buffer<CryptoPP::MeterFilter::MessageRange*,std::__ndk1::allocator<CryptoPP::MeterFilter::MessageRange*>&>
                   *)&local_60,&local_68);
      ppMVar7 = (MessageRange **)in_x0[2];
      ppMVar9 = ppMVar7 + 1;
      while (ppMVar7 != (MessageRange **)in_x0[1]) {
        ppMVar7 = ppMVar7 + -1;
        ppMVar9 = ppMVar9 + -1;
                    /* try { // try from 00cde778 to 00cde783 has its CatchHandler @ 00cde844 */
        __split_buffer<CryptoPP::MeterFilter::MessageRange*,std::__ndk1::allocator<CryptoPP::MeterFilter::MessageRange*>&>
        ::push_front((__split_buffer<CryptoPP::MeterFilter::MessageRange*,std::__ndk1::allocator<CryptoPP::MeterFilter::MessageRange*>&>
                      *)&local_60,ppMVar7);
      }
      pMVar4 = *in_x0;
      *in_x0 = local_60;
      ppMVar1 = (MessageRange **)in_x0[2];
      pMVar2 = in_x0[3];
      in_x0[2] = (MessageRange *)ppMStack_50;
      in_x0[1] = (MessageRange *)local_58;
      in_x0[3] = local_48;
      ppMStack_50 = ppMVar1;
      if (ppMVar7 != ppMVar1) {
        ppMStack_50 = ppMVar1 + ((ulong)((long)ppMVar1 - (long)ppMVar9) >> 3 ^ 0xffffffffffffffff);
      }
      local_60 = pMVar4;
      local_58 = ppMVar7;
      local_48 = pMVar2;
      if (pMVar4 != (MessageRange *)0x0) {
        operator_delete(pMVar4);
      }
      goto LAB_00cde7d4;
    }
    if (in_x0[3] != in_x0[2]) {
      local_60 = (MessageRange *)operator_new(0xff0);
      __split_buffer<CryptoPP::MeterFilter::MessageRange*,std::__ndk1::allocator<CryptoPP::MeterFilter::MessageRange*>>
      ::push_back((__split_buffer<CryptoPP::MeterFilter::MessageRange*,std::__ndk1::allocator<CryptoPP::MeterFilter::MessageRange*>>
                   *)in_x0,&local_60);
      goto LAB_00cde7d4;
    }
    local_60 = (MessageRange *)operator_new(0xff0);
    __split_buffer<CryptoPP::MeterFilter::MessageRange*,std::__ndk1::allocator<CryptoPP::MeterFilter::MessageRange*>>
    ::push_front((__split_buffer<CryptoPP::MeterFilter::MessageRange*,std::__ndk1::allocator<CryptoPP::MeterFilter::MessageRange*>>
                  *)in_x0,&local_60);
    local_60 = *(MessageRange **)in_x0[1];
    in_x0[1] = (MessageRange *)((long)in_x0[1] + 8);
  }
  else {
    in_x0[4] = in_x0[4] + -0xaa;
    local_60 = *(MessageRange **)in_x0[1];
    in_x0[1] = (MessageRange *)((long)in_x0[1] + 8);
  }
  FUN_00cde88c();
LAB_00cde7d4:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


