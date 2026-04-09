// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectGetEntryPointInputVariableByLocation
// Entry Point: 00add548
// Size: 212 bytes
// Signature: undefined spvReflectGetEntryPointInputVariableByLocation(void)


long spvReflectGetEntryPointInputVariableByLocation
               (long param_1,char *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  long **pplVar7;
  
  if (param_3 != -1) {
    if (param_1 == 0) {
LAB_00add5e4:
      lVar2 = 0;
LAB_00add5e8:
      if (param_4 == (undefined4 *)0x0) {
        return lVar2;
      }
      uVar4 = 5;
      if (param_1 != 0) {
        uVar4 = 8;
      }
      if (lVar2 != 0) {
        uVar4 = 0;
      }
      goto LAB_00add604;
    }
    if ((param_2 != (char *)0x0) &&
       (uVar6 = (ulong)*(uint *)(param_1 + 0x14), *(uint *)(param_1 + 0x14) != 0)) {
      pplVar7 = (long **)(*(long *)(param_1 + 0x18) + 0x18);
LAB_00add58c:
      iVar1 = strcmp((char *)pplVar7[-3],param_2);
      if (iVar1 != 0) goto code_r0x00add59c;
      uVar6 = (ulong)*(uint *)((long)pplVar7 + -4);
      if (*(uint *)((long)pplVar7 + -4) != 0) {
        lVar3 = 0;
        plVar5 = *pplVar7;
        do {
          lVar2 = *plVar5;
          if (*(int *)(*plVar5 + 0x10) != param_3) {
            lVar2 = lVar3;
          }
          uVar6 = uVar6 - 1;
          lVar3 = lVar2;
          plVar5 = plVar5 + 1;
        } while (uVar6 != 0);
        goto LAB_00add5e8;
      }
      goto LAB_00add5e4;
    }
  }
LAB_00add5a8:
  lVar2 = 0;
  if (param_4 == (undefined4 *)0x0) {
    return 0;
  }
  uVar4 = 8;
LAB_00add604:
  *param_4 = uVar4;
  return lVar2;
code_r0x00add59c:
  pplVar7 = pplVar7 + 0x11;
  uVar6 = uVar6 - 1;
  if (uVar6 == 0) goto LAB_00add5a8;
  goto LAB_00add58c;
}


