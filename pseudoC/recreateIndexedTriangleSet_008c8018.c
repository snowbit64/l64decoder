// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: recreateIndexedTriangleSet
// Entry Point: 008c8018
// Size: 2136 bytes
// Signature: undefined __cdecl recreateIndexedTriangleSet(IndexedTriangleSet * param_1, uint param_2, uint param_3, uchar * param_4, uint param_5, ushort * param_6, bool param_7, float * param_8, float param_9)


/* WARNING: Type propagation algorithm not settling */
/* IndexedTriangleSetGeometryUtil::recreateIndexedTriangleSet(IndexedTriangleSet*, unsigned int,
   unsigned int, unsigned char const*, unsigned int, unsigned short const*, bool, float*, float) */

void IndexedTriangleSetGeometryUtil::recreateIndexedTriangleSet
               (IndexedTriangleSet *param_1,uint param_2,uint param_3,uchar *param_4,uint param_5,
               ushort *param_6,bool param_7,float *param_8,float param_9)

{
  short *psVar1;
  undefined (*pauVar2) [16];
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  bool bVar10;
  undefined4 *puVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  float *pfVar17;
  undefined (*pauVar18) [16];
  ushort *puVar19;
  short *psVar20;
  int *piVar21;
  uint *puVar22;
  uint uVar23;
  ulong uVar24;
  uchar *puVar25;
  int iVar26;
  ulong uVar27;
  uint uVar28;
  ushort uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  int iVar34;
  undefined8 uVar35;
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  short sVar39;
  int iVar40;
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  short sVar45;
  
  uVar24 = (ulong)param_5;
  IndexedTriangleSet::setNumIndices(param_1,param_5);
  if (param_5 == 0) {
    uVar28 = 0xffff;
    uVar29 = 0xffff;
    goto LAB_008c8120;
  }
  if (param_5 < 0x10) {
    uVar13 = 0;
    uVar29 = 0xffff;
LAB_008c80d8:
    lVar14 = uVar24 - uVar13;
    puVar19 = param_6 + uVar13;
    do {
      uVar9 = *puVar19;
      if (uVar29 <= *puVar19) {
        uVar9 = uVar29;
      }
      uVar29 = uVar9;
      lVar14 = lVar14 + -1;
      puVar19 = puVar19 + 1;
    } while (lVar14 != 0);
  }
  else {
    uVar13 = uVar24 & 0xfffffff0;
    pauVar18 = (undefined (*) [16])(param_6 + 8);
    auVar38._8_8_ = 0xffffffffffffffff;
    auVar38._0_8_ = 0xffffffffffffffff;
    auVar36._8_8_ = 0xffffffffffffffff;
    auVar36._0_8_ = 0xffffffffffffffff;
    uVar27 = uVar13;
    do {
      pauVar2 = pauVar18 + -1;
      auVar41 = *pauVar18;
      pauVar18 = pauVar18 + 2;
      uVar27 = uVar27 - 0x10;
      auVar38 = NEON_umin(auVar38,*pauVar2,2);
      auVar36 = NEON_umin(auVar36,auVar41,2);
    } while (uVar27 != 0);
    auVar38 = NEON_umin(auVar38,auVar36,2);
    uVar29 = NEON_uminv(auVar38,2);
    if (uVar13 != uVar24) goto LAB_008c80d8;
  }
  uVar28 = (uint)uVar29;
  if (param_5 != 0) {
    uVar27 = 0;
    do {
      IndexedTriangleSet::setIndex(param_1,param_6[uVar27] - uVar28,(uint)uVar27);
      uVar27 = uVar27 + 1;
    } while (uVar24 != uVar27);
  }
LAB_008c8120:
  uVar4 = param_2 >> 2 & 8;
  uVar23 = 0x13;
  if ((param_2 & 0x140) != 0x40) {
    uVar23 = 1;
  }
  uVar7 = param_2 << 4;
  uVar5 = uVar23 | 4;
  if ((param_2 & 0x140) != 0x140 && (param_2 & 0x201) == 0) {
    uVar5 = uVar23;
  }
  uVar8 = (param_2 >> 7 & 1) << 9 |
          uVar4 | (param_2 >> 1 & 1) << 5 | (param_2 >> 2 & 1) << 6 | (param_2 >> 3 & 1) << 7 |
          (param_2 >> 4 & 1) << 8 | uVar5;
  uVar24 = 0;
  uVar23 = 0;
  puVar6 = VERTEX_ATTRIBUTE_TYPES_POSITION32;
  if (!param_7) {
    puVar6 = VERTEX_ATTRIBUTE_TYPES;
  }
  do {
    if ((uVar8 & 1) != 0) {
      uVar23 = (&VertexDeclarationDesc::VERTEX_ELEMENT_TYPE_SIZES)[*(uint *)(puVar6 + uVar24 * 4)] +
               uVar23;
    }
    if (uVar8 < 2) break;
    bVar10 = uVar24 < 10;
    uVar8 = uVar8 >> 1;
    uVar24 = uVar24 + 1;
  } while (bVar10);
  TriangleSet::setNumVertices((TriangleSet *)param_1,param_3,param_2);
  lVar14 = TriangleSet::getPositions();
  iVar26 = param_3 - uVar28;
  uVar24 = (ulong)uVar23;
  if (param_7) {
    if (iVar26 == 0) {
      lVar14 = 0xc;
    }
    else {
      pfVar17 = (float *)(lVar14 + (ulong)(uVar28 * 3) * 4);
      piVar21 = (int *)(param_4 + (ulong)(uVar23 * uVar28) + 8);
      lVar14 = 0xc;
      iVar12 = iVar26;
      do {
        piVar3 = piVar21 + -2;
        iVar34 = piVar21[-1];
        iVar40 = *piVar21;
        iVar12 = iVar12 + -1;
        piVar21 = (int *)((long)piVar21 + uVar24);
        *pfVar17 = (float)*piVar3 / param_9 + *param_8;
        pfVar17[1] = (float)iVar34 / param_9 + param_8[1];
        pfVar17[2] = (float)iVar40 / param_9 + param_8[2];
        pfVar17 = pfVar17 + 3;
      } while (iVar12 != 0);
    }
  }
  else if (iVar26 == 0) {
    lVar14 = 8;
  }
  else {
    pfVar17 = (float *)(lVar14 + (ulong)(uVar28 * 3) * 4);
    psVar20 = (short *)(param_4 + (ulong)(uVar23 * uVar28) + 4);
    lVar14 = 8;
    iVar12 = iVar26;
    do {
      psVar1 = psVar20 + -2;
      iVar12 = iVar12 + -1;
      sVar39 = psVar20[-1];
      sVar45 = *psVar20;
      psVar20 = (short *)((long)psVar20 + uVar24);
      *pfVar17 = (float)(int)*psVar1 / param_9 + *param_8;
      pfVar17[1] = (float)(int)sVar39 / param_9 + param_8[1];
      pfVar17[2] = (float)(int)sVar45 / param_9 + param_8[2];
      pfVar17 = pfVar17 + 3;
    } while (iVar12 != 0);
  }
  puVar25 = param_4 + lVar14;
  if ((uVar5 & 2) != 0) {
    lVar14 = TriangleSet::getBlendWeights();
    iVar12 = param_3 - uVar28;
    if (iVar12 != 0) {
      puVar22 = (uint *)((long)puVar25 + (ulong)(uVar23 * uVar28));
      pfVar17 = (float *)(lVar14 + (ulong)(uVar28 << 2) * 4);
      do {
        uVar8 = *puVar22;
        puVar22 = (uint *)((long)puVar22 + uVar24);
        iVar12 = iVar12 + -1;
        auVar38 = NEON_ext(ZEXT416(uVar8),ZEXT416(uVar8),4,1);
        auVar41._0_8_ = NEON_ushl(CONCAT44(uVar8,uVar8),0xfffffff0fffffff8,4);
        auVar41._8_8_ = 0;
        auVar38 = NEON_ext(auVar38,auVar41,0xc,1);
        uVar27 = (ulong)CONCAT16((char)(uVar8 >> 0x18),
                                 CONCAT24(auVar38._8_2_,CONCAT22(auVar38._4_2_,auVar38._0_2_))) &
                 0xff00ff00ff00ff;
        auVar42._2_2_ = 0;
        auVar42._0_2_ = (ushort)uVar27;
        auVar42._4_2_ = (short)(uVar27 >> 0x10);
        auVar42._6_2_ = 0;
        auVar42._8_2_ = (short)(uVar27 >> 0x20);
        auVar42._10_2_ = 0;
        auVar42._12_2_ = (short)(uVar27 >> 0x30);
        auVar42._14_2_ = 0;
        auVar38 = NEON_ucvtf(auVar42,4);
        pfVar17[4] = auVar38._8_4_ / 255.0;
        pfVar17[5] = auVar38._12_4_ / 255.0;
        *pfVar17 = auVar38._0_4_ / 255.0;
        pfVar17[1] = auVar38._4_4_ / 255.0;
        pfVar17 = pfVar17 + 4;
      } while (iVar12 != 0);
    }
    puVar25 = (uchar *)((long)puVar25 + 4);
  }
  if ((uVar5 & 4) != 0) {
    lVar14 = TriangleSet::getNormals();
    iVar12 = param_3 - uVar28;
    if (iVar12 != 0) {
      pfVar17 = (float *)(lVar14 + (ulong)(uVar28 * 3) * 4);
      psVar20 = (short *)((long)puVar25 + (ulong)(uVar23 * uVar28) + 4);
      do {
        psVar1 = psVar20 + -2;
        sVar39 = psVar20[-1];
        iVar12 = iVar12 + -1;
        sVar45 = *psVar20;
        psVar20 = (short *)((long)psVar20 + uVar24);
        *pfVar17 = (float)(int)*psVar1 / 32767.0;
        pfVar17[1] = (float)(int)sVar39 / 32767.0;
        pfVar17[2] = (float)(int)sVar45 / 32767.0;
        pfVar17 = pfVar17 + 3;
      } while (iVar12 != 0);
    }
    if (*(long *)(param_1 + 0x60) == 0) {
      lVar14 = TriangleSet::getBlendIndices();
      if ((lVar14 != 0) && (((byte)param_1[0xd] & 1) != 0)) {
        TriangleSet::getBlendIndices();
      }
    }
    else if (uVar28 != param_3) {
      memset((void *)(*(long *)(param_1 + 0x60) + (ulong)uVar29 * 4),0,
             (ulong)(~uVar28 + param_3) * 4 + 4);
    }
    puVar25 = (uchar *)((long)puVar25 + 8);
  }
  if (uVar4 != 0) {
    lVar14 = TriangleSet::getColors();
    iVar12 = param_3 - uVar28;
    if (iVar12 != 0) {
      puVar22 = (uint *)((long)puVar25 + (ulong)(uVar23 * uVar28));
      pfVar17 = (float *)(lVar14 + (ulong)(uVar28 << 2) * 4);
      do {
        uVar4 = *puVar22;
        puVar22 = (uint *)((long)puVar22 + uVar24);
        iVar12 = iVar12 + -1;
        auVar38 = NEON_ext(ZEXT416(uVar4),ZEXT416(uVar4),4,1);
        auVar43._0_8_ = NEON_ushl(CONCAT44(uVar4,uVar4),0xfffffff0fffffff8,4);
        auVar43._8_8_ = 0;
        auVar38 = NEON_ext(auVar38,auVar43,0xc,1);
        uVar27 = (ulong)CONCAT16((char)(uVar4 >> 0x18),
                                 CONCAT24(auVar38._8_2_,CONCAT22(auVar38._4_2_,auVar38._0_2_))) &
                 0xff00ff00ff00ff;
        auVar44._2_2_ = 0;
        auVar44._0_2_ = (ushort)uVar27;
        auVar44._4_2_ = (short)(uVar27 >> 0x10);
        auVar44._6_2_ = 0;
        auVar44._8_2_ = (short)(uVar27 >> 0x20);
        auVar44._10_2_ = 0;
        auVar44._12_2_ = (short)(uVar27 >> 0x30);
        auVar44._14_2_ = 0;
        auVar38 = NEON_ucvtf(auVar44,4);
        pfVar17[4] = auVar38._8_4_ / 255.0;
        pfVar17[5] = auVar38._12_4_ / 255.0;
        *pfVar17 = auVar38._0_4_ / 255.0;
        pfVar17[1] = auVar38._4_4_ / 255.0;
        pfVar17 = pfVar17 + 4;
      } while (iVar12 != 0);
    }
    puVar25 = (uchar *)((long)puVar25 + 4);
  }
  if (uVar5 >> 4 != 0) {
    lVar14 = TriangleSet::getBlendIndices();
    iVar26 = param_3 - uVar28;
    if (iVar26 != 0) {
      puVar11 = (undefined4 *)(puVar25 + uVar23 * uVar28);
      puVar15 = (undefined4 *)(lVar14 + (ulong)(uVar28 << 2));
      iVar12 = iVar26;
      do {
        uVar30 = *puVar11;
        puVar11 = (undefined4 *)((long)puVar11 + uVar24);
        iVar12 = iVar12 + -1;
        *puVar15 = uVar30;
        puVar15 = puVar15 + 1;
      } while (iVar12 != 0);
    }
    puVar25 = puVar25 + 4;
  }
  uVar23 = uVar23 * uVar28;
  uVar27 = (ulong)(uVar28 << 1);
  if ((uVar7 & 0x20) != 0) {
    lVar14 = TriangleSet::getTexCoords((TriangleSet *)param_1,0);
    if (iVar26 != 0) {
      psVar20 = (short *)(puVar25 + uVar23);
      puVar16 = (undefined8 *)(lVar14 + uVar27 * 4);
      iVar12 = iVar26;
      do {
        sVar39 = *psVar20;
        iVar12 = iVar12 + -1;
        psVar1 = psVar20 + 1;
        psVar20 = (short *)((long)psVar20 + uVar24);
        uVar35 = NEON_scvtf(CONCAT44((int)*psVar1,(int)sVar39),4);
        *puVar16 = CONCAT44(((float)((ulong)uVar35 >> 0x20) / 32767.0) *
                            SUB164(ZEXT816(0x4100000041000000),4),
                            ((float)uVar35 / 32767.0) * SUB164(ZEXT816(0x4100000041000000),0));
        puVar16 = puVar16 + 1;
      } while (iVar12 != 0);
    }
    puVar25 = puVar25 + 4;
  }
  if ((uVar7 & 0x40) != 0) {
    lVar14 = TriangleSet::getTexCoords((TriangleSet *)param_1,1);
    if (iVar26 != 0) {
      psVar20 = (short *)(puVar25 + uVar23);
      puVar16 = (undefined8 *)(lVar14 + uVar27 * 4);
      iVar12 = iVar26;
      do {
        sVar39 = *psVar20;
        iVar12 = iVar12 + -1;
        psVar1 = psVar20 + 1;
        psVar20 = (short *)((long)psVar20 + uVar24);
        uVar35 = NEON_scvtf(CONCAT44((int)*psVar1,(int)sVar39),4);
        *puVar16 = CONCAT44(((float)((ulong)uVar35 >> 0x20) / 32767.0) *
                            SUB164(ZEXT816(0x4100000041000000),4),
                            ((float)uVar35 / 32767.0) * SUB164(ZEXT816(0x4100000041000000),0));
        puVar16 = puVar16 + 1;
      } while (iVar12 != 0);
    }
    puVar25 = puVar25 + 4;
  }
  if ((uVar7 & 0x80) != 0) {
    lVar14 = TriangleSet::getTexCoords((TriangleSet *)param_1,2);
    if (iVar26 != 0) {
      psVar20 = (short *)(puVar25 + uVar23);
      puVar16 = (undefined8 *)(lVar14 + uVar27 * 4);
      iVar12 = iVar26;
      do {
        sVar39 = *psVar20;
        iVar12 = iVar12 + -1;
        psVar1 = psVar20 + 1;
        psVar20 = (short *)((long)psVar20 + uVar24);
        uVar35 = NEON_scvtf(CONCAT44((int)*psVar1,(int)sVar39),4);
        *puVar16 = CONCAT44(((float)((ulong)uVar35 >> 0x20) / 32767.0) *
                            SUB164(ZEXT816(0x4100000041000000),4),
                            ((float)uVar35 / 32767.0) * SUB164(ZEXT816(0x4100000041000000),0));
        puVar16 = puVar16 + 1;
      } while (iVar12 != 0);
    }
    puVar25 = puVar25 + 4;
  }
  if ((param_2 >> 4 & 1) != 0) {
    lVar14 = TriangleSet::getTexCoords((TriangleSet *)param_1,3);
    if (iVar26 != 0) {
      psVar20 = (short *)(puVar25 + uVar23);
      puVar16 = (undefined8 *)(lVar14 + uVar27 * 4);
      iVar12 = iVar26;
      do {
        sVar39 = *psVar20;
        iVar12 = iVar12 + -1;
        psVar1 = psVar20 + 1;
        psVar20 = (short *)((long)psVar20 + uVar24);
        uVar35 = NEON_scvtf(CONCAT44((int)*psVar1,(int)sVar39),4);
        *puVar16 = CONCAT44(((float)((ulong)uVar35 >> 0x20) / 32767.0) *
                            SUB164(ZEXT816(0x4100000041000000),4),
                            ((float)uVar35 / 32767.0) * SUB164(ZEXT816(0x4100000041000000),0));
        puVar16 = puVar16 + 1;
      } while (iVar12 != 0);
    }
    puVar25 = puVar25 + 4;
  }
  if (((param_2 & 0x80) != 0) && (lVar14 = TriangleSet::getTangents(), iVar26 != 0)) {
    puVar16 = (undefined8 *)(puVar25 + uVar23);
    pfVar17 = (float *)(lVar14 + (ulong)(uVar28 << 2) * 4);
    do {
      uVar35 = *puVar16;
      puVar16 = (undefined8 *)((long)puVar16 + uVar24);
      iVar26 = iVar26 + -1;
      auVar37._0_4_ = (int)(short)uVar35;
      auVar37._4_4_ = (int)(short)((ulong)uVar35 >> 0x10);
      auVar37._8_4_ = (int)(short)((ulong)uVar35 >> 0x20);
      auVar37._12_4_ = (int)(short)((ulong)uVar35 >> 0x30);
      auVar38 = NEON_scvtf(auVar37,4);
      pfVar17[4] = auVar38._8_4_ / 32767.0;
      pfVar17[5] = auVar38._12_4_ / 32767.0;
      *pfVar17 = auVar38._0_4_ / 32767.0;
      pfVar17[1] = auVar38._4_4_ / 32767.0;
      pfVar17 = pfVar17 + 4;
    } while (iVar26 != 0);
  }
  uVar31 = 0;
  uVar30 = 0;
  if ((param_2 >> 1 & 1) != 0) {
    uVar30 = IndexedTriangleSet::computeUvDensity(param_1,0,0,param_5);
  }
  if ((param_2 >> 2 & 1) != 0) {
    uVar31 = IndexedTriangleSet::computeUvDensity(param_1,1,0,param_5);
  }
  uVar33 = 0;
  uVar32 = 0;
  if ((param_2 >> 3 & 1) != 0) {
    uVar32 = IndexedTriangleSet::computeUvDensity(param_1,2,0,param_5);
  }
  if ((param_2 >> 4 & 1) != 0) {
    uVar33 = IndexedTriangleSet::computeUvDensity(param_1,3,0,param_5);
  }
  IndexedTriangleSet::setNumSubsets(param_1,1);
  puVar11 = (undefined4 *)operator_new(0x20);
  puVar11[4] = uVar30;
  puVar11[5] = uVar31;
  puVar11[6] = uVar32;
  puVar11[7] = uVar33;
  *puVar11 = 0;
  puVar11[1] = param_3;
  puVar11[2] = 0;
  puVar11[3] = param_5;
  IndexedTriangleSet::setSubset(param_1,(IndexedTriangleSubset *)puVar11,0);
  param_1[0x88] = (IndexedTriangleSet)0x1;
  return;
}


