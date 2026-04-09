// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildTree
// Entry Point: 00f5b348
// Size: 788 bytes
// Signature: undefined __thiscall buildTree(btQuantizedBvh * this, int param_1, int param_2)


/* btQuantizedBvh::buildTree(int, int) */

void __thiscall btQuantizedBvh::buildTree(btQuantizedBvh *this,int param_1,int param_2)

{
  ushort *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  btQuantizedBvh bVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_78;
  ulong uStack_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  iVar4 = *(int *)(this + 0x3c);
  if (param_2 - param_1 == 1) {
    if (this[0x40] == (btQuantizedBvh)0x0) {
      puVar5 = (undefined8 *)(*(long *)(this + 0x58) + (long)param_1 * 0x40);
      puVar6 = (undefined8 *)(*(long *)(this + 0x78) + (long)iVar4 * 0x40);
      uVar16 = puVar5[4];
      uVar14 = puVar5[7];
      uVar18 = puVar5[6];
      uVar22 = puVar5[1];
      uVar21 = *puVar5;
      uVar19 = puVar5[3];
      uVar17 = puVar5[2];
      puVar6[5] = puVar5[5];
      puVar6[4] = uVar16;
      puVar6[7] = uVar14;
      puVar6[6] = uVar18;
      puVar6[1] = uVar22;
      *puVar6 = uVar21;
      puVar6[3] = uVar19;
      puVar6[2] = uVar17;
    }
    else {
      puVar5 = (undefined8 *)(*(long *)(this + 0x98) + (long)param_1 * 0x10);
      uVar18 = *puVar5;
      puVar6 = (undefined8 *)(*(long *)(this + 0xb8) + (long)iVar4 * 0x10);
      puVar6[1] = puVar5[1];
      *puVar6 = uVar18;
    }
    *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + 1;
    goto LAB_00f5b628;
  }
  iVar8 = calcSplittingAxis(this,param_1,param_2);
  iVar8 = sortAndCalcSplittingIndex(this,param_1,param_2,iVar8);
  lVar11 = (long)*(int *)(this + 0x3c);
  if (this[0x40] == (btQuantizedBvh)0x0) {
    uVar18 = *(undefined8 *)(this + 0x18);
    puVar5 = (undefined8 *)(*(long *)(this + 0x78) + lVar11 * 0x40);
    puVar5[1] = *(undefined8 *)(this + 0x20);
    *puVar5 = uVar18;
  }
  else {
    fVar15 = *(float *)(this + 0x1c);
    fVar20 = *(float *)(this + 0xc);
    fVar23 = *(float *)(this + 0x20);
    fVar25 = *(float *)(this + 0x10);
    fVar26 = *(float *)(this + 0x30);
    fVar24 = *(float *)(this + 0x2c);
    puVar1 = (ushort *)(*(long *)(this + 0xb8) + lVar11 * 0x10);
    *puVar1 = (ushort)(int)(*(float *)(this + 0x28) *
                           (*(float *)(this + 0x18) - *(float *)(this + 8))) & 0xfffe;
    puVar1[1] = (ushort)(int)(fVar24 * (fVar15 - fVar20)) & 0xfffe;
    puVar1[2] = (ushort)(int)(fVar26 * (fVar23 - fVar25)) & 0xfffe;
  }
  if (this[0x40] == (btQuantizedBvh)0x0) {
    uVar18 = *(undefined8 *)(this + 8);
    lVar2 = *(long *)(this + 0x78) + (long)*(int *)(this + 0x3c) * 0x40;
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(lVar2 + 0x10) = uVar18;
    iVar10 = param_2 - param_1;
    if (iVar10 != 0 && param_1 <= param_2) goto LAB_00f5b4cc;
  }
  else {
    lVar2 = *(long *)(this + 0xb8) + (long)*(int *)(this + 0x3c) * 0x10;
    *(undefined4 *)(lVar2 + 6) = 0x10001;
    *(undefined2 *)(lVar2 + 10) = 1;
    iVar10 = param_2 - param_1;
    if (iVar10 != 0 && param_1 <= param_2) {
LAB_00f5b4cc:
      uVar12 = -(ulong)((uint)param_1 >> 0x1f) & 0xffffffc000000000 | (ulong)(uint)param_1 << 6;
      uVar13 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff000000000 | (ulong)(uint)param_1 << 4;
      do {
        if (this[0x40] == (btQuantizedBvh)0x0) {
          puVar5 = (undefined8 *)(*(long *)(this + 0x58) + uVar12);
          uStack_88 = puVar5[1];
          local_90 = *puVar5;
          local_78 = puVar5[2];
          uStack_70 = puVar5[3];
        }
        else {
          puVar1 = (ushort *)(*(long *)(this + 0x98) + uVar13);
          fVar15 = (float)NEON_ucvtf((uint)puVar1[2]);
          uVar18 = NEON_ucvtf((ulong)CONCAT24(puVar1[1],(uint)*puVar1),4);
          fVar20 = (float)*(undefined8 *)(this + 0x28);
          fVar23 = (float)((ulong)*(undefined8 *)(this + 0x28) >> 0x20);
          uStack_88 = (ulong)(uint)(*(float *)(this + 0x10) + fVar15 / *(float *)(this + 0x30));
          fVar24 = (float)*(undefined8 *)(this + 8);
          fVar25 = (float)((ulong)*(undefined8 *)(this + 8) >> 0x20);
          local_90 = CONCAT44(fVar25 + (float)((ulong)uVar18 >> 0x20) / fVar23,
                              fVar24 + (float)uVar18 / fVar20);
          fVar15 = (float)NEON_ucvtf((uint)puVar1[5]);
          uVar18 = NEON_ucvtf((ulong)CONCAT24(puVar1[4],(uint)puVar1[3]),4);
          uStack_70 = (ulong)(uint)(*(float *)(this + 0x10) + fVar15 / *(float *)(this + 0x30));
          local_78 = CONCAT44(fVar25 + (float)((ulong)uVar18 >> 0x20) / fVar23,
                              fVar24 + (float)uVar18 / fVar20);
        }
        mergeInternalNodeAabb
                  (this,*(int *)(this + 0x3c),(btVector3 *)&local_90,(btVector3 *)&local_78);
        iVar10 = iVar10 + -1;
        uVar12 = uVar12 + 0x40;
        uVar13 = uVar13 + 0x10;
      } while (iVar10 != 0);
    }
  }
  iVar10 = *(int *)(this + 0x3c);
  *(int *)(this + 0x3c) = iVar10 + 1;
  buildTree(this,param_1,iVar8);
  iVar3 = *(int *)(this + 0x3c);
  buildTree(this,iVar8,param_2);
  bVar9 = this[0x40];
  iVar4 = *(int *)(this + 0x3c) - iVar4;
  if ((bVar9 != (btQuantizedBvh)0x0) && (0x80 < iVar4)) {
    updateSubtreeHeaders(this,iVar10 + 1,iVar3);
    bVar9 = this[0x40];
  }
  if (bVar9 == (btQuantizedBvh)0x0) {
    *(int *)(*(long *)(this + 0x78) + lVar11 * 0x40 + 0x20) = iVar4;
  }
  else {
    *(int *)(*(long *)(this + 0xb8) + lVar11 * 0x10 + 0xc) = -iVar4;
  }
LAB_00f5b628:
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


