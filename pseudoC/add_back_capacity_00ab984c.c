// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_back_capacity
// Entry Point: 00ab984c
// Size: 444 bytes
// Signature: undefined __add_back_capacity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::deque<std::__ndk1::pair<VkImageView_T*, unsigned int>,
   std::__ndk1::allocator<std::__ndk1::pair<VkImageView_T*, unsigned int> > >::__add_back_capacity()
    */

void std::__ndk1::
     deque<std::__ndk1::pair<VkImageView_T*,unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<VkImageView_T*,unsigned_int>>>
     ::__add_back_capacity(void)

{
  pair **pppVar1;
  pair *ppVar2;
  long lVar3;
  pair **in_x0;
  pair *ppVar4;
  ulong uVar5;
  long lVar6;
  pair **pppVar7;
  ulong uVar8;
  pair **pppVar9;
  pair *local_68;
  pair *local_60;
  pair **local_58;
  pair **pppStack_50;
  pair *local_48;
  pair **local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (in_x0[4] < (pair *)0x100) {
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
      local_60 = (pair *)operator_new(uVar5 * 8);
      local_58 = (pair **)(local_60 + uVar8 * 2);
      local_48 = local_60 + uVar5 * 2;
      pppStack_50 = local_58;
                    /* try { // try from 00ab9918 to 00ab991f has its CatchHandler @ 00ab9a18 */
      local_68 = (pair *)operator_new(0x1000);
                    /* try { // try from 00ab9928 to 00ab9933 has its CatchHandler @ 00ab9a08 */
      __split_buffer<std::__ndk1::pair<VkImageView_T*,unsigned_int>*,std::__ndk1::allocator<std::__ndk1::pair<VkImageView_T*,unsigned_int>*>&>
      ::push_back((__split_buffer<std::__ndk1::pair<VkImageView_T*,unsigned_int>*,std::__ndk1::allocator<std::__ndk1::pair<VkImageView_T*,unsigned_int>*>&>
                   *)&local_60,&local_68);
      pppVar7 = (pair **)in_x0[2];
      pppVar9 = pppVar7 + 1;
      while (pppVar7 != (pair **)in_x0[1]) {
        pppVar7 = pppVar7 + -1;
        pppVar9 = pppVar9 + -1;
                    /* try { // try from 00ab9950 to 00ab995b has its CatchHandler @ 00ab9a1c */
        __split_buffer<std::__ndk1::pair<VkImageView_T*,unsigned_int>*,std::__ndk1::allocator<std::__ndk1::pair<VkImageView_T*,unsigned_int>*>&>
        ::push_front((__split_buffer<std::__ndk1::pair<VkImageView_T*,unsigned_int>*,std::__ndk1::allocator<std::__ndk1::pair<VkImageView_T*,unsigned_int>*>&>
                      *)&local_60,pppVar7);
      }
      ppVar4 = *in_x0;
      *in_x0 = local_60;
      pppVar1 = (pair **)in_x0[2];
      ppVar2 = in_x0[3];
      in_x0[2] = (pair *)pppStack_50;
      in_x0[1] = (pair *)local_58;
      in_x0[3] = local_48;
      pppStack_50 = pppVar1;
      if (pppVar7 != pppVar1) {
        pppStack_50 = pppVar1 + ((ulong)((long)pppVar1 - (long)pppVar9) >> 3 ^ 0xffffffffffffffff);
      }
      local_60 = ppVar4;
      local_58 = pppVar7;
      local_48 = ppVar2;
      if (ppVar4 != (pair *)0x0) {
        operator_delete(ppVar4);
      }
      goto LAB_00ab99ac;
    }
    if (in_x0[3] != in_x0[2]) {
      local_60 = (pair *)operator_new(0x1000);
      __split_buffer<std::__ndk1::pair<VkImageView_T*,unsigned_int>*,std::__ndk1::allocator<std::__ndk1::pair<VkImageView_T*,unsigned_int>*>>
      ::push_back((__split_buffer<std::__ndk1::pair<VkImageView_T*,unsigned_int>*,std::__ndk1::allocator<std::__ndk1::pair<VkImageView_T*,unsigned_int>*>>
                   *)in_x0,&local_60);
      goto LAB_00ab99ac;
    }
    local_60 = (pair *)operator_new(0x1000);
    __split_buffer<std::__ndk1::pair<VkImageView_T*,unsigned_int>*,std::__ndk1::allocator<std::__ndk1::pair<VkImageView_T*,unsigned_int>*>>
    ::push_front((__split_buffer<std::__ndk1::pair<VkImageView_T*,unsigned_int>*,std::__ndk1::allocator<std::__ndk1::pair<VkImageView_T*,unsigned_int>*>>
                  *)in_x0,&local_60);
    local_60 = *(pair **)in_x0[1];
    in_x0[1] = (pair *)((long)in_x0[1] + 8);
  }
  else {
    in_x0[4] = in_x0[4] + -0x40;
    local_60 = *(pair **)in_x0[1];
    in_x0[1] = (pair *)((long)in_x0[1] + 8);
  }
  FUN_00ab9a64();
LAB_00ab99ac:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


