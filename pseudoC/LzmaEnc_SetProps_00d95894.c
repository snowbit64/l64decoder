// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaEnc_SetProps
// Entry Point: 00d95894
// Size: 400 bytes
// Signature: undefined LzmaEnc_SetProps(void)


undefined4 LzmaEnc_SetProps(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar9 = param_2[1];
  uVar5 = 5;
  if (-1 < (int)*param_2) {
    uVar5 = *param_2;
  }
  uVar8 = param_2[9];
  if (uVar9 == 0) {
    if (uVar5 < 6) {
      uVar9 = 1 << (ulong)(uVar5 * 2 + 0xe & 0x1f);
    }
    else {
      uVar9 = 0x2000000;
      if (uVar5 != 6) {
        uVar9 = 0x4000000;
      }
    }
  }
  uVar2 = 3;
  if (-1 < (int)param_2[2]) {
    uVar2 = param_2[2];
  }
  uVar3 = 2;
  if (-1 < (int)param_2[4]) {
    uVar3 = param_2[4];
  }
  uVar4 = (uint)(4 < uVar5);
  if (-1 < (int)param_2[5]) {
    uVar4 = param_2[5];
  }
  uVar11 = 0x20;
  if (6 < uVar5) {
    uVar11 = 0x40;
  }
  if (-1 < (int)param_2[6]) {
    uVar11 = param_2[6];
  }
  uVar5 = (uint)(uVar4 != 0);
  if (-1 < (int)param_2[7]) {
    uVar5 = param_2[7];
  }
  uVar10 = 4;
  if (-1 < (int)param_2[8]) {
    uVar10 = param_2[8];
  }
  if (uVar8 == 0) {
    uVar8 = (uVar11 >> 1) + 0x10 >> (uVar5 == 0);
  }
  uVar7 = 5;
  if ((((uVar2 < 9) && (uVar1 = param_2[3] & ((int)param_2[3] >> 0x1f ^ 0xffffffffU), uVar1 < 5)) &&
      (uVar3 < 5)) && ((uVar9 < 0x80000001 && (uVar9 < 0x40000001)))) {
    if (uVar11 < 6) {
      uVar11 = 5;
    }
    if (0x110 < uVar11) {
      uVar11 = 0x111;
    }
    uVar6 = param_2[10];
    *(uint *)(param_1 + 0x3d358) = uVar9;
    *(uint *)(param_1 + 0x3d35c) = uVar8;
    *(uint *)(param_1 + 0xa8) = uVar5;
    *(uint *)(param_1 + 0x32f70) = uVar11;
    *(uint *)(param_1 + 0x33bd4) = uVar2;
    *(uint *)(param_1 + 0x33bd8) = uVar1;
    *(uint *)(param_1 + 0x33bdc) = uVar3;
    *(uint *)(param_1 + 0x3d2e8) = (uint)(uVar4 == 0);
    if (uVar5 == 0) {
      uVar10 = 4;
    }
    else if (uVar10 < 2) {
      uVar10 = 2;
    }
    else if (3 < uVar10) {
      uVar10 = 4;
    }
    uVar7 = 0;
    *(uint *)(param_1 + 0x98) = uVar10;
    *(uint *)(param_1 + 0x74) = uVar8;
    *(uint *)(param_1 + 0x3d338) = uVar6;
  }
  return uVar7;
}


