// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d9c6e4
// Entry Point: 00d9c6e4
// Size: 1984 bytes
// Signature: undefined FUN_00d9c6e4(void)


void FUN_00d9c6e4(ushort *param_1,uint *param_2,uint param_3,uint param_4,int param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  
  uVar3 = *param_1;
  uVar7 = (*param_2 >> 0xb) * (uint)uVar3;
  if (param_3 < 8) {
    *param_1 = uVar3 + (short)(0x800 - uVar3 >> 5);
    if (uVar7 >> 0x18 == 0) {
      *param_2 = uVar7 * 0x100;
      FUN_00d9cea4(param_2);
      uVar7 = *param_2;
    }
    uVar4 = param_4 << 3;
    uVar3 = param_1[(ulong)uVar4 + 3];
    uVar6 = (uVar7 >> 0xb) * (uint)uVar3;
    if (param_3 < 4) {
      param_1[(ulong)uVar4 + 3] = uVar3 + (short)(0x800 - uVar3 >> 5);
    }
    else {
      uVar11 = (ulong)uVar6;
      uVar6 = uVar7 - uVar6;
      *(ulong *)(param_2 + 2) = *(long *)(param_2 + 2) + uVar11;
      param_1[(ulong)uVar4 + 3] = uVar3 - (uVar3 >> 5);
    }
    if (uVar6 >> 0x18 == 0) {
      *param_2 = uVar6 << 8;
      FUN_00d9cea4(param_2);
      uVar6 = *param_2;
    }
    uVar8 = param_3 >> 2 | 2;
    uVar11 = (ulong)uVar8;
    uVar3 = param_1[(ulong)uVar4 + uVar11 + 2];
    uVar7 = (uVar6 >> 0xb) * (uint)uVar3;
    if ((param_3 >> 1 & 1) == 0) {
      param_1[(ulong)uVar4 + uVar11 + 2] = uVar3 + (short)(0x800 - uVar3 >> 5);
    }
    else {
      uVar1 = (ulong)uVar7;
      uVar7 = uVar6 - uVar7;
      *(ulong *)(param_2 + 2) = *(long *)(param_2 + 2) + uVar1;
      param_1[(ulong)uVar4 + uVar11 + 2] = uVar3 - (uVar3 >> 5);
    }
    if (uVar7 >> 0x18 == 0) {
      *param_2 = uVar7 << 8;
      FUN_00d9cea4(param_2);
      uVar7 = *param_2;
    }
    uVar11 = (ulong)(param_3 >> 1 & 1 | uVar8 << 1);
    uVar3 = param_1[(ulong)uVar4 + uVar11 + 2];
    uVar6 = (uVar7 >> 0xb) * (uint)uVar3;
    if ((param_3 & 1) == 0) {
      *param_2 = uVar6;
      param_1[(ulong)uVar4 + uVar11 + 2] = uVar3 + (short)(0x800 - uVar3 >> 5);
    }
    else {
      uVar1 = (ulong)uVar6;
      uVar6 = uVar7 - uVar6;
      *(ulong *)(param_2 + 2) = *(long *)(param_2 + 2) + uVar1;
      *param_2 = uVar6;
      param_1[(ulong)uVar4 + uVar11 + 2] = uVar3 - (uVar3 >> 5);
    }
  }
  else {
    uVar6 = *param_2 - uVar7;
    plVar10 = (long *)(param_2 + 2);
    lVar9 = *plVar10;
    *param_1 = uVar3 - (uVar3 >> 5);
    *plVar10 = lVar9 + (ulong)uVar7;
    if (uVar6 >> 0x18 == 0) {
      *param_2 = uVar6 * 0x100;
      FUN_00d9cea4(param_2);
      uVar6 = *param_2;
    }
    uVar3 = param_1[1];
    uVar7 = (uVar6 >> 0xb) * (uint)uVar3;
    if (param_3 < 0x10) {
      param_1[1] = uVar3 + (short)(0x800 - uVar3 >> 5);
      if (uVar7 >> 0x18 == 0) {
        *param_2 = uVar7 * 0x100;
        FUN_00d9cea4(param_2);
        uVar7 = *param_2;
      }
      uVar4 = param_4 << 3;
      uVar8 = param_3 - 8;
      uVar3 = param_1[(ulong)uVar4 + 0x83];
      uVar6 = (uVar7 >> 0xb) * (uint)uVar3;
      if (uVar8 < 4) {
        param_1[(ulong)uVar4 + 0x83] = uVar3 + (short)(0x800 - uVar3 >> 5);
      }
      else {
        uVar11 = (ulong)uVar6;
        uVar6 = uVar7 - uVar6;
        *plVar10 = *plVar10 + uVar11;
        param_1[(ulong)uVar4 + 0x83] = uVar3 - (uVar3 >> 5);
      }
      if (uVar6 >> 0x18 == 0) {
        *param_2 = uVar6 << 8;
        FUN_00d9cea4(param_2);
        uVar6 = *param_2;
      }
      uVar5 = uVar8 >> 2 | 2;
      uVar11 = (ulong)uVar5;
      uVar3 = param_1[(ulong)uVar4 + uVar11 + 0x82];
      uVar7 = (uVar6 >> 0xb) * (uint)uVar3;
      if ((uVar8 >> 1 & 1) == 0) {
        param_1[(ulong)uVar4 + uVar11 + 0x82] = uVar3 + (short)(0x800 - uVar3 >> 5);
      }
      else {
        uVar1 = (ulong)uVar7;
        uVar7 = uVar6 - uVar7;
        *plVar10 = *plVar10 + uVar1;
        param_1[(ulong)uVar4 + uVar11 + 0x82] = uVar3 - (uVar3 >> 5);
      }
      if (uVar7 >> 0x18 == 0) {
        *param_2 = uVar7 << 8;
        FUN_00d9cea4(param_2);
        uVar7 = *param_2;
      }
      uVar11 = (ulong)(uVar8 >> 1 & 1 | uVar5 << 1);
      uVar3 = param_1[(ulong)uVar4 + uVar11 + 0x82];
      uVar6 = (uVar7 >> 0xb) * (uint)uVar3;
      if ((param_3 & 1) == 0) {
        *param_2 = uVar6;
        param_1[(ulong)uVar4 + uVar11 + 0x82] = uVar3 + (short)(0x800 - uVar3 >> 5);
      }
      else {
        uVar1 = (ulong)uVar6;
        uVar6 = uVar7 - uVar6;
        *(ulong *)(param_2 + 2) = *(long *)(param_2 + 2) + uVar1;
        *param_2 = uVar6;
        param_1[(ulong)uVar4 + uVar11 + 0x82] = uVar3 - (uVar3 >> 5);
      }
    }
    else {
      lVar9 = *plVar10;
      uVar6 = uVar6 - uVar7;
      param_1[1] = uVar3 - (uVar3 >> 5);
      *plVar10 = lVar9 + (ulong)uVar7;
      if (uVar6 >> 0x18 == 0) {
        *param_2 = uVar6 * 0x100;
        FUN_00d9cea4(param_2);
        uVar6 = *param_2;
      }
      uVar3 = param_1[0x103];
      uVar4 = param_3 - 0x10;
      uVar7 = (uVar6 >> 0xb) * (uint)uVar3;
      if ((uVar4 >> 7 & 1) == 0) {
        param_1[0x103] = uVar3 + (short)(0x800 - uVar3 >> 5);
      }
      else {
        uVar11 = (ulong)uVar7;
        uVar7 = uVar6 - uVar7;
        *plVar10 = *plVar10 + uVar11;
        param_1[0x103] = uVar3 - (uVar3 >> 5);
      }
      if (uVar7 >> 0x18 == 0) {
        *param_2 = uVar7 << 8;
        FUN_00d9cea4(param_2);
        uVar7 = *param_2;
      }
      uVar8 = uVar4 >> 7 & 1 | 2;
      uVar3 = param_1[(ulong)uVar8 + 0x102];
      uVar6 = (uVar7 >> 0xb) * (uint)uVar3;
      if ((uVar4 >> 6 & 1) == 0) {
        param_1[(ulong)uVar8 + 0x102] = uVar3 + (short)(0x800 - uVar3 >> 5);
      }
      else {
        uVar11 = (ulong)uVar6;
        uVar6 = uVar7 - uVar6;
        *plVar10 = *plVar10 + uVar11;
        param_1[(ulong)uVar8 + 0x102] = uVar3 - (uVar3 >> 5);
      }
      if (uVar6 >> 0x18 == 0) {
        *param_2 = uVar6 << 8;
        FUN_00d9cea4(param_2);
        uVar6 = *param_2;
      }
      uVar7 = uVar4 >> 6 & 1 | uVar8 << 1;
      uVar3 = param_1[(ulong)uVar7 + 0x102];
      uVar8 = (uVar6 >> 0xb) * (uint)uVar3;
      if ((uVar4 >> 5 & 1) == 0) {
        param_1[(ulong)uVar7 + 0x102] = uVar3 + (short)(0x800 - uVar3 >> 5);
      }
      else {
        uVar11 = (ulong)uVar8;
        uVar8 = uVar6 - uVar8;
        *plVar10 = *plVar10 + uVar11;
        param_1[(ulong)uVar7 + 0x102] = uVar3 - (uVar3 >> 5);
      }
      if (uVar8 >> 0x18 == 0) {
        *param_2 = uVar8 << 8;
        FUN_00d9cea4(param_2);
        uVar8 = *param_2;
      }
      uVar7 = uVar4 >> 5 & 1 | uVar7 << 1;
      uVar3 = param_1[(ulong)uVar7 + 0x102];
      uVar6 = (uVar8 >> 0xb) * (uint)uVar3;
      if ((uVar4 >> 4 & 1) == 0) {
        param_1[(ulong)uVar7 + 0x102] = uVar3 + (short)(0x800 - uVar3 >> 5);
      }
      else {
        uVar11 = (ulong)uVar6;
        uVar6 = uVar8 - uVar6;
        *plVar10 = *plVar10 + uVar11;
        param_1[(ulong)uVar7 + 0x102] = uVar3 - (uVar3 >> 5);
      }
      if (uVar6 >> 0x18 == 0) {
        *param_2 = uVar6 << 8;
        FUN_00d9cea4(param_2);
        uVar6 = *param_2;
      }
      uVar7 = uVar4 >> 4 & 1 | uVar7 << 1;
      uVar3 = param_1[(ulong)uVar7 + 0x102];
      uVar8 = (uVar6 >> 0xb) * (uint)uVar3;
      if ((uVar4 >> 3 & 1) == 0) {
        param_1[(ulong)uVar7 + 0x102] = uVar3 + (short)(0x800 - uVar3 >> 5);
      }
      else {
        uVar11 = (ulong)uVar8;
        uVar8 = uVar6 - uVar8;
        *plVar10 = *plVar10 + uVar11;
        param_1[(ulong)uVar7 + 0x102] = uVar3 - (uVar3 >> 5);
      }
      if (uVar8 >> 0x18 == 0) {
        *param_2 = uVar8 << 8;
        FUN_00d9cea4(param_2);
        uVar8 = *param_2;
      }
      uVar7 = uVar4 >> 3 & 1 | uVar7 << 1;
      uVar3 = param_1[(ulong)uVar7 + 0x102];
      uVar6 = (uVar8 >> 0xb) * (uint)uVar3;
      if ((uVar4 >> 2 & 1) == 0) {
        param_1[(ulong)uVar7 + 0x102] = uVar3 + (short)(0x800 - uVar3 >> 5);
      }
      else {
        uVar11 = (ulong)uVar6;
        uVar6 = uVar8 - uVar6;
        *plVar10 = *plVar10 + uVar11;
        param_1[(ulong)uVar7 + 0x102] = uVar3 - (uVar3 >> 5);
      }
      if (uVar6 >> 0x18 == 0) {
        *param_2 = uVar6 << 8;
        FUN_00d9cea4(param_2);
        uVar6 = *param_2;
      }
      uVar7 = uVar4 >> 2 & 1 | uVar7 << 1;
      uVar3 = param_1[(ulong)uVar7 + 0x102];
      uVar8 = (uVar6 >> 0xb) * (uint)uVar3;
      if ((uVar4 >> 1 & 1) == 0) {
        param_1[(ulong)uVar7 + 0x102] = uVar3 + (short)(0x800 - uVar3 >> 5);
      }
      else {
        uVar11 = (ulong)uVar8;
        uVar8 = uVar6 - uVar8;
        *plVar10 = *plVar10 + uVar11;
        param_1[(ulong)uVar7 + 0x102] = uVar3 - (uVar3 >> 5);
      }
      if (uVar8 >> 0x18 == 0) {
        *param_2 = uVar8 << 8;
        FUN_00d9cea4(param_2);
        uVar8 = *param_2;
      }
      uVar7 = uVar4 >> 1 & 1 | uVar7 << 1;
      uVar3 = param_1[(ulong)uVar7 + 0x102];
      uVar6 = (uVar8 >> 0xb) * (uint)uVar3;
      if ((param_3 & 1) == 0) {
        *param_2 = uVar6;
        param_1[(ulong)uVar7 + 0x102] = uVar3 + (short)(0x800 - uVar3 >> 5);
      }
      else {
        uVar11 = (ulong)uVar6;
        uVar6 = uVar8 - uVar6;
        *(ulong *)(param_2 + 2) = *(long *)(param_2 + 2) + uVar11;
        *param_2 = uVar6;
        param_1[(ulong)uVar7 + 0x102] = uVar3 - (uVar3 >> 5);
      }
    }
  }
  if (uVar6 >> 0x18 == 0) {
    *param_2 = uVar6 << 8;
    FUN_00d9cea4(param_2);
  }
  if ((param_5 != 0) &&
     (iVar2 = *(int *)(param_1 + (ulong)param_4 * 2 + 0x2404),
     *(int *)(param_1 + (ulong)param_4 * 2 + 0x2404) = iVar2 + -1, iVar2 + -1 == 0)) {
    FUN_00d9bd4c(param_1,param_4,param_6);
    return;
  }
  return;
}


