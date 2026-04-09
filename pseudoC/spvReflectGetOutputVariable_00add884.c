// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectGetOutputVariable
// Entry Point: 00add884
// Size: 128 bytes
// Signature: undefined spvReflectGetOutputVariable(void)


long spvReflectGetOutputVariable(long param_1,int param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  
  if (param_2 == -1) {
    lVar2 = 0;
    if (param_3 == (undefined4 *)0x0) {
      return 0;
    }
    uVar3 = 8;
  }
  else {
    if (param_1 == 0) {
      lVar2 = 0;
    }
    else {
      uVar4 = (ulong)*(uint *)(param_1 + 0x468);
      if (*(uint *)(param_1 + 0x468) == 0) {
        lVar2 = 0;
      }
      else {
        lVar1 = 0;
        plVar5 = *(long **)(param_1 + 0x470);
        do {
          lVar2 = *plVar5;
          if (*(int *)(*plVar5 + 0x10) != param_2) {
            lVar2 = lVar1;
          }
          uVar4 = uVar4 - 1;
          lVar1 = lVar2;
          plVar5 = plVar5 + 1;
        } while (uVar4 != 0);
      }
    }
    if (param_3 == (undefined4 *)0x0) {
      return lVar2;
    }
    uVar3 = 5;
    if (param_1 != 0) {
      uVar3 = 8;
    }
    if (lVar2 != 0) {
      uVar3 = 0;
    }
  }
  *param_3 = uVar3;
  return lVar2;
}


