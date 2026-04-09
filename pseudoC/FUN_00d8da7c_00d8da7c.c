// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d8da7c
// Entry Point: 00d8da7c
// Size: 260 bytes
// Signature: undefined FUN_00d8da7c(void)


undefined8 * FUN_00d8da7c(long *param_1,uint param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  code **ppcVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = param_1[1];
  if (0x3b9ac9e8 < param_3) {
    *(undefined8 *)(*param_1 + 0x28) = 0x300000038;
    (**(code **)*param_1)(param_1);
  }
  lVar2 = 0;
  if ((param_3 & 7) != 0) {
    lVar2 = 8 - (param_3 & 7);
  }
  if (1 < param_2) {
    lVar4 = *param_1;
    *(uint *)(lVar4 + 0x2c) = param_2;
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(lVar4 + 0x28) = 0xf;
    (**ppcVar5)(param_1);
  }
  lVar4 = lVar2 + param_3 + 0x18;
  puVar3 = (undefined8 *)jpeg_get_large(param_1,lVar4);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)(*param_1 + 0x28) = 0x400000038;
    (**(code **)*param_1)(param_1);
  }
  lVar1 = lVar7 + (long)(int)param_2 * 8;
  uVar6 = *(undefined8 *)(lVar1 + 0x78);
  *(long *)(lVar7 + 0x98) = *(long *)(lVar7 + 0x98) + lVar4;
  *puVar3 = uVar6;
  puVar3[1] = lVar2 + param_3;
  puVar3[2] = 0;
  *(undefined8 **)(lVar1 + 0x78) = puVar3;
  return puVar3 + 3;
}


