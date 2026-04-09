// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0094d3a4
// Entry Point: 0094d3a4
// Size: 272 bytes
// Signature: undefined FUN_0094d3a4(void)


long * FUN_0094d3a4(long **param_1,long *param_2)

{
  long *plVar1;
  long *__n;
  void *__s1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  long **pplVar5;
  long *__s2;
  long **pplVar6;
  long **pplVar7;
  
  pplVar5 = param_1 + 1;
  pplVar6 = (long **)*pplVar5;
  pplVar7 = pplVar5;
  if (pplVar6 != (long **)0x0) {
    plVar4 = (long *)param_2[5];
    __s1 = (void *)param_2[6];
    if ((*(byte *)(param_2 + 4) & 1) == 0) {
      __s1 = (void *)((long)param_2 + 0x21);
      plVar4 = (long *)(ulong)(*(byte *)(param_2 + 4) >> 1);
    }
    do {
      while( true ) {
        pplVar7 = pplVar6;
        bVar2 = *(byte *)(pplVar7 + 4);
        plVar1 = (long *)(ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          plVar1 = pplVar7[5];
        }
        __n = plVar1;
        if (plVar4 <= plVar1) {
          __n = plVar4;
        }
        if (__n == (long *)0x0) break;
        __s2 = pplVar7[6];
        if ((bVar2 & 1) == 0) {
          __s2 = (long *)((long)pplVar7 + 0x21);
        }
        iVar3 = memcmp(__s1,__s2,(size_t)__n);
        if (iVar3 == 0) break;
        if (-1 < iVar3) goto LAB_0094d3ec;
LAB_0094d444:
        pplVar5 = pplVar7;
        pplVar6 = (long **)*pplVar7;
        if ((long **)*pplVar7 == (long **)0x0) goto LAB_0094d460;
      }
      if (plVar4 < plVar1) goto LAB_0094d444;
LAB_0094d3ec:
      pplVar6 = (long **)pplVar7[1];
    } while ((long **)pplVar7[1] != (long **)0x0);
    pplVar5 = pplVar7 + 1;
  }
LAB_0094d460:
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = (long)pplVar7;
  *pplVar5 = param_2;
  plVar4 = param_2;
  if ((long *)**param_1 != (long *)0x0) {
    *param_1 = (long *)**param_1;
    plVar4 = *pplVar5;
  }
  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            ((__tree_node_base *)param_1[1],(__tree_node_base *)plVar4);
  param_1[2] = (long *)((long)param_1[2] + 1);
  return param_2;
}


