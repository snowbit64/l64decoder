// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_back_capacity
// Entry Point: 00713934
// Size: 444 bytes
// Signature: undefined __add_back_capacity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::deque<BTBehavior*, std::__ndk1::allocator<BTBehavior*> >::__add_back_capacity() */

void std::__ndk1::deque<BTBehavior*,std::__ndk1::allocator<BTBehavior*>>::__add_back_capacity(void)

{
  BTBehavior ***pppBVar1;
  void *pvVar2;
  long lVar3;
  void **in_x0;
  BTBehavior **ppBVar4;
  ulong uVar5;
  long lVar6;
  BTBehavior ***pppBVar7;
  ulong uVar8;
  BTBehavior ***pppBVar9;
  BTBehavior **local_68;
  BTBehavior **local_60;
  BTBehavior ***local_58;
  BTBehavior ***pppBStack_50;
  BTBehavior **local_48;
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
      local_60 = (BTBehavior **)operator_new(uVar5 * 8);
      local_58 = (BTBehavior ***)(local_60 + uVar8);
      local_48 = local_60 + uVar5;
      pppBStack_50 = local_58;
                    /* try { // try from 00713a00 to 00713a07 has its CatchHandler @ 00713b00 */
      local_68 = (BTBehavior **)operator_new(0x1000);
                    /* try { // try from 00713a10 to 00713a1b has its CatchHandler @ 00713af0 */
      __split_buffer<BTBehavior**,std::__ndk1::allocator<BTBehavior**>&>::push_back
                ((__split_buffer<BTBehavior**,std::__ndk1::allocator<BTBehavior**>&> *)&local_60,
                 &local_68);
      pppBVar7 = (BTBehavior ***)in_x0[2];
      pppBVar9 = pppBVar7 + 1;
      while (pppBVar7 != (BTBehavior ***)in_x0[1]) {
        pppBVar7 = pppBVar7 + -1;
        pppBVar9 = pppBVar9 + -1;
                    /* try { // try from 00713a38 to 00713a43 has its CatchHandler @ 00713b04 */
        __split_buffer<BTBehavior**,std::__ndk1::allocator<BTBehavior**>&>::push_front
                  ((__split_buffer<BTBehavior**,std::__ndk1::allocator<BTBehavior**>&> *)&local_60,
                   pppBVar7);
      }
      ppBVar4 = (BTBehavior **)*in_x0;
      *in_x0 = local_60;
      pppBVar1 = (BTBehavior ***)in_x0[2];
      pvVar2 = in_x0[3];
      in_x0[2] = pppBStack_50;
      in_x0[1] = local_58;
      in_x0[3] = local_48;
      pppBStack_50 = pppBVar1;
      if (pppBVar7 != pppBVar1) {
        pppBStack_50 = pppBVar1 +
                       ((ulong)((long)pppBVar1 - (long)pppBVar9) >> 3 ^ 0xffffffffffffffff);
      }
      local_60 = ppBVar4;
      local_58 = pppBVar7;
      local_48 = (BTBehavior **)pvVar2;
      if (ppBVar4 != (BTBehavior **)0x0) {
        operator_delete(ppBVar4);
      }
      goto LAB_00713a94;
    }
    if (in_x0[3] != in_x0[2]) {
      local_60 = (BTBehavior **)operator_new(0x1000);
      __split_buffer<BTBehavior**,std::__ndk1::allocator<BTBehavior**>>::push_back
                ((__split_buffer<BTBehavior**,std::__ndk1::allocator<BTBehavior**>> *)in_x0,
                 &local_60);
      goto LAB_00713a94;
    }
    local_60 = (BTBehavior **)operator_new(0x1000);
    __split_buffer<BTBehavior**,std::__ndk1::allocator<BTBehavior**>>::push_front
              ((__split_buffer<BTBehavior**,std::__ndk1::allocator<BTBehavior**>> *)in_x0,&local_60)
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
  FUN_00713b4c();
LAB_00713a94:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


