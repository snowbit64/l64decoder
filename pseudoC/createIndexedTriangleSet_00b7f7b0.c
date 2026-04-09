// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createIndexedTriangleSet
// Entry Point: 00b7f7b0
// Size: 1544 bytes
// Signature: undefined createIndexedTriangleSet(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IndexedTriangleSetBuilder::createIndexedTriangleSet() */

IndexedTriangleSet * IndexedTriangleSetBuilder::createIndexedTriangleSet(void)

{
  undefined (*pauVar1) [16];
  long lVar2;
  int *piVar3;
  long lVar4;
  uint uVar5;
  ushort uVar6;
  long lVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  uint uVar20;
  bool bVar21;
  long *in_x0;
  IndexedTriangleSet *this;
  ulong uVar22;
  long lVar23;
  uint *puVar24;
  ushort *puVar25;
  ulong uVar26;
  undefined (*pauVar27) [16];
  undefined8 *puVar28;
  ulong uVar29;
  uint uVar30;
  long lVar31;
  ulong uVar32;
  void *pvVar33;
  int iVar34;
  long lVar35;
  long lVar36;
  undefined2 uVar37;
  undefined2 uVar38;
  undefined2 uVar39;
  undefined2 uVar40;
  undefined2 uVar41;
  undefined2 uVar42;
  undefined2 uVar43;
  undefined2 uVar44;
  undefined2 uVar45;
  undefined2 uVar46;
  undefined2 uVar47;
  undefined2 uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  undefined auVar54 [16];
  float fVar55;
  uint uVar56;
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
  undefined auVar63 [16];
  void *local_a0;
  void *local_98;
  undefined8 local_90;
  long local_88;
  
  lVar7 = tpidr_el0;
  local_88 = *(long *)(lVar7 + 0x28);
  local_a0 = (void *)0x0;
  local_98 = (void *)0x0;
  local_90 = 0;
                    /* try { // try from 00b7f7f0 to 00b7f7f7 has its CatchHandler @ 00b7fdd0 */
  buildGroups((IndexedTriangleSetBuilder *)in_x0,(vector *)&local_a0);
                    /* try { // try from 00b7f7f8 to 00b7f7ff has its CatchHandler @ 00b7fdcc */
  this = (IndexedTriangleSet *)operator_new(0x90);
                    /* try { // try from 00b7f804 to 00b7f807 has its CatchHandler @ 00b7fdbc */
  IndexedTriangleSet::IndexedTriangleSet(this);
  lVar23 = in_x0[3];
  lVar4 = in_x0[4];
  uVar32 = (in_x0[1] - *in_x0 >> 4) * 0xb6db6db7;
  uVar30 = (uint)uVar32;
                    /* try { // try from 00b7f830 to 00b7f84f has its CatchHandler @ 00b7fdd4 */
  TriangleSet::setNumVertices((TriangleSet *)this,uVar30,*(uint *)(in_x0 + 6));
  iVar34 = (int)((ulong)(lVar4 - lVar23) >> 4);
  IndexedTriangleSet::setNumIndices(this,iVar34 * 3);
  if (uVar30 != 0) {
    lVar35 = 0;
    lVar31 = 0;
    uVar30 = *(uint *)(this + 0xc);
    do {
      lVar36 = *in_x0;
      uVar49 = (uint)lVar31;
                    /* try { // try from 00b7f88c to 00b7f96b has its CatchHandler @ 00b7fdec */
      TriangleSet::setPosition((TriangleSet *)this,(float *)(lVar36 + lVar35),uVar49);
      uVar56 = *(uint *)(in_x0 + 6);
      if ((uVar56 & 1) != 0) {
        TriangleSet::setNormal((TriangleSet *)this,(float *)(lVar36 + lVar35 + 0x2c),uVar49);
        uVar56 = *(uint *)(in_x0 + 6);
      }
      if ((uVar56 >> 7 & 1) != 0) {
        TriangleSet::setTangent((TriangleSet *)this,(float *)(lVar36 + lVar35 + 0x48),uVar49);
        uVar56 = *(uint *)(in_x0 + 6);
      }
      if ((uVar56 >> 1 & 1) != 0) {
        TriangleSet::setTexCoord((TriangleSet *)this,(float *)(lVar36 + lVar35 + 0xc),0,uVar49);
        uVar56 = *(uint *)(in_x0 + 6);
      }
      if ((uVar56 >> 2 & 1) != 0) {
        TriangleSet::setTexCoord((TriangleSet *)this,(float *)(lVar36 + lVar35 + 0x14),1,uVar49);
        uVar56 = *(uint *)(in_x0 + 6);
      }
      if ((uVar56 >> 3 & 1) != 0) {
        TriangleSet::setTexCoord((TriangleSet *)this,(float *)(lVar36 + lVar35 + 0x1c),2,uVar49);
        uVar56 = *(uint *)(in_x0 + 6);
      }
      if ((uVar56 >> 4 & 1) != 0) {
        TriangleSet::setTexCoord((TriangleSet *)this,(float *)(lVar36 + lVar35 + 0x24),3,uVar49);
        uVar56 = *(uint *)(in_x0 + 6);
      }
      if ((uVar56 >> 5 & 1) != 0) {
        TriangleSet::setColor((TriangleSet *)this,(float *)(lVar36 + lVar35 + 0x38),uVar49);
        uVar56 = *(uint *)(in_x0 + 6);
      }
      if ((uVar56 >> 6 & 1) != 0) {
        if ((uVar30 >> 8 & 1) == 0) {
          lVar2 = lVar36 + lVar35;
          auVar57 = *(undefined (*) [16])(lVar2 + 0x58);
          fVar55 = auVar57._0_4_ + auVar57._4_4_ + auVar57._8_4_ + auVar57._12_4_;
          if (0.0 < fVar55) {
            fVar55 = 1.0 / fVar55;
            *(float *)(lVar2 + 0x68) = auVar57._8_4_ * fVar55;
            *(float *)(lVar2 + 0x6c) = auVar57._12_4_ * fVar55;
            *(float *)(lVar2 + 0x58) = auVar57._0_4_ * fVar55;
            *(float *)(lVar2 + 0x5c) = auVar57._4_4_ * fVar55;
          }
                    /* try { // try from 00b7f9b0 to 00b7f9bb has its CatchHandler @ 00b7fdd8 */
          TriangleSet::setBlendWeights
                    ((TriangleSet *)this,(float *)(undefined (*) [16])(lVar2 + 0x58),uVar49);
        }
                    /* try { // try from 00b7f9c4 to 00b7f9cf has its CatchHandler @ 00b7fdec */
        TriangleSet::setBlendIndices((TriangleSet *)this,(uchar *)(lVar36 + lVar35 + 0x68),uVar49);
        uVar56 = *(uint *)(in_x0 + 6);
      }
      if ((uVar56 >> 9 & 1) != 0) {
        *(undefined4 *)(*(long *)(this + 0x60) + lVar31 * 4) =
             *(undefined4 *)(lVar36 + lVar35 + 0x6c);
      }
      lVar31 = lVar31 + 1;
      lVar35 = lVar35 + 0x70;
    } while ((uVar32 & 0xffffffff) * 0x70 - lVar35 != 0);
  }
  if (iVar34 != 0) {
    lVar31 = 0;
    uVar30 = 2;
    do {
      lVar35 = in_x0[3];
                    /* try { // try from 00b7fa0c to 00b7fa37 has its CatchHandler @ 00b7fde8 */
      IndexedTriangleSet::setIndex(this,*(uint *)(lVar35 + lVar31),uVar30 - 2);
      lVar35 = lVar35 + lVar31;
      IndexedTriangleSet::setIndex(this,*(uint *)(lVar35 + 4),uVar30 - 1);
      IndexedTriangleSet::setIndex(this,*(uint *)(lVar35 + 8),uVar30);
      uVar30 = uVar30 + 3;
      lVar31 = lVar31 + 0x10;
    } while (((ulong)(lVar4 - lVar23) >> 4 & 0xffffffff) * 0x10 - lVar31 != 0);
  }
                    /* try { // try from 00b7fa54 to 00b7fa5b has its CatchHandler @ 00b7fdb8 */
  IndexedTriangleSet::setNumSubsets(this,(uint)((ulong)((long)local_98 - (long)local_a0) >> 3));
  pvVar33 = local_98;
  if (local_98 != local_a0) {
    uVar32 = 0;
    do {
                    /* try { // try from 00b7fa70 to 00b7fac7 has its CatchHandler @ 00b7fde0 */
      pvVar33 = local_a0;
      uVar22 = IndexedTriangleSet::is16Bit();
      piVar3 = (int *)((long)pvVar33 + uVar32 * 8);
      uVar30 = piVar3[1];
      if ((uVar22 & 1) == 0) {
        lVar23 = IndexedTriangleSet::getIndices32();
        if (uVar30 == 0) goto LAB_00b7fafc;
        if (uVar30 * 3 == 0) {
          uVar56 = 0;
          uVar49 = 0xffffffff;
        }
        else {
          uVar56 = uVar30 * 3 - 1;
          puVar24 = (uint *)(lVar23 + (ulong)(uint)(*piVar3 * 3) * 4);
          if (uVar56 < 7) {
            uVar56 = 0;
            uVar26 = 0;
            uVar49 = 0xffffffff;
          }
          else {
            uVar22 = (ulong)uVar56 + 1;
            uVar26 = uVar22 & 0x1fffffff8;
            pauVar27 = (undefined (*) [16])(lVar23 + (ulong)(uint)(*piVar3 * 3) * 4 + 0x10);
            auVar54 = ZEXT816(0);
            auVar57._8_8_ = 0xffffffffffffffff;
            auVar57._0_8_ = 0xffffffffffffffff;
            puVar24 = puVar24 + uVar26;
            auVar61._8_8_ = 0xffffffffffffffff;
            auVar61._0_8_ = 0xffffffffffffffff;
            auVar58 = ZEXT816(0);
            uVar29 = uVar26;
            do {
              pauVar1 = pauVar27 + -1;
              auVar59 = *pauVar27;
              pauVar27 = pauVar27 + 2;
              uVar29 = uVar29 - 8;
              auVar54 = NEON_umax(auVar54,*pauVar1,4);
              auVar57 = NEON_umin(*pauVar1,auVar57,4);
              auVar58 = NEON_umax(auVar58,auVar59,4);
              auVar61 = NEON_umin(auVar59,auVar61,4);
            } while (uVar29 != 0);
            auVar54 = NEON_umax(auVar54,auVar58,4);
            auVar57 = NEON_umin(auVar57,auVar61,4);
            uVar56 = NEON_umaxv(auVar54,4);
            uVar49 = NEON_uminv(auVar57,4);
            if (uVar22 == uVar26) goto LAB_00b7fc78;
          }
          iVar34 = (int)uVar26 + uVar30 * -3;
          uVar30 = uVar56;
          do {
            uVar5 = *puVar24;
            uVar56 = uVar5;
            if (uVar5 <= uVar30) {
              uVar56 = uVar30;
            }
            if (uVar49 <= uVar5) {
              uVar5 = uVar49;
            }
            bVar21 = iVar34 != -1;
            iVar34 = iVar34 + 1;
            puVar24 = puVar24 + 1;
            uVar49 = uVar5;
            uVar30 = uVar56;
          } while (bVar21);
        }
LAB_00b7fc78:
        uVar30 = uVar49;
        iVar34 = uVar56 - uVar30;
LAB_00b7fc7c:
        uVar56 = iVar34 + 1;
      }
      else {
        lVar23 = IndexedTriangleSet::getIndices16();
        if (uVar30 != 0) {
          if (uVar30 * 3 == 0) {
            uVar30 = 0xffffffff;
            iVar34 = 1;
            goto LAB_00b7fc7c;
          }
          uVar56 = uVar30 * 3 - 1;
          puVar25 = (ushort *)(lVar23 + (ulong)(uint)(*piVar3 * 3) * 2);
          if (uVar56 < 0xf) {
            uVar56 = 0;
            uVar26 = 0;
            uVar49 = 0xffffffff;
LAB_00b7fbc8:
            iVar34 = (int)uVar26 + uVar30 * -3;
            uVar30 = uVar56;
            do {
              uVar6 = *puVar25;
              uVar56 = (uint)uVar6;
              if (uVar6 <= uVar30) {
                uVar56 = uVar30;
              }
              uVar30 = (uint)uVar6;
              if (uVar49 <= uVar6) {
                uVar30 = uVar49;
              }
              bVar21 = iVar34 != -1;
              iVar34 = iVar34 + 1;
              puVar25 = puVar25 + 1;
              uVar49 = uVar30;
              uVar30 = uVar56;
            } while (bVar21);
          }
          else {
            uVar22 = (ulong)uVar56 + 1;
            uVar26 = uVar22 & 0x1fffffff0;
            puVar28 = (undefined8 *)(lVar23 + (ulong)(uint)(*piVar3 * 3) * 2 + 0x10);
            auVar57 = ZEXT816(0);
            auVar54._8_8_ = 0xffffffffffffffff;
            auVar54._0_8_ = 0xffffffffffffffff;
            puVar25 = puVar25 + uVar26;
            auVar58._8_8_ = 0xffffffffffffffff;
            auVar58._0_8_ = 0xffffffffffffffff;
            auVar59._8_8_ = 0xffffffffffffffff;
            auVar59._0_8_ = 0xffffffffffffffff;
            auVar60._8_8_ = 0xffffffffffffffff;
            auVar60._0_8_ = 0xffffffffffffffff;
            auVar61 = ZEXT816(0);
            auVar62 = ZEXT816(0);
            auVar63 = ZEXT816(0);
            uVar29 = uVar26;
            do {
              uVar11 = puVar28[-1];
              uVar10 = puVar28[-2];
              uVar15 = puVar28[1];
              uVar14 = *puVar28;
              puVar28 = puVar28 + 4;
              uVar29 = uVar29 - 0x10;
              uVar37 = (undefined2)((ulong)uVar11 >> 0x10);
              uVar41 = (undefined2)((ulong)uVar11 >> 0x20);
              uVar45 = (undefined2)((ulong)uVar11 >> 0x30);
              uVar38 = (undefined2)((ulong)uVar10 >> 0x10);
              uVar42 = (undefined2)((ulong)uVar10 >> 0x20);
              uVar46 = (undefined2)((ulong)uVar10 >> 0x30);
              uVar39 = (undefined2)((ulong)uVar15 >> 0x10);
              uVar43 = (undefined2)((ulong)uVar15 >> 0x20);
              uVar47 = (undefined2)((ulong)uVar15 >> 0x30);
              uVar40 = (undefined2)((ulong)uVar14 >> 0x10);
              uVar44 = (undefined2)((ulong)uVar14 >> 0x20);
              uVar48 = (undefined2)((ulong)uVar14 >> 0x30);
              auVar16._6_2_ = 0;
              auVar16._0_6_ = CONCAT24(uVar37,(int)uVar11) & 0xffff0000ffff;
              auVar16._8_2_ = uVar41;
              auVar16._10_2_ = 0;
              auVar16._12_2_ = uVar45;
              auVar16._14_2_ = 0;
              auVar61 = NEON_umax(auVar61,auVar16,4);
              auVar8._6_2_ = 0;
              auVar8._0_6_ = CONCAT24(uVar38,(int)uVar10) & 0xffff0000ffff;
              auVar8._8_2_ = uVar42;
              auVar8._10_2_ = 0;
              auVar8._12_2_ = uVar46;
              auVar8._14_2_ = 0;
              auVar57 = NEON_umax(auVar57,auVar8,4);
              auVar18._6_2_ = 0;
              auVar18._0_6_ = CONCAT24(uVar39,(int)uVar15) & 0xffff0000ffff;
              auVar18._8_2_ = uVar43;
              auVar18._10_2_ = 0;
              auVar18._12_2_ = uVar47;
              auVar18._14_2_ = 0;
              auVar63 = NEON_umax(auVar63,auVar18,4);
              auVar12._6_2_ = 0;
              auVar12._0_6_ = CONCAT24(uVar40,(int)uVar14) & 0xffff0000ffff;
              auVar12._8_2_ = uVar44;
              auVar12._10_2_ = 0;
              auVar12._12_2_ = uVar48;
              auVar12._14_2_ = 0;
              auVar62 = NEON_umax(auVar62,auVar12,4);
              auVar17._6_2_ = 0;
              auVar17._0_6_ = CONCAT24(uVar37,(int)uVar11) & 0xffff0000ffff;
              auVar17._8_2_ = uVar41;
              auVar17._10_2_ = 0;
              auVar17._12_2_ = uVar45;
              auVar17._14_2_ = 0;
              auVar58 = NEON_umin(auVar58,auVar17,4);
              auVar9._6_2_ = 0;
              auVar9._0_6_ = CONCAT24(uVar38,(int)uVar10) & 0xffff0000ffff;
              auVar9._8_2_ = uVar42;
              auVar9._10_2_ = 0;
              auVar9._12_2_ = uVar46;
              auVar9._14_2_ = 0;
              auVar54 = NEON_umin(auVar54,auVar9,4);
              auVar19._6_2_ = 0;
              auVar19._0_6_ = CONCAT24(uVar39,(int)uVar15) & 0xffff0000ffff;
              auVar19._8_2_ = uVar43;
              auVar19._10_2_ = 0;
              auVar19._12_2_ = uVar47;
              auVar19._14_2_ = 0;
              auVar60 = NEON_umin(auVar60,auVar19,4);
              auVar13._6_2_ = 0;
              auVar13._0_6_ = CONCAT24(uVar40,(int)uVar14) & 0xffff0000ffff;
              auVar13._8_2_ = uVar44;
              auVar13._10_2_ = 0;
              auVar13._12_2_ = uVar48;
              auVar13._14_2_ = 0;
              auVar59 = NEON_umin(auVar59,auVar13,4);
            } while (uVar29 != 0);
            auVar62 = NEON_umax(auVar57,auVar62,4);
            auVar63 = NEON_umax(auVar61,auVar63,4);
            auVar57 = NEON_umin(auVar54,auVar59,4);
            auVar61 = NEON_umin(auVar58,auVar60,4);
            auVar54 = NEON_umax(auVar62,auVar63,4);
            auVar57 = NEON_umin(auVar57,auVar61,4);
            uVar56 = NEON_umaxv(auVar54,4);
            uVar49 = NEON_uminv(auVar57,4);
            if (uVar22 != uVar26) goto LAB_00b7fbc8;
          }
          uVar30 = uVar49;
          iVar34 = uVar56 - uVar30;
          goto LAB_00b7fc7c;
        }
LAB_00b7fafc:
        uVar56 = 0;
      }
      uVar51 = 0;
      uVar50 = 0;
      uVar5 = *piVar3 * 3;
      uVar49 = *(uint *)(in_x0 + 6);
      uVar20 = *(int *)((long)pvVar33 + uVar32 * 8 + 4) * 3;
      if ((uVar49 >> 1 & 1) != 0) {
                    /* try { // try from 00b7fca4 to 00b7fd1f has its CatchHandler @ 00b7fddc */
        uVar50 = IndexedTriangleSet::computeUvDensity(this,0,uVar5,uVar20);
        uVar49 = *(uint *)(in_x0 + 6);
      }
      if ((uVar49 >> 2 & 1) != 0) {
        uVar51 = IndexedTriangleSet::computeUvDensity(this,1,uVar5,uVar20);
        uVar49 = *(uint *)(in_x0 + 6);
      }
      uVar53 = 0;
      uVar52 = 0;
      if ((uVar49 >> 3 & 1) != 0) {
        uVar52 = IndexedTriangleSet::computeUvDensity(this,2,uVar5,uVar20);
        uVar49 = *(uint *)(in_x0 + 6);
      }
      if ((uVar49 >> 4 & 1) != 0) {
        uVar53 = IndexedTriangleSet::computeUvDensity(this,3,uVar5,uVar20);
      }
                    /* try { // try from 00b7fd24 to 00b7fd53 has its CatchHandler @ 00b7fde4 */
      puVar24 = (uint *)operator_new(0x20);
      puVar24[4] = uVar50;
      puVar24[5] = uVar51;
      puVar24[6] = uVar52;
      puVar24[7] = uVar53;
      *puVar24 = uVar30;
      puVar24[1] = uVar56;
      puVar24[2] = uVar5;
      puVar24[3] = uVar20;
      IndexedTriangleSet::setSubset(this,(IndexedTriangleSubset *)puVar24,(uint)uVar32);
      uVar32 = (ulong)((uint)uVar32 + 1);
      pvVar33 = local_a0;
    } while (uVar32 < (ulong)((long)local_98 - (long)local_a0 >> 3));
  }
  if (pvVar33 != (void *)0x0) {
    local_98 = pvVar33;
    operator_delete(pvVar33);
  }
  if (*(long *)(lVar7 + 0x28) == local_88) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


