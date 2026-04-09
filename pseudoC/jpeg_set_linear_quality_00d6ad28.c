// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_set_linear_quality
// Entry Point: 00d6ad28
// Size: 408 bytes
// Signature: undefined jpeg_set_linear_quality(void)


void jpeg_set_linear_quality(long *param_1,int param_2,char param_3)

{
  ulong uVar1;
  int iVar2;
  code **ppcVar3;
  long lVar4;
  long lVar5;
  undefined2 uVar6;
  
  if (*(int *)((long)param_1 + 0x24) != 100) {
    lVar5 = *param_1;
    *(int *)(lVar5 + 0x2c) = *(int *)((long)param_1 + 0x24);
    ppcVar3 = (code **)*param_1;
    *(undefined4 *)(lVar5 + 0x28) = 0x15;
    (**ppcVar3)(param_1);
  }
  lVar5 = param_1[0xe];
  if (lVar5 == 0) {
    lVar5 = jpeg_alloc_quant_table(param_1);
    param_1[0xe] = lVar5;
  }
  lVar4 = 0;
  do {
    uVar1 = (long)((ulong)(uint)(&DAT_00548148)[lVar4] * (long)param_2 + 0x32) / 100;
    if ((long)uVar1 < 2) {
      uVar1 = 1;
    }
    if (0x7ffe < uVar1) {
      uVar1 = 0x7fff;
    }
    uVar6 = 0xff;
    if (uVar1 < 0x100 || param_3 == '\0') {
      uVar6 = (undefined2)uVar1;
    }
    *(undefined2 *)(lVar5 + lVar4 * 2) = uVar6;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x40);
  iVar2 = *(int *)((long)param_1 + 0x24);
  *(undefined *)(lVar5 + 0x80) = 0;
  if (iVar2 != 100) {
    lVar5 = *param_1;
    *(int *)(lVar5 + 0x2c) = iVar2;
    ppcVar3 = (code **)*param_1;
    *(undefined4 *)(lVar5 + 0x28) = 0x15;
    (**ppcVar3)(param_1);
  }
  lVar5 = param_1[0xf];
  if (lVar5 == 0) {
    lVar5 = jpeg_alloc_quant_table(param_1);
    param_1[0xf] = lVar5;
  }
  lVar4 = 0;
  do {
    uVar1 = (long)((ulong)(uint)(&DAT_00548248)[lVar4] * (long)param_2 + 0x32) / 100;
    if ((long)uVar1 < 2) {
      uVar1 = 1;
    }
    if (0x7ffe < uVar1) {
      uVar1 = 0x7fff;
    }
    uVar6 = 0xff;
    if (uVar1 < 0x100 || param_3 == '\0') {
      uVar6 = (undefined2)uVar1;
    }
    *(undefined2 *)(lVar5 + lVar4 * 2) = uVar6;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x40);
  *(undefined *)(lVar5 + 0x80) = 0;
  return;
}


