// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectGetEntryPointInputVariableBySemantic
// Entry Point: 00add6fc
// Size: 264 bytes
// Signature: undefined spvReflectGetEntryPointInputVariableBySemantic(void)


long spvReflectGetEntryPointInputVariableBySemantic
               (long param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  int iVar1;
  char *__s1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long **pplVar6;
  long *plVar7;
  long lVar8;
  
  if (param_3 == (char *)0x0) {
    lVar3 = 0;
    if (param_4 == (undefined4 *)0x0) {
      return 0;
    }
    uVar2 = 5;
  }
  else {
    if (*param_3 != '\0') {
      if (param_1 == 0) {
LAB_00add7c4:
        lVar3 = 0;
LAB_00add7c8:
        if (param_4 == (undefined4 *)0x0) {
          return lVar3;
        }
        uVar2 = 5;
        if (param_1 != 0) {
          uVar2 = 8;
        }
        if (lVar3 != 0) {
          uVar2 = 0;
        }
        goto LAB_00add7e4;
      }
      if ((param_2 != (char *)0x0) &&
         (uVar5 = (ulong)*(uint *)(param_1 + 0x14), *(uint *)(param_1 + 0x14) != 0)) {
        pplVar6 = (long **)(*(long *)(param_1 + 0x18) + 0x18);
        do {
          iVar1 = strcmp((char *)pplVar6[-3],param_2);
          if (iVar1 == 0) {
            uVar5 = (ulong)*(uint *)((long)pplVar6 + -4);
            if (*(uint *)((long)pplVar6 + -4) != 0) {
              plVar7 = *pplVar6;
              lVar4 = 0;
              do {
                lVar8 = *plVar7;
                __s1 = *(char **)(lVar8 + 0x18);
                lVar3 = lVar4;
                if ((__s1 != (char *)0x0) &&
                   (iVar1 = strcmp(__s1,param_3), lVar3 = lVar8, iVar1 != 0)) {
                  lVar3 = lVar4;
                }
                plVar7 = plVar7 + 1;
                uVar5 = uVar5 - 1;
                lVar4 = lVar3;
              } while (uVar5 != 0);
              goto LAB_00add7c8;
            }
            goto LAB_00add7c4;
          }
          pplVar6 = pplVar6 + 0x11;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    lVar3 = 0;
    if (param_4 == (undefined4 *)0x0) {
      return 0;
    }
    uVar2 = 8;
  }
LAB_00add7e4:
  *param_4 = uVar2;
  return lVar3;
}


