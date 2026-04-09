// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d8dd68
// Entry Point: 00d8dd68
// Size: 512 bytes
// Signature: undefined FUN_00d8dd68(void)


long FUN_00d8dd68(long *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  code **ppcVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar2 = (ulong)param_3;
  uVar12 = 0;
  if (uVar2 != 0) {
    uVar12 = 0x3b9ac9e8 / (uVar2 * 0x80);
  }
  lVar8 = param_1[1];
  if (0x773593 < param_3) {
    ppcVar3 = (code **)*param_1;
    *(undefined4 *)(ppcVar3 + 5) = 0x48;
    (**ppcVar3)(param_1);
  }
  uVar10 = (uint)uVar12;
  if (param_4 <= uVar12) {
    uVar10 = param_4;
  }
  uVar12 = (ulong)uVar10;
  *(uint *)(lVar8 + 0xa0) = uVar10;
  lVar8 = FUN_00d8d8cc(param_1,param_2,(ulong)param_4 << 3);
  if (param_4 != 0) {
    uVar10 = 0;
    uVar6 = (uint)param_2;
    do {
      lVar9 = param_1[1];
      uVar5 = (uint)uVar12;
      if (param_4 - uVar10 <= (uint)uVar12) {
        uVar5 = param_4 - uVar10;
      }
      uVar12 = (ulong)uVar5;
      uVar13 = uVar2 * 0x80 * uVar12;
      if (uVar13 < 0x3b9ac9e9) {
        if (uVar6 < 2) goto LAB_00d8de64;
LAB_00d8deec:
        lVar4 = *param_1;
        *(undefined4 *)(lVar4 + 0x28) = 0xf;
        *(uint *)(lVar4 + 0x2c) = uVar6;
        (**(code **)*param_1)(param_1);
        puVar1 = (undefined8 *)jpeg_get_large(param_1,uVar13 | 0x18);
      }
      else {
        *(undefined8 *)(*param_1 + 0x28) = 0x300000038;
        (**(code **)*param_1)(param_1);
        if (1 < uVar6) goto LAB_00d8deec;
LAB_00d8de64:
        puVar1 = (undefined8 *)jpeg_get_large(param_1,uVar13 | 0x18);
      }
      if (puVar1 == (undefined8 *)0x0) {
        *(undefined8 *)(*param_1 + 0x28) = 0x400000038;
        (**(code **)*param_1)(param_1);
      }
      lVar4 = lVar9 + (long)(int)uVar6 * 8;
      uVar7 = *(undefined8 *)(lVar4 + 0x78);
      *(ulong *)(lVar9 + 0x98) = *(long *)(lVar9 + 0x98) + (uVar13 | 0x18);
      puVar1[2] = 0;
      *puVar1 = uVar7;
      puVar1[1] = uVar13;
      *(undefined8 **)(lVar4 + 0x78) = puVar1;
      if (uVar5 != 0) {
        puVar1 = puVar1 + 3;
        uVar11 = uVar10;
        do {
          uVar10 = uVar11 + 1;
          *(undefined8 **)(lVar8 + (ulong)uVar11 * 8) = puVar1;
          uVar5 = uVar5 - 1;
          puVar1 = puVar1 + uVar2 * 0x10;
          uVar11 = uVar10;
        } while (uVar5 != 0);
      }
    } while (uVar10 < param_4);
  }
  return lVar8;
}


