// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f249a4
// Entry Point: 00f249a4
// Size: 348 bytes
// Signature: undefined FUN_00f249a4(void)


uint FUN_00f249a4(long param_1,undefined8 *param_2,long *param_3,int param_4,double *param_5,
                 int param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((-1 < param_4) || (param_6 < 1)) {
    return 0xffffffff;
  }
  if (*(int *)((long)param_3 + 0xc) == 6) {
    lVar5 = *param_3;
    if (param_6 == 3) {
      if (*(int *)((long)param_5 + 0xc) != 3) {
        return 0xffffffff;
      }
      if (*(int *)((long)param_5 + 0x1c) != 3) {
        return 0xffffffff;
      }
      if (*param_5 != 1.0) {
        return 0xffffffff;
      }
      uVar1 = (uint)param_5[2];
    }
    else {
      if (param_6 != 1) {
        return 0xffffffff;
      }
      uVar1 = FUN_00f17aac(lVar5);
    }
    if (-1 < (int)uVar1) {
      if (*(int *)(lVar5 + 8) < (int)uVar1) {
        return 0xffffffff;
      }
      if ((int)((ulong)(*(long *)(param_1 + 0x28) - (long)param_2) >> 4) < (int)uVar1) {
        return 0xffffffff;
      }
      if (8000 < uVar1 + param_6) {
        return 0xffffffff;
      }
      if (uVar1 != 0) {
        uVar3 = (ulong)uVar1;
        puVar2 = *(undefined8 **)(lVar5 + 0x18);
        puVar4 = param_2;
        do {
          uVar6 = *puVar2;
          uVar3 = uVar3 - 1;
          puVar4[1] = puVar2[1];
          *puVar4 = uVar6;
          puVar2 = puVar2 + 2;
          puVar4 = puVar4 + 2;
        } while (uVar3 != 0);
      }
      if (param_2 + (long)(int)uVar1 * 2 <= *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x10)) {
        return uVar1;
      }
      *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x10) = param_2 + (long)(int)uVar1 * 2;
      return uVar1;
    }
  }
  return 0xffffffff;
}


