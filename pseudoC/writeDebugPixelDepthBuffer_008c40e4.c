// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeDebugPixelDepthBuffer
// Entry Point: 008c40e4
// Size: 992 bytes
// Signature: undefined __thiscall writeDebugPixelDepthBuffer(GsMaskedOcclusionCulling * this, char * param_1)


/* GsMaskedOcclusionCulling::writeDebugPixelDepthBuffer(char const*) */

void __thiscall
GsMaskedOcclusionCulling::writeDebugPixelDepthBuffer(GsMaskedOcclusionCulling *this,char *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint3 uVar4;
  float fVar5;
  float fVar6;
  undefined auVar7 [16];
  GsMaskedOcclusionCulling *pGVar8;
  GsMaskedOcclusionCulling *pGVar9;
  undefined (*pauVar10) [16];
  GsMaskedOcclusionCulling *this_00;
  undefined (*pauVar11) [16];
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined auVar21 [16];
  undefined auVar22 [16];
  GsMaskedOcclusionCulling GVar23;
  GsMaskedOcclusionCulling GVar24;
  GsMaskedOcclusionCulling GVar25;
  GsMaskedOcclusionCulling GVar26;
  GsMaskedOcclusionCulling GVar27;
  GsMaskedOcclusionCulling GVar28;
  GsMaskedOcclusionCulling GVar29;
  GsMaskedOcclusionCulling GVar30;
  GsMaskedOcclusionCulling GVar31;
  GsMaskedOcclusionCulling GVar32;
  GsMaskedOcclusionCulling GVar33;
  GsMaskedOcclusionCulling GVar34;
  GsMaskedOcclusionCulling GVar35;
  GsMaskedOcclusionCulling GVar36;
  GsMaskedOcclusionCulling GVar37;
  GsMaskedOcclusionCulling GVar38;
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  
  pauVar10 = (undefined (*) [16])
             operator_new__((ulong)(uint)(*(int *)(this + 4) * *(int *)this) << 2);
  (**(code **)(**(long **)(this + 0x10) + 0x60))(*(long **)(this + 0x10),pauVar10,0);
  iVar1 = *(int *)this;
  iVar2 = *(int *)(this + 4);
  uVar3 = iVar2 * iVar1;
  uVar16 = (ulong)uVar3;
  this_00 = (GsMaskedOcclusionCulling *)operator_new__((ulong)(uVar3 * 3));
  if ((int)uVar3 < 1) goto LAB_008c4428;
  fVar19 = 0.0;
  pauVar11 = pauVar10;
  uVar13 = uVar16;
  fVar17 = 3.402823e+38;
  do {
    fVar20 = *(float *)*pauVar11;
    fVar18 = fVar20;
    if (fVar20 <= 0.0 || fVar17 <= fVar20) {
      fVar18 = fVar17;
    }
    if (fVar20 <= 0.0 || fVar20 <= fVar19) {
      fVar20 = fVar19;
    }
    fVar19 = fVar20;
    uVar13 = uVar13 - 1;
    pauVar11 = (undefined (*) [16])(*pauVar11 + 4);
    fVar17 = fVar18;
  } while (uVar13 != 0);
  fVar19 = fVar19 - fVar18;
  if (uVar3 < 8) {
    uVar12 = 0;
    pGVar8 = this_00;
  }
  else {
    if (uVar3 < 0x10) {
      uVar13 = 0;
    }
    else {
      uVar12 = uVar16 & 0xfffffff0;
      uVar13 = uVar12;
      pauVar11 = pauVar10;
      pGVar8 = this_00;
      do {
        auVar22 = *pauVar11;
        auVar7 = pauVar11[1];
        uVar13 = uVar13 - 0x10;
        fVar17 = auVar22._0_4_ - fVar18;
        fVar20 = auVar22._4_4_ - fVar18;
        fVar5 = auVar22._8_4_ - fVar18;
        fVar6 = auVar22._12_4_ - fVar18;
        auVar39 = NEON_fcmgt(auVar22,0,4);
        auVar22 = pauVar11[2];
        auVar40 = pauVar11[3];
        pauVar11 = pauVar11 + 4;
        auVar42 = NEON_fcmgt(auVar40,0,4);
        auVar41 = NEON_fcmgt(auVar22,0,4);
        auVar21 = NEON_fcmgt(auVar7,0,4);
        uVar4 = CONCAT12((char)(long)(((auVar22._4_4_ - fVar18) * 223.0) / fVar19 + 32.0),
                         (short)(long)(((auVar22._0_4_ - fVar18) * 223.0) / fVar19 + 32.0)) &
                0xff00ff;
        GVar23 = (GsMaskedOcclusionCulling)
                 ((byte)(long)((fVar17 * 223.0) / fVar19 + 32.0) & auVar39[0]);
        GVar24 = (GsMaskedOcclusionCulling)
                 ((byte)(long)(((float)(CONCAT17((char)((uint)fVar20 >> 0x18),
                                                 CONCAT16((char)((uint)fVar20 >> 0x10),
                                                          CONCAT15((char)((uint)fVar20 >> 8),
                                                                   CONCAT14(SUB41(fVar20,0),fVar17))
                                                         )) >> 0x20) * 223.0) / fVar19 + 32.0) &
                 auVar39[4]);
        GVar25 = (GsMaskedOcclusionCulling)
                 ((byte)(long)((fVar5 * 223.0) / fVar19 + 32.0) & auVar39[8]);
        GVar26 = (GsMaskedOcclusionCulling)
                 ((byte)(long)(((float)(CONCAT17((char)((uint)fVar6 >> 0x18),
                                                 CONCAT16((char)((uint)fVar6 >> 0x10),
                                                          CONCAT15((char)((uint)fVar6 >> 8),
                                                                   CONCAT14(SUB41(fVar6,0),fVar5))))
                                       >> 0x20) * 223.0) / fVar19 + 32.0) & auVar39[12]);
        GVar27 = (GsMaskedOcclusionCulling)
                 ((byte)(long)(((auVar7._0_4_ - fVar18) * 223.0) / fVar19 + 32.0) & auVar21[0]);
        GVar28 = (GsMaskedOcclusionCulling)
                 ((byte)(long)(((auVar7._4_4_ - fVar18) * 223.0) / fVar19 + 32.0) & auVar21[4]);
        GVar29 = (GsMaskedOcclusionCulling)
                 ((byte)(long)(((auVar7._8_4_ - fVar18) * 223.0) / fVar19 + 32.0) & auVar21[8]);
        GVar30 = (GsMaskedOcclusionCulling)
                 ((byte)(long)(((auVar7._12_4_ - fVar18) * 223.0) / fVar19 + 32.0) & auVar21[12]);
        GVar31 = (GsMaskedOcclusionCulling)((byte)uVar4 & auVar41[0]);
        GVar32 = (GsMaskedOcclusionCulling)((byte)(uVar4 >> 0x10) & auVar41[4]);
        GVar33 = (GsMaskedOcclusionCulling)
                 ((byte)(long)(((auVar22._8_4_ - fVar18) * 223.0) / fVar19 + 32.0) & auVar41[8]);
        GVar34 = (GsMaskedOcclusionCulling)
                 ((byte)(long)(((auVar22._12_4_ - fVar18) * 223.0) / fVar19 + 32.0) & auVar41[12]);
        GVar35 = (GsMaskedOcclusionCulling)
                 ((byte)(long)(((auVar40._0_4_ - fVar18) * 223.0) / fVar19 + 32.0) & auVar42[0]);
        GVar36 = (GsMaskedOcclusionCulling)
                 ((byte)(long)(((auVar40._4_4_ - fVar18) * 223.0) / fVar19 + 32.0) & auVar42[4]);
        GVar37 = (GsMaskedOcclusionCulling)
                 ((byte)(long)(((auVar40._8_4_ - fVar18) * 223.0) / fVar19 + 32.0) & auVar42[8]);
        GVar38 = (GsMaskedOcclusionCulling)
                 ((byte)(long)(((auVar40._12_4_ - fVar18) * 223.0) / fVar19 + 32.0) & auVar42[12]);
        *pGVar8 = GVar23;
        pGVar8[1] = GVar23;
        pGVar8[2] = GVar23;
        pGVar8[3] = GVar24;
        pGVar8[4] = GVar24;
        pGVar8[5] = GVar24;
        pGVar8[6] = GVar25;
        pGVar8[7] = GVar25;
        pGVar8[8] = GVar25;
        pGVar8[9] = GVar26;
        pGVar8[10] = GVar26;
        pGVar8[0xb] = GVar26;
        pGVar8[0xc] = GVar27;
        pGVar8[0xd] = GVar27;
        pGVar8[0xe] = GVar27;
        pGVar8[0xf] = GVar28;
        pGVar8[0x10] = GVar28;
        pGVar8[0x11] = GVar28;
        pGVar8[0x12] = GVar29;
        pGVar8[0x13] = GVar29;
        pGVar8[0x14] = GVar29;
        pGVar8[0x15] = GVar30;
        pGVar8[0x16] = GVar30;
        pGVar8[0x17] = GVar30;
        pGVar8[0x18] = GVar31;
        pGVar8[0x19] = GVar31;
        pGVar8[0x1a] = GVar31;
        pGVar8[0x1b] = GVar32;
        pGVar8[0x1c] = GVar32;
        pGVar8[0x1d] = GVar32;
        pGVar8[0x1e] = GVar33;
        pGVar8[0x1f] = GVar33;
        pGVar8[0x20] = GVar33;
        pGVar8[0x21] = GVar34;
        pGVar8[0x22] = GVar34;
        pGVar8[0x23] = GVar34;
        pGVar8[0x24] = GVar35;
        pGVar8[0x25] = GVar35;
        pGVar8[0x26] = GVar35;
        pGVar8[0x27] = GVar36;
        pGVar8[0x28] = GVar36;
        pGVar8[0x29] = GVar36;
        pGVar8[0x2a] = GVar37;
        pGVar8[0x2b] = GVar37;
        pGVar8[0x2c] = GVar37;
        pGVar8[0x2d] = GVar38;
        pGVar8[0x2e] = GVar38;
        pGVar8[0x2f] = GVar38;
        pGVar8 = pGVar8 + 0x30;
      } while (uVar13 != 0);
      if (uVar12 == uVar16) goto LAB_008c4428;
      uVar13 = uVar12;
      if ((uVar3 >> 3 & 1) == 0) {
        pGVar8 = this_00 + uVar12 * 3;
        goto LAB_008c445c;
      }
    }
    uVar12 = uVar16 & 0xfffffff8;
    pGVar8 = this_00 + uVar12 * 3;
    pGVar9 = this_00 + uVar13 * 3;
    lVar15 = uVar13 - uVar12;
    pauVar11 = (undefined (*) [16])(*pauVar10 + uVar13 * 4);
    do {
      auVar22 = *pauVar11;
      auVar7 = pauVar11[1];
      lVar15 = lVar15 + 8;
      fVar17 = auVar22._0_4_ - fVar18;
      fVar20 = auVar22._4_4_ - fVar18;
      fVar5 = auVar22._8_4_ - fVar18;
      fVar6 = auVar22._12_4_ - fVar18;
      auVar40 = NEON_fcmgt(auVar22,0,4);
      auVar22 = NEON_fcmgt(auVar7,0,4);
      uVar4 = CONCAT12((char)(long)(((float)(CONCAT17((char)((uint)fVar20 >> 0x18),
                                                      CONCAT16((char)((uint)fVar20 >> 0x10),
                                                               CONCAT15((char)((uint)fVar20 >> 8),
                                                                        CONCAT14(SUB41(fVar20,0),
                                                                                 fVar17)))) >> 0x20)
                                    * 223.0) / fVar19 + 32.0),
                       (short)(long)((fVar17 * 223.0) / fVar19 + 32.0)) & 0xff00ff;
      GVar23 = (GsMaskedOcclusionCulling)((byte)uVar4 & auVar40[0]);
      GVar24 = (GsMaskedOcclusionCulling)((byte)(uVar4 >> 0x10) & auVar40[4]);
      GVar25 = (GsMaskedOcclusionCulling)
               ((byte)(long)((fVar5 * 223.0) / fVar19 + 32.0) & auVar40[8]);
      GVar26 = (GsMaskedOcclusionCulling)
               ((byte)(long)(((float)(CONCAT17((char)((uint)fVar6 >> 0x18),
                                               CONCAT16((char)((uint)fVar6 >> 0x10),
                                                        CONCAT15((char)((uint)fVar6 >> 8),
                                                                 CONCAT14(SUB41(fVar6,0),fVar5))))
                                     >> 0x20) * 223.0) / fVar19 + 32.0) & auVar40[12]);
      GVar27 = (GsMaskedOcclusionCulling)
               ((byte)(long)(((auVar7._0_4_ - fVar18) * 223.0) / fVar19 + 32.0) & auVar22[0]);
      GVar28 = (GsMaskedOcclusionCulling)
               ((byte)(long)(((auVar7._4_4_ - fVar18) * 223.0) / fVar19 + 32.0) & auVar22[4]);
      GVar29 = (GsMaskedOcclusionCulling)
               ((byte)(long)(((auVar7._8_4_ - fVar18) * 223.0) / fVar19 + 32.0) & auVar22[8]);
      GVar30 = (GsMaskedOcclusionCulling)
               ((byte)(long)(((auVar7._12_4_ - fVar18) * 223.0) / fVar19 + 32.0) & auVar22[12]);
      *pGVar9 = GVar23;
      pGVar9[1] = GVar23;
      pGVar9[2] = GVar23;
      pGVar9[3] = GVar24;
      pGVar9[4] = GVar24;
      pGVar9[5] = GVar24;
      pGVar9[6] = GVar25;
      pGVar9[7] = GVar25;
      pGVar9[8] = GVar25;
      pGVar9[9] = GVar26;
      pGVar9[10] = GVar26;
      pGVar9[0xb] = GVar26;
      pGVar9[0xc] = GVar27;
      pGVar9[0xd] = GVar27;
      pGVar9[0xe] = GVar27;
      pGVar9[0xf] = GVar28;
      pGVar9[0x10] = GVar28;
      pGVar9[0x11] = GVar28;
      pGVar9[0x12] = GVar29;
      pGVar9[0x13] = GVar29;
      pGVar9[0x14] = GVar29;
      pGVar9[0x15] = GVar30;
      pGVar9[0x16] = GVar30;
      pGVar9[0x17] = GVar30;
      pGVar9 = pGVar9 + 0x18;
      pauVar11 = pauVar11 + 2;
    } while (lVar15 != 0);
    if (uVar12 == uVar16) goto LAB_008c4428;
  }
LAB_008c445c:
  lVar15 = uVar16 - uVar12;
  pfVar14 = (float *)(*pauVar10 + uVar12 * 4);
  do {
    if (0.0 < *pfVar14) {
      GVar23 = SUB41((int)(((*pfVar14 - fVar18) * 223.0) / fVar19 + 32.0),0);
    }
    else {
      GVar23 = (GsMaskedOcclusionCulling)0x0;
    }
    *pGVar8 = GVar23;
    lVar15 = lVar15 + -1;
    pGVar8[1] = GVar23;
    pfVar14 = pfVar14 + 1;
    pGVar8[2] = GVar23;
    pGVar8 = pGVar8 + 3;
  } while (lVar15 != 0);
LAB_008c4428:
  WriteBMP(this_00,param_1,(uchar *)this_00,iVar1,iVar2);
  operator_delete__(this_00);
  operator_delete__(pauVar10);
  return;
}


