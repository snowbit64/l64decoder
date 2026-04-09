// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setupGrid
// Entry Point: 008c0ab0
// Size: 1704 bytes
// Signature: undefined setupGrid(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CullingGrid2D::setupGrid() */

void CullingGrid2D::setupGrid(void)

{
  CullingEntity **ppCVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  uint uVar14;
  bool bVar15;
  ulong **in_x0;
  ulong *puVar16;
  void *pvVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  ulong *puVar23;
  ulong *puVar24;
  int iVar25;
  ulong *puVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  int iVar31;
  ulong uVar32;
  long lVar33;
  uint uVar34;
  uint uVar35;
  long lVar36;
  float fVar37;
  float fVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  uint uVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  undefined auVar62 [16];
  undefined auVar63 [16];
  undefined auVar64 [16];
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  BoundingSphere aBStack_88 [32];
  long local_68;
  
  lVar9 = tpidr_el0;
  uVar35 = 0;
  local_68 = *(long *)(lVar9 + 0x28);
  uVar4 = *(uint *)((long)in_x0 + 0xc);
  uVar5 = *(uint *)(in_x0 + 2);
  puVar23 = *in_x0;
  *(undefined4 *)(in_x0 + 2) = 0;
  if (uVar4 != 0) {
    iVar22 = 1;
    uVar27 = uVar4;
    do {
      uVar35 = uVar35 + iVar22 * iVar22;
      iVar22 = iVar22 << 1;
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
    *(uint *)(in_x0 + 2) = uVar35;
  }
  uVar32 = (ulong)uVar35;
  puVar16 = (ulong *)operator_new__((ulong)uVar35 * 0x48 + 8);
  puVar24 = puVar16 + 1;
  *puVar16 = uVar32;
  if (uVar35 != 0) {
    uVar28 = uVar32 * 0x48 - 0x48;
    puVar26 = puVar24;
    if (0x47 < uVar28) {
      puVar16 = puVar16 + 10;
      uVar28 = uVar28 / 0x48 + 1;
      uVar29 = uVar28 & 0x7fffffffffffffe;
      puVar26 = puVar24 + uVar29 * 9;
      uVar30 = uVar29;
      do {
        puVar16[-9] = 0;
        uVar30 = uVar30 - 2;
        *puVar16 = 0;
        puVar16[-7] = 0;
        puVar16[2] = 0;
        puVar16[-5] = 0;
        puVar16[4] = 0;
        puVar16 = puVar16 + 0x12;
      } while (uVar30 != 0);
      if (uVar28 == uVar29) goto LAB_008c0bc8;
    }
    do {
      *puVar26 = 0;
      puVar26[2] = 0;
      puVar26[4] = 0;
      puVar26 = puVar26 + 9;
    } while (puVar26 != puVar24 + uVar32 * 9);
  }
LAB_008c0bc8:
  *in_x0 = puVar24;
  if (uVar4 == 0) {
LAB_008c0fc8:
    if (puVar23 != (ulong *)0x0) {
      if (uVar5 != 0) {
        uVar32 = 0;
        do {
          lVar36 = 0;
          do {
            puVar16 = puVar23 + uVar32 * 9 + lVar36 * 2;
            if (*(ushort *)(puVar16 + 1) != 0) {
              lVar33 = 0;
              uVar28 = 0;
              do {
                ppCVar1 = (CullingEntity **)(*puVar16 + lVar33);
                if (*(float *)((long)ppCVar1 + 0x14) == 3.402823e+38) {
                  addEntity((CullingGrid2D *)in_x0,*ppCVar1,(BoundingVolume *)0x0,
                            (Vector3 *)(ppCVar1 + 4),*(float *)((long)ppCVar1 + 0x2c),
                            *(float *)(ppCVar1 + 3),*(float *)((long)ppCVar1 + 0x1c),
                            *(float *)((long)ppCVar1 + 0x2c) < 0.0);
                }
                else {
                  BoundingSphere::BoundingSphere
                            (aBStack_88,(Vector3 *)(ppCVar1 + 1),*(float *)((long)ppCVar1 + 0x14));
                    /* try { // try from 008c10a8 to 008c10b3 has its CatchHandler @ 008c1158 */
                  addEntity((CullingGrid2D *)in_x0,*ppCVar1,(BoundingVolume *)aBStack_88,
                            (Vector3 *)(ppCVar1 + 4),*(float *)((long)ppCVar1 + 0x2c),
                            *(float *)(ppCVar1 + 3),*(float *)((long)ppCVar1 + 0x1c),
                            *(float *)((long)ppCVar1 + 0x2c) < 0.0);
                  BoundingSphere::~BoundingSphere(aBStack_88);
                }
                uVar28 = uVar28 + 1;
                lVar33 = lVar33 + 0x30;
              } while (uVar28 < *(ushort *)(puVar16 + 1));
            }
            lVar36 = lVar36 + 1;
          } while (lVar36 != 3);
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar5);
      }
      uVar32 = puVar23[-1];
      if (uVar32 != 0) {
        lVar36 = uVar32 * 0x48;
        do {
          pvVar17 = *(void **)((long)puVar23 + lVar36 + -0x48);
          if (pvVar17 != (void *)0x0) {
            operator_delete__(pvVar17);
          }
          pvVar17 = *(void **)((long)puVar23 + lVar36 + -0x38);
          if (pvVar17 != (void *)0x0) {
            operator_delete__(pvVar17);
          }
          pvVar17 = *(void **)((long)puVar23 + lVar36 + -0x28);
          if (pvVar17 != (void *)0x0) {
            operator_delete__(pvVar17);
          }
          lVar36 = lVar36 + -0x48;
        } while (lVar36 != 0);
      }
      operator_delete__(puVar23 + -1);
    }
    if (*(long *)(lVar9 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  fVar37 = *(float *)((long)in_x0 + 0x1c);
  fVar38 = *(float *)((long)in_x0 + 0x14);
  uVar8 = uVar4 - 2;
  uVar2 = uVar8 & 0xfffffff8;
  uVar18 = uVar4 * 2;
  iVar25 = 0;
  uVar27 = 0;
  uVar7 = uVar2 | 1;
  iVar22 = uVar4 - 1;
  uVar19 = 1;
  iVar41 = 3;
  iVar42 = 4;
  iVar39 = 1;
  iVar40 = 2;
  fVar43 = *(float *)(in_x0 + 3) - fVar38;
  fVar44 = *(float *)(in_x0 + 4) - fVar37;
  do {
    uVar18 = uVar18 - 2;
    fVar45 = fVar43 * 0.5;
    fVar46 = fVar44 * 0.5;
    if (uVar19 != 0) {
      fVar48 = (float)NEON_fmadd(fVar43,0x3f000000,fVar38);
      fVar49 = (float)NEON_fmadd(fVar44,0x3f000000,fVar37);
      uVar20 = 0;
      fVar47 = (float)NEON_fmadd(fVar45,fVar45,fVar46 * fVar46);
      do {
        uVar3 = (uVar20 | uVar20 << 8) & 0xff00ff;
        uVar21 = 0;
        uVar3 = (uVar3 | uVar3 << 4) & 0xf0f0f0f;
        uVar3 = (uVar3 | uVar3 << 2) & 0x33333333;
        fVar50 = fVar48;
        do {
          uVar51 = (uVar21 | uVar21 << 8) & 0xff00ff;
          uVar51 = (uVar51 | uVar51 << 4) & 0xf0f0f0f;
          uVar51 = (uVar51 | uVar51 << 2) & 0x33333333;
          uVar6 = ((uVar51 | uVar51 << 1) & 0x55555555 | (uVar3 << 2 | uVar3 << 1) & 0xaaaaaaaa) <<
                  (ulong)((uVar4 + ~uVar27) * 2 & 0x1f);
          uVar51 = uVar6 + uVar27;
          uVar32 = (ulong)uVar51;
          if (2 < uVar4) {
            if (uVar8 < 8) {
              uVar51 = 1;
            }
            else {
              iVar53 = 0;
              iVar54 = 0;
              iVar55 = 0;
              iVar56 = 0;
              iVar57 = 0;
              iVar58 = 0;
              iVar52 = 0;
              uVar34 = uVar2;
              iVar31 = iVar39;
              iVar59 = iVar40;
              iVar60 = iVar41;
              iVar61 = iVar42;
              do {
                auVar67._0_4_ = iVar31 * 2;
                auVar67._4_4_ = iVar59 * 2;
                auVar67._8_4_ = iVar60 * 2;
                auVar67._12_4_ = iVar61 * 2;
                uVar34 = uVar34 - 8;
                auVar69 = NEON_neg(auVar67,4);
                auVar62._0_4_ = iVar31 * -2 + -8;
                auVar62._4_4_ = iVar59 * -2 + -8;
                auVar62._8_4_ = iVar60 * -2 + -8;
                auVar62._12_4_ = iVar61 * -2 + -8;
                auVar68._4_4_ = uVar6;
                auVar68._0_4_ = uVar6;
                auVar68._8_4_ = uVar6;
                auVar68._12_4_ = uVar6;
                auVar67 = NEON_ushl(auVar68,auVar69,4);
                auVar69._4_4_ = uVar6;
                auVar69._0_4_ = uVar6;
                auVar69._8_4_ = uVar6;
                auVar69._12_4_ = uVar6;
                auVar68 = NEON_ushl(auVar69,auVar62,4);
                uVar51 = auVar67._0_4_ + uVar51;
                iVar52 = auVar67._4_4_ + iVar52;
                iVar53 = auVar67._8_4_ + iVar53;
                iVar54 = auVar67._12_4_ + iVar54;
                iVar55 = auVar68._0_4_ + iVar55;
                iVar56 = auVar68._4_4_ + iVar56;
                iVar57 = auVar68._8_4_ + iVar57;
                iVar58 = auVar68._12_4_ + iVar58;
                iVar31 = iVar31 + 8;
                iVar59 = iVar59 + 8;
                iVar60 = iVar60 + 8;
                iVar61 = iVar61 + 8;
              } while (uVar34 != 0);
              uVar32 = (ulong)(iVar55 + uVar51 + iVar56 + iVar52 + iVar57 + iVar53 + iVar58 + iVar54
                              );
              uVar51 = uVar7;
              if (uVar8 == uVar2) goto LAB_008c0d9c;
            }
            iVar31 = iVar22 - uVar51;
            uVar51 = uVar51 << 1;
            do {
              iVar31 = iVar31 + -1;
              uVar32 = (ulong)((uVar6 >> (ulong)(uVar51 & 0x1f)) + (int)uVar32);
              uVar51 = uVar51 + 2;
            } while (iVar31 != 0);
          }
LAB_008c0d9c:
          uVar51 = uVar35;
          iVar31 = iVar25;
          uVar6 = uVar21;
          uVar34 = uVar18;
          uVar14 = uVar20;
          if (uVar27 != 0) {
LAB_008c0db4:
            if ((uVar6 & 1) == 0) {
              uVar51 = (uVar14 | uVar14 << 8) & 0xff00ff;
              uVar6 = (uVar6 + 1 | (uVar6 + 1) * 0x100) & 0xff00ff;
              uVar51 = (uVar51 | uVar51 << 4) & 0xf0f0f0f;
              uVar6 = (uVar6 | uVar6 << 4) & 0xf0f0f0f;
              uVar51 = (uVar51 | uVar51 << 2) & 0x33333333;
              uVar6 = (uVar6 | uVar6 << 2) & 0x33333333;
              uVar6 = ((uVar51 << 2 | uVar51 << 1) & 0xaaaaaaaa | (uVar6 | uVar6 << 1) & 0x55555555)
                      << (ulong)(uVar34 & 0x1f);
              uVar51 = uVar6 - iVar31;
              if (2 < uVar4) {
                if (uVar8 < 8) {
                  uVar34 = 1;
                }
                else {
                  iVar53 = 0;
                  iVar54 = 0;
                  iVar55 = 0;
                  iVar56 = 0;
                  iVar57 = 0;
                  iVar58 = 0;
                  iVar52 = 0;
                  uVar34 = uVar2;
                  iVar31 = iVar39;
                  iVar59 = iVar40;
                  iVar60 = iVar41;
                  iVar61 = iVar42;
                  do {
                    auVar63._0_4_ = iVar31 * 2;
                    auVar63._4_4_ = iVar59 * 2;
                    auVar63._8_4_ = iVar60 * 2;
                    auVar63._12_4_ = iVar61 * 2;
                    uVar34 = uVar34 - 8;
                    auVar68 = NEON_neg(auVar63,4);
                    auVar64._0_4_ = iVar31 * -2 + -8;
                    auVar64._4_4_ = iVar59 * -2 + -8;
                    auVar64._8_4_ = iVar60 * -2 + -8;
                    auVar64._12_4_ = iVar61 * -2 + -8;
                    auVar12._4_4_ = uVar6;
                    auVar12._0_4_ = uVar6;
                    auVar12._8_4_ = uVar6;
                    auVar12._12_4_ = uVar6;
                    auVar69 = NEON_ushl(auVar12,auVar68,4);
                    auVar13._4_4_ = uVar6;
                    auVar13._0_4_ = uVar6;
                    auVar13._8_4_ = uVar6;
                    auVar13._12_4_ = uVar6;
                    auVar68 = NEON_ushl(auVar13,auVar64,4);
                    uVar51 = auVar69._0_4_ + uVar51;
                    iVar52 = auVar69._4_4_ + iVar52;
                    iVar53 = auVar69._8_4_ + iVar53;
                    iVar54 = auVar69._12_4_ + iVar54;
                    iVar55 = auVar68._0_4_ + iVar55;
                    iVar56 = auVar68._4_4_ + iVar56;
                    iVar57 = auVar68._8_4_ + iVar57;
                    iVar58 = auVar68._12_4_ + iVar58;
                    iVar31 = iVar31 + 8;
                    iVar59 = iVar59 + 8;
                    iVar60 = iVar60 + 8;
                    iVar61 = iVar61 + 8;
                  } while (uVar34 != 0);
                  uVar51 = iVar55 + uVar51 + iVar56 + iVar52 + iVar57 + iVar53 + iVar58 + iVar54;
                  uVar34 = uVar7;
                  if (uVar8 == uVar2) goto LAB_008c0ca8;
                }
                iVar31 = iVar22 - uVar34;
                uVar34 = uVar34 << 1;
                do {
                  iVar31 = iVar31 + -1;
                  uVar51 = (uVar6 >> (ulong)(uVar34 & 0x1f)) + uVar51;
                  uVar34 = uVar34 + 2;
                } while (iVar31 != 0);
              }
            }
            else {
              if ((uVar14 & 1) != 0) goto code_r0x008c0dbc;
              uVar51 = (uVar6 - 1 | (uVar6 - 1) * 0x100) & 0xff00ff;
              uVar6 = (uVar14 + 1 | (uVar14 + 1) * 0x100) & 0xff00ff;
              uVar51 = (uVar51 | uVar51 << 4) & 0xf0f0f0f;
              uVar6 = (uVar6 | uVar6 << 4) & 0xf0f0f0f;
              uVar51 = (uVar51 | uVar51 << 2) & 0x33333333;
              uVar6 = (uVar6 | uVar6 << 2) & 0x33333333;
              uVar6 = ((uVar6 << 2 | uVar6 << 1) & 0xaaaaaaaa | (uVar51 | uVar51 << 1) & 0x55555555)
                      << (ulong)(uVar34 & 0x1f);
              uVar51 = uVar6 - iVar31;
              if (2 < uVar4) {
                if (uVar8 < 8) {
                  uVar34 = 1;
                }
                else {
                  iVar53 = 0;
                  iVar54 = 0;
                  iVar55 = 0;
                  iVar56 = 0;
                  iVar57 = 0;
                  iVar58 = 0;
                  iVar52 = 0;
                  uVar34 = uVar2;
                  iVar31 = iVar39;
                  iVar59 = iVar40;
                  iVar60 = iVar41;
                  iVar61 = iVar42;
                  do {
                    auVar65._0_4_ = iVar31 * 2;
                    auVar65._4_4_ = iVar59 * 2;
                    auVar65._8_4_ = iVar60 * 2;
                    auVar65._12_4_ = iVar61 * 2;
                    uVar34 = uVar34 - 8;
                    auVar68 = NEON_neg(auVar65,4);
                    auVar66._0_4_ = iVar31 * -2 + -8;
                    auVar66._4_4_ = iVar59 * -2 + -8;
                    auVar66._8_4_ = iVar60 * -2 + -8;
                    auVar66._12_4_ = iVar61 * -2 + -8;
                    auVar10._4_4_ = uVar6;
                    auVar10._0_4_ = uVar6;
                    auVar10._8_4_ = uVar6;
                    auVar10._12_4_ = uVar6;
                    auVar69 = NEON_ushl(auVar10,auVar68,4);
                    auVar11._4_4_ = uVar6;
                    auVar11._0_4_ = uVar6;
                    auVar11._8_4_ = uVar6;
                    auVar11._12_4_ = uVar6;
                    auVar68 = NEON_ushl(auVar11,auVar66,4);
                    uVar51 = auVar69._0_4_ + uVar51;
                    iVar52 = auVar69._4_4_ + iVar52;
                    iVar53 = auVar69._8_4_ + iVar53;
                    iVar54 = auVar69._12_4_ + iVar54;
                    iVar55 = auVar68._0_4_ + iVar55;
                    iVar56 = auVar68._4_4_ + iVar56;
                    iVar57 = auVar68._8_4_ + iVar57;
                    iVar58 = auVar68._12_4_ + iVar58;
                    iVar31 = iVar31 + 8;
                    iVar59 = iVar59 + 8;
                    iVar60 = iVar60 + 8;
                    iVar61 = iVar61 + 8;
                  } while (uVar34 != 0);
                  uVar51 = iVar55 + uVar51 + iVar56 + iVar52 + iVar57 + iVar53 + iVar58 + iVar54;
                  uVar34 = uVar7;
                  if (uVar8 == uVar2) goto LAB_008c0ca8;
                }
                iVar31 = iVar22 - uVar34;
                uVar34 = uVar34 << 1;
                do {
                  iVar31 = iVar31 + -1;
                  uVar51 = (uVar6 >> (ulong)(uVar34 & 0x1f)) + uVar51;
                  uVar34 = uVar34 + 2;
                } while (iVar31 != 0);
              }
            }
          }
LAB_008c0ca8:
          puVar16 = puVar24 + uVar32 * 9;
          uVar21 = uVar21 + 1;
          *(float *)(puVar16 + 6) = fVar50;
          *(float *)((long)puVar16 + 0x34) = fVar49;
          fVar50 = fVar43 + fVar50;
          *(uint *)((long)puVar16 + 0x44) = uVar51;
          *(float *)(puVar16 + 7) = fVar45;
          *(float *)((long)puVar16 + 0x3c) = fVar46;
          *(float *)(puVar16 + 8) = SQRT(fVar47);
          *(undefined4 *)(puVar16 + 1) = 0;
          *puVar16 = 0;
          *(undefined4 *)(puVar16 + 3) = 0;
          puVar16[2] = 0;
          *(undefined4 *)(puVar16 + 5) = 0;
          puVar16[4] = 0;
        } while (uVar21 != uVar19);
        fVar49 = fVar44 + fVar49;
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar19);
    }
    uVar27 = uVar27 + 1;
    if (uVar27 == uVar4) goto LAB_008c0fc8;
    puVar24 = *in_x0;
    uVar19 = uVar19 << 1;
    iVar25 = iVar25 + -1;
    fVar43 = fVar45;
    fVar44 = fVar46;
  } while( true );
code_r0x008c0dbc:
  bVar15 = iVar31 == -1;
  iVar31 = iVar31 + 1;
  uVar6 = uVar6 >> 1;
  uVar34 = uVar34 + 2;
  uVar14 = uVar14 >> 1;
  if (bVar15) goto LAB_008c0ca8;
  goto LAB_008c0db4;
}


