// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectGetEntryPointDescriptorSet
// Entry Point: 00add374
// Size: 212 bytes
// Signature: undefined spvReflectGetEntryPointDescriptorSet(void)


int * spvReflectGetEntryPointDescriptorSet
                (int *param_1,char *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  ulong uVar6;
  int **ppiVar7;
  
  piVar2 = param_1;
  if (param_1 == (int *)0x0) {
joined_r0x00add408:
    if (param_4 == (undefined4 *)0x0) {
      return piVar2;
    }
    uVar4 = 5;
    if (param_1 != (int *)0x0) {
      uVar4 = 8;
    }
    if (piVar2 != (int *)0x0) {
      uVar4 = 0;
    }
  }
  else {
    if ((param_2 != (char *)0x0) && (uVar6 = (ulong)(uint)param_1[5], param_1[5] != 0)) {
      ppiVar7 = (int **)(*(long *)(param_1 + 6) + 0x48);
      do {
        iVar1 = strcmp((char *)ppiVar7[-9],param_2);
        if (iVar1 == 0) {
          uVar6 = (ulong)*(uint *)(ppiVar7 + -1);
          if (*(uint *)(ppiVar7 + -1) == 0) {
            piVar2 = (int *)0x0;
          }
          else {
            piVar3 = (int *)0x0;
            piVar5 = *ppiVar7;
            do {
              piVar2 = piVar5;
              if (*piVar5 != param_3) {
                piVar2 = piVar3;
              }
              uVar6 = uVar6 - 1;
              piVar3 = piVar2;
              piVar5 = piVar5 + 4;
            } while (uVar6 != 0);
          }
          goto joined_r0x00add408;
        }
        ppiVar7 = ppiVar7 + 0x11;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    piVar2 = (int *)0x0;
    if (param_4 == (undefined4 *)0x0) {
      return (int *)0x0;
    }
    uVar4 = 8;
  }
  *param_4 = uVar4;
  return piVar2;
}


