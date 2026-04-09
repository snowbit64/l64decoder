// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tangentArrayInternal<unsigned_int>
// Entry Point: 00b58008
// Size: 1328 bytes
// Signature: void __cdecl tangentArrayInternal<unsigned_int>(uint param_1, float * param_2, float * param_3, float * param_4, uint param_5, uint * param_6, float * param_7)


/* void MathUtil::tangentArrayInternal<unsigned int>(unsigned int, float const*, float const*, float
   const*, unsigned int, unsigned int const*, float*) */

void MathUtil::tangentArrayInternal<unsigned_int>
               (uint param_1,float *param_2,float *param_3,float *param_4,uint param_5,uint *param_6
               ,float *param_7)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double *pdVar5;
  undefined auVar6 [16];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  void *__s;
  long lVar10;
  float *pfVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
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
  double dVar29;
  undefined8 uVar30;
  undefined auVar31 [16];
  undefined auVar32 [16];
  double dVar33;
  undefined auVar34 [16];
  float fVar35;
  double dVar36;
  undefined auVar37 [16];
  undefined auVar38 [16];
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
      dVar26 = (double)param_4[*param_6 * 2];
      dVar28 = (double)(param_4 + *param_6 * 2)[1];
      dVar29 = (double)(param_4 + param_6[1] * 2)[1] - dVar28;
      dVar27 = (double)param_4[param_6[1] * 2] - dVar26;
      dVar28 = (double)(param_4 + param_6[2] * 2)[1] - dVar28;
      dVar26 = -((double)param_4[param_6[2] * 2] - dVar26);
      dVar33 = (double)NEON_fmadd(dVar27,dVar28,dVar29 * dVar26);
      if (1e-08 < ABS(dVar33)) {
        dVar33 = 1.0 / dVar33;
        uVar7 = *param_6 * 3;
        uVar8 = param_6[2] * 3;
        uVar9 = param_6[1] * 3;
        pfVar11 = param_2 + uVar7;
        pfVar1 = param_2 + uVar8;
        pfVar2 = param_2 + uVar9;
        lVar21 = (ulong)uVar7 * 8;
        lVar22 = (ulong)uVar8 * 8;
        lVar16 = (ulong)(uVar7 + 1) * 8;
        dVar40 = (double)*pfVar1 - (double)*pfVar11;
        dVar43 = (double)pfVar1[1] - (double)pfVar11[1];
        dVar36 = (double)*pfVar2 - (double)*pfVar11;
        dVar39 = (double)pfVar2[1] - (double)pfVar11[1];
        lVar10 = (ulong)(uVar7 + 2) * 8;
        lVar18 = (ulong)uVar9 * 8;
        dVar53 = (double)pfVar1[2] - (double)pfVar11[2];
        lVar20 = (ulong)(uVar9 + 1) * 8;
        lVar12 = (ulong)(uVar9 + 2) * 8;
        dVar29 = dVar33 * -dVar29;
        dVar28 = dVar28 * dVar33;
        lVar23 = (ulong)(uVar8 + 1) * 8;
        dVar50 = (double)pfVar2[2] - (double)pfVar11[2];
        lVar14 = (ulong)(uVar8 + 2) * 8;
        dVar26 = dVar33 * dVar26;
        dVar27 = dVar27 * dVar33;
        dVar33 = (double)NEON_fmadd(dVar28,dVar36,dVar40 * dVar29);
        *(double *)((long)__s + lVar21) = dVar33 + *(double *)((long)__s + lVar21);
        dVar54 = (double)NEON_fmadd(dVar28,dVar39,dVar43 * dVar29);
        dVar29 = (double)NEON_fmadd(dVar28,dVar50,dVar53 * dVar29);
        *(double *)((long)__s + lVar16) = dVar54 + *(double *)((long)__s + lVar16);
        *(double *)((long)__s + lVar10) = dVar29 + *(double *)((long)__s + lVar10);
        *(double *)((long)__s + lVar18) = dVar33 + *(double *)((long)__s + lVar18);
        *(double *)((long)__s + lVar20) = dVar54 + *(double *)((long)__s + lVar20);
        *(double *)((long)__s + lVar12) = dVar29 + *(double *)((long)__s + lVar12);
        *(double *)((long)__s + lVar22) = dVar33 + *(double *)((long)__s + lVar22);
        *(double *)((long)__s + lVar23) = dVar54 + *(double *)((long)__s + lVar23);
        *(double *)((long)__s + lVar14) = dVar29 + *(double *)((long)__s + lVar14);
        dVar28 = (double)NEON_fmadd(dVar27,dVar40,dVar36 * dVar26);
        *(double *)((long)__s + lVar21 + (ulong)(param_1 * 3) * 8) =
             dVar28 + *(double *)((long)__s + lVar21 + (ulong)(param_1 * 3) * 8);
        dVar29 = (double)NEON_fmadd(dVar27,dVar43,dVar39 * dVar26);
        dVar26 = (double)NEON_fmadd(dVar27,dVar53,dVar50 * dVar26);
        *(double *)((long)__s + lVar16 + (ulong)(param_1 * 3) * 8) =
             dVar29 + *(double *)((long)__s + lVar16 + (ulong)(param_1 * 3) * 8);
        *(double *)((long)__s + lVar10 + (ulong)(param_1 * 3) * 8) =
             dVar26 + *(double *)((long)__s + lVar10 + (ulong)(param_1 * 3) * 8);
        *(double *)((long)__s + lVar18 + (ulong)(param_1 * 3) * 8) =
             dVar28 + *(double *)((long)__s + lVar18 + (ulong)(param_1 * 3) * 8);
        *(double *)((long)__s + lVar20 + (ulong)(param_1 * 3) * 8) =
             dVar29 + *(double *)((long)__s + lVar20 + (ulong)(param_1 * 3) * 8);
        *(double *)((long)__s + lVar12 + (ulong)(param_1 * 3) * 8) =
             dVar26 + *(double *)((long)__s + lVar12 + (ulong)(param_1 * 3) * 8);
        *(double *)((long)__s + lVar22 + (ulong)(param_1 * 3) * 8) =
             dVar28 + *(double *)((long)__s + lVar22 + (ulong)(param_1 * 3) * 8);
        *(double *)((long)__s + lVar23 + (ulong)(param_1 * 3) * 8) =
             dVar29 + *(double *)((long)__s + lVar23 + (ulong)(param_1 * 3) * 8);
        *(double *)((long)__s + lVar14 + (ulong)(param_1 * 3) * 8) =
             dVar26 + *(double *)((long)__s + lVar14 + (ulong)(param_1 * 3) * 8);
      }
      param_5 = param_5 - 1;
      param_6 = param_6 + 3;
    } while (param_5 != 0);
  }
  if (param_1 != 0) {
    if ((param_1 == 1) || ((param_7 < param_3 + uVar24 * 3 && (param_3 < param_7 + uVar24 * 4)))) {
      uVar13 = 0;
      pfVar11 = param_7;
    }
    else {
      uVar13 = uVar24 & 0xfffffffe;
      uVar46 = NEON_fmov(0x3f800000,4);
      uVar30 = NEON_fmov(0xbf800000,4);
      uVar15 = 0;
      auVar25 = NEON_fmov(0x3ff0000000000000,8);
      pfVar11 = param_7 + uVar13 * 4;
      uVar17 = uVar13;
      do {
        uVar19 = uVar15 & 0xfffffffe;
        uVar15 = uVar15 + 6;
        lVar10 = uVar19 * 8;
        uVar17 = uVar17 - 2;
        pfVar1 = param_3 + uVar19;
        pdVar4 = (double *)((long)__s + lVar10);
        fVar35 = pfVar1[4];
        pdVar5 = (double *)((long)__s + lVar10 + (ulong)(param_1 * 3) * 8);
        dVar50 = *pdVar4;
        dVar41 = pdVar4[1];
        dVar44 = pdVar4[2];
        dVar54 = pdVar4[3];
        dVar42 = pdVar4[4];
        dVar45 = pdVar4[5];
        dVar40 = (double)pfVar1[1];
        dVar43 = (double)(float)(CONCAT17((char)((uint)fVar35 >> 0x18),
                                          CONCAT16((char)((uint)fVar35 >> 0x10),
                                                   CONCAT15((char)((uint)fVar35 >> 8),
                                                            CONCAT14(SUB41(fVar35,0),pfVar1[1]))))
                                >> 0x20);
        dVar47 = (double)*pfVar1;
        dVar49 = (double)pfVar1[3];
        dVar28 = (double)pfVar1[2];
        dVar33 = (double)pfVar1[5];
        dVar26 = dVar41 - dVar40 * dVar41;
        dVar29 = dVar42 - dVar43 * dVar42;
        dVar36 = dVar50 - dVar47 * dVar50;
        dVar39 = dVar54 - dVar49 * dVar54;
        dVar53 = dVar44 - dVar28 * dVar44;
        dVar55 = dVar45 - dVar33 * dVar45;
        dVar27 = dVar26 * dVar26 + dVar36 * dVar36 + dVar53 * dVar53;
        dVar52 = dVar29 * dVar29 + dVar39 * dVar39 + dVar55 * dVar55;
        auVar37._0_8_ =
             (dVar47 * -dVar44 + dVar50 * dVar28) * pdVar5[1] +
             *pdVar5 * (-dVar41 * dVar28 + dVar44 * dVar40) +
             pdVar5[2] * (-dVar50 * dVar40 + dVar41 * dVar47);
        auVar37._8_8_ =
             (dVar49 * -dVar45 + dVar54 * dVar33) * pdVar5[4] +
             pdVar5[3] * (-dVar42 * dVar33 + dVar45 * dVar43) +
             pdVar5[5] * (-dVar54 * dVar43 + dVar42 * dVar49);
        auVar51._8_8_ = dVar52;
        auVar51._0_8_ = dVar27;
        auVar51 = NEON_fsqrt(auVar51,8);
        auVar38 = NEON_fcmlt(auVar37,0,8);
        auVar31._8_8_ = 0x3e45798ee2308c3a;
        auVar31._0_8_ = 0x3e45798ee2308c3a;
        auVar6._8_8_ = dVar52;
        auVar6._0_8_ = dVar27;
        auVar31 = NEON_fcmgt(auVar6,auVar31,8);
        uVar48 = NEON_bsl(CONCAT44(auVar38._8_4_,auVar38._0_4_),uVar30,uVar46,1);
        dVar27 = auVar25._0_8_ / auVar51._0_8_;
        dVar28 = auVar25._8_8_ / auVar51._8_8_;
        auVar34._0_8_ = dVar36 * dVar27;
        auVar34._8_8_ = dVar39 * dVar28;
        dVar26 = dVar26 * dVar27;
        dVar29 = dVar29 * dVar28;
        dVar53 = dVar53 * dVar27;
        dVar55 = dVar55 * dVar28;
        auVar51 = NEON_bif(auVar34,auVar25,auVar31,1);
        auVar32._0_8_ =
             (double)CONCAT17((byte)((ulong)dVar53 >> 0x38) & auVar31[7],
                              CONCAT16((byte)((ulong)dVar53 >> 0x30) & auVar31[6],
                                       CONCAT15((byte)((ulong)dVar53 >> 0x28) & auVar31[5],
                                                CONCAT14((byte)((ulong)dVar53 >> 0x20) & auVar31[4],
                                                         CONCAT13((byte)((ulong)dVar53 >> 0x18) &
                                                                  auVar31[3],
                                                                  CONCAT12((byte)((ulong)dVar53 >>
                                                                                 0x10) & auVar31[2],
                                                                           CONCAT11((byte)((ulong)
                                                  dVar53 >> 8) & auVar31[1],
                                                  SUB81(dVar53,0) & auVar31[0])))))));
        auVar32[8] = SUB81(dVar55,0) & auVar31[8];
        auVar32[9] = (byte)((ulong)dVar55 >> 8) & auVar31[9];
        auVar32[10] = (byte)((ulong)dVar55 >> 0x10) & auVar31[10];
        auVar32[11] = (byte)((ulong)dVar55 >> 0x18) & auVar31[11];
        auVar32[12] = (byte)((ulong)dVar55 >> 0x20) & auVar31[12];
        auVar32[13] = (byte)((ulong)dVar55 >> 0x28) & auVar31[13];
        auVar32[14] = (byte)((ulong)dVar55 >> 0x30) & auVar31[14];
        auVar32[15] = (byte)((ulong)dVar55 >> 0x38) & auVar31[15];
        dVar26 = (double)CONCAT17((byte)((ulong)dVar26 >> 0x38) & auVar31[7],
                                  CONCAT16((byte)((ulong)dVar26 >> 0x30) & auVar31[6],
                                           CONCAT15((byte)((ulong)dVar26 >> 0x28) & auVar31[5],
                                                    CONCAT14((byte)((ulong)dVar26 >> 0x20) &
                                                             auVar31[4],
                                                             CONCAT13((byte)((ulong)dVar26 >> 0x18)
                                                                      & auVar31[3],
                                                                      CONCAT12((byte)((ulong)dVar26
                                                                                     >> 0x10) &
                                                                               auVar31[2],
                                                                               CONCAT11((byte)((
                                                  ulong)dVar26 >> 8) & auVar31[1],
                                                  SUB81(dVar26,0) & auVar31[0])))))));
        auVar38[8] = SUB81(dVar29,0) & auVar31[8];
        auVar38._0_8_ = dVar26;
        auVar38[9] = (byte)((ulong)dVar29 >> 8) & auVar31[9];
        auVar38[10] = (byte)((ulong)dVar29 >> 0x10) & auVar31[10];
        auVar38[11] = (byte)((ulong)dVar29 >> 0x18) & auVar31[11];
        auVar38[12] = (byte)((ulong)dVar29 >> 0x20) & auVar31[12];
        auVar38[13] = (byte)((ulong)dVar29 >> 0x28) & auVar31[13];
        auVar38[14] = (byte)((ulong)dVar29 >> 0x30) & auVar31[14];
        auVar38[15] = (byte)((ulong)dVar29 >> 0x38) & auVar31[15];
        *param_7 = (float)auVar51._0_8_;
        param_7[1] = (float)dVar26;
        param_7[2] = (float)auVar32._0_8_;
        param_7[3] = (float)uVar48;
        param_7[4] = (float)auVar51._8_8_;
        param_7[5] = (float)auVar38._8_8_;
        param_7[6] = (float)auVar32._8_8_;
        param_7[7] = (float)((ulong)uVar48 >> 0x20);
        param_7 = param_7 + 8;
      } while (uVar17 != 0);
      if (uVar13 == uVar24) goto LAB_00b58518;
    }
    uVar15 = uVar13 * 3;
    lVar10 = uVar24 - uVar13;
    do {
      pfVar1 = param_3 + (uVar15 & 0xffffffff);
      lVar12 = (uVar15 & 0xffffffff) * 8;
      dVar50 = 1.0;
      pdVar4 = (double *)((long)__s + lVar12);
      dVar33 = *pdVar4;
      dVar26 = pdVar4[1];
      dVar27 = (double)pfVar1[1];
      dVar28 = (double)*pfVar1;
      dVar40 = (double)pfVar1[2];
      uVar46 = NEON_fmadd(dVar28,dVar33,dVar26 * dVar27);
      dVar36 = pdVar4[2];
      uVar46 = NEON_fmadd(dVar40,dVar36,uVar46);
      dVar29 = (double)NEON_fmsub(uVar46,dVar27,dVar26);
      dVar53 = (double)NEON_fmsub(uVar46,dVar28,dVar33);
      dVar54 = (double)NEON_fmsub(uVar46,dVar40,dVar36);
      uVar46 = NEON_fmadd(dVar53,dVar53,dVar29 * dVar29);
      dVar43 = 0.0;
      dVar55 = (double)NEON_fmadd(dVar54,dVar54,uVar46);
      dVar39 = 0.0;
      if (1e-08 < dVar55) {
        dVar39 = 1.0 / SQRT(dVar55);
        dVar50 = dVar53 * dVar39;
        dVar43 = dVar29 * dVar39;
        dVar39 = dVar54 * dVar39;
      }
      puVar3 = (undefined8 *)((long)__s + lVar12 + (ulong)(param_1 * 3) * 8);
      uVar15 = uVar15 + 3;
      dVar29 = (double)NEON_fmadd(dVar40,dVar33,dVar28 * -dVar36);
      uVar46 = NEON_fmadd(dVar27,dVar36,-dVar26 * dVar40);
      uVar30 = NEON_fmadd(dVar28,dVar26,-dVar33 * dVar27);
      uVar46 = NEON_fmadd(uVar46,*puVar3,dVar29 * (double)puVar3[1]);
      dVar26 = (double)NEON_fmadd(uVar30,puVar3[2],uVar46);
      *pfVar11 = (float)dVar50;
      pfVar11[2] = (float)dVar39;
      fVar35 = -1.0;
      if (0.0 <= dVar26) {
        fVar35 = 1.0;
      }
      lVar10 = lVar10 + -1;
      pfVar11[1] = (float)dVar43;
      pfVar11[3] = fVar35;
      pfVar11 = pfVar11 + 4;
    } while (lVar10 != 0);
  }
LAB_00b58518:
  operator_delete__(__s);
  return;
}


