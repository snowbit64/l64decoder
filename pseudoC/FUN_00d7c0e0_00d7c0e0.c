// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d7c0e0
// Entry Point: 00d7c0e0
// Size: 304 bytes
// Signature: undefined FUN_00d7c0e0(void)


void FUN_00d7c0e0(long *param_1,int param_2)

{
  undefined8 uVar1;
  code **ppcVar2;
  long lVar3;
  
  lVar3 = param_1[0x47];
  if (param_2 == 3) {
    if (*(long *)(lVar3 + 0x10) == 0) {
      ppcVar2 = (code **)*param_1;
      *(undefined4 *)(ppcVar2 + 5) = 3;
      (**ppcVar2)();
    }
    *(code **)(lVar3 + 8) = FUN_00d7c2cc;
    *(undefined4 *)(lVar3 + 0x24) = 0;
    *(undefined4 *)(lVar3 + 0x28) = 0;
    return;
  }
  if (param_2 == 2) {
    if (*(long *)(lVar3 + 0x10) == 0) {
      ppcVar2 = (code **)*param_1;
      *(undefined4 *)(ppcVar2 + 5) = 3;
      (**ppcVar2)();
    }
    *(code **)(lVar3 + 8) = FUN_00d7c3ec;
    *(undefined4 *)(lVar3 + 0x24) = 0;
    *(undefined4 *)(lVar3 + 0x28) = 0;
    return;
  }
  if (param_2 != 0) {
    ppcVar2 = (code **)*param_1;
    *(undefined4 *)(ppcVar2 + 5) = 3;
    (**ppcVar2)();
    *(undefined4 *)(lVar3 + 0x24) = 0;
    *(undefined4 *)(lVar3 + 0x28) = 0;
    return;
  }
  if (*(char *)((long)param_1 + 0x62) != '\0') {
    *(code **)(lVar3 + 8) = FUN_00d7c210;
    if (*(long *)(lVar3 + 0x18) != 0) {
      *(undefined4 *)(lVar3 + 0x24) = 0;
      *(undefined4 *)(lVar3 + 0x28) = 0;
      return;
    }
    uVar1 = (**(code **)(param_1[1] + 0x38))
                      (param_1,*(undefined8 *)(lVar3 + 0x10),0,*(undefined4 *)(lVar3 + 0x20),1);
    *(undefined8 *)(lVar3 + 0x18) = uVar1;
    *(undefined4 *)(lVar3 + 0x24) = 0;
    *(undefined4 *)(lVar3 + 0x28) = 0;
    return;
  }
  *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(param_1[0x4c] + 8);
  *(undefined4 *)(lVar3 + 0x24) = 0;
  *(undefined4 *)(lVar3 + 0x28) = 0;
  return;
}


