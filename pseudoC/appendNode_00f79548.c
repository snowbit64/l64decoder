// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: appendNode
// Entry Point: 00f79548
// Size: 928 bytes
// Signature: undefined __thiscall appendNode(btSoftBody * this, btVector3 * param_1, float param_2)


/* btSoftBody::appendNode(btVector3 const&, float) */

void __thiscall btSoftBody::appendNode(btSoftBody *this,btVector3 *param_1,float param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (*(int *)(this + 0x378) == *(int *)(this + 0x374)) {
    pointersToIndices();
    uVar1 = (long)*(int *)(this + 0x374) << 1 | 1;
    iVar8 = (int)uVar1;
    if (*(int *)(this + 0x378) < iVar8) {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      lVar2 = (*(code *)PTR_FUN_01048e38)(uVar1 * 0x78,0x10);
      uVar3 = *(uint *)(this + 0x374);
      if (0 < (int)uVar3) {
        lVar5 = 0;
        do {
          puVar4 = (undefined8 *)(lVar2 + lVar5);
          puVar7 = (undefined8 *)(*(long *)(this + 0x380) + lVar5);
          lVar5 = lVar5 + 0x78;
          uVar12 = puVar7[4];
          uVar11 = puVar7[7];
          uVar6 = puVar7[6];
          uVar16 = puVar7[1];
          uVar15 = *puVar7;
          uVar14 = puVar7[3];
          uVar13 = puVar7[2];
          puVar4[5] = puVar7[5];
          puVar4[4] = uVar12;
          puVar4[7] = uVar11;
          puVar4[6] = uVar6;
          puVar4[1] = uVar16;
          *puVar4 = uVar15;
          puVar4[3] = uVar14;
          puVar4[2] = uVar13;
          uVar13 = puVar7[10];
          uVar12 = puVar7[0xd];
          uVar11 = puVar7[0xc];
          uVar6 = puVar7[0xe];
          uVar15 = puVar7[9];
          uVar14 = puVar7[8];
          puVar4[0xb] = puVar7[0xb];
          puVar4[10] = uVar13;
          puVar4[0xd] = uVar12;
          puVar4[0xc] = uVar11;
          puVar4[0xe] = uVar6;
          puVar4[9] = uVar15;
          puVar4[8] = uVar14;
        } while ((ulong)uVar3 * 0x78 - lVar5 != 0);
      }
      if ((*(long *)(this + 0x380) != 0) && (this[0x388] != (btSoftBody)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(long *)(this + 0x380) = lVar2;
      *(int *)(this + 0x378) = iVar8;
      this[0x388] = (btSoftBody)0x1;
    }
    indicesToPointers(this,(int *)0x0);
  }
  fVar9 = (float)(**(code **)(**(long **)(this + 200) + 0x60))();
  uVar3 = *(uint *)(this + 0x374);
  if (uVar3 == *(uint *)(this + 0x378)) {
    iVar8 = uVar3 << 1;
    if (uVar3 == 0) {
      iVar8 = 1;
    }
    if ((int)uVar3 < iVar8) {
      if (iVar8 == 0) {
        lVar2 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar2 = (*(code *)PTR_FUN_01048e38)((long)iVar8 * 0x78,0x10);
        uVar3 = *(uint *)(this + 0x374);
      }
      if (0 < (int)uVar3) {
        lVar5 = 0;
        do {
          puVar4 = (undefined8 *)(lVar2 + lVar5);
          puVar7 = (undefined8 *)(*(long *)(this + 0x380) + lVar5);
          lVar5 = lVar5 + 0x78;
          uVar12 = puVar7[4];
          uVar11 = puVar7[7];
          uVar6 = puVar7[6];
          uVar16 = puVar7[1];
          uVar15 = *puVar7;
          uVar14 = puVar7[3];
          uVar13 = puVar7[2];
          puVar4[5] = puVar7[5];
          puVar4[4] = uVar12;
          puVar4[7] = uVar11;
          puVar4[6] = uVar6;
          puVar4[1] = uVar16;
          *puVar4 = uVar15;
          puVar4[3] = uVar14;
          puVar4[2] = uVar13;
          uVar13 = puVar7[10];
          uVar12 = puVar7[0xd];
          uVar11 = puVar7[0xc];
          uVar6 = puVar7[0xe];
          uVar15 = puVar7[9];
          uVar14 = puVar7[8];
          puVar4[0xb] = puVar7[0xb];
          puVar4[10] = uVar13;
          puVar4[0xd] = uVar12;
          puVar4[0xc] = uVar11;
          puVar4[0xe] = uVar6;
          puVar4[9] = uVar15;
          puVar4[8] = uVar14;
        } while ((ulong)uVar3 * 0x78 - lVar5 != 0);
      }
      if ((*(long *)(this + 0x380) != 0) && (this[0x388] != (btSoftBody)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      uVar3 = *(uint *)(this + 0x374);
      *(long *)(this + 0x380) = lVar2;
      *(int *)(this + 0x378) = iVar8;
      this[0x388] = (btSoftBody)0x1;
    }
  }
  puVar4 = (undefined8 *)(*(long *)(this + 0x380) + (long)(int)uVar3 * 0x78);
  fVar10 = 1.0 / param_2;
  puVar4[0xe] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  iVar8 = *(int *)(this + 0x374);
  lVar2 = *(long *)(this + 0x380);
  puVar4 = (undefined8 *)(lVar2 + (long)iVar8 * 0x78);
  if (param_2 <= 0.0) {
    fVar10 = 0.0;
  }
  *(int *)(this + 0x374) = iVar8 + 1;
  puVar4[0xe] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  uVar6 = *(undefined8 *)param_1;
  puVar4[3] = *(undefined8 *)(param_1 + 8);
  puVar4[2] = uVar6;
  uVar11 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)param_1;
  fVar17 = *(float *)(puVar4 + 2);
  fVar18 = *(float *)((long)puVar4 + 0x14);
  fVar19 = *(float *)(puVar4 + 3);
  *(float *)(puVar4 + 0xc) = fVar10;
  puVar4[5] = uVar11;
  puVar4[4] = uVar6;
  puVar7 = *(undefined8 **)(this + 0x4c0);
  puVar4[1] = **(undefined8 **)(this + 0x480);
  if (puVar7 == (undefined8 *)0x0) {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    puVar7 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x38,0x10);
    puVar7[6] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
  }
  else {
    *(undefined8 *)(this + 0x4c0) = 0;
  }
  puVar7[5] = puVar4;
  puVar7[6] = 0;
  *(undefined4 *)((long)puVar7 + 0xc) = 0;
  *(float *)puVar7 = fVar17 - fVar9;
  *(float *)((long)puVar7 + 4) = fVar18 - fVar9;
  *(float *)(puVar7 + 1) = fVar19 - fVar9;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  puVar7[4] = 0;
  *(float *)(puVar7 + 2) = fVar17 + fVar9;
  *(float *)((long)puVar7 + 0x14) = fVar18 + fVar9;
  *(float *)(puVar7 + 3) = fVar19 + fVar9;
  FUN_00f42680(this + 0x4b8,*(undefined8 *)(this + 0x4b8),puVar7);
  *(int *)(this + 0x4cc) = *(int *)(this + 0x4cc) + 1;
  *(undefined8 **)(lVar2 + (long)iVar8 * 0x78 + 0x68) = puVar7;
  return;
}


