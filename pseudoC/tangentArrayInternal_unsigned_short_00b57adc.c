// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tangentArrayInternal<unsigned_short>
// Entry Point: 00b57adc
// Size: 1320 bytes
// Signature: void __cdecl tangentArrayInternal<unsigned_short>(uint param_1, float * param_2, float * param_3, float * param_4, uint param_5, ushort * param_6, float * param_7)


/* void MathUtil::tangentArrayInternal<unsigned short>(unsigned int, float const*, float const*,
   float const*, unsigned int, unsigned short const*, float*) */

void MathUtil::tangentArrayInternal<unsigned_short>
               (uint param_1,float *param_2,float *param_3,float *param_4,uint param_5,
               ushort *param_6,float *param_7)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double *pdVar5;
  undefined auVar6 [16];
  int iVar7;
  void *__s;
  int iVar8;
  ulong uVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  undefined auVar30 [16];
  undefined auVar31 [16];
  double dVar32;
  undefined auVar33 [16];
  float fVar34;
  double dVar35;
  undefined auVar36 [16];
  undefined auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined8 uVar46;
  double dVar47;
  undefined8 uVar48;
  double dVar49;
  double dVar50;
  undefined auVar51 [16];
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  
  uVar24 = (ulong)param_1;
  __s = operator_new__((ulong)(param_1 * 6) << 3);
  memset(__s,0,uVar24 * 0x30);
  if (param_5 != 0) {
    do {
      uVar9 = (ulong)*param_6;
      uVar12 = (ulong)param_6[2];
      uVar15 = (ulong)param_6[1];
      dVar26 = (double)param_4[uVar9 * 2];
      dVar28 = (double)(param_4 + uVar9 * 2)[1];
      dVar53 = (double)(param_4 + uVar15 * 2)[1] - dVar28;
      dVar27 = (double)param_4[uVar15 * 2] - dVar26;
      dVar28 = (double)(param_4 + uVar12 * 2)[1] - dVar28;
      dVar26 = -((double)param_4[uVar12 * 2] - dVar26);
      dVar32 = (double)NEON_fmadd(dVar27,dVar28,dVar53 * dVar26);
      if (1e-08 < ABS(dVar32)) {
        dVar32 = 1.0 / dVar32;
        iVar8 = (uint)*param_6 * 3;
        iVar7 = (uint)param_6[2] * 3;
        iVar14 = (uint)param_6[1] * 3;
        pfVar11 = param_2 + uVar9 * 3;
        pfVar1 = param_2 + uVar12 * 3;
        pfVar2 = param_2 + uVar15 * 3;
        lVar22 = uVar12 * 0x18;
        lVar20 = uVar9 * 0x18;
        dVar38 = (double)*pfVar1 - (double)*pfVar11;
        dVar35 = (double)*pfVar2 - (double)*pfVar11;
        dVar42 = (double)pfVar1[1] - (double)pfVar11[1];
        dVar54 = (double)pfVar1[2] - (double)pfVar11[2];
        dVar39 = (double)pfVar2[1] - (double)pfVar11[1];
        lVar17 = (ulong)(iVar8 + 1) * 8;
        lVar10 = (ulong)(iVar8 + 2) * 8;
        lVar18 = uVar15 * 0x18;
        dVar50 = (double)pfVar2[2] - (double)pfVar11[2];
        lVar21 = (ulong)(iVar14 + 1) * 8;
        lVar16 = (ulong)(iVar14 + 2) * 8;
        dVar53 = dVar32 * -dVar53;
        dVar28 = dVar28 * dVar32;
        lVar23 = (ulong)(iVar7 + 1) * 8;
        lVar13 = (ulong)(iVar7 + 2) * 8;
        dVar26 = dVar32 * dVar26;
        dVar27 = dVar27 * dVar32;
        dVar45 = (double)NEON_fmadd(dVar28,dVar35,dVar38 * dVar53);
        dVar32 = (double)NEON_fmadd(dVar28,dVar39,dVar42 * dVar53);
        dVar28 = (double)NEON_fmadd(dVar28,dVar50,dVar54 * dVar53);
        *(double *)((long)__s + lVar20) = dVar45 + *(double *)((long)__s + lVar20);
        dVar53 = *(double *)((long)__s + lVar10);
        *(double *)((long)__s + lVar17) = dVar32 + *(double *)((long)__s + lVar17);
        *(double *)((long)__s + lVar10) = dVar28 + dVar53;
        *(double *)((long)__s + lVar18) = dVar45 + *(double *)((long)__s + lVar18);
        dVar53 = *(double *)((long)__s + lVar16);
        *(double *)((long)__s + lVar21) = dVar32 + *(double *)((long)__s + lVar21);
        *(double *)((long)__s + lVar16) = dVar28 + dVar53;
        *(double *)((long)__s + lVar22) = dVar45 + *(double *)((long)__s + lVar22);
        dVar53 = *(double *)((long)__s + lVar13);
        *(double *)((long)__s + lVar23) = dVar32 + *(double *)((long)__s + lVar23);
        *(double *)((long)__s + lVar13) = dVar28 + dVar53;
        dVar28 = (double)NEON_fmadd(dVar27,dVar38,dVar35 * dVar26);
        *(double *)((long)__s + lVar20 + (ulong)(param_1 * 3) * 8) =
             dVar28 + *(double *)((long)__s + lVar20 + (ulong)(param_1 * 3) * 8);
        dVar53 = (double)NEON_fmadd(dVar27,dVar42,dVar39 * dVar26);
        dVar27 = (double)NEON_fmadd(dVar27,dVar54,dVar50 * dVar26);
        dVar26 = *(double *)((long)__s + lVar10 + (ulong)(param_1 * 3) * 8);
        *(double *)((long)__s + lVar17 + (ulong)(param_1 * 3) * 8) =
             dVar53 + *(double *)((long)__s + lVar17 + (ulong)(param_1 * 3) * 8);
        *(double *)((long)__s + lVar10 + (ulong)(param_1 * 3) * 8) = dVar27 + dVar26;
        *(double *)((long)__s + lVar18 + (ulong)(param_1 * 3) * 8) =
             dVar28 + *(double *)((long)__s + lVar18 + (ulong)(param_1 * 3) * 8);
        dVar26 = *(double *)((long)__s + lVar16 + (ulong)(param_1 * 3) * 8);
        *(double *)((long)__s + lVar21 + (ulong)(param_1 * 3) * 8) =
             dVar53 + *(double *)((long)__s + lVar21 + (ulong)(param_1 * 3) * 8);
        *(double *)((long)__s + lVar16 + (ulong)(param_1 * 3) * 8) = dVar27 + dVar26;
        *(double *)((long)__s + lVar22 + (ulong)(param_1 * 3) * 8) =
             dVar28 + *(double *)((long)__s + lVar22 + (ulong)(param_1 * 3) * 8);
        dVar26 = *(double *)((long)__s + lVar13 + (ulong)(param_1 * 3) * 8);
        *(double *)((long)__s + lVar23 + (ulong)(param_1 * 3) * 8) =
             dVar53 + *(double *)((long)__s + lVar23 + (ulong)(param_1 * 3) * 8);
        *(double *)((long)__s + lVar13 + (ulong)(param_1 * 3) * 8) = dVar27 + dVar26;
      }
      param_5 = param_5 - 1;
      param_6 = param_6 + 3;
    } while (param_5 != 0);
  }
  if (param_1 != 0) {
    if ((param_1 == 1) || ((param_7 < param_3 + uVar24 * 3 && (param_3 < param_7 + uVar24 * 4)))) {
      uVar9 = 0;
      pfVar11 = param_7;
    }
    else {
      uVar9 = uVar24 & 0xfffffffe;
      uVar46 = NEON_fmov(0x3f800000,4);
      uVar29 = NEON_fmov(0xbf800000,4);
      uVar12 = 0;
      auVar25 = NEON_fmov(0x3ff0000000000000,8);
      pfVar11 = param_7 + uVar9 * 4;
      uVar15 = uVar9;
      do {
        uVar19 = uVar12 & 0xfffffffe;
        uVar12 = uVar12 + 6;
        lVar10 = uVar19 * 8;
        uVar15 = uVar15 - 2;
        pfVar1 = param_3 + uVar19;
        pdVar4 = (double *)((long)__s + lVar10);
        fVar34 = pfVar1[4];
        pdVar5 = (double *)((long)__s + lVar10 + (ulong)(param_1 * 3) * 8);
        dVar45 = *pdVar4;
        dVar40 = pdVar4[1];
        dVar43 = pdVar4[2];
        dVar54 = pdVar4[3];
        dVar41 = pdVar4[4];
        dVar44 = pdVar4[5];
        dVar39 = (double)pfVar1[1];
        dVar42 = (double)(float)(CONCAT17((char)((uint)fVar34 >> 0x18),
                                          CONCAT16((char)((uint)fVar34 >> 0x10),
                                                   CONCAT15((char)((uint)fVar34 >> 8),
                                                            CONCAT14(SUB41(fVar34,0),pfVar1[1]))))
                                >> 0x20);
        dVar47 = (double)*pfVar1;
        dVar49 = (double)pfVar1[3];
        dVar28 = (double)pfVar1[2];
        dVar32 = (double)pfVar1[5];
        dVar26 = dVar40 - dVar39 * dVar40;
        dVar53 = dVar41 - dVar42 * dVar41;
        dVar35 = dVar45 - dVar47 * dVar45;
        dVar38 = dVar54 - dVar49 * dVar54;
        dVar50 = dVar43 - dVar28 * dVar43;
        dVar55 = dVar44 - dVar32 * dVar44;
        dVar27 = dVar26 * dVar26 + dVar35 * dVar35 + dVar50 * dVar50;
        dVar52 = dVar53 * dVar53 + dVar38 * dVar38 + dVar55 * dVar55;
        auVar36._0_8_ =
             (dVar47 * -dVar43 + dVar45 * dVar28) * pdVar5[1] +
             *pdVar5 * (-dVar40 * dVar28 + dVar43 * dVar39) +
             pdVar5[2] * (-dVar45 * dVar39 + dVar40 * dVar47);
        auVar36._8_8_ =
             (dVar49 * -dVar44 + dVar54 * dVar32) * pdVar5[4] +
             pdVar5[3] * (-dVar41 * dVar32 + dVar44 * dVar42) +
             pdVar5[5] * (-dVar54 * dVar42 + dVar41 * dVar49);
        auVar51._8_8_ = dVar52;
        auVar51._0_8_ = dVar27;
        auVar51 = NEON_fsqrt(auVar51,8);
        auVar37 = NEON_fcmlt(auVar36,0,8);
        auVar30._8_8_ = 0x3e45798ee2308c3a;
        auVar30._0_8_ = 0x3e45798ee2308c3a;
        auVar6._8_8_ = dVar52;
        auVar6._0_8_ = dVar27;
        auVar30 = NEON_fcmgt(auVar6,auVar30,8);
        uVar48 = NEON_bsl(CONCAT44(auVar37._8_4_,auVar37._0_4_),uVar29,uVar46,1);
        dVar27 = auVar25._0_8_ / auVar51._0_8_;
        dVar28 = auVar25._8_8_ / auVar51._8_8_;
        auVar33._0_8_ = dVar35 * dVar27;
        auVar33._8_8_ = dVar38 * dVar28;
        dVar26 = dVar26 * dVar27;
        dVar53 = dVar53 * dVar28;
        dVar50 = dVar50 * dVar27;
        dVar55 = dVar55 * dVar28;
        auVar51 = NEON_bif(auVar33,auVar25,auVar30,1);
        auVar31._0_8_ =
             (double)CONCAT17((byte)((ulong)dVar50 >> 0x38) & auVar30[7],
                              CONCAT16((byte)((ulong)dVar50 >> 0x30) & auVar30[6],
                                       CONCAT15((byte)((ulong)dVar50 >> 0x28) & auVar30[5],
                                                CONCAT14((byte)((ulong)dVar50 >> 0x20) & auVar30[4],
                                                         CONCAT13((byte)((ulong)dVar50 >> 0x18) &
                                                                  auVar30[3],
                                                                  CONCAT12((byte)((ulong)dVar50 >>
                                                                                 0x10) & auVar30[2],
                                                                           CONCAT11((byte)((ulong)
                                                  dVar50 >> 8) & auVar30[1],
                                                  SUB81(dVar50,0) & auVar30[0])))))));
        auVar31[8] = SUB81(dVar55,0) & auVar30[8];
        auVar31[9] = (byte)((ulong)dVar55 >> 8) & auVar30[9];
        auVar31[10] = (byte)((ulong)dVar55 >> 0x10) & auVar30[10];
        auVar31[11] = (byte)((ulong)dVar55 >> 0x18) & auVar30[11];
        auVar31[12] = (byte)((ulong)dVar55 >> 0x20) & auVar30[12];
        auVar31[13] = (byte)((ulong)dVar55 >> 0x28) & auVar30[13];
        auVar31[14] = (byte)((ulong)dVar55 >> 0x30) & auVar30[14];
        auVar31[15] = (byte)((ulong)dVar55 >> 0x38) & auVar30[15];
        dVar26 = (double)CONCAT17((byte)((ulong)dVar26 >> 0x38) & auVar30[7],
                                  CONCAT16((byte)((ulong)dVar26 >> 0x30) & auVar30[6],
                                           CONCAT15((byte)((ulong)dVar26 >> 0x28) & auVar30[5],
                                                    CONCAT14((byte)((ulong)dVar26 >> 0x20) &
                                                             auVar30[4],
                                                             CONCAT13((byte)((ulong)dVar26 >> 0x18)
                                                                      & auVar30[3],
                                                                      CONCAT12((byte)((ulong)dVar26
                                                                                     >> 0x10) &
                                                                               auVar30[2],
                                                                               CONCAT11((byte)((
                                                  ulong)dVar26 >> 8) & auVar30[1],
                                                  SUB81(dVar26,0) & auVar30[0])))))));
        auVar37[8] = SUB81(dVar53,0) & auVar30[8];
        auVar37._0_8_ = dVar26;
        auVar37[9] = (byte)((ulong)dVar53 >> 8) & auVar30[9];
        auVar37[10] = (byte)((ulong)dVar53 >> 0x10) & auVar30[10];
        auVar37[11] = (byte)((ulong)dVar53 >> 0x18) & auVar30[11];
        auVar37[12] = (byte)((ulong)dVar53 >> 0x20) & auVar30[12];
        auVar37[13] = (byte)((ulong)dVar53 >> 0x28) & auVar30[13];
        auVar37[14] = (byte)((ulong)dVar53 >> 0x30) & auVar30[14];
        auVar37[15] = (byte)((ulong)dVar53 >> 0x38) & auVar30[15];
        *param_7 = (float)auVar51._0_8_;
        param_7[1] = (float)dVar26;
        param_7[2] = (float)auVar31._0_8_;
        param_7[3] = (float)uVar48;
        param_7[4] = (float)auVar51._8_8_;
        param_7[5] = (float)auVar37._8_8_;
        param_7[6] = (float)auVar31._8_8_;
        param_7[7] = (float)((ulong)uVar48 >> 0x20);
        param_7 = param_7 + 8;
      } while (uVar15 != 0);
      if (uVar9 == uVar24) goto LAB_00b57fe4;
    }
    uVar12 = uVar9 * 3;
    lVar10 = uVar24 - uVar9;
    do {
      pfVar1 = param_3 + (uVar12 & 0xffffffff);
      lVar13 = (uVar12 & 0xffffffff) * 8;
      dVar45 = 1.0;
      pdVar4 = (double *)((long)__s + lVar13);
      dVar32 = *pdVar4;
      dVar26 = pdVar4[1];
      dVar27 = (double)pfVar1[1];
      dVar28 = (double)*pfVar1;
      dVar39 = (double)pfVar1[2];
      uVar46 = NEON_fmadd(dVar28,dVar32,dVar26 * dVar27);
      dVar35 = pdVar4[2];
      uVar46 = NEON_fmadd(dVar39,dVar35,uVar46);
      dVar53 = (double)NEON_fmsub(uVar46,dVar27,dVar26);
      dVar50 = (double)NEON_fmsub(uVar46,dVar28,dVar32);
      dVar54 = (double)NEON_fmsub(uVar46,dVar39,dVar35);
      uVar46 = NEON_fmadd(dVar50,dVar50,dVar53 * dVar53);
      dVar42 = 0.0;
      dVar55 = (double)NEON_fmadd(dVar54,dVar54,uVar46);
      dVar38 = 0.0;
      if (1e-08 < dVar55) {
        dVar38 = 1.0 / SQRT(dVar55);
        dVar45 = dVar50 * dVar38;
        dVar42 = dVar53 * dVar38;
        dVar38 = dVar54 * dVar38;
      }
      puVar3 = (undefined8 *)((long)__s + lVar13 + (ulong)(param_1 * 3) * 8);
      uVar12 = uVar12 + 3;
      dVar53 = (double)NEON_fmadd(dVar39,dVar32,dVar28 * -dVar35);
      uVar46 = NEON_fmadd(dVar27,dVar35,-dVar26 * dVar39);
      uVar29 = NEON_fmadd(dVar28,dVar26,-dVar32 * dVar27);
      uVar46 = NEON_fmadd(uVar46,*puVar3,dVar53 * (double)puVar3[1]);
      dVar26 = (double)NEON_fmadd(uVar29,puVar3[2],uVar46);
      *pfVar11 = (float)dVar45;
      pfVar11[2] = (float)dVar38;
      fVar34 = -1.0;
      if (0.0 <= dVar26) {
        fVar34 = 1.0;
      }
      lVar10 = lVar10 + -1;
      pfVar11[1] = (float)dVar42;
      pfVar11[3] = fVar34;
      pfVar11 = pfVar11 + 4;
    } while (lVar10 != 0);
  }
LAB_00b57fe4:
  operator_delete__(__s);
  return;
}


