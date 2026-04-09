// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateQuadTree
// Entry Point: 008f0ea4
// Size: 1120 bytes
// Signature: undefined __thiscall updateQuadTree(GeoQuadTree * this, QuadTreeNode * param_1, Vector3 * param_2, float param_3, bool param_4)


/* GeoQuadTree::updateQuadTree(GeoQuadTree::QuadTreeNode*, Vector3 const&, float, bool) */

void __thiscall
GeoQuadTree::updateQuadTree
          (GeoQuadTree *this,QuadTreeNode *param_1,Vector3 *param_2,float param_3,bool param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  QuadTreeNode QVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  GeoMipMappingTerrainPatch *pGVar9;
  GeoMipMappingTerrainPatch *pGVar10;
  uint uVar11;
  long lVar12;
  QuadTreeNode *pQVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_a0;
  float fStack_9c;
  long local_98;
  
  lVar7 = tpidr_el0;
  local_98 = *(long *)(lVar7 + 0x28);
  fVar15 = param_3 + param_3;
  fVar26 = *(float *)(param_1 + 0x10);
  fVar24 = *(float *)(param_1 + 0x14);
  fVar16 = *(float *)param_2;
  fVar19 = *(float *)(param_2 + 4);
  fVar25 = *(float *)(param_1 + 0x18);
  fVar23 = *(float *)(param_2 + 8);
  fVar18 = fVar16;
  if (fVar16 <= fVar26) {
    fVar18 = fVar26;
  }
  fVar20 = fVar25;
  if (fVar18 <= fVar25) {
    fVar20 = fVar18;
  }
  fVar18 = fVar19;
  if (fVar19 <= *(float *)(param_1 + 0x20)) {
    fVar18 = *(float *)(param_1 + 0x20);
  }
  fVar22 = *(float *)(param_1 + 0x24);
  if (fVar18 <= *(float *)(param_1 + 0x24)) {
    fVar22 = fVar18;
  }
  fVar18 = fVar23;
  if (fVar23 <= fVar24) {
    fVar18 = fVar24;
  }
  fVar21 = *(float *)(param_1 + 0x1c);
  if (fVar18 <= *(float *)(param_1 + 0x1c)) {
    fVar21 = fVar18;
  }
  uVar17 = NEON_fmadd(fVar20 - fVar16,fVar20 - fVar16,(fVar22 - fVar19) * (fVar22 - fVar19));
  fVar18 = (float)NEON_fmadd(fVar21 - fVar23,fVar21 - fVar23,uVar17);
  fVar18 = log2f((1.0 / (fVar15 * fVar15 * fVar15)) * SQRT(fVar18));
  uVar11 = *(uint *)(param_1 + 0x2c);
  fVar15 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(this + 8) + 0x28));
  fVar15 = (fVar18 - *(float *)(this + 0x10)) + fVar15;
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  uVar6 = 0;
  if (!param_4) {
    uVar6 = (int)fVar15;
  }
  uVar14 = uVar6 - uVar11;
  *(uint *)(param_1 + 0x30) = uVar6;
  if (uVar6 < uVar11 || uVar14 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
LAB_008f0fc8:
    if (uVar11 <= uVar6) goto LAB_008f117c;
    if (param_1[0x38] == (QuadTreeNode)0x0) {
      pGVar9 = *(GeoMipMappingTerrainPatch **)(param_1 + 0x60);
      if (pGVar9 != (GeoMipMappingTerrainPatch *)0x0) {
        GeoMipMappingTerrain::freePatch(*(GeoMipMappingTerrain **)(pGVar9 + 0x70),pGVar9);
        fVar24 = *(float *)(param_1 + 0x14);
        fVar25 = *(float *)(param_1 + 0x18);
        uVar11 = *(uint *)(param_1 + 0x2c);
        fVar26 = *(float *)(param_1 + 0x10);
      }
      uVar11 = uVar11 - 1;
      lVar12 = 0;
      uVar6 = *(int *)(param_1 + 0x28) - 1;
      fVar18 = (fVar25 - fVar26) * 0.5;
      *(undefined8 *)(param_1 + 0x60) = 0;
      iVar5 = 1 << (ulong)(uVar6 & 0x1f);
      uVar14 = *(uint *)(param_1 + 4);
      while( true ) {
        uVar3 = *(uint *)param_1;
        uVar1 = uVar14 + iVar5;
        uVar2 = uVar3 + iVar5;
        fVar15 = fVar18 + fVar24;
        GeoMipMappingTerrain::queryMinMaxHeights
                  (*(GeoMipMappingTerrain **)this,uVar3,uVar14,uVar2,uVar1,&fStack_9c,&local_a0);
        puVar8 = (uint *)operator_new(0x70);
        fVar16 = fVar18 + fVar26;
        *puVar8 = uVar3;
        puVar8[1] = uVar14;
        puVar8[2] = uVar2;
        puVar8[3] = uVar1;
        puVar8[8] = (uint)fStack_9c;
        puVar8[9] = (uint)local_a0;
        puVar8[4] = (uint)fVar26;
        puVar8[5] = (uint)fVar24;
        puVar8[6] = (uint)fVar16;
        puVar8[7] = (uint)fVar15;
        puVar8[10] = uVar6;
        puVar8[0xb] = uVar11;
        puVar8[0xc] = uVar11;
        puVar8[0xd] = 0;
        *(undefined *)(puVar8 + 0xe) = 0;
        puVar8[0x1a] = 0;
        *(undefined8 *)(puVar8 + 0x12) = 0;
        *(undefined8 *)(puVar8 + 0x10) = 0;
        *(undefined8 *)(puVar8 + 0x16) = 0;
        *(undefined8 *)(puVar8 + 0x14) = 0;
                    /* try { // try from 008f10a8 to 008f10bf has its CatchHandler @ 008f1304 */
        pGVar9 = (GeoMipMappingTerrainPatch *)GeoMipMappingTerrain::allocPatch();
        *(GeoMipMappingTerrainPatch **)(puVar8 + 0x18) = pGVar9;
        GeoMipMappingTerrainPatch::setExtents
                  (pGVar9,*puVar8,puVar8[1],puVar8[2],puVar8[3],(float)puVar8[8],(float)puVar8[9]);
        *(uint **)(param_1 + lVar12 + 0x40) = puVar8;
        GeoMipMappingTerrain::queryMinMaxHeights
                  (*(GeoMipMappingTerrain **)this,uVar2,uVar14,uVar2 + iVar5,uVar1,&fStack_9c,
                   &local_a0);
        puVar8 = (uint *)operator_new(0x70);
        *puVar8 = uVar2;
        puVar8[1] = uVar14;
        puVar8[2] = uVar2 + iVar5;
        puVar8[3] = uVar1;
        puVar8[6] = (uint)(fVar18 + fVar16);
        puVar8[4] = (uint)fVar16;
        puVar8[5] = (uint)fVar24;
        puVar8[7] = (uint)fVar15;
        puVar8[8] = (uint)fStack_9c;
        puVar8[9] = (uint)local_a0;
        puVar8[10] = uVar6;
        puVar8[0xb] = uVar11;
        puVar8[0xc] = uVar11;
        puVar8[0xd] = 0;
        *(undefined *)(puVar8 + 0xe) = 0;
        puVar8[0x1a] = 0;
        *(undefined8 *)(puVar8 + 0x12) = 0;
        *(undefined8 *)(puVar8 + 0x10) = 0;
        *(undefined8 *)(puVar8 + 0x16) = 0;
        *(undefined8 *)(puVar8 + 0x14) = 0;
                    /* try { // try from 008f1140 to 008f1157 has its CatchHandler @ 008f1304 */
        pGVar9 = (GeoMipMappingTerrainPatch *)GeoMipMappingTerrain::allocPatch();
        *(GeoMipMappingTerrainPatch **)(puVar8 + 0x18) = pGVar9;
        GeoMipMappingTerrainPatch::setExtents
                  (pGVar9,*puVar8,puVar8[1],puVar8[2],puVar8[3],(float)puVar8[8],(float)puVar8[9]);
        *(uint **)(param_1 + lVar12 + 0x48) = puVar8;
        if (lVar12 == 0x10) break;
        fVar26 = *(float *)(param_1 + 0x10);
        lVar12 = lVar12 + 0x10;
        fVar24 = fVar15;
        uVar14 = uVar1;
      }
      param_1[0x38] = (QuadTreeNode)0x1;
      QVar4 = param_1[0x38];
      goto joined_r0x008f12b4;
    }
  }
  else {
    *(uint *)(param_1 + 0x34) = uVar14;
    if (uVar14 < 2) goto LAB_008f0fc8;
    *(uint *)(param_1 + 0x30) = uVar11 + 1;
    *(undefined4 *)(param_1 + 0x34) = 1;
LAB_008f117c:
    if (param_1[0x38] != (QuadTreeNode)0x0) {
      pQVar13 = *(QuadTreeNode **)(param_1 + 0x40);
      if (pQVar13 != (QuadTreeNode *)0x0) {
        QuadTreeNode::~QuadTreeNode(pQVar13);
        operator_delete(pQVar13);
      }
      pQVar13 = *(QuadTreeNode **)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x40) = 0;
      if (pQVar13 != (QuadTreeNode *)0x0) {
        QuadTreeNode::~QuadTreeNode(pQVar13);
        operator_delete(pQVar13);
      }
      pQVar13 = *(QuadTreeNode **)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x48) = 0;
      if (pQVar13 != (QuadTreeNode *)0x0) {
        QuadTreeNode::~QuadTreeNode(pQVar13);
        operator_delete(pQVar13);
      }
      pQVar13 = *(QuadTreeNode **)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x50) = 0;
      if (pQVar13 != (QuadTreeNode *)0x0) {
        QuadTreeNode::~QuadTreeNode(pQVar13);
        operator_delete(pQVar13);
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
      param_1[0x38] = (QuadTreeNode)0x0;
      pGVar9 = (GeoMipMappingTerrainPatch *)GeoMipMappingTerrain::allocPatch();
      pGVar10 = *(GeoMipMappingTerrainPatch **)(param_1 + 0x60);
      if (pGVar10 != (GeoMipMappingTerrainPatch *)0x0) {
        GeoMipMappingTerrain::freePatch(*(GeoMipMappingTerrain **)(pGVar10 + 0x70),pGVar10);
      }
      *(GeoMipMappingTerrainPatch **)(param_1 + 0x60) = pGVar9;
      if (pGVar9 != (GeoMipMappingTerrainPatch *)0x0) {
        GeoMipMappingTerrainPatch::setExtents
                  (pGVar9,*(uint *)param_1,*(uint *)(param_1 + 4),*(uint *)(param_1 + 8),
                   *(uint *)(param_1 + 0xc),*(float *)(param_1 + 0x20),*(float *)(param_1 + 0x24));
      }
    }
  }
  QVar4 = param_1[0x38];
joined_r0x008f12b4:
  if (QVar4 == (QuadTreeNode)0x0) {
    *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x94) = *(undefined4 *)(param_1 + 0x34);
  }
  else {
    updateQuadTree(this,*(QuadTreeNode **)(param_1 + 0x40),param_2,param_3,param_4);
    updateQuadTree(this,*(QuadTreeNode **)(param_1 + 0x48),param_2,param_3,param_4);
    updateQuadTree(this,*(QuadTreeNode **)(param_1 + 0x50),param_2,param_3,param_4);
    updateQuadTree(this,*(QuadTreeNode **)(param_1 + 0x58),param_2,param_3,param_4);
  }
  if (*(long *)(lVar7 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


