// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d4c57c
// Entry Point: 00d4c57c
// Size: 304 bytes
// Signature: undefined FUN_00d4c57c(void)


long ** FUN_00d4c57c(long **param_1,ulonglong *param_2)

{
  long lVar1;
  long **pplVar2;
  long *plVar3;
  ulonglong uVar4;
  long **pplVar5;
  long *plVar6;
  __tree_node_base *p_Stack_58;
  __tree_end_node *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pplVar5 = (long **)*param_1;
  pplVar2 = (long **)std::__ndk1::
                     __tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                     ::__find_equal<unsigned_long_long>
                               ((__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                                 *)pplVar5,(__tree_const_iterator)param_1[1],&local_50,&p_Stack_58,
                                param_2);
  plVar6 = *pplVar2;
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)operator_new(0x28);
    uVar4 = *param_2;
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar6[4] = uVar4;
    plVar6[2] = (long)local_50;
    *pplVar2 = plVar6;
    plVar3 = plVar6;
    if ((long *)**pplVar5 != (long *)0x0) {
      *pplVar5 = (long *)**pplVar5;
      plVar3 = *pplVar2;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)pplVar5[1],(__tree_node_base *)plVar3);
    pplVar5[2] = (long *)((long)pplVar5[2] + 1);
    param_1[1] = plVar6;
    pplVar5 = (long **)plVar6[1];
  }
  else {
    param_1[1] = plVar6;
    pplVar5 = (long **)plVar6[1];
  }
  if (pplVar5 == (long **)0x0) {
    pplVar5 = (long **)(plVar6 + 2);
    pplVar2 = (long **)*pplVar5;
    if (*pplVar2 != plVar6) {
      do {
        plVar6 = *pplVar5;
        pplVar5 = (long **)(plVar6 + 2);
        pplVar2 = (long **)*pplVar5;
      } while (*pplVar2 != plVar6);
    }
  }
  else {
    do {
      pplVar2 = pplVar5;
      pplVar5 = (long **)*pplVar2;
    } while ((long **)*pplVar2 != (long **)0x0);
  }
  param_1[1] = (long *)pplVar2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


