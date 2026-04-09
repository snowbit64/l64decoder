// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MyRaycastMesh<float>
// Entry Point: 00ec52a0
// Size: 756 bytes
// Signature: undefined __thiscall MyRaycastMesh<float>(MyRaycastMesh * this, uint param_1, float * param_2, uint param_3, uint * param_4)


/* RAYCAST_MESH::MyRaycastMesh::MyRaycastMesh<float>(unsigned int, float const*, unsigned int,
   unsigned int const*) */

void __thiscall
RAYCAST_MESH::MyRaycastMesh::MyRaycastMesh<float>
          (MyRaycastMesh *this,uint param_1,float *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  bool bVar7;
  bool bVar8;
  double *pdVar9;
  uint *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  float *pfVar15;
  uint *puVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar25;
  undefined8 uVar24;
  float fVar26;
  float fVar28;
  undefined8 uVar27;
  float fVar29;
  float fVar30;
  float fVar32;
  undefined8 uVar31;
  float fVar33;
  float fVar35;
  undefined8 uVar34;
  
  *(uint *)(this + 0x10) = param_1;
  *(undefined ***)this = &PTR_raycast_01014718;
  *(undefined8 *)(this + 8) = 0;
  pdVar9 = (double *)operator_new__((ulong)(param_1 * 3) << 3);
  *(double **)(this + 0x18) = pdVar9;
  if (param_1 != 0) {
    uVar12 = (ulong)param_1;
    if (param_1 < 4) {
LAB_00ec5304:
      uVar17 = 0;
      pfVar15 = param_2;
    }
    else {
      uVar17 = uVar12 - 1;
      uVar14 = (uVar17 & 0xffffffff) + (uVar17 & 0xffffffff) * 2;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar17;
      bVar7 = (uVar14 & 0xffffffff00000000) != 0;
      bVar8 = SUB168(auVar5 * ZEXT816(0x18),8) != 0;
      uVar18 = (uint)uVar14;
      if ((((((uVar18 == 0xffffffff) || (bVar7)) || (uVar17 >> 0x20 != 0)) ||
           ((0xfffffffd < uVar18 || (bVar7)))) ||
          (((pdVar9 + 1 + uVar17 * 3 < pdVar9 + 1 ||
            ((bVar8 || (pdVar9 + 2 + uVar17 * 3 < pdVar9 + 2)))) || (bVar8)))) ||
         ((pdVar9 + uVar17 * 3 < pdVar9 || (bVar8)))) goto LAB_00ec5304;
      uVar17 = uVar12 & 0xfffffffc;
      uVar14 = 0;
      pfVar15 = param_2 + uVar17 * 3;
      do {
        fVar20 = *param_2;
        fVar23 = param_2[1];
        fVar30 = param_2[2];
        fVar22 = param_2[3];
        fVar25 = param_2[4];
        fVar32 = param_2[5];
        fVar29 = param_2[6];
        fVar26 = param_2[7];
        fVar33 = param_2[8];
        fVar21 = param_2[9];
        fVar28 = param_2[10];
        fVar35 = param_2[0xb];
        param_2 = param_2 + 0xc;
        uVar19 = uVar14 & 0xfffffffc;
        uVar14 = uVar14 + 0xc;
        pdVar9[uVar19] = (double)fVar20;
        pdVar9[uVar19 + 1] = (double)fVar23;
        pdVar9[uVar19 + 2] = (double)fVar30;
        pdVar9[uVar19 + 3] = (double)fVar22;
        pdVar9[uVar19 + 4] = (double)fVar25;
        pdVar9[uVar19 + 5] = (double)fVar32;
        pdVar9[uVar19 + 6] = (double)fVar29;
        pdVar9[uVar19 + 7] = (double)fVar26;
        pdVar9[uVar19 + 8] = (double)fVar33;
        pdVar9[uVar19 + 9] = (double)fVar21;
        pdVar9[uVar19 + 10] = (double)fVar28;
        pdVar9[uVar19 + 0xb] = (double)fVar35;
      } while (uVar17 * 3 != uVar14);
      if (uVar17 == uVar12) goto LAB_00ec5348;
    }
    uVar18 = (int)uVar17 * 3;
    lVar13 = uVar12 - uVar17;
    do {
      fVar20 = *pfVar15;
      fVar22 = pfVar15[1];
      fVar29 = pfVar15[2];
      uVar1 = uVar18 + 1;
      uVar2 = uVar18 + 2;
      lVar13 = lVar13 + -1;
      pfVar15 = pfVar15 + 3;
      pdVar9[uVar18] = (double)fVar20;
      uVar18 = uVar18 + 3;
      pdVar9[uVar1] = (double)fVar22;
      pdVar9[uVar2] = (double)fVar29;
    } while (lVar13 != 0);
  }
LAB_00ec5348:
  *(uint *)(this + 0x20) = param_3;
  puVar10 = (uint *)operator_new__((ulong)(param_3 * 3) << 2);
  *(uint **)(this + 0x28) = puVar10;
  if (param_3 == 0) goto LAB_00ec53ac;
  uVar12 = (ulong)param_3;
  if (param_3 < 4) {
LAB_00ec5374:
    uVar14 = 0;
    puVar16 = param_4;
  }
  else {
    uVar17 = uVar12 - 1;
    uVar14 = (uVar17 & 0xffffffff) + (uVar17 & 0xffffffff) * 2;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar17;
    bVar7 = (uVar14 & 0xffffffff00000000) != 0;
    bVar8 = SUB168(auVar6 * ZEXT816(0xc),8) != 0;
    uVar18 = (uint)uVar14;
    if (((((uVar18 == 0xffffffff) || (bVar7)) || (uVar17 >> 0x20 != 0)) ||
        (((0xfffffffd < uVar18 || (bVar7)) ||
         ((puVar10 + 1 + uVar17 * 3 < puVar10 + 1 ||
          ((bVar8 || (puVar10 + 2 + uVar17 * 3 < puVar10 + 2)))))))) ||
       ((bVar8 || ((puVar10 + uVar17 * 3 < puVar10 || (bVar8)))))) goto LAB_00ec5374;
    uVar14 = uVar12 & 0xfffffffc;
    uVar17 = 0;
    puVar16 = param_4 + uVar14 * 3;
    do {
      uVar27 = *(undefined8 *)((long)param_4 + 0x18);
      uVar24 = *(undefined8 *)((long)param_4 + 0x10);
      uVar11 = *(undefined8 *)((long)param_4 + 0x20);
      uVar19 = uVar17 & 0xfffffffc;
      uVar17 = uVar17 + 0xc;
      uVar34 = *(undefined8 *)((long)param_4 + 8);
      uVar31 = *(undefined8 *)param_4;
      *(undefined8 *)(puVar10 + uVar19 + 10) = *(undefined8 *)((long)param_4 + 0x28);
      *(undefined8 *)(puVar10 + uVar19 + 8) = uVar11;
      *(undefined8 *)(puVar10 + uVar19 + 6) = uVar27;
      *(undefined8 *)(puVar10 + uVar19 + 4) = uVar24;
      *(undefined8 *)(puVar10 + uVar19 + 2) = uVar34;
      *(undefined8 *)(puVar10 + uVar19) = uVar31;
      param_4 = (uint *)((long)param_4 + 0x30);
    } while (uVar14 * 3 != uVar17);
    if (uVar14 == uVar12) goto LAB_00ec53ac;
  }
  uVar18 = (int)uVar14 * 3;
  do {
    uVar3 = puVar16[1];
    uVar1 = uVar18 + 1;
    uVar2 = uVar18 + 2;
    uVar4 = puVar16[2];
    uVar14 = uVar14 + 1;
    puVar10[uVar18] = *puVar16;
    uVar18 = uVar18 + 3;
    puVar16 = puVar16 + 3;
    puVar10[uVar1] = uVar3;
    puVar10[uVar2] = uVar4;
  } while (uVar14 < uVar12);
LAB_00ec53ac:
  uVar11 = aabbtree::AABBTree::create(pdVar9,param_3,puVar10,param_3);
  *(undefined8 *)(this + 8) = uVar11;
  return;
}


