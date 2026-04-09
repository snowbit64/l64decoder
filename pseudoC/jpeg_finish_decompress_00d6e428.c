// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_finish_decompress
// Entry Point: 00d6e428
// Size: 236 bytes
// Signature: undefined jpeg_finish_decompress(void)


undefined8 jpeg_finish_decompress(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  code **ppcVar3;
  long lVar4;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if ((iVar1 - 0xcdU < 2) && (*(char *)(param_1 + 0xb) == '\0')) {
    if (*(uint *)(param_1 + 0x13) < *(uint *)(param_1 + 0xf)) {
      ppcVar3 = (code **)*param_1;
      *(undefined4 *)(ppcVar3 + 5) = 0x45;
      (**ppcVar3)(param_1);
    }
    (**(code **)(param_1[0x44] + 8))(param_1);
  }
  else {
    if (iVar1 == 0xd2) goto LAB_00d6e4c4;
    if (iVar1 != 0xcf) {
      lVar4 = *param_1;
      *(int *)(lVar4 + 0x2c) = iVar1;
      ppcVar3 = (code **)*param_1;
      *(undefined4 *)(lVar4 + 0x28) = 0x15;
      (**ppcVar3)(param_1);
      goto LAB_00d6e4c4;
    }
  }
  *(undefined4 *)((long)param_1 + 0x24) = 0xd2;
LAB_00d6e4c4:
  do {
    if (*(char *)((long)(code **)param_1[0x48] + 0x21) != '\0') {
      (**(code **)(param_1[5] + 0x30))(param_1);
      jpeg_abort(param_1);
      return 1;
    }
    uVar2 = (**(code **)param_1[0x48])(param_1);
  } while ((int)uVar2 != 0);
  return uVar2;
}


