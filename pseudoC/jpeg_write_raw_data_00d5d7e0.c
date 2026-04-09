// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_write_raw_data
// Entry Point: 00d5d7e0
// Size: 308 bytes
// Signature: undefined jpeg_write_raw_data(void)


uint jpeg_write_raw_data(long *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  code **ppcVar5;
  
  if (*(int *)((long)param_1 + 0x24) == 0x66) {
    uVar1 = *(uint *)(param_1 + 0x29);
    uVar2 = *(uint *)((long)param_1 + 0x34);
    if (uVar2 <= uVar1) {
LAB_00d5d8e0:
      lVar4 = *param_1;
      *(undefined4 *)(lVar4 + 0x28) = 0x7e;
      (**(code **)(lVar4 + 8))(param_1,0xffffffff);
      return 0;
    }
  }
  else {
    lVar4 = *param_1;
    *(int *)(lVar4 + 0x2c) = *(int *)((long)param_1 + 0x24);
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(lVar4 + 0x28) = 0x15;
    (**ppcVar5)(param_1);
    uVar1 = *(uint *)(param_1 + 0x29);
    uVar2 = *(uint *)((long)param_1 + 0x34);
    if (uVar2 <= uVar1) goto LAB_00d5d8e0;
  }
  ppcVar5 = (code **)param_1[2];
  if (ppcVar5 != (code **)0x0) {
    ppcVar5[1] = (code *)(ulong)uVar1;
    ppcVar5[2] = (code *)(ulong)uVar2;
    (**ppcVar5)(param_1);
  }
  if (*(char *)(param_1[0x3c] + 0x18) != '\0') {
    (**(code **)(param_1[0x3c] + 8))(param_1);
  }
  uVar1 = *(int *)((long)param_1 + 0x15c) * *(int *)((long)param_1 + 0x154);
  if (param_3 < uVar1) {
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(ppcVar5 + 5) = 0x18;
    (**ppcVar5)(param_1);
  }
  cVar3 = (**(code **)(param_1[0x3f] + 8))(param_1,param_2);
  if (cVar3 == '\0') {
    return 0;
  }
  *(uint *)(param_1 + 0x29) = *(int *)(param_1 + 0x29) + uVar1;
  return uVar1;
}


