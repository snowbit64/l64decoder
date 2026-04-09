// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_add_quant_table
// Entry Point: 00d6aa60
// Size: 304 bytes
// Signature: undefined jpeg_add_quant_table(void)


void jpeg_add_quant_table(long *param_1,uint param_2,long param_3,int param_4,char param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  code **ppcVar4;
  undefined2 uVar5;
  long *plVar6;
  
  if (*(int *)((long)param_1 + 0x24) != 100) {
    lVar2 = *param_1;
    *(int *)(lVar2 + 0x2c) = *(int *)((long)param_1 + 0x24);
    ppcVar4 = (code **)*param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x15;
    (**ppcVar4)(param_1);
  }
  if (param_2 < 4) {
    plVar6 = param_1 + (long)(int)param_2 + 0xe;
    lVar2 = *plVar6;
  }
  else {
    lVar2 = *param_1;
    *(uint *)(lVar2 + 0x2c) = param_2;
    ppcVar4 = (code **)*param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x20;
    (**ppcVar4)(param_1);
    plVar6 = param_1 + (long)(int)param_2 + 0xe;
    lVar2 = *plVar6;
  }
  if (lVar2 == 0) {
    lVar2 = jpeg_alloc_quant_table(param_1);
    *plVar6 = lVar2;
  }
  lVar3 = 0;
  do {
    uVar1 = (long)((ulong)*(uint *)(param_3 + lVar3 * 4) * (long)param_4 + 0x32) / 100;
    if ((long)uVar1 < 2) {
      uVar1 = 1;
    }
    if (0x7ffe < uVar1) {
      uVar1 = 0x7fff;
    }
    uVar5 = 0xff;
    if (uVar1 < 0x100 || param_5 == '\0') {
      uVar5 = (undefined2)uVar1;
    }
    *(undefined2 *)(lVar2 + lVar3 * 2) = uVar5;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x40);
  *(undefined *)(lVar2 + 0x80) = 0;
  return;
}


