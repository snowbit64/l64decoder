// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectGetOutputVariableBySemantic
// Entry Point: 00add9d8
// Size: 224 bytes
// Signature: undefined spvReflectGetOutputVariableBySemantic(void)


long spvReflectGetOutputVariableBySemantic(long param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  char *__s1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  if (param_2 == (char *)0x0) {
    lVar4 = 0;
    if (param_3 == (undefined4 *)0x0) {
      return 0;
    }
    uVar2 = 5;
  }
  else if (*param_2 == '\0') {
    lVar4 = 0;
    if (param_3 == (undefined4 *)0x0) {
      return 0;
    }
    uVar2 = 8;
  }
  else {
    if (param_1 == 0) {
      lVar4 = 0;
    }
    else {
      uVar5 = (ulong)*(uint *)(param_1 + 0x468);
      if (*(uint *)(param_1 + 0x468) == 0) {
        lVar4 = 0;
      }
      else {
        plVar6 = *(long **)(param_1 + 0x470);
        lVar3 = 0;
        do {
          lVar7 = *plVar6;
          __s1 = *(char **)(lVar7 + 0x18);
          lVar4 = lVar3;
          if ((__s1 != (char *)0x0) && (iVar1 = strcmp(__s1,param_2), lVar4 = lVar7, iVar1 != 0)) {
            lVar4 = lVar3;
          }
          plVar6 = plVar6 + 1;
          uVar5 = uVar5 - 1;
          lVar3 = lVar4;
        } while (uVar5 != 0);
      }
    }
    if (param_3 == (undefined4 *)0x0) {
      return lVar4;
    }
    uVar2 = 5;
    if (param_1 != 0) {
      uVar2 = 8;
    }
    if (lVar4 != 0) {
      uVar2 = 0;
    }
  }
  *param_3 = uVar2;
  return lVar4;
}


