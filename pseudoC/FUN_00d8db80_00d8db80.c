// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d8db80
// Entry Point: 00d8db80
// Size: 488 bytes
// Signature: undefined FUN_00d8db80(void)


long FUN_00d8db80(long *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  code **ppcVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  
  lVar9 = param_1[1];
  uVar12 = 0;
  if (param_3 != 0) {
    uVar12 = 0x3b9ac9e8 / param_3;
  }
  if (0x3b9ac9e8 < param_3) {
    ppcVar4 = (code **)*param_1;
    *(undefined4 *)(ppcVar4 + 5) = 0x48;
    (**ppcVar4)(param_1);
  }
  if (param_4 <= uVar12) {
    uVar12 = param_4;
  }
  uVar11 = (ulong)uVar12;
  *(uint *)(lVar9 + 0xa0) = uVar12;
  lVar9 = FUN_00d8d8cc(param_1,param_2,(ulong)param_4 << 3);
  if (param_4 != 0) {
    uVar12 = 0;
    uVar7 = (uint)param_2;
    do {
      lVar14 = param_1[1];
      uVar6 = (uint)uVar11;
      if (param_4 - uVar12 <= (uint)uVar11) {
        uVar6 = param_4 - uVar12;
      }
      uVar11 = (ulong)uVar6;
      uVar10 = uVar11 * param_3;
      if (0x3b9ac9e8 < uVar10) {
        *(undefined8 *)(*param_1 + 0x28) = 0x300000038;
        (**(code **)*param_1)(param_1);
      }
      lVar2 = 0;
      if ((uVar10 & 7) != 0) {
        lVar2 = 8 - (uVar10 & 7);
      }
      if (1 < uVar7) {
        lVar5 = *param_1;
        *(undefined4 *)(lVar5 + 0x28) = 0xf;
        *(uint *)(lVar5 + 0x2c) = uVar7;
        (**(code **)*param_1)(param_1);
      }
      lVar5 = lVar2 + uVar10 + 0x18;
      puVar3 = (undefined8 *)jpeg_get_large(param_1,lVar5);
      if (puVar3 == (undefined8 *)0x0) {
        *(undefined8 *)(*param_1 + 0x28) = 0x400000038;
        (**(code **)*param_1)(param_1);
      }
      lVar1 = lVar14 + (long)(int)uVar7 * 8;
      uVar8 = *(undefined8 *)(lVar1 + 0x78);
      *(long *)(lVar14 + 0x98) = *(long *)(lVar14 + 0x98) + lVar5;
      puVar3[2] = 0;
      *puVar3 = uVar8;
      puVar3[1] = lVar2 + uVar10;
      *(undefined8 **)(lVar1 + 0x78) = puVar3;
      if (uVar6 != 0) {
        puVar3 = puVar3 + 3;
        uVar13 = uVar12;
        do {
          uVar12 = uVar13 + 1;
          *(undefined8 **)(lVar9 + (ulong)uVar13 * 8) = puVar3;
          puVar3 = (undefined8 *)((long)puVar3 + (ulong)param_3);
          uVar6 = uVar6 - 1;
          uVar13 = uVar12;
        } while (uVar6 != 0);
      }
    } while (uVar12 < param_4);
  }
  return lVar9;
}


