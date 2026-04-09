// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MyRaycastMesh<double>
// Entry Point: 00ec4f74
// Size: 720 bytes
// Signature: undefined __thiscall MyRaycastMesh<double>(MyRaycastMesh * this, uint param_1, double * param_2, uint param_3, uint * param_4)


/* RAYCAST_MESH::MyRaycastMesh::MyRaycastMesh<double>(unsigned int, double const*, unsigned int,
   unsigned int const*) */

void __thiscall
RAYCAST_MESH::MyRaycastMesh::MyRaycastMesh<double>
          (MyRaycastMesh *this,uint param_1,double *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  double *pdVar3;
  uint uVar4;
  uint uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  bool bVar8;
  bool bVar9;
  double *pdVar10;
  uint *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  double *pdVar16;
  uint *puVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  *(uint *)(this + 0x10) = param_1;
  *(undefined ***)this = &PTR_raycast_01014718;
  *(undefined8 *)(this + 8) = 0;
  pdVar10 = (double *)operator_new__((ulong)(param_1 * 3) << 3);
  *(double **)(this + 0x18) = pdVar10;
  if (param_1 != 0) {
    uVar13 = (ulong)param_1;
    if (param_1 == 1) {
LAB_00ec4fd8:
      uVar21 = 0;
      pdVar16 = param_2;
    }
    else {
      uVar18 = uVar13 - 1;
      uVar15 = (uVar18 & 0xffffffff) + (uVar18 & 0xffffffff) * 2;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar18;
      bVar8 = (uVar15 & 0xffffffff00000000) != 0;
      bVar9 = SUB168(auVar6 * ZEXT816(0x18),8) != 0;
      uVar19 = (uint)uVar15;
      if ((((((uVar19 == 0xffffffff) || (bVar8)) || (uVar18 >> 0x20 != 0)) ||
           ((0xfffffffd < uVar19 || (bVar8)))) ||
          (((pdVar10 + 1 + uVar18 * 3 < pdVar10 + 1 ||
            ((bVar9 || (pdVar10 + 2 + uVar18 * 3 < pdVar10 + 2)))) || (bVar9)))) ||
         ((pdVar10 + uVar18 * 3 < pdVar10 || (bVar9)))) goto LAB_00ec4fd8;
      uVar21 = uVar13 & 0xfffffffe;
      uVar15 = 2;
      pdVar16 = param_2 + uVar21 * 3;
      uVar18 = uVar21;
      do {
        dVar28 = param_2[2];
        dVar27 = param_2[5];
        dVar22 = param_2[4];
        uVar20 = uVar15 & 0xfffffffe;
        uVar15 = uVar15 + 6;
        uVar18 = uVar18 - 2;
        pdVar3 = pdVar10 + (uVar20 - 2);
        dVar25 = param_2[1];
        dVar23 = *param_2;
        pdVar3[3] = param_2[3];
        pdVar3[2] = dVar28;
        pdVar3[5] = dVar27;
        pdVar3[4] = dVar22;
        pdVar3[1] = dVar25;
        *pdVar3 = dVar23;
        param_2 = param_2 + 6;
      } while (uVar18 != 0);
      if (uVar21 == uVar13) goto LAB_00ec5010;
    }
    uVar19 = (int)uVar21 * 3;
    lVar14 = uVar13 - uVar21;
    do {
      dVar22 = pdVar16[1];
      uVar1 = uVar19 + 1;
      uVar2 = uVar19 + 2;
      dVar27 = pdVar16[2];
      lVar14 = lVar14 + -1;
      pdVar10[uVar19] = *pdVar16;
      uVar19 = uVar19 + 3;
      pdVar16 = pdVar16 + 3;
      pdVar10[uVar1] = dVar22;
      pdVar10[uVar2] = dVar27;
    } while (lVar14 != 0);
  }
LAB_00ec5010:
  *(uint *)(this + 0x20) = param_3;
  puVar11 = (uint *)operator_new__((ulong)(param_3 * 3) << 2);
  *(uint **)(this + 0x28) = puVar11;
  if (param_3 == 0) goto LAB_00ec5074;
  uVar13 = (ulong)param_3;
  if (param_3 < 4) {
LAB_00ec503c:
    uVar15 = 0;
    puVar17 = param_4;
  }
  else {
    uVar18 = uVar13 - 1;
    uVar15 = (uVar18 & 0xffffffff) + (uVar18 & 0xffffffff) * 2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar18;
    bVar8 = (uVar15 & 0xffffffff00000000) != 0;
    bVar9 = SUB168(auVar7 * ZEXT816(0xc),8) != 0;
    uVar19 = (uint)uVar15;
    if (((((uVar19 == 0xffffffff) || (bVar8)) || (uVar18 >> 0x20 != 0)) ||
        (((0xfffffffd < uVar19 || (bVar8)) ||
         ((puVar11 + 1 + uVar18 * 3 < puVar11 + 1 ||
          ((bVar9 || (puVar11 + 2 + uVar18 * 3 < puVar11 + 2)))))))) ||
       ((bVar9 || ((puVar11 + uVar18 * 3 < puVar11 || (bVar9)))))) goto LAB_00ec503c;
    uVar15 = uVar13 & 0xfffffffc;
    uVar18 = 0;
    puVar17 = param_4 + uVar15 * 3;
    do {
      uVar26 = *(undefined8 *)((long)param_4 + 0x18);
      uVar24 = *(undefined8 *)((long)param_4 + 0x10);
      uVar12 = *(undefined8 *)((long)param_4 + 0x20);
      uVar21 = uVar18 & 0xfffffffc;
      uVar18 = uVar18 + 0xc;
      uVar30 = *(undefined8 *)((long)param_4 + 8);
      uVar29 = *(undefined8 *)param_4;
      *(undefined8 *)(puVar11 + uVar21 + 10) = *(undefined8 *)((long)param_4 + 0x28);
      *(undefined8 *)(puVar11 + uVar21 + 8) = uVar12;
      *(undefined8 *)(puVar11 + uVar21 + 6) = uVar26;
      *(undefined8 *)(puVar11 + uVar21 + 4) = uVar24;
      *(undefined8 *)(puVar11 + uVar21 + 2) = uVar30;
      *(undefined8 *)(puVar11 + uVar21) = uVar29;
      param_4 = (uint *)((long)param_4 + 0x30);
    } while (uVar15 * 3 != uVar18);
    if (uVar15 == uVar13) goto LAB_00ec5074;
  }
  uVar19 = (int)uVar15 * 3;
  do {
    uVar4 = puVar17[1];
    uVar1 = uVar19 + 1;
    uVar2 = uVar19 + 2;
    uVar5 = puVar17[2];
    uVar15 = uVar15 + 1;
    puVar11[uVar19] = *puVar17;
    uVar19 = uVar19 + 3;
    puVar17 = puVar17 + 3;
    puVar11[uVar1] = uVar4;
    puVar11[uVar2] = uVar5;
  } while (uVar15 < uVar13);
LAB_00ec5074:
  uVar12 = aabbtree::AABBTree::create(pdVar10,param_3,puVar11,param_3);
  *(undefined8 *)(this + 8) = uVar12;
  return;
}


