// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0092c7a4
// Entry Point: 0092c7a4
// Size: 248 bytes
// Signature: undefined FUN_0092c7a4(void)


undefined  [16] FUN_0092c7a4(long **param_1,byte *param_2)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long **pplVar6;
  long **pplVar7;
  long **pplVar8;
  long **pplVar9;
  undefined auVar10 [16];
  
  pplVar6 = param_1 + 1;
  pplVar7 = (long **)*pplVar6;
  pplVar9 = pplVar6;
  if (pplVar7 == (long **)0x0) {
LAB_0092c814:
    plVar5 = *pplVar6;
    pplVar8 = pplVar6;
  }
  else {
    pplVar6 = param_1 + 1;
    do {
      while (pplVar8 = pplVar7, pplVar9 = pplVar8, *(byte *)((long)pplVar8 + 0x19) <= *param_2) {
        if (*param_2 <= *(byte *)((long)pplVar8 + 0x19)) goto LAB_0092c814;
        pplVar6 = pplVar8 + 1;
        pplVar7 = (long **)*pplVar6;
        if ((long **)*pplVar6 == (long **)0x0) goto LAB_0092c814;
      }
      pplVar6 = pplVar8;
      pplVar7 = (long **)*pplVar8;
    } while ((long **)*pplVar8 != (long **)0x0);
    plVar5 = *pplVar8;
  }
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar9;
    bVar1 = *param_2;
    *pplVar8 = plVar5;
    plVar4 = *param_1;
    *(byte *)((long)plVar5 + 0x19) = bVar1;
    plVar2 = plVar5;
    if ((long *)*plVar4 != (long *)0x0) {
      *param_1 = (long *)*plVar4;
      plVar2 = *pplVar8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],(__tree_node_base *)plVar2);
    uVar3 = 1;
    param_1[2] = (long *)((long)param_1[2] + 1);
  }
  else {
    uVar3 = 0;
  }
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = plVar5;
  return auVar10;
}


