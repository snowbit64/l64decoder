// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0094e020
// Entry Point: 0094e020
// Size: 292 bytes
// Signature: undefined FUN_0094e020(void)


long FUN_0094e020(long *param_1,long **param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  ulong uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  
  plVar2 = (long *)(long)*(int *)(param_2 + 2);
  param_2[1] = plVar2;
  plVar2 = (long *)FUN_0094e144(param_1,plVar2,param_2 + 2);
  plVar3 = (long *)param_1[1];
  plVar4 = param_2[1];
  uVar8 = NEON_cnt(plVar3,1);
  uVar7 = NEON_uaddlv(uVar8,1);
  uVar6 = CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar7) & 0xffffffff;
  if (uVar6 < 2) {
    plVar4 = (long *)((long)plVar3 - 1U & (ulong)plVar4);
  }
  else if (plVar3 <= plVar4) {
    uVar1 = 0;
    if (plVar3 != (long *)0x0) {
      uVar1 = (ulong)plVar4 / (ulong)plVar3;
    }
    plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar3);
  }
  if (plVar2 == (long *)0x0) {
    pplVar5 = (long **)(param_1 + 2);
    *param_2 = *pplVar5;
    *pplVar5 = (long *)param_2;
    *(long ***)(*param_1 + (long)plVar4 * 8) = pplVar5;
    if (*param_2 == (long *)0x0) goto LAB_0094e124;
    plVar2 = *(long **)((long)*param_2 + 8);
    if (uVar6 < 2) {
      plVar2 = (long *)((ulong)plVar2 & (long)plVar3 - 1U);
    }
    else if (plVar3 <= plVar2) {
      uVar6 = 0;
      if (plVar3 != (long *)0x0) {
        uVar6 = (ulong)plVar2 / (ulong)plVar3;
      }
      plVar2 = (long *)((long)plVar2 - uVar6 * (long)plVar3);
    }
  }
  else {
    *param_2 = (long *)*plVar2;
    *plVar2 = (long)param_2;
    if (*param_2 == (long *)0x0) goto LAB_0094e124;
    plVar2 = *(long **)((long)*param_2 + 8);
    if (uVar6 < 2) {
      plVar2 = (long *)((ulong)plVar2 & (long)plVar3 - 1U);
    }
    else if (plVar3 <= plVar2) {
      uVar6 = 0;
      if (plVar3 != (long *)0x0) {
        uVar6 = (ulong)plVar2 / (ulong)plVar3;
      }
      plVar2 = (long *)((long)plVar2 - uVar6 * (long)plVar3);
    }
    if (plVar2 == plVar4) goto LAB_0094e124;
  }
  *(long ***)(*param_1 + (long)plVar2 * 8) = param_2;
LAB_0094e124:
  param_1[3] = param_1[3] + 1;
  return (long)param_2;
}


