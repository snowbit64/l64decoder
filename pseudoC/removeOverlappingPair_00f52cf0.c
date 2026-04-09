// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeOverlappingPair
// Entry Point: 00f52cf0
// Size: 396 bytes
// Signature: undefined __thiscall removeOverlappingPair(btHashedSimplePairCache * this, int param_1, int param_2)


/* btHashedSimplePairCache::removeOverlappingPair(int, int) */

undefined8 __thiscall
btHashedSimplePairCache::removeOverlappingPair
          (btHashedSimplePairCache *this,int param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  int *piVar15;
  undefined8 uVar16;
  
  uVar3 = param_1 | param_2 << 0x10;
  uVar3 = uVar3 + (uVar3 << 0xf ^ 0xffffffff);
  uVar3 = (uVar3 ^ (int)uVar3 >> 10) * 9;
  lVar10 = *(long *)(this + 0x38);
  uVar3 = uVar3 ^ (int)uVar3 >> 6;
  uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff);
  gRemoveSimplePairs = gRemoveSimplePairs + 1;
  piVar1 = (int *)(lVar10 + (long)(int)(*(int *)(this + 0x10) - 1U & (uVar3 ^ (int)uVar3 >> 0x10)) *
                            4);
  iVar12 = *piVar1;
  if (iVar12 != -1) {
    lVar8 = *(long *)(this + 0x18);
    lVar13 = *(long *)(this + 0x58);
    iVar7 = iVar12;
    do {
      piVar15 = (int *)(lVar8 + (long)iVar7 * 0x10);
      lVar9 = (long)iVar7;
      if (*piVar15 == param_1 && piVar15[1] == param_2) {
        if (iVar12 != iVar7) goto LAB_00f52d90;
        goto LAB_00f52dac;
      }
      iVar7 = *(int *)(lVar13 + lVar9 * 4);
    } while (iVar7 != -1);
  }
  return 0;
LAB_00f52d90:
  do {
    iVar14 = iVar12;
    piVar15 = (int *)(lVar13 + (long)iVar14 * 4);
    iVar12 = *piVar15;
  } while (iVar12 != iVar7);
  if (iVar14 == -1) {
LAB_00f52dac:
    piVar15 = piVar1;
  }
  uVar6 = *(undefined8 *)(lVar8 + lVar9 * 0x10 + 8);
  *piVar15 = *(int *)(lVar13 + lVar9 * 4);
  lVar13 = (long)*(int *)(this + 0xc) + -1;
  iVar12 = (int)lVar13;
  if (iVar12 == iVar7) goto LAB_00f52e70;
  puVar2 = (undefined8 *)(lVar8 + lVar13 * 0x10);
  uVar3 = *(uint *)puVar2 | *(uint *)((long)puVar2 + 4) << 0x10;
  uVar3 = uVar3 + (uVar3 << 0xf ^ 0xffffffff);
  uVar3 = (uVar3 ^ (int)uVar3 >> 10) * 9;
  uVar3 = uVar3 ^ (int)uVar3 >> 6;
  uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff);
  uVar3 = (uVar3 ^ (int)uVar3 >> 0x10) & *(int *)(this + 0x10) - 1U;
  piVar1 = (int *)(lVar10 + (long)(int)uVar3 * 4);
  iVar14 = *piVar1;
  if (iVar14 == iVar12) {
LAB_00f52e3c:
    piVar15 = piVar1;
  }
  else {
    do {
      iVar5 = iVar14;
      piVar15 = (int *)(*(long *)(this + 0x58) + (long)iVar5 * 4);
      iVar14 = *piVar15;
    } while (iVar14 != iVar12);
    if (iVar5 == -1) goto LAB_00f52e3c;
  }
  lVar11 = (long)(int)uVar3 * 4;
  *piVar15 = *(int *)(*(long *)(this + 0x58) + lVar13 * 4);
  uVar16 = *puVar2;
  puVar4 = (undefined8 *)(lVar8 + lVar9 * 0x10);
  puVar4[1] = puVar2[1];
  *puVar4 = uVar16;
  lVar10 = *(long *)(this + 0x38);
  *(undefined4 *)(*(long *)(this + 0x58) + lVar9 * 4) = *(undefined4 *)(lVar10 + lVar11);
  *(int *)(lVar10 + lVar11) = iVar7;
  iVar7 = *(int *)(this + 0xc) + -1;
LAB_00f52e70:
  *(int *)(this + 0xc) = iVar7;
  return uVar6;
}


