// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_read_raw_data
// Entry Point: 00d6e814
// Size: 280 bytes
// Signature: undefined jpeg_read_raw_data(void)


uint jpeg_read_raw_data(long *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  code **ppcVar5;
  
  if (*(int *)((long)param_1 + 0x24) == 0xce) {
    uVar1 = *(uint *)(param_1 + 0x13);
    uVar2 = *(uint *)(param_1 + 0xf);
    if (uVar2 <= uVar1) {
LAB_00d6e8f8:
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
    uVar1 = *(uint *)(param_1 + 0x13);
    uVar2 = *(uint *)(param_1 + 0xf);
    if (uVar2 <= uVar1) goto LAB_00d6e8f8;
  }
  ppcVar5 = (code **)param_1[2];
  if (ppcVar5 != (code **)0x0) {
    ppcVar5[1] = (code *)(ulong)uVar1;
    ppcVar5[2] = (code *)(ulong)uVar2;
    (**ppcVar5)(param_1);
  }
  uVar1 = *(int *)((long)param_1 + 0x18c) * *(int *)((long)param_1 + 0x184);
  if (param_3 < uVar1) {
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(ppcVar5 + 5) = 0x18;
    (**ppcVar5)(param_1);
  }
  iVar3 = (**(code **)(param_1[0x46] + 0x18))(param_1,param_2);
  if (iVar3 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x13) = *(int *)(param_1 + 0x13) + uVar1;
  return uVar1;
}


