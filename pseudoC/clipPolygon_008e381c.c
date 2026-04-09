// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clipPolygon
// Entry Point: 008e381c
// Size: 680 bytes
// Signature: undefined __cdecl clipPolygon(float param_1, float param_2, float param_3, float param_4, Vertex * param_5, uint param_6, Vertex * param_7, uint * param_8, Vertex * param_9, uint * param_10)


/* TyreTrackGeometry::clipPolygon(float, float, float, float, TyreTrackGeometry::Vertex const*,
   unsigned int, TyreTrackGeometry::Vertex*, unsigned int&, TyreTrackGeometry::Vertex*, unsigned
   int&) */

void TyreTrackGeometry::clipPolygon
               (float param_1,float param_2,float param_3,float param_4,Vertex *param_5,uint param_6
               ,Vertex *param_7,uint *param_8,Vertex *param_9,uint *param_10)

{
  undefined8 *puVar1;
  Vertex *pVVar2;
  uint uVar3;
  float fVar4;
  uint *puVar5;
  long lVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined8 uVar24;
  undefined auVar25 [16];
  float fVar26;
  
  *param_10 = 0;
  *param_8 = 0;
  if (param_6 != 0) {
    fVar11 = param_4 - param_2;
    fVar12 = param_3 - param_1;
    lVar6 = 0;
    puVar7 = (undefined8 *)(param_5 + (ulong)(param_6 - 1) * 0x24);
    fVar10 = (float)NEON_fmadd(fVar12,fVar12,fVar11 * fVar11);
    fVar11 = (1.0 / SQRT(fVar10)) * -fVar11;
    fVar12 = fVar12 * (1.0 / SQRT(fVar10));
    fVar10 = (float)NEON_fmadd(fVar12,*(float *)(puVar7 + 1) - param_2,
                               fVar11 * (*(float *)puVar7 - param_1));
    bVar8 = fVar10 < 0.0;
    do {
      puVar1 = (undefined8 *)(param_5 + lVar6);
      fVar13 = (float)NEON_fmadd(fVar12,*(float *)(puVar1 + 1) - param_2,
                                 fVar11 * (*(float *)puVar1 - param_1));
      if (bVar8 != fVar13 < 0.0) {
        fVar19 = *(float *)((long)puVar1 + 0x14);
        fVar14 = (0.0 - fVar10) / (fVar13 - fVar10);
        uVar16 = *(undefined8 *)((long)puVar1 + 0xc);
        uVar21 = *(undefined8 *)((long)puVar7 + 0xc);
        auVar17._0_4_ = (int)(short)uVar16;
        auVar17._4_4_ = (int)(short)((ulong)uVar16 >> 0x10);
        auVar17._8_4_ = (int)(short)((ulong)uVar16 >> 0x20);
        auVar17._12_4_ = (int)(short)((ulong)uVar16 >> 0x30);
        fVar10 = *(float *)((long)puVar7 + 0x14);
        fVar18 = (float)*puVar7;
        fVar20 = (float)((ulong)*puVar7 >> 0x20);
        auVar22._0_4_ = (int)(short)uVar21;
        auVar22._4_4_ = (int)(short)((ulong)uVar21 >> 0x10);
        auVar22._8_4_ = (int)(short)((ulong)uVar21 >> 0x20);
        auVar22._12_4_ = (int)(short)((ulong)uVar21 >> 0x30);
        auVar17 = NEON_scvtf(auVar17,4);
        auVar22 = NEON_scvtf(auVar22,4);
        fVar26 = 1.0 - fVar14;
        uVar16 = CONCAT44(fVar20 + (*(float *)((long)puVar1 + 4) - fVar20) * fVar14,
                          fVar18 + (*(float *)puVar1 - fVar18) * fVar14);
        fVar15 = *(float *)(puVar7 + 1) + fVar14 * (*(float *)(puVar1 + 1) - *(float *)(puVar7 + 1))
        ;
        fVar18 = (float)NEON_fmadd((float)(ulong)((uint)fVar10 & 0xff),fVar26,
                                   fVar14 * (float)(ulong)((uint)fVar19 & 0xff));
        fVar20 = (float)NEON_fmadd((float)(ulong)((uint)fVar10 >> 8 & 0xff),fVar26,
                                   fVar14 * (float)(ulong)((uint)fVar19 >> 8 & 0xff));
        uVar21 = puVar1[3];
        fVar4 = (float)NEON_fmadd((float)(ulong)((uint)fVar10 >> 0x10 & 0xff),fVar26,
                                  fVar14 * (float)(ulong)((uint)fVar19 >> 0x10 & 0xff));
        fVar19 = (float)NEON_fmadd((float)(ulong)((uint)fVar10 >> 0x18),fVar26,
                                   fVar14 * (float)(ulong)((uint)fVar19 >> 0x18));
        uVar24 = puVar7[3];
        auVar23._0_4_ = (int)(short)uVar21;
        auVar23._4_4_ = (int)(short)((ulong)uVar21 >> 0x10);
        auVar23._8_4_ = (int)(short)((ulong)uVar21 >> 0x20);
        auVar23._12_4_ = (int)(short)((ulong)uVar21 >> 0x30);
        auVar25._0_4_ = (int)(short)uVar24;
        auVar25._4_4_ = (int)(short)((ulong)uVar24 >> 0x10);
        auVar25._8_4_ = (int)(short)((ulong)uVar24 >> 0x20);
        auVar25._12_4_ = (int)(short)((ulong)uVar24 >> 0x30);
        auVar23 = NEON_scvtf(auVar23,4);
        auVar25 = NEON_scvtf(auVar25,4);
        puVar9 = (undefined8 *)(param_7 + (ulong)*param_8 * 0x24);
        fVar10 = (float)NEON_fmadd((float)(int)*(short *)(puVar7 + 4),fVar26,
                                   fVar14 * (float)(int)*(short *)(puVar1 + 4));
        uVar3 = ((int)fVar4 & 0xffU) << 0x10 | (int)fVar19 << 0x18 | ((int)fVar20 & 0xffU) << 8 |
                (int)fVar18;
        uVar21 = CONCAT26((short)(int)(auVar17._12_4_ * fVar14 + auVar22._12_4_ * fVar26),
                          CONCAT24((short)(int)(auVar17._8_4_ * fVar14 + auVar22._8_4_ * fVar26),
                                   CONCAT22((short)(int)(auVar17._4_4_ * fVar14 +
                                                        auVar22._4_4_ * fVar26),
                                            (short)(int)(auVar17._0_4_ * fVar14 +
                                                        auVar22._0_4_ * fVar26))));
        fVar19 = (float)NEON_fmadd((float)(int)*(short *)((long)puVar7 + 0x22),fVar26,
                                   fVar14 * (float)(int)*(short *)((long)puVar1 + 0x22));
        *param_8 = *param_8 + 1;
        *puVar9 = uVar16;
        *(float *)(puVar9 + 1) = fVar15;
        *(undefined8 *)((long)puVar9 + 0xc) = uVar21;
        *(uint *)((long)puVar9 + 0x14) = uVar3;
        uVar24 = CONCAT26((short)(int)(auVar23._12_4_ * fVar14 + auVar25._12_4_ * fVar26),
                          CONCAT24((short)(int)(auVar23._8_4_ * fVar14 + auVar25._8_4_ * fVar26),
                                   CONCAT22((short)(int)(auVar23._4_4_ * fVar14 +
                                                        auVar25._4_4_ * fVar26),
                                            (short)(int)(auVar23._0_4_ * fVar14 +
                                                        auVar25._0_4_ * fVar26))));
        *(short *)(puVar9 + 4) = (short)(int)fVar10;
        puVar9[3] = uVar24;
        *(short *)((long)puVar9 + 0x22) = (short)(int)fVar19;
        puVar7 = (undefined8 *)(param_9 + (ulong)*param_10 * 0x24);
        *param_10 = *param_10 + 1;
        *puVar7 = uVar16;
        *(float *)(puVar7 + 1) = fVar15;
        *(undefined8 *)((long)puVar7 + 0xc) = uVar21;
        *(uint *)((long)puVar7 + 0x14) = uVar3;
        puVar7[3] = uVar24;
        *(short *)(puVar7 + 4) = (short)(int)fVar10;
        *(short *)((long)puVar7 + 0x22) = (short)(int)fVar19;
      }
      lVar6 = lVar6 + 0x24;
      pVVar2 = param_7;
      puVar5 = param_8;
      if (0.0 <= fVar13) {
        pVVar2 = param_9;
        puVar5 = param_10;
      }
      uVar3 = *puVar5;
      *puVar5 = uVar3 + 1;
      puVar7 = (undefined8 *)(pVVar2 + (ulong)uVar3 * 0x24);
      uVar16 = *puVar1;
      uVar24 = puVar1[3];
      uVar21 = puVar1[2];
      fVar10 = *(float *)(puVar1 + 4);
      puVar7[1] = puVar1[1];
      *puVar7 = uVar16;
      puVar7[3] = uVar24;
      puVar7[2] = uVar21;
      *(float *)(puVar7 + 4) = fVar10;
      puVar7 = puVar1;
      fVar10 = fVar13;
      bVar8 = fVar13 < 0.0;
    } while ((ulong)param_6 * 0x24 - lVar6 != 0);
  }
  return;
}


