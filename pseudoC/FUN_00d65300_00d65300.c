// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d65300
// Entry Point: 00d65300
// Size: 340 bytes
// Signature: undefined FUN_00d65300(void)


void FUN_00d65300(long *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  code **ppcVar4;
  long lVar5;
  
  iVar2 = *(int *)((long)param_1 + 0x164);
  lVar5 = param_1[0x3f];
  *(undefined4 *)(lVar5 + 0x10) = 0;
  if (iVar2 < 2) {
    lVar1 = 0x4c;
    if (*(int *)(param_1 + 0x2c) != 1) {
      lVar1 = 0xc;
    }
    uVar3 = *(undefined4 *)(param_1[0x2d] + lVar1);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(undefined4 *)(lVar5 + 0x1c) = uVar3;
    *(undefined4 *)(lVar5 + 0x14) = 0;
  }
  else {
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(undefined4 *)(lVar5 + 0x1c) = 1;
    *(undefined4 *)(lVar5 + 0x14) = 0;
  }
  if (param_2 == 3) {
    if (*(long *)(lVar5 + 0x70) == 0) {
      ppcVar4 = (code **)*param_1;
      *(undefined4 *)(ppcVar4 + 5) = 3;
      (**ppcVar4)();
      *(code **)(lVar5 + 8) = FUN_00d65764;
      return;
    }
    *(code **)(lVar5 + 8) = FUN_00d65764;
    return;
  }
  if (param_2 == 2) {
    if (*(long *)(lVar5 + 0x70) == 0) {
      ppcVar4 = (code **)*param_1;
      *(undefined4 *)(ppcVar4 + 5) = 3;
      (**ppcVar4)();
      *(code **)(lVar5 + 8) = FUN_00d65aec;
      return;
    }
    *(code **)(lVar5 + 8) = FUN_00d65aec;
    return;
  }
  if (param_2 != 0) {
    ppcVar4 = (code **)*param_1;
    *(undefined4 *)(ppcVar4 + 5) = 3;
                    /* WARNING: Could not recover jumptable at 0x00d653f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**ppcVar4)();
    return;
  }
  if (*(long *)(lVar5 + 0x70) != 0) {
    ppcVar4 = (code **)*param_1;
    *(undefined4 *)(ppcVar4 + 5) = 3;
    (**ppcVar4)();
  }
  *(code **)(lVar5 + 8) = FUN_00d65454;
  return;
}


