// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeEntity
// Entry Point: 008c3350
// Size: 524 bytes
// Signature: undefined __thiscall removeEntity(DecalCullingStructure * this, CullingEntity * param_1)


/* DecalCullingStructure::removeEntity(DecalCullingStructure::CullingEntity*) */

void __thiscall
DecalCullingStructure::removeEntity(DecalCullingStructure *this,CullingEntity *param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  CullingEntity **ppCVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  CullingEntity **ppCVar17;
  uint uVar18;
  int iVar21;
  undefined8 uVar19;
  CullingEntity *pCVar20;
  int iVar22;
  int iVar25;
  undefined8 uVar23;
  CullingEntity *pCVar24;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  
  uVar4 = *(uint *)param_1;
  uVar18 = uVar4 >> 3 & 0x7f;
  uVar5 = *(uint *)(this + 0xc);
  uVar3 = uVar4 >> 6 & 0x700 | uVar4 >> 10 & 0xf;
  uVar18 = (uVar18 | uVar18 << 4) & 0xffffff0f;
  uVar3 = (uVar3 | uVar3 << 2) & 0xf3f3f3f3;
  uVar18 = (uVar18 | uVar18 << 2) & 0xf3f3f3f3;
  uVar3 = ((uVar18 | uVar18 << 1) & 0xdddddddd | (uVar3 << 2 | uVar3 << 1) & 0xbbbbbbbb) <<
          (ulong)((uVar5 + ~(uVar4 & 7)) * 2 & 0x1f);
  uVar18 = uVar3 + (uVar4 & 7);
  if (2 < uVar5) {
    uVar15 = uVar5 - 2;
    if (uVar15 < 8) {
      uVar14 = 1;
    }
    else {
      iVar22 = 0;
      iVar25 = 0;
      uVar2 = uVar15 & 0xfffffff8;
      iVar26 = 0;
      iVar27 = 0;
      iVar28 = 0;
      iVar29 = 0;
      uVar14 = uVar2 | 1;
      iVar21 = 0;
      uVar7 = uVar2;
      iVar10 = 1;
      iVar30 = 2;
      iVar31 = 3;
      iVar32 = 4;
      do {
        auVar36._0_4_ = iVar10 * 2;
        auVar36._4_4_ = iVar30 * 2;
        auVar36._8_4_ = iVar31 * 2;
        auVar36._12_4_ = iVar32 * 2;
        uVar7 = uVar7 - 8;
        auVar35 = NEON_neg(auVar36,4);
        auVar33._0_4_ = iVar10 * -2 + -8;
        auVar33._4_4_ = iVar30 * -2 + -8;
        auVar33._8_4_ = iVar31 * -2 + -8;
        auVar33._12_4_ = iVar32 * -2 + -8;
        auVar34._4_4_ = uVar3;
        auVar34._0_4_ = uVar3;
        auVar34._8_4_ = uVar3;
        auVar34._12_4_ = uVar3;
        auVar36 = NEON_ushl(auVar34,auVar35,4);
        auVar35._4_4_ = uVar3;
        auVar35._0_4_ = uVar3;
        auVar35._8_4_ = uVar3;
        auVar35._12_4_ = uVar3;
        auVar34 = NEON_ushl(auVar35,auVar33,4);
        uVar18 = auVar36._0_4_ + uVar18;
        iVar21 = auVar36._4_4_ + iVar21;
        iVar22 = auVar36._8_4_ + iVar22;
        iVar25 = auVar36._12_4_ + iVar25;
        iVar26 = auVar34._0_4_ + iVar26;
        iVar27 = auVar34._4_4_ + iVar27;
        iVar28 = auVar34._8_4_ + iVar28;
        iVar29 = auVar34._12_4_ + iVar29;
        iVar10 = iVar10 + 8;
        iVar30 = iVar30 + 8;
        iVar31 = iVar31 + 8;
        iVar32 = iVar32 + 8;
      } while (uVar7 != 0);
      uVar18 = iVar26 + uVar18 + iVar27 + iVar21 + iVar28 + iVar22 + iVar29 + iVar25;
      if (uVar15 == uVar2) goto LAB_008c3454;
    }
    uVar15 = uVar14 << 1;
    iVar10 = ~uVar14 + uVar5;
    do {
      iVar10 = iVar10 + -1;
      uVar18 = (uVar3 >> (ulong)(uVar15 & 0x1f)) + uVar18;
      uVar15 = uVar15 + 2;
    } while (iVar10 != 0);
  }
LAB_008c3454:
  uVar3 = uVar4 >> 0x11;
  plVar1 = (long *)(*(long *)this + (ulong)uVar18 * 0x20);
  plVar11 = plVar1 + 1;
  uVar6 = *(ushort *)plVar11;
  if (uVar3 == 0x7fff) {
    if ((short)uVar6 < 0) {
      ppCVar17 = (CullingEntity **)(*plVar1 + 0xbffe8);
      uVar8 = 0x7fff;
      do {
        if (*ppCVar17 == param_1) {
          uVar6 = uVar6 - 1;
          uVar18 = (uint)uVar8;
          *(ushort *)plVar11 = uVar6;
          if (uVar6 <= uVar18) {
            return;
          }
          ppCVar13 = (CullingEntity **)(*plVar1 + (ulong)uVar6 * 0x18);
          pCVar24 = ppCVar13[1];
          pCVar20 = *ppCVar13;
          ppCVar17[2] = ppCVar13[2];
          ppCVar17[1] = pCVar24;
          *ppCVar17 = pCVar20;
          puVar9 = *(uint **)(*plVar1 + (ulong)*(ushort *)plVar11 * 0x18);
          if (0x7ffe < uVar18) {
            uVar18 = 0x7fff;
          }
          *puVar9 = *puVar9 & 0x1ffff | uVar18 << 0x11;
          return;
        }
        uVar8 = uVar8 + 1;
        ppCVar17 = ppCVar17 + 3;
      } while (uVar6 != uVar8);
    }
  }
  else {
    uVar6 = uVar6 - 1;
    *(ushort *)plVar11 = uVar6;
    if (uVar3 < uVar6) {
      puVar12 = (undefined8 *)(*plVar1 + (ulong)uVar6 * 0x18);
      puVar16 = (undefined8 *)(*plVar1 + (ulong)uVar3 * 0x18);
      uVar23 = puVar12[1];
      uVar19 = *puVar12;
      puVar16[2] = puVar12[2];
      puVar16[1] = uVar23;
      *puVar16 = uVar19;
      puVar9 = *(uint **)(*plVar1 + (ulong)*(ushort *)plVar11 * 0x18);
      *puVar9 = uVar4 & 0xfffe0000 | *puVar9 & 0x1ffff;
      return;
    }
  }
  return;
}


