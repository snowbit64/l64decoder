// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_finish_output
// Entry Point: 00d6eaa4
// Size: 188 bytes
// Signature: undefined jpeg_finish_output(void)


undefined8 jpeg_finish_output(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  code **ppcVar3;
  long lVar4;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (iVar1 - 0xcdU < 2) {
    if (*(char *)(param_1 + 0xb) != '\0') {
      (**(code **)(param_1[0x44] + 8))(param_1);
      *(undefined4 *)((long)param_1 + 0x24) = 0xd0;
      goto LAB_00d6eb10;
    }
  }
  else if (iVar1 == 0xd0) goto LAB_00d6eb10;
  lVar4 = *param_1;
  *(int *)(lVar4 + 0x2c) = iVar1;
  ppcVar3 = (code **)*param_1;
  *(undefined4 *)(lVar4 + 0x28) = 0x15;
  (**ppcVar3)(param_1);
LAB_00d6eb10:
  while ((*(int *)((long)param_1 + 0x9c) <= *(int *)((long)param_1 + 0xa4) &&
         (*(char *)((long)(code **)param_1[0x48] + 0x21) == '\0'))) {
    uVar2 = (**(code **)param_1[0x48])(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  *(undefined4 *)((long)param_1 + 0x24) = 0xcf;
  return 1;
}


