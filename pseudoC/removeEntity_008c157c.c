// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeEntity
// Entry Point: 008c157c
// Size: 560 bytes
// Signature: undefined __thiscall removeEntity(CullingGrid2D * this, CullingEntity * param_1)


/* CullingGrid2D::removeEntity(CullingGrid2D::CullingEntity*) */

void __thiscall CullingGrid2D::removeEntity(CullingGrid2D *this,CullingEntity *param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  uint *puVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  undefined8 *puVar11;
  CullingEntity **ppCVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  CullingEntity **ppCVar16;
  long lVar17;
  undefined8 *puVar18;
  uint uVar19;
  int iVar22;
  undefined8 uVar20;
  CullingEntity *pCVar21;
  int iVar23;
  int iVar26;
  undefined8 uVar24;
  CullingEntity *pCVar25;
  int iVar27;
  int iVar30;
  undefined8 uVar28;
  CullingEntity *pCVar29;
  int iVar31;
  int iVar32;
  undefined8 uVar33;
  CullingEntity *pCVar34;
  undefined8 uVar35;
  CullingEntity *pCVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  
  uVar3 = *(uint *)param_1;
  uVar19 = uVar3 >> 3 & 0x7f;
  uVar4 = *(uint *)(this + 0xc);
  uVar10 = uVar3 >> 6 & 0x700 | uVar3 >> 10 & 0xf;
  uVar19 = (uVar19 | uVar19 << 4) & 0xffffff0f;
  uVar10 = (uVar10 | uVar10 << 2) & 0xf3f3f3f3;
  uVar19 = (uVar19 | uVar19 << 2) & 0xf3f3f3f3;
  uVar10 = ((uVar19 | uVar19 << 1) & 0xdddddddd | (uVar10 << 2 | uVar10 << 1) & 0xbbbbbbbb) <<
           (ulong)((uVar4 + ~(uVar3 & 7)) * 2 & 0x1f);
  uVar19 = uVar10 + (uVar3 & 7);
  if (2 < uVar4) {
    uVar14 = uVar4 - 2;
    if (uVar14 < 8) {
      uVar13 = 1;
    }
    else {
      iVar23 = 0;
      iVar26 = 0;
      uVar2 = uVar14 & 0xfffffff8;
      iVar27 = 0;
      iVar30 = 0;
      iVar31 = 0;
      iVar32 = 0;
      uVar13 = uVar2 | 1;
      iVar22 = 0;
      uVar5 = uVar2;
      iVar8 = 1;
      iVar37 = 2;
      iVar38 = 3;
      iVar39 = 4;
      do {
        auVar43._0_4_ = iVar8 * 2;
        auVar43._4_4_ = iVar37 * 2;
        auVar43._8_4_ = iVar38 * 2;
        auVar43._12_4_ = iVar39 * 2;
        uVar5 = uVar5 - 8;
        auVar42 = NEON_neg(auVar43,4);
        auVar40._0_4_ = iVar8 * -2 + -8;
        auVar40._4_4_ = iVar37 * -2 + -8;
        auVar40._8_4_ = iVar38 * -2 + -8;
        auVar40._12_4_ = iVar39 * -2 + -8;
        auVar41._4_4_ = uVar10;
        auVar41._0_4_ = uVar10;
        auVar41._8_4_ = uVar10;
        auVar41._12_4_ = uVar10;
        auVar43 = NEON_ushl(auVar41,auVar42,4);
        auVar42._4_4_ = uVar10;
        auVar42._0_4_ = uVar10;
        auVar42._8_4_ = uVar10;
        auVar42._12_4_ = uVar10;
        auVar41 = NEON_ushl(auVar42,auVar40,4);
        uVar19 = auVar43._0_4_ + uVar19;
        iVar22 = auVar43._4_4_ + iVar22;
        iVar23 = auVar43._8_4_ + iVar23;
        iVar26 = auVar43._12_4_ + iVar26;
        iVar27 = auVar41._0_4_ + iVar27;
        iVar30 = auVar41._4_4_ + iVar30;
        iVar31 = auVar41._8_4_ + iVar31;
        iVar32 = auVar41._12_4_ + iVar32;
        iVar8 = iVar8 + 8;
        iVar37 = iVar37 + 8;
        iVar38 = iVar38 + 8;
        iVar39 = iVar39 + 8;
      } while (uVar5 != 0);
      uVar19 = iVar27 + uVar19 + iVar30 + iVar22 + iVar31 + iVar23 + iVar32 + iVar26;
      if (uVar14 == uVar2) goto LAB_008c1680;
    }
    uVar14 = uVar13 << 1;
    iVar8 = ~uVar13 + uVar4;
    do {
      iVar8 = iVar8 + -1;
      uVar19 = (uVar10 >> (ulong)(uVar14 & 0x1f)) + uVar19;
      uVar14 = uVar14 + 2;
    } while (iVar8 != 0);
  }
LAB_008c1680:
  lVar9 = *(long *)this;
  uVar15 = (ulong)(uVar3 >> 0x11) & 3;
  uVar4 = uVar3 >> 0x13;
  puVar6 = (ushort *)(lVar9 + (ulong)uVar19 * 0x48 + uVar15 * 0x10 + 8);
  uVar10 = (uint)*puVar6;
  if (uVar4 == 0x1fff) {
    if (0x1fff < uVar10) {
      plVar1 = (long *)(lVar9 + (ulong)uVar19 * 0x48 + uVar15 * 0x10);
      lVar9 = *plVar1;
      ppCVar16 = (CullingEntity **)(lVar9 + 0x5ffd0);
      uVar15 = 0x1fff;
      do {
        if (*ppCVar16 == param_1) {
          uVar10 = uVar10 - 1;
          uVar19 = (uint)uVar15;
          *puVar6 = (ushort)uVar10;
          if ((uVar10 & 0xffff) <= uVar19) {
            return;
          }
          ppCVar12 = (CullingEntity **)(lVar9 + ((ulong)uVar10 & 0xffff) * 0x30);
          pCVar29 = ppCVar12[2];
          pCVar25 = ppCVar12[5];
          pCVar21 = ppCVar12[4];
          pCVar36 = ppCVar12[1];
          pCVar34 = *ppCVar12;
          ppCVar16[3] = ppCVar12[3];
          ppCVar16[2] = pCVar29;
          ppCVar16[5] = pCVar25;
          ppCVar16[4] = pCVar21;
          ppCVar16[1] = pCVar36;
          *ppCVar16 = pCVar34;
          puVar7 = *(uint **)(*plVar1 + (ulong)*puVar6 * 0x30);
          if (0x1ffe < uVar19) {
            uVar19 = 0x1fff;
          }
          *puVar7 = *puVar7 & 0x7ffff | uVar19 << 0x13;
          return;
        }
        uVar15 = uVar15 + 1;
        ppCVar16 = ppCVar16 + 6;
      } while (*puVar6 != uVar15);
    }
  }
  else {
    uVar10 = uVar10 - 1;
    *puVar6 = (ushort)uVar10;
    if (uVar4 < (uVar10 & 0xffff)) {
      lVar9 = lVar9 + (ulong)uVar19 * 0x48;
      lVar17 = *(long *)(lVar9 + uVar15 * 0x10);
      puVar11 = (undefined8 *)(lVar17 + ((ulong)uVar10 & 0xffff) * 0x30);
      puVar18 = (undefined8 *)(lVar17 + (ulong)uVar4 * 0x30);
      uVar28 = puVar11[2];
      uVar24 = puVar11[5];
      uVar20 = puVar11[4];
      uVar35 = puVar11[1];
      uVar33 = *puVar11;
      puVar18[3] = puVar11[3];
      puVar18[2] = uVar28;
      puVar18[5] = uVar24;
      puVar18[4] = uVar20;
      puVar18[1] = uVar35;
      *puVar18 = uVar33;
      puVar7 = *(uint **)(*(long *)(lVar9 + uVar15 * 0x10) + (ulong)*puVar6 * 0x30);
      *puVar7 = uVar3 & 0xfff80000 | *puVar7 & 0x7ffff;
      return;
    }
  }
  return;
}


