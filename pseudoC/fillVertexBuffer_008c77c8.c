// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fillVertexBuffer
// Entry Point: 008c77c8
// Size: 1396 bytes
// Signature: undefined __cdecl fillVertexBuffer(IndexedTriangleSet * param_1, float * param_2, float * param_3, uchar * param_4, uint param_5, bool param_6, float * param_7, float param_8, uint param_9)


/* IndexedTriangleSetGeometryUtil::fillVertexBuffer(IndexedTriangleSet*, float const*, float const*,
   unsigned char*, unsigned int, bool, float const*, float, unsigned int) */

void IndexedTriangleSetGeometryUtil::fillVertexBuffer
               (IndexedTriangleSet *param_1,float *param_2,float *param_3,uchar *param_4,
               uint param_5,bool param_6,float *param_7,float param_8,uint param_9)

{
  float *pfVar1;
  undefined1 *puVar2;
  float *pfVar3;
  float *pfVar4;
  undefined auVar5 [16];
  bool bVar6;
  int iVar7;
  byte *pbVar8;
  float *pfVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ushort *puVar14;
  int *piVar15;
  undefined2 *puVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  undefined8 *puVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  ushort uVar26;
  float fVar27;
  undefined auVar28 [16];
  undefined auVar29 [16];
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  
  uVar19 = (ulong)param_5;
  puVar2 = VERTEX_ATTRIBUTE_TYPES_POSITION32;
  if (!param_6) {
    puVar2 = VERTEX_ATTRIBUTE_TYPES;
  }
  puVar22 = (undefined8 *)param_4;
  if (param_5 == 0) {
    iVar7 = TriangleSet::getNumVertices();
    uVar18 = 0;
  }
  else {
    uVar18 = 0;
    uVar20 = 0;
    do {
      if ((uVar19 & 1) != 0) {
        uVar18 = (&VertexDeclarationDesc::VERTEX_ELEMENT_TYPE_SIZES)[*(uint *)(puVar2 + uVar20 * 4)]
                 + uVar18;
      }
      if ((uint)uVar19 < 2) break;
      bVar6 = uVar20 < 10;
      uVar19 = uVar19 >> 1;
      uVar20 = uVar20 + 1;
    } while (bVar6);
    iVar7 = TriangleSet::getNumVertices();
    if ((param_5 & 1) != 0) {
      if (param_6) {
        if (iVar7 != 0) {
          uVar31 = *(undefined8 *)param_7;
          piVar15 = (int *)(param_4 + 8);
          fVar24 = param_7[2];
          iVar17 = iVar7;
          do {
            uVar25 = *(undefined8 *)param_2;
            iVar17 = iVar17 + -1;
            puVar22 = (undefined8 *)((long)param_2 + 8);
            param_2 = (float *)((long)param_2 + 0xc);
            *piVar15 = (int)((*(float *)puVar22 - fVar24) * param_8);
            *(ulong *)(piVar15 + -2) =
                 CONCAT44((int)(((float)((ulong)uVar25 >> 0x20) - (float)((ulong)uVar31 >> 0x20)) *
                               param_8),(int)(((float)uVar25 - (float)uVar31) * param_8));
            piVar15 = (int *)((long)piVar15 + (ulong)uVar18);
          } while (iVar17 != 0);
        }
        puVar22 = (undefined8 *)(param_4 + 0xc);
      }
      else {
        if (iVar7 != 0) {
          fVar24 = *param_7;
          fVar23 = param_7[1];
          puVar16 = (undefined2 *)(param_4 + 4);
          fVar32 = param_7[2];
          iVar17 = iVar7;
          do {
            fVar33 = *param_2;
            fVar27 = param_2[1];
            fVar30 = param_2[2];
            puVar16[1] = 0;
            iVar17 = iVar17 + -1;
            param_2 = param_2 + 3;
            puVar16[-2] = (short)(int)((fVar33 - fVar24) * param_8);
            puVar16[-1] = (short)(int)((fVar27 - fVar23) * param_8);
            *puVar16 = (short)(int)((fVar30 - fVar32) * param_8);
            puVar16 = (undefined2 *)((long)puVar16 + (ulong)uVar18);
          } while (iVar17 != 0);
        }
        puVar22 = (undefined8 *)(param_4 + 8);
      }
    }
    if ((param_5 >> 1 & 1) != 0) {
      pfVar9 = (float *)TriangleSet::getBlendWeights();
      if (iVar7 != 0) {
        puVar13 = puVar22;
        iVar17 = iVar7;
        do {
          fVar24 = *pfVar9;
          pfVar3 = pfVar9 + 1;
          iVar17 = iVar17 + -1;
          pfVar1 = pfVar9 + 2;
          pfVar4 = pfVar9 + 3;
          pfVar9 = pfVar9 + 4;
          *(uint *)puVar13 =
               (int)(fVar24 * 255.0) & 0xffU | ((int)(*pfVar3 * 255.0) & 0xffU) << 8 |
               ((int)(*pfVar1 * 255.0) & 0xffU) << 0x10 | (int)(*pfVar4 * 255.0) << 0x18;
          puVar13 = (undefined8 *)((long)puVar13 + (ulong)uVar18);
        } while (iVar17 != 0);
      }
      puVar22 = (undefined8 *)((long)puVar22 + 4);
    }
    if ((param_5 >> 2 & 1) != 0) {
      uVar19 = (ulong)uVar18;
      puVar13 = puVar22;
      iVar17 = iVar7;
      if (param_3 == (float *)0x0) {
        for (; iVar17 != 0; iVar17 = iVar17 + -1) {
          *puVar13 = 0;
          puVar13 = (undefined8 *)((long)puVar13 + uVar19);
        }
      }
      else if (iVar7 != 0) {
        puVar16 = (undefined2 *)((long)puVar22 + 6);
        do {
          uVar31 = *(undefined8 *)param_3;
          fVar33 = *(float *)((long)param_3 + 8);
          *puVar16 = 0;
          param_3 = (float *)((long)param_3 + 0xc);
          fVar23 = (float)uVar31 * 32767.0;
          fVar32 = (float)((ulong)uVar31 >> 0x20) * 32767.0;
          uVar31 = NEON_fcmge(CONCAT44(fVar32,fVar23),0,4);
          uVar31 = NEON_bsl(uVar31,0x3f0000003f000000,0xbf000000bf000000,1);
          fVar24 = 0.5;
          if (fVar33 * 32767.0 < 0.0) {
            fVar24 = -0.5;
          }
          iVar17 = iVar17 + -1;
          puVar16[-1] = (short)(int)(fVar33 * 32767.0 + fVar24);
          puVar16[-3] = (short)(int)(fVar23 + (float)uVar31);
          puVar16[-2] = (short)(int)(fVar32 + (float)((ulong)uVar31 >> 0x20));
          puVar16 = (undefined2 *)((long)puVar16 + uVar19);
        } while (iVar17 != 0);
      }
      if (*(float **)(param_1 + 0x60) == (float *)0x0) {
        if ((((byte)param_1[0xd] & 1) != 0) &&
           (pbVar8 = (byte *)TriangleSet::getBlendIndices(), iVar7 != 0)) {
          puVar14 = (ushort *)((long)puVar22 + 6);
          iVar17 = iVar7;
          do {
            iVar17 = iVar17 + -1;
            *puVar14 = (ushort)*pbVar8;
            puVar14 = (ushort *)((long)puVar14 + uVar19);
            pbVar8 = pbVar8 + 1;
          } while (iVar17 != 0);
        }
      }
      else if (iVar7 != 0) {
        puVar16 = (undefined2 *)((long)puVar22 + 6);
        pfVar9 = *(float **)(param_1 + 0x60);
        iVar17 = iVar7;
        do {
          uVar26 = 0x3f00;
          if (*pfVar9 * 32767.0 < 0.0) {
            uVar26 = 0xbf00;
          }
          iVar17 = iVar17 + -1;
          *puVar16 = (short)(int)(*pfVar9 * 32767.0 + (float)((uint)uVar26 << 0x10));
          puVar16 = (undefined2 *)((long)puVar16 + uVar19);
          pfVar9 = pfVar9 + 1;
        } while (iVar17 != 0);
      }
      puVar22 = puVar22 + 1;
    }
    if ((param_5 >> 3 & 1) != 0) {
      pfVar9 = (float *)TriangleSet::getColors();
      if (iVar7 != 0) {
        puVar13 = puVar22;
        iVar17 = iVar7;
        do {
          fVar24 = *pfVar9;
          pfVar3 = pfVar9 + 1;
          iVar17 = iVar17 + -1;
          pfVar1 = pfVar9 + 2;
          pfVar4 = pfVar9 + 3;
          pfVar9 = pfVar9 + 4;
          *(uint *)puVar13 =
               (int)(fVar24 * 255.0) & 0xffU | ((int)(*pfVar3 * 255.0) & 0xffU) << 8 |
               ((int)(*pfVar1 * 255.0) & 0xffU) << 0x10 | (int)(*pfVar4 * 255.0) << 0x18;
          puVar13 = (undefined8 *)((long)puVar13 + (ulong)uVar18);
        } while (iVar17 != 0);
      }
      puVar22 = (undefined8 *)((long)puVar22 + 4);
    }
    if ((param_5 >> 4 & 1) != 0) {
      puVar10 = (undefined4 *)TriangleSet::getBlendIndices();
      if (iVar7 != 0) {
        puVar13 = puVar22;
        iVar17 = iVar7;
        do {
          iVar17 = iVar17 + -1;
          *(undefined4 *)puVar13 = *puVar10;
          puVar13 = (undefined8 *)((long)puVar13 + (ulong)uVar18);
          puVar10 = puVar10 + 1;
        } while (iVar17 != 0);
      }
      puVar22 = (undefined8 *)((long)puVar22 + 4);
    }
  }
  uVar21 = 0;
  uVar19 = (ulong)uVar18;
  do {
    if (((param_5 >> (ulong)(uVar21 & 0x1f)) >> 5 & 1) != 0) {
      lVar11 = TriangleSet::getTexCoords((TriangleSet *)param_1,uVar21);
      if (lVar11 == 0) {
        if (iVar7 != 0) {
          lVar11 = (long)puVar22 + 2;
          iVar17 = iVar7;
          do {
            *(undefined4 *)(lVar11 + -2) = 0;
            iVar17 = iVar17 + -1;
            lVar11 = lVar11 + uVar19;
          } while (iVar17 != 0);
        }
      }
      else {
        puVar12 = (undefined8 *)TriangleSet::getTexCoords((TriangleSet *)param_1,uVar21);
        puVar13 = puVar22;
        iVar17 = iVar7;
        while (iVar17 != 0) {
          iVar17 = iVar17 + -1;
          fVar24 = (float)*puVar12 * 0.125 * 32767.0;
          fVar23 = (float)((ulong)*puVar12 >> 0x20) * 0.125 * 32767.0;
          uVar31 = NEON_fcmge(CONCAT44(fVar23,fVar24),0,4);
          uVar31 = NEON_bsl(uVar31,0x3f0000003f000000,0xbf000000bf000000,1);
          *(short *)puVar13 = (short)(int)(fVar24 + (float)uVar31);
          *(short *)((long)puVar13 + 2) = (short)(int)(fVar23 + (float)((ulong)uVar31 >> 0x20));
          puVar13 = (undefined8 *)((long)puVar13 + uVar19);
          puVar12 = puVar12 + 1;
        }
      }
      puVar22 = (undefined8 *)((long)puVar22 + 4);
    }
    uVar21 = uVar21 + 1;
  } while (uVar21 != 4);
  if ((param_5 >> 9 & 1) != 0) {
    puVar13 = (undefined8 *)TriangleSet::getTangents();
    iVar17 = iVar7;
    while (iVar17 != 0) {
      iVar17 = iVar17 + -1;
      fVar24 = (float)*puVar13 * 32767.0;
      fVar23 = (float)((ulong)*puVar13 >> 0x20) * 32767.0;
      fVar32 = (float)puVar13[1] * 32767.0;
      fVar33 = (float)((ulong)puVar13[1] >> 0x20) * 32767.0;
      auVar28._4_2_ = SUB42(fVar23,0);
      auVar28._0_4_ = fVar24;
      auVar28._6_2_ = (short)((uint)fVar23 >> 0x10);
      auVar28._8_2_ = SUB42(fVar32,0);
      auVar28._10_2_ = (short)((uint)fVar32 >> 0x10);
      auVar28._12_2_ = SUB42(fVar33,0);
      auVar28._14_2_ = (short)((uint)fVar33 >> 0x10);
      auVar28 = NEON_fcmge(auVar28,0,4);
      auVar29._8_4_ = 0xbf000000;
      auVar29._0_8_ = 0xbf000000bf000000;
      auVar29._12_4_ = 0xbf000000;
      auVar5._8_4_ = 0x3f000000;
      auVar5._0_8_ = 0x3f0000003f000000;
      auVar5._12_4_ = 0x3f000000;
      auVar29 = NEON_bsl(auVar28,auVar5,auVar29,1);
      *puVar22 = CONCAT26((short)(int)(fVar33 + auVar29._12_4_),
                          CONCAT24((short)(int)(fVar32 + auVar29._8_4_),
                                   CONCAT22((short)(int)(fVar23 + auVar29._4_4_),
                                            (short)(int)(fVar24 + auVar29._0_4_))));
      puVar22 = (undefined8 *)((long)puVar22 + uVar19);
      puVar13 = puVar13 + 2;
    }
  }
  if (param_9 != 0) {
    uVar21 = iVar7 * uVar18;
    uVar20 = (ulong)param_9;
    do {
      memcpy(param_4 + uVar21,param_4 + (iVar7 + -1) * uVar18,uVar19);
      uVar21 = uVar21 + uVar18;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  return;
}


