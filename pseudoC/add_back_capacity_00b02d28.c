// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_back_capacity
// Entry Point: 00b02d28
// Size: 444 bytes
// Signature: undefined __add_back_capacity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::deque<Streamable*, std::__ndk1::allocator<Streamable*> >::__add_back_capacity() */

void std::__ndk1::deque<Streamable*,std::__ndk1::allocator<Streamable*>>::__add_back_capacity(void)

{
  Streamable ***pppSVar1;
  void *pvVar2;
  long lVar3;
  void **in_x0;
  Streamable **ppSVar4;
  ulong uVar5;
  long lVar6;
  Streamable ***pppSVar7;
  ulong uVar8;
  Streamable ***pppSVar9;
  Streamable **local_68;
  Streamable **local_60;
  Streamable ***local_58;
  Streamable ***pppSStack_50;
  Streamable **local_48;
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
      local_60 = (Streamable **)operator_new(uVar5 * 8);
      local_58 = (Streamable ***)(local_60 + uVar8);
      local_48 = local_60 + uVar5;
      pppSStack_50 = local_58;
                    /* try { // try from 00b02df4 to 00b02dfb has its CatchHandler @ 00b02ef4 */
      local_68 = (Streamable **)operator_new(0x1000);
                    /* try { // try from 00b02e04 to 00b02e0f has its CatchHandler @ 00b02ee4 */
      __split_buffer<Streamable**,std::__ndk1::allocator<Streamable**>&>::push_back
                ((__split_buffer<Streamable**,std::__ndk1::allocator<Streamable**>&> *)&local_60,
                 &local_68);
      pppSVar7 = (Streamable ***)in_x0[2];
      pppSVar9 = pppSVar7 + 1;
      while (pppSVar7 != (Streamable ***)in_x0[1]) {
        pppSVar7 = pppSVar7 + -1;
        pppSVar9 = pppSVar9 + -1;
                    /* try { // try from 00b02e2c to 00b02e37 has its CatchHandler @ 00b02ef8 */
        __split_buffer<Streamable**,std::__ndk1::allocator<Streamable**>&>::push_front
                  ((__split_buffer<Streamable**,std::__ndk1::allocator<Streamable**>&> *)&local_60,
                   pppSVar7);
      }
      ppSVar4 = (Streamable **)*in_x0;
      *in_x0 = local_60;
      pppSVar1 = (Streamable ***)in_x0[2];
      pvVar2 = in_x0[3];
      in_x0[2] = pppSStack_50;
      in_x0[1] = local_58;
      in_x0[3] = local_48;
      pppSStack_50 = pppSVar1;
      if (pppSVar7 != pppSVar1) {
        pppSStack_50 = pppSVar1 +
                       ((ulong)((long)pppSVar1 - (long)pppSVar9) >> 3 ^ 0xffffffffffffffff);
      }
      local_60 = ppSVar4;
      local_58 = pppSVar7;
      local_48 = (Streamable **)pvVar2;
      if (ppSVar4 != (Streamable **)0x0) {
        operator_delete(ppSVar4);
      }
      goto LAB_00b02e88;
    }
    if (in_x0[3] != in_x0[2]) {
      local_60 = (Streamable **)operator_new(0x1000);
      __split_buffer<Streamable**,std::__ndk1::allocator<Streamable**>>::push_back
                ((__split_buffer<Streamable**,std::__ndk1::allocator<Streamable**>> *)in_x0,
                 &local_60);
      goto LAB_00b02e88;
    }
    local_60 = (Streamable **)operator_new(0x1000);
    __split_buffer<Streamable**,std::__ndk1::allocator<Streamable**>>::push_front
              ((__split_buffer<Streamable**,std::__ndk1::allocator<Streamable**>> *)in_x0,&local_60)
    ;
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
  FUN_00b02f40();
LAB_00b02e88:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


