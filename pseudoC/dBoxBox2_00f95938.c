// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dBoxBox2
// Entry Point: 00f95938
// Size: 4892 bytes
// Signature: undefined __cdecl dBoxBox2(btVector3 * param_1, float * param_2, btVector3 * param_3, btVector3 * param_4, float * param_5, btVector3 * param_6, btVector3 * param_7, float * param_8, int * param_9, int param_10, dContactGeom * param_11, int param_12, Result * param_13)


/* dBoxBox2(btVector3 const&, float const*, btVector3 const&, btVector3 const&, float const*,
   btVector3 const&, btVector3&, float*, int*, int, dContactGeom*, int,
   btDiscreteCollisionDetectorInterface::Result&) */

void dBoxBox2(btVector3 *param_1,float *param_2,btVector3 *param_3,btVector3 *param_4,float *param_5
             ,btVector3 *param_6,btVector3 *param_7,float *param_8,int *param_9,int param_10,
             dContactGeom *param_11,int param_12,Result *param_13)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  code *pcVar13;
  uint uVar14;
  float *pfVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  undefined8 *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined4 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  float fVar51;
  undefined4 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined4 uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined4 uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float local_2e8;
  uint local_294;
  float local_280;
  float fStack_27c;
  undefined8 *local_268;
  undefined8 local_260;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  float local_210;
  undefined4 local_20c;
  undefined8 local_208;
  float local_200;
  undefined4 local_1fc;
  undefined8 local_1e8;
  float local_1e0;
  undefined4 local_1dc;
  float local_1d8 [8];
  undefined local_1b8 [8];
  float local_1b0 [22];
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  long local_b8;
  
  lVar3 = tpidr_el0;
  local_b8 = *(long *)(lVar3 + 0x28);
  fVar23 = *param_2;
  fVar51 = *param_5;
  fVar24 = param_2[4];
  fVar59 = param_2[5];
  fVar49 = param_5[4];
  fVar29 = param_5[5];
  fVar43 = param_5[1];
  fVar26 = param_2[8];
  fVar53 = param_2[9];
  fVar66 = param_5[8];
  fVar45 = param_5[9];
  uVar30 = NEON_fmadd(fVar49,fVar24,fVar51 * fVar23);
  fVar64 = param_5[2];
  fVar33 = param_5[6];
  uVar44 = NEON_fmadd(fVar29,fVar24,fVar43 * fVar23);
  fVar57 = (float)NEON_fmadd(fVar66,fVar26,uVar30);
  fVar42 = param_5[10];
  fVar63 = ABS(fVar57);
  fVar34 = *(float *)param_4 - *(float *)param_1;
  fVar21 = (float)*(undefined8 *)param_6 * 0.5;
  fVar22 = (float)((ulong)*(undefined8 *)param_6 >> 0x20) * 0.5;
  fVar46 = (float)NEON_fmadd(fVar45,fVar26,uVar44);
  uVar30 = NEON_fmadd(fVar33,fVar24,fVar64 * fVar23);
  fVar67 = *(float *)(param_4 + 4) - *(float *)(param_1 + 4);
  local_d8 = CONCAT44(fVar22,fVar21);
  fVar37 = (float)NEON_fmadd(fVar42,fVar26,uVar30);
  fVar65 = ABS(fVar46);
  fVar32 = *(float *)(param_4 + 8) - *(float *)(param_1 + 8);
  local_d0 = *(float *)(param_6 + 8) * 0.5;
  uVar30 = NEON_fmadd(fVar24,fVar67,fVar23 * fVar34);
  fVar68 = ABS(fVar37);
  fVar24 = (float)*(undefined8 *)param_3 * 0.5;
  fVar31 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * 0.5;
  fVar39 = (float)NEON_fmadd(fVar26,fVar32,uVar30);
  fVar25 = param_2[1];
  fVar26 = (float)NEON_fmadd(fVar68,local_d0,fVar63 * fVar21 + fVar65 * fVar22);
  fVar47 = param_2[2];
  local_c8 = CONCAT44(fVar31,fVar24);
  local_c0 = *(float *)(param_3 + 8) * 0.5;
  fVar28 = param_2[6];
  fVar26 = ABS(fVar39) - (fVar24 + fVar26);
  fVar27 = param_2[10];
  if (fVar26 <= 0.0) {
    uVar56 = NEON_fmadd(fVar49,fVar59,fVar51 * fVar25);
    uVar30 = NEON_fmadd(fVar29,fVar59,fVar43 * fVar25);
    uVar44 = NEON_fmadd(fVar33,fVar59,fVar64 * fVar25);
    uVar60 = NEON_fmadd(fVar59,fVar67,fVar25 * fVar34);
    fVar40 = (float)NEON_fmadd(fVar66,fVar53,uVar56);
    fVar58 = (float)NEON_fmadd(fVar45,fVar53,uVar30);
    fVar59 = (float)NEON_fmadd(fVar42,fVar53,uVar44);
    fVar61 = (float)NEON_fmadd(fVar53,fVar32,uVar60);
    fVar41 = ABS(fVar40);
    fVar38 = ABS(fVar58);
    fVar35 = ABS(fVar59);
    pfVar15 = param_2;
    fVar53 = fVar26;
    if (fVar26 <= -3.402823e+38) {
      pfVar15 = (float *)0x0;
      fVar53 = -3.402823e+38;
    }
    bVar4 = fVar26 > -3.402823e+38 && fVar39 < 0.0;
    uVar19 = (uint)(-3.402823e+38 < fVar26);
    uVar30 = NEON_fmadd(fVar38,fVar22,fVar41 * fVar21);
    fVar26 = (float)NEON_fmadd(fVar35,local_d0,uVar30);
    fVar26 = ABS(fVar61) - (fVar31 + fVar26);
    if (fVar26 <= 0.0) {
      uVar30 = NEON_fmadd(fVar49,fVar28,fVar51 * fVar47);
      uVar56 = NEON_fmadd(fVar29,fVar28,fVar43 * fVar47);
      uVar44 = NEON_fmadd(fVar33,fVar28,fVar64 * fVar47);
      fVar36 = (float)NEON_fmadd(fVar66,fVar27,uVar30);
      fVar54 = (float)NEON_fmadd(fVar45,fVar27,uVar56);
      uVar30 = NEON_fmadd(fVar28,fVar67,fVar47 * fVar34);
      fVar48 = (float)NEON_fmadd(fVar42,fVar27,uVar44);
      fVar62 = ABS(fVar36);
      fVar55 = ABS(fVar54);
      fVar28 = (float)NEON_fmadd(fVar27,fVar32,uVar30);
      fVar27 = ABS(fVar48);
      if (fVar53 < fVar26) {
        uVar19 = 2;
        bVar4 = fVar61 < 0.0;
        pfVar15 = param_2 + 1;
        fVar53 = fVar26;
      }
      uVar30 = NEON_fmadd(fVar55,fVar22,fVar62 * fVar21);
      fVar26 = (float)NEON_fmadd(fVar27,local_d0,uVar30);
      fVar26 = ABS(fVar28) - (local_c0 + fVar26);
      if (fVar26 <= 0.0) {
        if (fVar53 < fVar26) {
          bVar4 = fVar28 < 0.0;
          uVar19 = 3;
          pfVar15 = param_2 + 2;
          fVar53 = fVar26;
        }
        uVar30 = NEON_fmadd(fVar49,fVar67,fVar51 * fVar34);
        uVar44 = NEON_fmadd(fVar62,local_c0,fVar63 * fVar24);
        fVar49 = (float)NEON_fmadd(fVar66,fVar32,uVar30);
        fVar26 = (float)NEON_fmadd(fVar41,fVar31,uVar44);
        fVar26 = ABS(fVar49) - (fVar21 + fVar26);
        if (fVar26 <= 0.0) {
          if (fVar53 < fVar26) {
            bVar4 = fVar49 < 0.0;
            uVar19 = 4;
            pfVar15 = param_5;
            fVar53 = fVar26;
          }
          uVar30 = NEON_fmadd(fVar29,fVar67,fVar43 * fVar34);
          uVar44 = NEON_fmadd(fVar55,local_c0,fVar65 * fVar24);
          fVar29 = (float)NEON_fmadd(fVar45,fVar32,uVar30);
          fVar26 = (float)NEON_fmadd(fVar38,fVar31,uVar44);
          fVar26 = ABS(fVar29) - (fVar22 + fVar26);
          if (fVar26 <= 0.0) {
            if (fVar53 < fVar26) {
              bVar4 = fVar29 < 0.0;
              uVar19 = 5;
              pfVar15 = param_5 + 1;
              fVar53 = fVar26;
            }
            uVar30 = NEON_fmadd(fVar33,fVar67,fVar64 * fVar34);
            uVar44 = NEON_fmadd(fVar27,local_c0,fVar68 * fVar24);
            fVar29 = (float)NEON_fmadd(fVar42,fVar32,uVar30);
            fVar26 = (float)NEON_fmadd(fVar35,fVar31,uVar44);
            fVar26 = ABS(fVar29) - (local_d0 + fVar26);
            if (fVar26 <= 0.0) {
              if (fVar53 < fVar26) {
                bVar4 = fVar29 < 0.0;
                uVar19 = 6;
                pfVar15 = param_5 + 2;
                fVar53 = fVar26;
              }
              fVar62 = fVar62 + 1e-05;
              fVar41 = fVar41 + 1e-05;
              fVar65 = fVar65 + 1e-05;
              fVar68 = fVar68 + 1e-05;
              uVar30 = NEON_fmadd(fVar41,local_c0,fVar62 * fVar31);
              fVar26 = (float)NEON_fnmsub(fVar40,fVar28,fVar36 * fVar61);
              uVar30 = NEON_fmadd(fVar65,local_d0,uVar30);
              fVar29 = (float)NEON_fmadd(fVar68,fVar22,uVar30);
              if (ABS(fVar26) - fVar29 <= 1.192093e-07) {
                fVar63 = fVar63 + 1e-05;
                fVar38 = fVar38 + 1e-05;
                fVar55 = fVar55 + 1e-05;
                local_2e8 = 0.0;
                fVar32 = SQRT(fVar36 * fVar36 + fVar40 * fVar40);
                if (fVar32 <= 1.192093e-07) {
                  fVar29 = 0.0;
                }
                else {
                  fVar33 = (ABS(fVar26) - fVar29) / fVar32;
                  fVar29 = 0.0;
                  if (fVar53 < fVar33 * 1.05) {
                    fVar29 = fVar40 / fVar32;
                    bVar4 = fVar26 < 0.0;
                    pfVar15 = (float *)0x0;
                    uVar19 = 7;
                    local_2e8 = -fVar36 / fVar32;
                    fVar53 = fVar33;
                  }
                }
                uVar30 = NEON_fmadd(fVar55,fVar31,fVar63 * local_d0);
                fVar26 = (float)NEON_fnmsub(fVar58,fVar28,fVar54 * fVar61);
                uVar30 = NEON_fmadd(fVar38,local_c0,uVar30);
                fVar32 = (float)NEON_fmadd(fVar68,fVar21,uVar30);
                if (ABS(fVar26) - fVar32 <= 1.192093e-07) {
                  fVar35 = fVar35 + 1e-05;
                  fVar27 = fVar27 + 1e-05;
                  fVar33 = SQRT(fVar54 * fVar54 + fVar58 * fVar58);
                  if ((1.192093e-07 < fVar33) &&
                     (fVar32 = (ABS(fVar26) - fVar32) / fVar33, fVar53 < fVar32 * 1.05)) {
                    fVar29 = fVar58 / fVar33;
                    bVar4 = fVar26 < 0.0;
                    pfVar15 = (float *)0x0;
                    uVar19 = 8;
                    local_2e8 = -fVar54 / fVar33;
                    fVar53 = fVar32;
                  }
                  uVar30 = NEON_fmadd(fVar65,fVar21,fVar63 * fVar22);
                  fVar26 = (float)NEON_fnmsub(fVar59,fVar28,fVar48 * fVar61);
                  uVar30 = NEON_fmadd(fVar35,local_c0,uVar30);
                  fVar32 = (float)NEON_fmadd(fVar27,fVar31,uVar30);
                  if (ABS(fVar26) - fVar32 <= 1.192093e-07) {
                    fVar33 = SQRT(fVar48 * fVar48 + fVar59 * fVar59);
                    if ((1.192093e-07 < fVar33) &&
                       (fVar32 = (ABS(fVar26) - fVar32) / fVar33, fVar53 < fVar32 * 1.05)) {
                      fVar29 = fVar59 / fVar33;
                      bVar4 = fVar26 < 0.0;
                      pfVar15 = (float *)0x0;
                      uVar19 = 9;
                      local_2e8 = -fVar48 / fVar33;
                      fVar53 = fVar32;
                    }
                    uVar30 = NEON_fmadd(fVar63,local_c0,fVar62 * fVar24);
                    fVar26 = (float)NEON_fnmsub(fVar36,fVar39,fVar57 * fVar28);
                    uVar30 = NEON_fmadd(fVar38,local_d0,uVar30);
                    fVar32 = (float)NEON_fmadd(fVar35,fVar22,uVar30);
                    if (ABS(fVar26) - fVar32 <= 1.192093e-07) {
                      fVar34 = 0.0;
                      fVar33 = SQRT(fVar36 * fVar36 + fVar57 * fVar57);
                      if ((1.192093e-07 < fVar33) &&
                         (fVar32 = (ABS(fVar26) - fVar32) / fVar33, fVar53 < fVar32 * 1.05)) {
                        bVar4 = fVar26 < 0.0;
                        pfVar15 = (float *)0x0;
                        uVar19 = 10;
                        fVar34 = fVar36 / fVar33;
                        fVar29 = -fVar57 / fVar33;
                        local_2e8 = 0.0;
                        fVar53 = fVar32;
                      }
                      uVar30 = NEON_fmadd(fVar55,fVar24,fVar41 * local_d0);
                      fVar26 = (float)NEON_fnmsub(fVar54,fVar39,fVar46 * fVar28);
                      uVar30 = NEON_fmadd(fVar65,local_c0,uVar30);
                      fVar32 = (float)NEON_fmadd(fVar35,fVar21,uVar30);
                      if (ABS(fVar26) - fVar32 <= 1.192093e-07) {
                        fVar33 = SQRT(fVar54 * fVar54 + fVar46 * fVar46);
                        if ((1.192093e-07 < fVar33) &&
                           (fVar32 = (ABS(fVar26) - fVar32) / fVar33, fVar53 < fVar32 * 1.05)) {
                          bVar4 = fVar26 < 0.0;
                          pfVar15 = (float *)0x0;
                          uVar19 = 0xb;
                          fVar34 = fVar54 / fVar33;
                          fVar29 = -fVar46 / fVar33;
                          local_2e8 = 0.0;
                          fVar53 = fVar32;
                        }
                        uVar30 = NEON_fmadd(fVar38,fVar21,fVar41 * fVar22);
                        fVar26 = (float)NEON_fnmsub(fVar48,fVar39,fVar37 * fVar28);
                        uVar30 = NEON_fmadd(fVar68,local_c0,uVar30);
                        fVar28 = (float)NEON_fmadd(fVar27,fVar24,uVar30);
                        if (ABS(fVar26) - fVar28 <= 1.192093e-07) {
                          fVar32 = SQRT(fVar48 * fVar48 + fVar37 * fVar37);
                          if ((1.192093e-07 < fVar32) &&
                             (fVar28 = (ABS(fVar26) - fVar28) / fVar32, fVar53 < fVar28 * 1.05)) {
                            fVar34 = fVar48 / fVar32;
                            bVar4 = fVar26 < 0.0;
                            pfVar15 = (float *)0x0;
                            uVar19 = 0xc;
                            fVar29 = -fVar37 / fVar32;
                            local_2e8 = 0.0;
                            fVar53 = fVar28;
                          }
                          uVar30 = NEON_fmadd(fVar63,fVar31,fVar41 * fVar24);
                          fVar26 = (float)NEON_fnmsub(fVar57,fVar61,fVar40 * fVar39);
                          uVar30 = NEON_fmadd(fVar55,local_d0,uVar30);
                          fVar28 = (float)NEON_fmadd(fVar27,fVar22,uVar30);
                          if (ABS(fVar26) - fVar28 <= 1.192093e-07) {
                            fVar32 = SQRT(fVar40 * fVar40 + fVar57 * fVar57);
                            if ((1.192093e-07 < fVar32) &&
                               (fVar28 = (ABS(fVar26) - fVar28) / fVar32, fVar53 < fVar28 * 1.05)) {
                              bVar4 = fVar26 < 0.0;
                              fVar29 = 0.0;
                              pfVar15 = (float *)0x0;
                              uVar19 = 0xd;
                              fVar34 = -fVar40 / fVar32;
                              local_2e8 = fVar57 / fVar32;
                              fVar53 = fVar28;
                            }
                            uVar30 = NEON_fmadd(fVar38,fVar24,fVar62 * local_d0);
                            fVar26 = (float)NEON_fnmsub(fVar46,fVar61,fVar58 * fVar39);
                            uVar30 = NEON_fmadd(fVar65,fVar31,uVar30);
                            fVar27 = (float)NEON_fmadd(fVar27,fVar21,uVar30);
                            if (ABS(fVar26) - fVar27 <= 1.192093e-07) {
                              fVar28 = SQRT(fVar58 * fVar58 + fVar46 * fVar46);
                              if ((1.192093e-07 < fVar28) &&
                                 (fVar27 = (ABS(fVar26) - fVar27) / fVar28, fVar53 < fVar27 * 1.05))
                              {
                                bVar4 = fVar26 < 0.0;
                                fVar29 = 0.0;
                                pfVar15 = (float *)0x0;
                                uVar19 = 0xe;
                                fVar34 = -fVar58 / fVar28;
                                local_2e8 = fVar46 / fVar28;
                                fVar53 = fVar27;
                              }
                              uVar30 = NEON_fmadd(fVar55,fVar21,fVar62 * fVar22);
                              fVar26 = (float)NEON_fnmsub(fVar37,fVar61,fVar59 * fVar39);
                              uVar30 = NEON_fmadd(fVar68,fVar31,uVar30);
                              fVar27 = (float)NEON_fmadd(fVar35,fVar24,uVar30);
                              if (1.192093e-07 < ABS(fVar26) - fVar27) {
LAB_00f96340:
                                uVar6 = 0;
                              }
                              else {
                                fVar28 = SQRT(fVar59 * fVar59 + fVar37 * fVar37);
                                if ((fVar28 <= 1.192093e-07) ||
                                   (fVar27 = (ABS(fVar26) - fVar27) / fVar28,
                                   fVar27 * 1.05 <= fVar53)) {
                                  if (uVar19 == 0) goto LAB_00f96340;
                                  if (pfVar15 == (float *)0x0) goto LAB_00f96348;
                                  fVar26 = *pfVar15;
                                  *(float *)param_7 = fVar26;
                                  fVar23 = pfVar15[4];
                                  *(float *)(param_7 + 4) = fVar23;
                                  fVar25 = pfVar15[8];
                                }
                                else {
                                  bVar4 = fVar26 < 0.0;
                                  fVar29 = 0.0;
                                  uVar19 = 0xf;
                                  fVar34 = -fVar59 / fVar28;
                                  local_2e8 = fVar37 / fVar28;
                                  fVar53 = fVar27;
LAB_00f96348:
                                  uVar30 = NEON_fmadd(local_2e8,fVar25,fVar34 * fVar23);
                                  fVar26 = (float)NEON_fmadd(fVar29,fVar47,uVar30);
                                  *(float *)param_7 = fVar26;
                                  uVar30 = NEON_fmadd(param_2[5],local_2e8,param_2[4] * fVar34);
                                  fVar23 = (float)NEON_fmadd(param_2[6],fVar29,uVar30);
                                  *(float *)(param_7 + 4) = fVar23;
                                  uVar30 = NEON_fmadd(param_2[9],local_2e8,param_2[8] * fVar34);
                                  fVar25 = (float)NEON_fmadd(param_2[10],fVar29,uVar30);
                                }
                                *(float *)(param_7 + 8) = fVar25;
                                if (bVar4) {
                                  *(float *)param_7 = -fVar26;
                                  *(float *)(param_7 + 4) = -fVar23;
                                  *(float *)(param_7 + 8) = -fVar25;
                                }
                                *param_8 = -fVar53;
                                if (uVar19 < 7) {
                                  fVar24 = *(float *)param_7;
                                  if (uVar19 < 4) {
                                    local_268 = &local_c8;
                                    local_260 = *(undefined8 *)(param_7 + 4);
                                    lVar12 = -0x78;
                                    pfVar15 = param_2;
                                    pfVar9 = (float *)param_4;
                                  }
                                  else {
                                    local_268 = &local_d8;
                                    local_260 = CONCAT44(-(float)((ulong)*(undefined8 *)
                                                                          (param_7 + 4) >> 0x20),
                                                         -(float)*(undefined8 *)(param_7 + 4));
                                    fVar24 = -fVar24;
                                    lVar12 = -0x68;
                                    pfVar15 = param_5;
                                    pfVar9 = (float *)param_1;
                                    param_1 = param_4;
                                    param_5 = param_2;
                                  }
                                  lVar12 = lVar12 + -0x60;
                                  fVar23 = (float)local_260;
                                  fVar25 = (float)((ulong)local_260 >> 0x20);
                                  fVar22 = (float)*(undefined8 *)param_5 * fVar24 +
                                           (float)*(undefined8 *)((long)param_5 + 0x10) * fVar23 +
                                           (float)*(undefined8 *)((long)param_5 + 0x20) * fVar25;
                                  fVar26 = (float)((ulong)*(undefined8 *)param_5 >> 0x20) * fVar24 +
                                           (float)((ulong)*(undefined8 *)((long)param_5 + 0x10) >>
                                                  0x20) * fVar23 +
                                           (float)((ulong)*(undefined8 *)((long)param_5 + 0x20) >>
                                                  0x20) * fVar25;
                                  fVar31 = ABS(fVar22);
                                  fVar21 = ABS(fVar26);
                                  local_e8 = CONCAT44(fVar26,fVar22);
                                  local_e0 = *(float *)((long)param_5 + 8) * fVar24 +
                                             *(float *)((long)param_5 + 0x18) * fVar23 +
                                             *(float *)((long)param_5 + 0x28) * fVar25;
                                  fVar22 = ABS(local_e0);
                                  if (fVar21 <= fVar31) {
                                    bVar4 = fVar22 < fVar31;
                                    uVar11 = (uint)(fVar31 <= fVar22) << 1;
                                    local_294 = (uint)bVar4;
                                  }
                                  else {
                                    local_294 = 0;
                                    bVar4 = fVar22 < fVar21;
                                    uVar11 = 2;
                                    if (fVar22 < fVar21) {
                                      uVar11 = 1;
                                    }
                                  }
                                  uVar6 = (ulong)uVar11;
                                  uVar14 = 1;
                                  if (bVar4) {
                                    uVar14 = 2;
                                  }
                                  fVar31 = *(float *)(&stack0xffffffffffffffa0 +
                                                     uVar6 * 4 + lVar12 + 0x60);
                                  if (0.0 <= *(float *)((long)&local_e8 + uVar6 * 4)) {
                                    fVar21 = (float)NEON_fmadd(*(float *)((long)param_5 + uVar6 * 4)
                                                               ,fVar31,*(float *)param_1);
                                    fVar21 = *pfVar9 - fVar21;
                                    local_280 = (float)*(undefined8 *)(pfVar9 + 1) -
                                                ((float)*(undefined8 *)((long)param_1 + 4) +
                                                *(float *)((long)param_5 + (ulong)(uVar11 | 4) * 4)
                                                * fVar31);
                                    fStack_27c = (float)((ulong)*(undefined8 *)(pfVar9 + 1) >> 0x20)
                                                 - ((float)((ulong)*(undefined8 *)
                                                                    ((long)param_1 + 4) >> 0x20) +
                                                   *(float *)((long)param_5 +
                                                             (ulong)(uVar11 | 8) * 4) * fVar31);
                                  }
                                  else {
                                    fVar21 = (float)NEON_fmadd(*(float *)((long)param_5 + uVar6 * 4)
                                                               ,fVar31,*pfVar9 - *(float *)param_1);
                                    local_280 = ((float)*(undefined8 *)(pfVar9 + 1) -
                                                (float)*(undefined8 *)((long)param_1 + 4)) +
                                                *(float *)((long)param_5 + (ulong)(uVar11 | 4) * 4)
                                                * fVar31;
                                    fStack_27c = ((float)((ulong)*(undefined8 *)(pfVar9 + 1) >> 0x20
                                                         ) -
                                                 (float)((ulong)*(undefined8 *)((long)param_1 + 4)
                                                        >> 0x20)) +
                                                 *(float *)((long)param_5 + (ulong)(uVar11 | 8) * 4)
                                                 * fVar31;
                                  }
                                  iVar10 = -4;
                                  if (uVar19 < 4) {
                                    iVar10 = -1;
                                  }
                                  uVar11 = iVar10 + uVar19;
                                  if (uVar11 == 0) {
                                    lVar18 = 2;
                                    lVar16 = 1;
                                  }
                                  else if (uVar11 == 1) {
                                    lVar16 = 0;
                                    lVar18 = 2;
                                  }
                                  else {
                                    lVar16 = 0;
                                    lVar18 = 1;
                                  }
                                  pfVar9 = pfVar15 + lVar16;
                                  pfVar15 = pfVar15 + lVar18;
                                  pfVar1 = (float *)((long)param_5 + (ulong)uVar14 * 4);
                                  fVar31 = *pfVar9;
                                  pfVar2 = (float *)((long)param_5 + (ulong)local_294 * 4);
                                  fVar26 = pfVar9[4];
                                  fVar22 = *pfVar15;
                                  fVar28 = pfVar15[4];
                                  fVar32 = pfVar9[8];
                                  fVar33 = pfVar15[8];
                                  fVar65 = fVar31 * *pfVar2 + fVar26 * pfVar2[4] +
                                           fVar32 * pfVar2[8];
                                  fVar34 = fVar22 * *pfVar2 + fVar28 * pfVar2[4] +
                                           fVar33 * pfVar2[8];
                                  fVar37 = fVar31 * *pfVar1 + fVar26 * pfVar1[4] +
                                           fVar32 * pfVar1[8];
                                  fVar39 = fVar22 * *pfVar1 + fVar28 * pfVar1[4] +
                                           fVar33 * pfVar1[8];
                                  fVar27 = fVar65 * *(float *)(&stack0xffffffffffffffa0 +
                                                              (ulong)local_294 * 4 + lVar12 + 0x60);
                                  fVar29 = fVar34 * *(float *)(&stack0xffffffffffffffa0 +
                                                              (ulong)local_294 * 4 + lVar12 + 0x60);
                                  fVar32 = fVar31 * fVar21 + fVar26 * local_280 +
                                           fVar32 * fStack_27c;
                                  fVar33 = fVar22 * fVar21 + fVar28 * local_280 +
                                           fVar33 * fStack_27c;
                                  fVar31 = fVar37 * *(float *)(&stack0xffffffffffffffa0 +
                                                              (ulong)uVar14 * 4 + lVar12 + 0x60);
                                  fVar22 = fVar39 * *(float *)(&stack0xffffffffffffffa0 +
                                                              (ulong)uVar14 * 4 + lVar12 + 0x60);
                                  fVar26 = fVar32 - fVar27;
                                  fVar28 = fVar33 - fVar29;
                                  fVar27 = fVar27 + fVar32;
                                  fVar29 = fVar29 + fVar33;
                                  local_110 = CONCAT44(fVar28 - fVar22,fVar26 - fVar31);
                                  uStack_108 = CONCAT44(fVar28 + fVar22,fVar26 + fVar31);
                                  uStack_100 = CONCAT44(fVar29 + fVar22,fVar27 + fVar31);
                                  uStack_f8 = CONCAT44(fVar29 - fVar22,fVar27 - fVar31);
                                  uStack_114 = *(undefined4 *)((long)local_268 + lVar18 * 4);
                                  local_118 = *(undefined4 *)((long)local_268 + lVar16 * 4);
                                  uVar5 = FUN_00f96cf0(local_118,uStack_114,
                                                       CONCAT44(fVar28 + fVar22,fVar26 + fVar31),
                                                       &local_118,&local_110,&local_158);
                                  if (0 < (int)uVar5) {
                                    uVar6 = 0;
                                    fVar42 = *pfVar2;
                                    fVar26 = *(float *)((long)param_5 + (ulong)(local_294 | 4) * 4);
                                    fVar31 = 1.0 / (-(fVar37 * fVar34) + fVar65 * fVar39);
                                    fVar22 = *(float *)((long)local_268 + (ulong)uVar11 * 4);
                                    fVar27 = *(float *)((long)param_5 + (ulong)(local_294 | 8) * 4);
                                    pfVar15 = (float *)((long)&local_158 + 4);
                                    fVar28 = *(float *)((long)param_5 + (ulong)(uVar14 | 4) * 4);
                                    uVar17 = (ulong)uVar5;
                                    fVar43 = *pfVar1;
                                    fVar29 = *(float *)((long)param_5 + (ulong)(uVar14 | 8) * 4);
                                    do {
                                      fVar46 = pfVar15[-1];
                                      fVar45 = *pfVar15;
                                      iVar10 = (int)uVar6;
                                      fVar47 = (fVar45 - fVar33) * fVar31;
                                      fVar49 = (fVar46 - fVar32) * fVar31;
                                      fVar51 = (float)NEON_fnmsub(fVar49,fVar39,fVar47 * fVar37);
                                      fVar47 = (float)NEON_fnmsub(fVar47,fVar65,fVar49 * fVar34);
                                      uVar30 = NEON_fmadd(fVar42,fVar51,fVar21);
                                      fVar49 = local_280 + fVar26 * fVar51 + fVar28 * fVar47;
                                      fVar51 = fStack_27c + fVar27 * fVar51 + fVar29 * fVar47;
                                      uVar30 = NEON_fmadd(fVar43,fVar47,uVar30);
                                      *(ulong *)(local_1b8 + (long)iVar10 * 0xc + 4) =
                                           CONCAT44(fVar51,fVar49);
                                      *(undefined4 *)(local_1b8 + (long)iVar10 * 0xc) = uVar30;
                                      fVar47 = (float)NEON_fmadd(uVar30,fVar24,fVar49 * fVar23);
                                      fVar47 = fVar22 - (fVar47 + fVar51 * fVar25);
                                      local_1d8[iVar10] = fVar47;
                                      if (0.0 <= fVar47) {
                                        uVar6 = (ulong)(iVar10 + 1);
                                        *(float *)(&local_158 + iVar10) = fVar46;
                                        *(float *)((long)&local_158 + (long)(iVar10 << 1) * 4 + 4) =
                                             fVar45;
                                      }
                                      uVar17 = uVar17 - 1;
                                      pfVar15 = pfVar15 + 2;
                                    } while (uVar17 != 0);
                                    uVar11 = (uint)uVar6;
                                    if (0 < (int)uVar11) {
                                      uVar14 = uVar11;
                                      if (param_10 <= (int)uVar11) {
                                        uVar14 = param_10;
                                      }
                                      if ((int)uVar14 < 2) {
                                        uVar14 = 1;
                                      }
                                      if (uVar14 < uVar11) {
                                        if (uVar11 < 2) {
                                          iVar10 = 0;
                                        }
                                        else {
                                          uVar17 = 1;
                                          iVar8 = 0;
                                          fVar24 = local_1d8[0];
                                          do {
                                            pfVar15 = local_1d8 + uVar17;
                                            iVar10 = (int)uVar17;
                                            if (*pfVar15 <= fVar24) {
                                              iVar10 = iVar8;
                                            }
                                            uVar17 = uVar17 + 1;
                                            iVar8 = iVar10;
                                            fVar24 = *pfVar15;
                                          } while (uVar6 != uVar17);
                                        }
                                        puVar20 = &local_208;
                                        cullPoints2(uVar11,(float *)&local_158,uVar14,iVar10,
                                                    (int *)&local_208);
                                        uVar17 = (ulong)uVar14;
                                        do {
                                          lVar12 = (long)*(int *)puVar20;
                                          fVar24 = (float)*(undefined8 *)param_1 +
                                                   (float)*(undefined8 *)(local_1b8 + lVar12 * 0xc);
                                          fVar31 = (float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                                                   (float)((ulong)*(undefined8 *)
                                                                   (local_1b8 + lVar12 * 0xc) >>
                                                          0x20);
                                          local_1e8 = CONCAT44(fVar31,fVar24);
                                          local_1e0 = *(float *)((long)param_1 + 8) +
                                                      local_1b0[lVar12 * 3];
                                          if (uVar19 < 4) {
                                            local_210 = *(float *)(param_7 + 8);
                                            fVar21 = local_1d8[lVar12];
                                            puVar7 = &local_1e8;
                                            local_218 = CONCAT44(-(float)((ulong)*(undefined8 *)
                                                                                  param_7 >> 0x20),
                                                                 -(float)*(undefined8 *)param_7);
                                            pcVar13 = *(code **)(*(long *)param_13 + 0x20);
                                          }
                                          else {
                                            fVar21 = local_1d8[lVar12];
                                            puVar7 = &local_228;
                                            local_210 = *(float *)(param_7 + 8);
                                            local_21c = 0;
                                            fVar22 = (float)*(undefined8 *)param_7;
                                            fVar26 = (float)((ulong)*(undefined8 *)param_7 >> 0x20);
                                            local_218 = CONCAT44(-fVar26,-fVar22);
                                            local_228 = CONCAT44(fVar31 - fVar26 * fVar21,
                                                                 fVar24 - fVar22 * fVar21);
                                            local_220 = NEON_fmsub(fVar21,local_210,
                                                                   *(float *)((long)param_1 + 8) +
                                                                   local_1b0[lVar12 * 3]);
                                            pcVar13 = *(code **)(*(long *)param_13 + 0x20);
                                          }
                                          local_210 = -local_210;
                                          local_20c = 0;
                                          (*pcVar13)(-fVar21,param_13,&local_218,puVar7);
                                          uVar17 = uVar17 - 1;
                                          puVar20 = (undefined8 *)((long)puVar20 + 4);
                                          uVar6 = (ulong)uVar14;
                                        } while (uVar17 != 0);
                                      }
                                      else if (uVar19 < 4) {
                                        uVar17 = uVar6;
                                        pfVar15 = local_1b0;
                                        pfVar9 = local_1d8;
                                        do {
                                          local_208 = CONCAT44((float)((ulong)*(undefined8 *)param_1
                                                                      >> 0x20) +
                                                               (float)((ulong)*(undefined8 *)
                                                                               (pfVar15 + -2) >>
                                                                      0x20),
                                                               (float)*(undefined8 *)param_1 +
                                                               (float)*(undefined8 *)(pfVar15 + -2))
                                          ;
                                          local_1dc = 0;
                                          local_200 = *(float *)((long)param_1 + 8) + *pfVar15;
                                          local_1e8 = CONCAT44(-(float)((ulong)*(undefined8 *)
                                                                                param_7 >> 0x20),
                                                               -(float)*(undefined8 *)param_7);
                                          local_1e0 = -*(float *)(param_7 + 8);
                                          (**(code **)(*(long *)param_13 + 0x20))
                                                    (-*pfVar9,param_13,&local_1e8,&local_208);
                                          uVar17 = uVar17 - 1;
                                          pfVar15 = pfVar15 + 3;
                                          pfVar9 = pfVar9 + 1;
                                        } while (uVar17 != 0);
                                      }
                                      else {
                                        uVar17 = uVar6;
                                        pfVar15 = local_1b0;
                                        pfVar9 = local_1d8;
                                        do {
                                          fVar21 = *pfVar9;
                                          fVar24 = (float)*(undefined8 *)param_7;
                                          fVar31 = (float)((ulong)*(undefined8 *)param_7 >> 0x20);
                                          local_1e8 = CONCAT44(-fVar31,-fVar24);
                                          local_208 = CONCAT44(((float)((ulong)*(undefined8 *)
                                                                                param_1 >> 0x20) +
                                                               (float)((ulong)*(undefined8 *)
                                                                               (pfVar15 + -2) >>
                                                                      0x20)) - fVar31 * fVar21,
                                                               ((float)*(undefined8 *)param_1 +
                                                               (float)*(undefined8 *)(pfVar15 + -2))
                                                               - fVar24 * fVar21);
                                          local_1e0 = -*(float *)(param_7 + 8);
                                          local_1dc = 0;
                                          local_200 = (float)NEON_fmsub(fVar21,*(float *)(param_7 +
                                                                                         8),
                                                                        *(float *)((long)param_1 + 8
                                                                                  ) + *pfVar15);
                                          (**(code **)(*(long *)param_13 + 0x20))
                                                    (-fVar21,param_13,&local_1e8,&local_208);
                                          uVar17 = uVar17 - 1;
                                          pfVar15 = pfVar15 + 3;
                                          pfVar9 = pfVar9 + 1;
                                        } while (uVar17 != 0);
                                      }
                                      *param_9 = uVar19;
                                      goto LAB_00f961cc;
                                    }
                                  }
                                  uVar6 = 0;
                                }
                                else {
                                  fVar23 = *(float *)param_7;
                                  uVar44 = *(undefined4 *)(param_7 + 4);
                                  uVar60 = *(undefined4 *)(param_7 + 8);
                                  uVar30 = NEON_fmadd(param_2[4],uVar44,*param_2 * fVar23);
                                  uVar56 = NEON_fmadd(param_2[5],uVar44,param_2[1] * fVar23);
                                  uVar52 = NEON_fmadd(param_2[6],uVar44,param_2[2] * fVar23);
                                  fVar26 = (float)NEON_fmadd(param_2[8],uVar60,uVar30);
                                  fVar27 = (float)NEON_fmadd(param_2[9],uVar60,uVar56);
                                  fVar25 = (float)NEON_fmadd(param_2[10],uVar60,uVar52);
                                  if (fVar26 <= 0.0) {
                                    fVar24 = -fVar24;
                                  }
                                  if (fVar27 <= 0.0) {
                                    fVar31 = -fVar31;
                                  }
                                  uVar30 = NEON_fmadd(fVar24,param_2[8],*(undefined4 *)(param_1 + 8)
                                                     );
                                  fVar26 = local_c0;
                                  if (fVar25 <= 0.0) {
                                    fVar26 = -local_c0;
                                  }
                                  uVar56 = NEON_fmadd(param_5[4],uVar44,*param_5 * fVar23);
                                  uVar52 = NEON_fmadd(fVar31,param_2[9],uVar30);
                                  uVar50 = NEON_fmadd(param_5[5],uVar44,param_5[1] * fVar23);
                                  fVar25 = (float)NEON_fmadd(param_5[8],uVar60,uVar56);
                                  uVar30 = NEON_fmadd(param_5[6],uVar44,param_5[2] * fVar23);
                                  fVar23 = (float)NEON_fmadd(param_5[9],uVar60,uVar50);
                                  local_1b8 = (undefined  [8])
                                              CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20
                                                              ) + param_2[4] * fVar24 +
                                                       param_2[5] * fVar31 + param_2[6] * fVar26,
                                                       (float)*(undefined8 *)param_1 +
                                                       *param_2 * fVar24 + param_2[1] * fVar31 +
                                                       param_2[2] * fVar26);
                                  fVar31 = (float)NEON_fmadd(param_5[10],uVar60,uVar30);
                                  fVar24 = -fVar21;
                                  if (fVar25 <= 0.0) {
                                    fVar24 = fVar21;
                                  }
                                  uVar11 = (uVar19 - 7 & 0xff) / 3;
                                  pfVar15 = param_2 + uVar11;
                                  local_158._0_4_ = (undefined4)*(undefined8 *)param_4;
                                  local_158._4_4_ =
                                       (undefined4)((ulong)*(undefined8 *)param_4 >> 0x20);
                                  uVar44 = NEON_fmadd(fVar24,*param_5,(undefined4)local_158);
                                  uVar56 = NEON_fmadd(fVar24,param_5[4],local_158._4_4_);
                                  uVar30 = NEON_fmadd(fVar24,param_5[8],*(undefined4 *)(param_4 + 8)
                                                     );
                                  pfVar9 = param_5 + (byte)((char)(uVar19 - 7) -
                                                           ((char)uVar11 + (char)(uVar11 << 1)));
                                  fVar24 = -fVar22;
                                  if (fVar23 <= 0.0) {
                                    fVar24 = fVar22;
                                  }
                                  fVar22 = *pfVar9;
                                  fVar23 = pfVar9[4];
                                  uVar44 = NEON_fmadd(fVar24,param_5[1],uVar44);
                                  fVar21 = -local_d0;
                                  if (fVar31 <= 0.0) {
                                    fVar21 = local_d0;
                                  }
                                  uVar56 = NEON_fmadd(fVar24,param_5[5],uVar56);
                                  uVar30 = NEON_fmadd(fVar24,param_5[9],uVar30);
                                  local_1b0[0] = (float)NEON_fmadd(fVar26,param_2[10],uVar52);
                                  fVar24 = pfVar9[8];
                                  uVar44 = NEON_fmadd(fVar21,param_5[2],uVar44);
                                  uVar56 = NEON_fmadd(fVar21,param_5[6],uVar56);
                                  uVar60 = NEON_fmadd(fVar21,param_5[10],uVar30);
                                  local_158 = CONCAT44(uVar56,uVar44);
                                  local_110 = CONCAT44(pfVar15[4],*pfVar15);
                                  uStack_108 = CONCAT44(uStack_108._4_4_,pfVar15[8]);
                                  local_1d8[0] = fVar22;
                                  local_1d8[1] = fVar23;
                                  local_1d8[2] = fVar24;
                                  local_150 = uVar60;
                                  dLineClosestApproach
                                            ((btVector3 *)local_1b8,(btVector3 *)&local_110,
                                             (btVector3 *)&local_158,(btVector3 *)local_1d8,
                                             (float *)&local_e8,(float *)&local_1e8);
                                  uVar30 = NEON_fmadd((undefined4)local_1e8,fVar22,uVar44);
                                  uVar44 = NEON_fmadd((undefined4)local_1e8,fVar23,uVar56);
                                  local_150 = NEON_fmadd((undefined4)local_1e8,fVar24,uVar60);
                                  local_208 = CONCAT44(-(float)((ulong)*(undefined8 *)param_7 >>
                                                               0x20),-(float)*(undefined8 *)param_7)
                                  ;
                                  local_200 = -*(float *)(param_7 + 8);
                                  local_1fc = 0;
                                  local_158 = CONCAT44(uVar44,uVar30);
                                  (**(code **)(*(long *)param_13 + 0x20))
                                            (-*param_8,param_13,&local_208,&local_158);
                                  uVar6 = 1;
                                  *param_9 = uVar19;
                                }
                              }
                              goto LAB_00f961cc;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar6 = 0;
LAB_00f961cc:
  if (*(long *)(lVar3 + 0x28) == local_b8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


