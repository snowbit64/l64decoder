// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_back_capacity
// Entry Point: 00745f14
// Size: 444 bytes
// Signature: undefined __add_back_capacity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::deque<VehicleNavigationAgent*, std::__ndk1::allocator<VehicleNavigationAgent*>
   >::__add_back_capacity() */

void std::__ndk1::deque<VehicleNavigationAgent*,std::__ndk1::allocator<VehicleNavigationAgent*>>::
     __add_back_capacity(void)

{
  VehicleNavigationAgent ***pppVVar1;
  void *pvVar2;
  long lVar3;
  void **in_x0;
  VehicleNavigationAgent **ppVVar4;
  ulong uVar5;
  long lVar6;
  VehicleNavigationAgent ***pppVVar7;
  ulong uVar8;
  VehicleNavigationAgent ***pppVVar9;
  VehicleNavigationAgent **local_68;
  VehicleNavigationAgent **local_60;
  VehicleNavigationAgent ***local_58;
  VehicleNavigationAgent ***pppVStack_50;
  VehicleNavigationAgent **local_48;
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
      local_60 = (VehicleNavigationAgent **)operator_new(uVar5 * 8);
      local_58 = (VehicleNavigationAgent ***)(local_60 + uVar8);
      local_48 = local_60 + uVar5;
      pppVStack_50 = local_58;
                    /* try { // try from 00745fe0 to 00745fe7 has its CatchHandler @ 007460e0 */
      local_68 = (VehicleNavigationAgent **)operator_new(0x1000);
                    /* try { // try from 00745ff0 to 00745ffb has its CatchHandler @ 007460d0 */
      __split_buffer<VehicleNavigationAgent**,std::__ndk1::allocator<VehicleNavigationAgent**>&>::
      push_back((__split_buffer<VehicleNavigationAgent**,std::__ndk1::allocator<VehicleNavigationAgent**>&>
                 *)&local_60,&local_68);
      pppVVar7 = (VehicleNavigationAgent ***)in_x0[2];
      pppVVar9 = pppVVar7 + 1;
      while (pppVVar7 != (VehicleNavigationAgent ***)in_x0[1]) {
        pppVVar7 = pppVVar7 + -1;
        pppVVar9 = pppVVar9 + -1;
                    /* try { // try from 00746018 to 00746023 has its CatchHandler @ 007460e4 */
        __split_buffer<VehicleNavigationAgent**,std::__ndk1::allocator<VehicleNavigationAgent**>&>::
        push_front((__split_buffer<VehicleNavigationAgent**,std::__ndk1::allocator<VehicleNavigationAgent**>&>
                    *)&local_60,pppVVar7);
      }
      ppVVar4 = (VehicleNavigationAgent **)*in_x0;
      *in_x0 = local_60;
      pppVVar1 = (VehicleNavigationAgent ***)in_x0[2];
      pvVar2 = in_x0[3];
      in_x0[2] = pppVStack_50;
      in_x0[1] = local_58;
      in_x0[3] = local_48;
      pppVStack_50 = pppVVar1;
      if (pppVVar7 != pppVVar1) {
        pppVStack_50 = pppVVar1 +
                       ((ulong)((long)pppVVar1 - (long)pppVVar9) >> 3 ^ 0xffffffffffffffff);
      }
      local_60 = ppVVar4;
      local_58 = pppVVar7;
      local_48 = (VehicleNavigationAgent **)pvVar2;
      if (ppVVar4 != (VehicleNavigationAgent **)0x0) {
        operator_delete(ppVVar4);
      }
      goto LAB_00746074;
    }
    if (in_x0[3] != in_x0[2]) {
      local_60 = (VehicleNavigationAgent **)operator_new(0x1000);
      __split_buffer<VehicleNavigationAgent**,std::__ndk1::allocator<VehicleNavigationAgent**>>::
      push_back((__split_buffer<VehicleNavigationAgent**,std::__ndk1::allocator<VehicleNavigationAgent**>>
                 *)in_x0,&local_60);
      goto LAB_00746074;
    }
    local_60 = (VehicleNavigationAgent **)operator_new(0x1000);
    __split_buffer<VehicleNavigationAgent**,std::__ndk1::allocator<VehicleNavigationAgent**>>::
    push_front((__split_buffer<VehicleNavigationAgent**,std::__ndk1::allocator<VehicleNavigationAgent**>>
                *)in_x0,&local_60);
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
  FUN_0074612c();
LAB_00746074:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


