// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dc8e74
// Entry Point: 00dc8e74
// Size: 668 bytes
// Signature: undefined FUN_00dc8e74(void)


long FUN_00dc8e74(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar2 = *(uint *)(param_1 + 0x234);
  uVar6 = (ulong)uVar2;
  if (*(ulong *)(param_1 + 0x240) >> 0xf != 0 || uVar2 >> 0xf != 0) {
    return 0xffffffff;
  }
  if (*(char *)(param_1 + 0x29c) == '\0') {
    return uVar6 + uVar6 * *(ulong *)(param_1 + 0x240);
  }
  uVar3 = *(uint *)(param_1 + 0x230);
  bVar4 = *(byte *)(param_1 + 0x2a2);
  uVar7 = (ulong)bVar4;
  uVar1 = uVar3 + 7;
  if (bVar4 < 8) {
    if (uVar1 < 8) {
      lVar5 = 0;
      if (7 < uVar3 + 3) goto LAB_00dc8f10;
LAB_00dc8fcc:
      if (3 < uVar3 + 3) goto LAB_00dc8fd8;
    }
    else {
      uVar8 = uVar6 + 7 >> 3;
      lVar5 = uVar8 + uVar8 * ((uVar1 >> 3) * uVar7 + 7 >> 3);
      if (uVar3 + 3 < 8) goto LAB_00dc8fcc;
LAB_00dc8f10:
      uVar6 = uVar6 + 7 >> 3;
      lVar5 = uVar6 + uVar6 * ((uVar3 + 3 >> 3) * uVar7 + 7 >> 3) + lVar5;
LAB_00dc8fd8:
      uVar6 = (ulong)(uVar2 + 3 >> 3);
      lVar5 = uVar6 + uVar6 * ((uVar3 + 3 >> 2) * uVar7 + 7 >> 3) + lVar5;
    }
    if (uVar3 + 1 < 4) {
      if (uVar3 + 1 < 2) goto joined_r0x00dc90d0;
    }
    else {
      uVar6 = (ulong)(uVar2 + 3 >> 2);
      lVar5 = uVar6 + uVar6 * ((uVar3 + 1 >> 2) * uVar7 + 7 >> 3) + lVar5;
    }
    uVar6 = (ulong)(uVar2 + 1 >> 2);
    lVar5 = uVar6 + uVar6 * ((uVar3 + 1 >> 1) * uVar7 + 7 >> 3) + lVar5;
joined_r0x00dc90d0:
    if (uVar3 < 2) {
      if (uVar3 == 0) {
        return lVar5;
      }
    }
    else {
      uVar6 = (ulong)(uVar2 + 1 >> 1);
      lVar5 = uVar6 + uVar6 * ((uVar3 >> 1) * uVar7 + 7 >> 3) + lVar5;
    }
    return (ulong)(uVar2 >> 1) + (ulong)(uVar2 >> 1) * (uVar3 * uVar7 + 7 >> 3) + lVar5;
  }
  uVar7 = (ulong)(bVar4 >> 3);
  if (uVar1 < 8) {
    lVar5 = 0;
    if (7 < uVar3 + 3) goto LAB_00dc8ed0;
LAB_00dc8f58:
    if (3 < uVar3 + 3) goto LAB_00dc8f64;
  }
  else {
    uVar8 = uVar6 + 7 >> 3;
    lVar5 = uVar8 + uVar8 * (uVar1 >> 3) * uVar7;
    if (uVar3 + 3 < 8) goto LAB_00dc8f58;
LAB_00dc8ed0:
    uVar8 = uVar6 + 7 >> 3;
    lVar5 = uVar8 + uVar8 * (uVar3 + 3 >> 3) * uVar7 + lVar5;
LAB_00dc8f64:
    uVar8 = (ulong)(uVar2 + 3 >> 3);
    lVar5 = uVar8 + uVar8 * (uVar3 + 3 >> 2) * uVar7 + lVar5;
  }
  if (uVar3 + 1 < 4) {
    if (uVar3 + 1 < 2) goto joined_r0x00dc9058;
  }
  else {
    uVar8 = uVar6 + 3 >> 2;
    lVar5 = uVar8 + uVar8 * (uVar3 + 1 >> 2) * uVar7 + lVar5;
  }
  uVar8 = (ulong)(uVar2 + 1 >> 2);
  lVar5 = uVar8 + uVar8 * (uVar3 + 1 >> 1) * uVar7 + lVar5;
joined_r0x00dc9058:
  if (uVar3 < 2) {
    if (uVar3 == 0) {
      return lVar5;
    }
  }
  else {
    uVar6 = uVar6 + 1 >> 1;
    lVar5 = uVar6 + uVar6 * (uVar3 >> 1) * uVar7 + lVar5;
  }
  return (ulong)(uVar2 >> 1) + (ulong)(uVar2 >> 1) * uVar3 * uVar7 + lVar5;
}


