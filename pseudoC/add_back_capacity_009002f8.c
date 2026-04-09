// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_back_capacity
// Entry Point: 009002f8
// Size: 444 bytes
// Signature: undefined __add_back_capacity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::deque<TransformGroup*, std::__ndk1::allocator<TransformGroup*>
   >::__add_back_capacity() */

void std::__ndk1::deque<TransformGroup*,std::__ndk1::allocator<TransformGroup*>>::
     __add_back_capacity(void)

{
  TransformGroup ***pppTVar1;
  void *pvVar2;
  long lVar3;
  void **in_x0;
  TransformGroup **ppTVar4;
  ulong uVar5;
  long lVar6;
  TransformGroup ***pppTVar7;
  ulong uVar8;
  TransformGroup ***pppTVar9;
  TransformGroup **local_68;
  TransformGroup **local_60;
  TransformGroup ***local_58;
  TransformGroup ***pppTStack_50;
  TransformGroup **local_48;
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
      local_60 = (TransformGroup **)operator_new(uVar5 * 8);
      local_58 = (TransformGroup ***)(local_60 + uVar8);
      local_48 = local_60 + uVar5;
      pppTStack_50 = local_58;
                    /* try { // try from 009003c4 to 009003cb has its CatchHandler @ 009004c4 */
      local_68 = (TransformGroup **)operator_new(0x1000);
                    /* try { // try from 009003d4 to 009003df has its CatchHandler @ 009004b4 */
      __split_buffer<TransformGroup**,std::__ndk1::allocator<TransformGroup**>&>::push_back
                ((__split_buffer<TransformGroup**,std::__ndk1::allocator<TransformGroup**>&> *)
                 &local_60,&local_68);
      pppTVar7 = (TransformGroup ***)in_x0[2];
      pppTVar9 = pppTVar7 + 1;
      while (pppTVar7 != (TransformGroup ***)in_x0[1]) {
        pppTVar7 = pppTVar7 + -1;
        pppTVar9 = pppTVar9 + -1;
                    /* try { // try from 009003fc to 00900407 has its CatchHandler @ 009004c8 */
        __split_buffer<TransformGroup**,std::__ndk1::allocator<TransformGroup**>&>::push_front
                  ((__split_buffer<TransformGroup**,std::__ndk1::allocator<TransformGroup**>&> *)
                   &local_60,pppTVar7);
      }
      ppTVar4 = (TransformGroup **)*in_x0;
      *in_x0 = local_60;
      pppTVar1 = (TransformGroup ***)in_x0[2];
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
      local_48 = (TransformGroup **)pvVar2;
      if (ppTVar4 != (TransformGroup **)0x0) {
        operator_delete(ppTVar4);
      }
      goto LAB_00900458;
    }
    if (in_x0[3] != in_x0[2]) {
      local_60 = (TransformGroup **)operator_new(0x1000);
      __split_buffer<TransformGroup**,std::__ndk1::allocator<TransformGroup**>>::push_back
                ((__split_buffer<TransformGroup**,std::__ndk1::allocator<TransformGroup**>> *)in_x0,
                 &local_60);
      goto LAB_00900458;
    }
    local_60 = (TransformGroup **)operator_new(0x1000);
    __split_buffer<TransformGroup**,std::__ndk1::allocator<TransformGroup**>>::push_front
              ((__split_buffer<TransformGroup**,std::__ndk1::allocator<TransformGroup**>> *)in_x0,
               &local_60);
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
  FUN_00900510();
LAB_00900458:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


