// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_default_qtables
// Entry Point: 00d6ab90
// Size: 408 bytes
// Signature: undefined jpeg_default_qtables(void)


void jpeg_default_qtables(long *param_1,char param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  code **ppcVar4;
  long lVar5;
  long lVar6;
  undefined2 uVar7;
  
  iVar2 = *(int *)(param_1 + 0x12);
  if (*(int *)((long)param_1 + 0x24) != 100) {
    lVar6 = *param_1;
    *(int *)(lVar6 + 0x2c) = *(int *)((long)param_1 + 0x24);
    ppcVar4 = (code **)*param_1;
    *(undefined4 *)(lVar6 + 0x28) = 0x15;
    (**ppcVar4)(param_1);
  }
  lVar6 = param_1[0xe];
  if (lVar6 == 0) {
    lVar6 = jpeg_alloc_quant_table(param_1);
    param_1[0xe] = lVar6;
  }
  lVar5 = 0;
  do {
    uVar1 = (long)((ulong)(uint)(&DAT_00548148)[lVar5] * (long)iVar2 + 0x32) / 100;
    if ((long)uVar1 < 2) {
      uVar1 = 1;
    }
    if (0x7ffe < uVar1) {
      uVar1 = 0x7fff;
    }
    uVar7 = 0xff;
    if (uVar1 < 0x100 || param_2 == '\0') {
      uVar7 = (undefined2)uVar1;
    }
    *(undefined2 *)(lVar6 + lVar5 * 2) = uVar7;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x40);
  iVar2 = *(int *)((long)param_1 + 0x24);
  *(undefined *)(lVar6 + 0x80) = 0;
  iVar3 = *(int *)((long)param_1 + 0x94);
  if (iVar2 != 100) {
    lVar6 = *param_1;
    *(int *)(lVar6 + 0x2c) = iVar2;
    ppcVar4 = (code **)*param_1;
    *(undefined4 *)(lVar6 + 0x28) = 0x15;
    (**ppcVar4)(param_1);
  }
  lVar6 = param_1[0xf];
  if (lVar6 == 0) {
    lVar6 = jpeg_alloc_quant_table(param_1);
    param_1[0xf] = lVar6;
  }
  lVar5 = 0;
  do {
    uVar1 = (long)((ulong)(uint)(&DAT_00548248)[lVar5] * (long)iVar3 + 0x32) / 100;
    if ((long)uVar1 < 2) {
      uVar1 = 1;
    }
    if (0x7ffe < uVar1) {
      uVar1 = 0x7fff;
    }
    uVar7 = 0xff;
    if (uVar1 < 0x100 || param_2 == '\0') {
      uVar7 = (undefined2)uVar1;
    }
    *(undefined2 *)(lVar6 + lVar5 * 2) = uVar7;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x40);
  *(undefined *)(lVar6 + 0x80) = 0;
  return;
}


