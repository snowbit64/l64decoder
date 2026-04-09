// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d8d8cc
// Entry Point: 00d8d8cc
// Size: 432 bytes
// Signature: undefined FUN_00d8d8cc(void)


long FUN_00d8d8cc(long *param_1,uint param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  code **ppcVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  lVar7 = param_1[1];
  if (0x3b9ac9e8 < param_3) {
    *(undefined8 *)(*param_1 + 0x28) = 0x100000038;
    (**(code **)*param_1)(param_1);
  }
  lVar1 = 0;
  if ((param_3 & 7) != 0) {
    lVar1 = 8 - (param_3 & 7);
  }
  if (1 < param_2) {
    lVar4 = *param_1;
    *(uint *)(lVar4 + 0x2c) = param_2;
    ppcVar6 = (code **)*param_1;
    *(undefined4 *)(lVar4 + 0x28) = 0xf;
    (**ppcVar6)(param_1);
  }
  param_3 = lVar1 + param_3;
  puVar9 = (undefined8 *)(lVar7 + (long)(int)param_2 * 8 + 0x68);
  puVar5 = (undefined8 *)*puVar9;
  if (puVar5 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    do {
      puVar3 = puVar5;
      if (param_3 <= (ulong)puVar3[2]) goto LAB_00d8d9fc;
      puVar5 = (undefined8 *)*puVar3;
      puVar8 = puVar3;
    } while ((undefined8 *)*puVar3 != (undefined8 *)0x0);
  }
  puVar2 = &DAT_004c4290;
  if (puVar8 != (undefined8 *)0x0) {
    puVar2 = &DAT_004c3d60;
  }
  uVar10 = 0x3b9ac9e8 - param_3;
  if (*(ulong *)(puVar2 + (long)(int)param_2 * 8) <= 0x3b9ac9e8 - param_3) {
    uVar10 = *(ulong *)(puVar2 + (long)(int)param_2 * 8);
  }
  lVar4 = uVar10 + param_3;
  lVar1 = lVar4 + 0x18;
  puVar3 = (undefined8 *)jpeg_get_small(param_1,lVar1);
  while (puVar3 == (undefined8 *)0x0) {
    if (uVar10 < 100) {
      *(undefined8 *)(*param_1 + 0x28) = 0x200000038;
      (**(code **)*param_1)(param_1);
    }
    uVar10 = uVar10 >> 1;
    lVar4 = uVar10 + param_3;
    lVar1 = lVar4 + 0x18;
    puVar3 = (undefined8 *)jpeg_get_small(param_1,lVar1);
  }
  *(long *)(lVar7 + 0x98) = *(long *)(lVar7 + 0x98) + lVar1;
  if (puVar8 != (undefined8 *)0x0) {
    puVar9 = puVar8;
  }
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = lVar4;
  *puVar9 = puVar3;
LAB_00d8d9fc:
  lVar7 = puVar3[1];
  puVar3[1] = lVar7 + param_3;
  puVar3[2] = puVar3[2] - param_3;
  return (long)puVar3 + lVar7 + 0x18;
}


