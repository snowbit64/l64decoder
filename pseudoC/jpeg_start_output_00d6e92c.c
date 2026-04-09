// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_start_output
// Entry Point: 00d6e92c
// Size: 376 bytes
// Signature: undefined jpeg_start_output(void)


undefined8 jpeg_start_output(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  code **ppcVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = *(int *)((long)param_1 + 0x24);
  if ((iVar2 != 0xcc) && (iVar2 != 0xcf)) {
    lVar5 = *param_1;
    *(int *)(lVar5 + 0x2c) = iVar2;
    ppcVar4 = (code **)*param_1;
    *(undefined4 *)(lVar5 + 0x28) = 0x15;
    (**ppcVar4)(param_1);
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  iVar2 = param_2;
  if ((*(char *)(param_1[0x48] + 0x21) != '\0') &&
     (iVar2 = *(int *)((long)param_1 + 0x9c), param_2 <= *(int *)((long)param_1 + 0x9c))) {
    iVar2 = param_2;
  }
  *(int *)((long)param_1 + 0xa4) = iVar2;
  if (*(int *)((long)param_1 + 0x24) != 0xcc) {
    (**(code **)param_1[0x44])(param_1);
    *(undefined4 *)(param_1 + 0x13) = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0xcc;
  }
  if (*(char *)(param_1[0x44] + 0x10) != '\0') {
    uVar6 = *(uint *)(param_1 + 0x13);
    do {
      while (uVar1 = *(uint *)(param_1 + 0xf), uVar6 < uVar1) {
        ppcVar4 = (code **)param_1[2];
        uVar7 = uVar6;
        if (ppcVar4 != (code **)0x0) {
          ppcVar4[1] = (code *)(ulong)uVar6;
          ppcVar4[2] = (code *)(ulong)uVar1;
          (**ppcVar4)(param_1);
          uVar7 = *(uint *)(param_1 + 0x13);
        }
        (**(code **)(param_1[0x45] + 8))(param_1,0,param_1 + 0x13,0);
        uVar6 = *(uint *)(param_1 + 0x13);
        if (uVar6 == uVar7) {
          return 0;
        }
      }
      (**(code **)(param_1[0x44] + 8))(param_1);
      (**(code **)param_1[0x44])(param_1);
      uVar6 = 0;
      *(undefined4 *)(param_1 + 0x13) = 0;
    } while (*(char *)(param_1[0x44] + 0x10) != '\0');
  }
  uVar3 = 0xcd;
  if (*(char *)((long)param_1 + 0x59) != '\0') {
    uVar3 = 0xce;
  }
  *(undefined4 *)((long)param_1 + 0x24) = uVar3;
  return 1;
}


