// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00732414
// Entry Point: 00732414
// Size: 336 bytes
// Signature: undefined FUN_00732414(void)


long ** FUN_00732414(long param_1,long **param_2)

{
  long *plVar1;
  long *plVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  long *plVar7;
  long *plVar8;
  
  pplVar3 = *(long ***)(param_1 + 8);
  pplVar5 = param_2 + 10;
  pplVar4 = param_2;
  pplVar6 = param_2;
  if (pplVar5 != pplVar3) {
    do {
      plVar2 = pplVar4[10];
      pplVar4[10] = (long *)0x0;
      plVar1 = *pplVar4;
      *pplVar4 = plVar2;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = pplVar4[4];
      pplVar4[2] = pplVar4[0xc];
      pplVar4[1] = pplVar4[0xb];
      *(undefined *)(pplVar4 + 3) = *(undefined *)(pplVar4 + 0xd);
      if (plVar1 != (long *)0x0) {
        pplVar4[5] = plVar1;
        operator_delete(plVar1);
        pplVar4[5] = (long *)0x0;
        pplVar4[6] = (long *)0x0;
      }
      plVar8 = pplVar4[0xf];
      plVar7 = pplVar4[0xe];
      pplVar4[0xe] = (long *)0x0;
      pplVar4[0xf] = (long *)0x0;
      plVar2 = pplVar4[0x10];
      pplVar4[0x10] = (long *)0x0;
      plVar1 = pplVar4[7];
      pplVar4[5] = plVar8;
      pplVar4[4] = plVar7;
      pplVar4[6] = plVar2;
      if (plVar1 != (long *)0x0) {
        pplVar4[8] = plVar1;
        operator_delete(plVar1);
        pplVar4[8] = (long *)0x0;
        pplVar4[9] = (long *)0x0;
      }
      plVar7 = pplVar4[0x12];
      plVar2 = pplVar4[0x11];
      pplVar6 = pplVar4 + 10;
      plVar1 = pplVar4[0x13];
      pplVar4[0x11] = (long *)0x0;
      pplVar4[0x12] = (long *)0x0;
      pplVar5 = pplVar4 + 0x14;
      pplVar4[0x13] = (long *)0x0;
      pplVar4[8] = plVar7;
      pplVar4[7] = plVar2;
      pplVar4[9] = plVar1;
      pplVar4 = pplVar6;
    } while (pplVar5 != pplVar3);
    pplVar5 = *(long ***)(param_1 + 8);
    if (pplVar6 == *(long ***)(param_1 + 8)) goto LAB_007324f4;
  }
  do {
    plVar1 = pplVar5[-3];
    if (plVar1 != (long *)0x0) {
      pplVar5[-2] = plVar1;
      operator_delete(plVar1);
    }
    plVar1 = pplVar5[-6];
    if (plVar1 != (long *)0x0) {
      pplVar5[-5] = plVar1;
      operator_delete(plVar1);
    }
    plVar1 = pplVar5[-10];
    pplVar4 = pplVar5 + -10;
    pplVar5[-10] = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    pplVar5 = pplVar4;
  } while (pplVar4 != pplVar6);
LAB_007324f4:
  *(long ***)(param_1 + 8) = pplVar6;
  return param_2;
}


