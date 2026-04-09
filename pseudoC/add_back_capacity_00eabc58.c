// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_back_capacity
// Entry Point: 00eabc58
// Size: 440 bytes
// Signature: undefined __add_back_capacity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::deque<simplejobsystem::SimpleJob*,
   std::__ndk1::allocator<simplejobsystem::SimpleJob*> >::__add_back_capacity() */

void std::__ndk1::
     deque<simplejobsystem::SimpleJob*,std::__ndk1::allocator<simplejobsystem::SimpleJob*>>::
     __add_back_capacity(void)

{
  long lVar1;
  void **in_x0;
  SimpleJob **ppSVar2;
  ulong uVar3;
  SimpleJob ***pppSVar4;
  long lVar5;
  void *pvVar6;
  SimpleJob ***pppSVar7;
  ulong uVar8;
  SimpleJob **local_68;
  SimpleJob **local_60;
  SimpleJob ***local_58;
  SimpleJob ***pppSStack_50;
  SimpleJob **local_48;
  void **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (in_x0[4] < (void *)0x200) {
    lVar5 = (long)in_x0[3] - (long)*in_x0;
    uVar8 = (long)in_x0[2] - (long)in_x0[1] >> 3;
    if ((ulong)(lVar5 >> 3) <= uVar8) {
      uVar3 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar3 = 1;
      }
      local_40 = in_x0 + 3;
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_60 = (SimpleJob **)operator_new(uVar3 * 8);
      local_58 = (SimpleJob ***)(local_60 + uVar8);
      local_48 = local_60 + uVar3;
      pppSStack_50 = local_58;
      local_68 = (SimpleJob **)operator_new(0x1000);
      __split_buffer<simplejobsystem::SimpleJob**,std::__ndk1::allocator<simplejobsystem::SimpleJob**>&>
      ::push_back((__split_buffer<simplejobsystem::SimpleJob**,std::__ndk1::allocator<simplejobsystem::SimpleJob**>&>
                   *)&local_60,&local_68);
      pppSVar4 = (SimpleJob ***)in_x0[2];
      pppSVar7 = pppSVar4;
      if (pppSVar4 != (SimpleJob ***)in_x0[1]) {
        do {
          pppSVar7 = pppSVar7 + -1;
          __split_buffer<simplejobsystem::SimpleJob**,std::__ndk1::allocator<simplejobsystem::SimpleJob**>&>
          ::push_front((__split_buffer<simplejobsystem::SimpleJob**,std::__ndk1::allocator<simplejobsystem::SimpleJob**>&>
                        *)&local_60,pppSVar7);
        } while (pppSVar7 != (SimpleJob ***)in_x0[1]);
        pppSVar4 = (SimpleJob ***)in_x0[2];
      }
      ppSVar2 = (SimpleJob **)*in_x0;
      *in_x0 = local_60;
      pvVar6 = in_x0[3];
      in_x0[2] = pppSStack_50;
      in_x0[1] = local_58;
      in_x0[3] = local_48;
      pppSStack_50 = pppSVar4;
      if ((long)pppSVar4 - (long)pppSVar7 != 0) {
        pppSStack_50 = pppSVar4 + (((long)pppSVar4 - (long)pppSVar7) - 8U >> 3 ^ 0xffffffffffffffff)
        ;
      }
      local_60 = ppSVar2;
      local_58 = pppSVar7;
      local_48 = (SimpleJob **)pvVar6;
      if (ppSVar2 != (SimpleJob **)0x0) {
        operator_delete(ppSVar2);
      }
      goto LAB_00eabde4;
    }
    if (in_x0[3] != in_x0[2]) {
      local_60 = (SimpleJob **)operator_new(0x1000);
      __split_buffer<simplejobsystem::SimpleJob**,std::__ndk1::allocator<simplejobsystem::SimpleJob**>>
      ::push_back((__split_buffer<simplejobsystem::SimpleJob**,std::__ndk1::allocator<simplejobsystem::SimpleJob**>>
                   *)in_x0,&local_60);
      goto LAB_00eabde4;
    }
    local_60 = (SimpleJob **)operator_new(0x1000);
    __split_buffer<simplejobsystem::SimpleJob**,std::__ndk1::allocator<simplejobsystem::SimpleJob**>>
    ::push_front((__split_buffer<simplejobsystem::SimpleJob**,std::__ndk1::allocator<simplejobsystem::SimpleJob**>>
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
  FUN_00eabe10();
LAB_00eabde4:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


