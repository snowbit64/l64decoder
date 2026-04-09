// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: remove
// Entry Point: 00bb1338
// Size: 512 bytes
// Signature: undefined __thiscall remove(btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue> * this, TriHashKey * param_1)


/* btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,
   Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>::remove(Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey
   const&) */

void __thiscall
btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
::remove(btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
         *this,TriHashKey *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  iVar14 = *(int *)param_1;
  iVar16 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x20);
  iVar9 = *(int *)(param_1 + 0x28);
  iVar5 = *(int *)(this + 0x48);
  iVar6 = findIndex(this,param_1);
  if (iVar6 == -1) {
    return;
  }
  iVar9 = iVar16 + iVar14 + iVar2 + iVar3 + iVar4 + iVar9;
  uVar1 = iVar9 + (iVar9 * 0x8000 ^ 0xffffffffU);
  lVar12 = *(long *)(this + 0x30);
  uVar1 = (uVar1 ^ (int)uVar1 >> 10) * 9;
  uVar1 = uVar1 ^ (int)uVar1 >> 6;
  uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
  uVar10 = (long)(int)(uVar1 ^ (int)uVar1 >> 0x10) & (long)iVar5 - 1U;
  lVar7 = *(long *)(this + 0x10);
  iVar9 = *(int *)(lVar7 + uVar10 * 4);
  if (iVar9 == iVar6) {
LAB_00bb13fc:
    *(undefined4 *)(lVar7 + uVar10 * 4) = *(undefined4 *)(lVar12 + (long)iVar6 * 4);
  }
  else {
    do {
      iVar14 = iVar9;
      iVar9 = *(int *)(lVar12 + (long)iVar14 * 4);
    } while (iVar9 != iVar6);
    if (iVar14 == -1) goto LAB_00bb13fc;
    *(undefined4 *)(lVar12 + (long)iVar14 * 4) = *(undefined4 *)(lVar12 + (long)iVar6 * 4);
  }
  lVar12 = (long)*(int *)(this + 0x44) + -1;
  iVar9 = (int)lVar12;
  if (iVar9 == iVar6) goto LAB_00bb1510;
  piVar13 = (int *)(*(long *)(this + 0x70) + lVar12 * 0x30);
  iVar14 = piVar13[2] + *piVar13 + piVar13[4] + piVar13[6] + piVar13[8] + piVar13[10];
  uVar1 = iVar14 + (iVar14 * 0x8000 ^ 0xffffffffU);
  uVar1 = (uVar1 ^ (int)uVar1 >> 10) * 9;
  uVar1 = uVar1 ^ (int)uVar1 >> 6;
  uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
  uVar10 = (long)(int)(uVar1 ^ (int)uVar1 >> 0x10) & (long)*(int *)(this + 0x48) - 1U;
  lVar15 = *(long *)(this + 0x30);
  iVar14 = *(int *)(lVar7 + uVar10 * 4);
  if (iVar14 == iVar9) {
LAB_00bb14b8:
    *(undefined4 *)(lVar7 + uVar10 * 4) = *(undefined4 *)(lVar15 + lVar12 * 4);
  }
  else {
    do {
      iVar16 = iVar14;
      iVar14 = *(int *)(lVar15 + (long)iVar16 * 4);
    } while (iVar14 != iVar9);
    if (iVar16 == -1) goto LAB_00bb14b8;
    *(undefined4 *)(lVar15 + (long)iVar16 * 4) = *(undefined4 *)(lVar15 + lVar12 * 4);
  }
  puVar8 = (undefined8 *)(*(long *)(this + 0x50) + lVar12 * 0x10);
  uVar17 = *puVar8;
  puVar11 = (undefined8 *)(*(long *)(this + 0x50) + (long)iVar6 * 0x10);
  puVar11[1] = puVar8[1];
  *puVar11 = uVar17;
  puVar11 = (undefined8 *)(*(long *)(this + 0x70) + lVar12 * 0x30);
  puVar8 = (undefined8 *)(*(long *)(this + 0x70) + (long)iVar6 * 0x30);
  uVar19 = puVar11[2];
  uVar18 = puVar11[5];
  uVar17 = puVar11[4];
  uVar21 = puVar11[1];
  uVar20 = *puVar11;
  puVar8[3] = puVar11[3];
  puVar8[2] = uVar19;
  puVar8[5] = uVar18;
  puVar8[4] = uVar17;
  puVar8[1] = uVar21;
  *puVar8 = uVar20;
  lVar7 = *(long *)(this + 0x10);
  *(undefined4 *)(*(long *)(this + 0x30) + (long)iVar6 * 4) = *(undefined4 *)(lVar7 + uVar10 * 4);
  *(int *)(lVar7 + uVar10 * 4) = iVar6;
  iVar6 = *(int *)(this + 0x44) + -1;
LAB_00bb1510:
  *(int *)(this + 0x44) = iVar6;
  *(int *)(this + 100) = *(int *)(this + 100) + -1;
  return;
}


