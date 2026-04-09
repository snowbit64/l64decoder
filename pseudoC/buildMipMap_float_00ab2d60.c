// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildMipMap<float>
// Entry Point: 00ab2d60
// Size: 1716 bytes
// Signature: void __cdecl buildMipMap<float>(float * param_1, float * param_2, uint param_3, uint param_4, uint param_5, uint param_6)


/* void MipMapUtil::buildMipMap<float>(float*, float const*, unsigned int, unsigned int, unsigned
   int, unsigned int) */

void MipMapUtil::buildMipMap<float>
               (float *param_1,float *param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  uint uVar29;
  undefined auVar30 [16];
  undefined8 uVar31;
  undefined8 uVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  uint local_d4;
  
  iVar17 = param_6 * param_3;
  uVar16 = 0;
  if (1 < param_3) {
    uVar16 = param_6;
  }
  iVar14 = 0;
  if (1 < param_4) {
    iVar14 = iVar17;
  }
  uVar7 = param_4 & 0xfffffffe;
  if (param_5 < 2) {
    uVar8 = param_3 & 0xfffffffe;
    if (param_4 < 2) {
      uVar7 = 1;
    }
    if (param_3 < 2) {
      uVar8 = 1;
    }
    if (uVar7 != 0) {
      lVar18 = (long)(int)uVar16;
      lVar20 = (long)iVar14;
      uVar21 = (ulong)(param_6 - 1);
      lVar1 = lVar20 + lVar18;
      uVar2 = uVar21 + 1;
      uVar16 = 0;
      auVar30 = NEON_fmov(0x3e800000,4);
      uVar15 = uVar2 & 0x1fffffff8;
      do {
        if (uVar8 != 0) {
          uVar29 = 0;
          pfVar24 = param_2;
          do {
            if (param_6 != 0) {
              if (param_6 - 1 < 7) {
LAB_00ab33b4:
                iVar14 = 0;
                pfVar25 = pfVar24;
              }
              else {
                pfVar25 = param_1 + uVar2;
                if ((((param_1 < pfVar24 + lVar1 + uVar21 + 1 && pfVar24 + lVar1 < pfVar25) ||
                     (param_1 < pfVar24 + lVar20 + uVar21 + 1 && pfVar24 + lVar20 < pfVar25)) ||
                    (param_1 < pfVar24 + lVar18 + uVar21 + 1 && pfVar24 + lVar18 < pfVar25)) ||
                   (param_1 < pfVar24 + uVar2 && pfVar24 < pfVar25)) goto LAB_00ab33b4;
                puVar28 = (undefined8 *)(param_1 + 4);
                pfVar25 = pfVar24 + uVar15;
                param_1 = param_1 + uVar15;
                puVar13 = (undefined8 *)(pfVar24 + 4);
                uVar26 = uVar15;
                do {
                  puVar4 = (undefined8 *)((long)puVar13 + lVar18 * 4);
                  puVar5 = (undefined8 *)((long)puVar13 + lVar20 * 4);
                  puVar11 = puVar13 + -1;
                  uVar31 = puVar13[-2];
                  uVar34 = puVar13[1];
                  uVar32 = *puVar13;
                  uVar26 = uVar26 - 8;
                  uVar35 = puVar4[-2];
                  uVar41 = puVar4[1];
                  uVar38 = *puVar4;
                  puVar6 = (undefined8 *)((long)puVar13 + lVar1 * 4);
                  puVar13 = puVar13 + 4;
                  uVar36 = puVar5[-2];
                  uVar42 = puVar5[1];
                  uVar39 = *puVar5;
                  uVar37 = puVar6[-2];
                  uVar43 = puVar6[1];
                  uVar40 = *puVar6;
                  puVar28[-1] = CONCAT44(((float)((ulong)*puVar11 >> 0x20) +
                                          (float)((ulong)puVar4[-1] >> 0x20) +
                                          (float)((ulong)puVar5[-1] >> 0x20) +
                                         (float)((ulong)puVar6[-1] >> 0x20)) * auVar30._12_4_,
                                         ((float)*puVar11 + (float)puVar4[-1] + (float)puVar5[-1] +
                                         (float)puVar6[-1]) * auVar30._8_4_);
                  puVar28[-2] = CONCAT44(((float)((ulong)uVar31 >> 0x20) +
                                          (float)((ulong)uVar35 >> 0x20) +
                                          (float)((ulong)uVar36 >> 0x20) +
                                         (float)((ulong)uVar37 >> 0x20)) * auVar30._4_4_,
                                         ((float)uVar31 + (float)uVar35 + (float)uVar36 +
                                         (float)uVar37) * auVar30._0_4_);
                  puVar28[1] = CONCAT44(((float)((ulong)uVar34 >> 0x20) +
                                         (float)((ulong)uVar41 >> 0x20) +
                                         (float)((ulong)uVar42 >> 0x20) +
                                        (float)((ulong)uVar43 >> 0x20)) * auVar30._12_4_,
                                        ((float)uVar34 + (float)uVar41 + (float)uVar42 +
                                        (float)uVar43) * auVar30._8_4_);
                  *puVar28 = CONCAT44(((float)((ulong)uVar32 >> 0x20) +
                                       (float)((ulong)uVar38 >> 0x20) +
                                       (float)((ulong)uVar39 >> 0x20) +
                                      (float)((ulong)uVar40 >> 0x20)) * auVar30._4_4_,
                                      ((float)uVar32 + (float)uVar38 + (float)uVar39 + (float)uVar40
                                      ) * auVar30._0_4_);
                  puVar28 = puVar28 + 4;
                } while (uVar26 != 0);
                iVar14 = (int)uVar15;
                pfVar24 = pfVar25;
                if (uVar2 == uVar15) goto LAB_00ab3288;
              }
              iVar14 = param_6 - iVar14;
              pfVar23 = param_1;
              pfVar24 = pfVar25;
              do {
                pfVar25 = pfVar24 + lVar18;
                iVar14 = iVar14 + -1;
                fVar33 = *pfVar24;
                pfVar9 = pfVar24 + lVar20;
                pfVar10 = pfVar24 + lVar1;
                pfVar24 = pfVar24 + 1;
                param_1 = pfVar23 + 1;
                *pfVar23 = (fVar33 + *pfVar25 + *pfVar9 + *pfVar10) * 0.25;
                pfVar23 = param_1;
              } while (iVar14 != 0);
            }
LAB_00ab3288:
            pfVar24 = pfVar24 + lVar18;
            uVar29 = uVar29 + 2;
          } while (uVar29 < uVar8);
        }
        param_2 = param_2 + (uint)(iVar17 * 2);
        uVar16 = uVar16 + 2;
      } while (uVar16 < uVar7);
    }
  }
  else {
    if (param_4 < 2) {
      uVar7 = 1;
    }
    uVar8 = param_3 & 0xfffffffe;
    if (param_3 < 2) {
      uVar8 = 1;
    }
    if ((param_5 & 0xfffffffe) != 0) {
      lVar27 = (long)iVar14;
      uVar21 = (ulong)(param_6 - 1);
      lVar19 = (long)(int)uVar16;
      lVar22 = (long)(int)(iVar17 * param_4);
      lVar18 = lVar27 + lVar19;
      lVar20 = lVar22 + lVar27;
      lVar3 = lVar22 + lVar19;
      lVar1 = lVar19 + (int)lVar20;
      uVar2 = uVar21 + 1;
      local_d4 = 0;
      uVar15 = uVar2 & 0x1fffffffc;
      do {
        if (uVar7 != 0) {
          uVar16 = 0;
          do {
            if (uVar8 != 0) {
              uVar29 = 0;
              do {
                if (param_6 != 0) {
                  if (param_6 - 1 < 3) {
                    iVar17 = 0;
                  }
                  else {
                    pfVar24 = param_1 + uVar2;
                    iVar17 = 0;
                    if (((((param_2 + lVar1 + uVar21 + 1 <= param_1 || pfVar24 <= param_2 + lVar1)
                          && (param_2 + lVar20 + uVar21 + 1 <= param_1 ||
                              pfVar24 <= param_2 + lVar20)) &&
                         ((param_2 + lVar3 + uVar21 + 1 <= param_1 || pfVar24 <= param_2 + lVar3 &&
                          ((param_2 + lVar22 + uVar21 + 1 <= param_1 || pfVar24 <= param_2 + lVar22
                           && (param_2 + lVar18 + uVar21 + 1 <= param_1 ||
                               pfVar24 <= param_2 + lVar18)))))) &&
                        (param_2 + lVar27 + uVar21 + 1 <= param_1 || pfVar24 <= param_2 + lVar27))
                       && ((param_2 + lVar19 + uVar21 + 1 <= param_1 || pfVar24 <= param_2 + lVar19
                           && (param_2 + uVar2 <= param_1 || pfVar24 <= param_2)))) {
                      lVar12 = 0;
                      pfVar24 = param_1 + uVar15;
                      pfVar25 = param_2 + uVar15;
                      uVar26 = uVar15;
                      do {
                        uVar32 = ((undefined8 *)((long)param_2 + lVar12))[1];
                        uVar31 = *(undefined8 *)((long)param_2 + lVar12);
                        uVar26 = uVar26 - 4;
                        puVar28 = (undefined8 *)((long)param_2 + lVar12 + lVar19 * 4);
                        uVar41 = puVar28[1];
                        uVar34 = *puVar28;
                        puVar28 = (undefined8 *)((long)param_2 + lVar12 + lVar27 * 4);
                        uVar42 = puVar28[1];
                        uVar35 = *puVar28;
                        puVar28 = (undefined8 *)((long)param_2 + lVar12 + lVar18 * 4);
                        uVar43 = puVar28[1];
                        uVar36 = *puVar28;
                        puVar28 = (undefined8 *)((long)param_2 + lVar12 + lVar22 * 4);
                        uVar44 = puVar28[1];
                        uVar37 = *puVar28;
                        puVar28 = (undefined8 *)((long)param_2 + lVar12 + lVar3 * 4);
                        uVar45 = puVar28[1];
                        uVar38 = *puVar28;
                        puVar28 = (undefined8 *)((long)param_2 + lVar12 + lVar20 * 4);
                        uVar46 = puVar28[1];
                        uVar39 = *puVar28;
                        puVar28 = (undefined8 *)((long)param_2 + lVar12 + lVar1 * 4);
                        uVar47 = puVar28[1];
                        uVar40 = *puVar28;
                        ((undefined8 *)((long)param_1 + lVar12))[1] =
                             CONCAT44(((float)((ulong)uVar32 >> 0x20) +
                                       (float)((ulong)uVar41 >> 0x20) +
                                       (float)((ulong)uVar42 >> 0x20) +
                                       (float)((ulong)uVar43 >> 0x20) +
                                       (float)((ulong)uVar44 >> 0x20) +
                                       (float)((ulong)uVar45 >> 0x20) +
                                       (float)((ulong)uVar46 >> 0x20) +
                                      (float)((ulong)uVar47 >> 0x20)) * 0.125,
                                      ((float)uVar32 + (float)uVar41 + (float)uVar42 + (float)uVar43
                                       + (float)uVar44 + (float)uVar45 + (float)uVar46 +
                                      (float)uVar47) * 0.125);
                        *(undefined8 *)((long)param_1 + lVar12) =
                             CONCAT44(((float)((ulong)uVar31 >> 0x20) +
                                       (float)((ulong)uVar34 >> 0x20) +
                                       (float)((ulong)uVar35 >> 0x20) +
                                       (float)((ulong)uVar36 >> 0x20) +
                                       (float)((ulong)uVar37 >> 0x20) +
                                       (float)((ulong)uVar38 >> 0x20) +
                                       (float)((ulong)uVar39 >> 0x20) +
                                      (float)((ulong)uVar40 >> 0x20)) * 0.125,
                                      ((float)uVar31 + (float)uVar34 + (float)uVar35 + (float)uVar36
                                       + (float)uVar37 + (float)uVar38 + (float)uVar39 +
                                      (float)uVar40) * 0.125);
                        lVar12 = lVar12 + 0x10;
                      } while (uVar26 != 0);
                      iVar17 = (int)uVar15;
                      param_1 = pfVar24;
                      param_2 = pfVar25;
                      if (uVar2 == uVar15) goto LAB_00ab2ec4;
                    }
                  }
                  lVar12 = 0;
                  iVar17 = param_6 - iVar17;
                  do {
                    iVar17 = iVar17 + -1;
                    *(float *)((long)param_1 + lVar12) =
                         (*(float *)((long)param_2 + lVar12) +
                          *(float *)((long)param_2 + lVar12 + lVar19 * 4) +
                          *(float *)((long)param_2 + lVar12 + lVar27 * 4) +
                          *(float *)((long)param_2 + lVar12 + lVar18 * 4) +
                          *(float *)((long)param_2 + lVar12 + lVar22 * 4) +
                          *(float *)((long)param_2 + lVar12 + lVar3 * 4) +
                          *(float *)((long)param_2 + lVar12 + lVar20 * 4) +
                         *(float *)((long)param_2 + lVar12 + lVar1 * 4)) * 0.125;
                    lVar12 = lVar12 + 4;
                  } while (iVar17 != 0);
                  param_1 = (float *)((long)param_1 + lVar12);
                  param_2 = (float *)((long)param_2 + lVar12);
                }
LAB_00ab2ec4:
                param_2 = param_2 + lVar19;
                uVar29 = uVar29 + 2;
              } while (uVar29 < uVar8);
            }
            param_2 = param_2 + lVar27;
            uVar16 = uVar16 + 2;
          } while (uVar16 < uVar7);
        }
        param_2 = param_2 + lVar22;
        local_d4 = local_d4 + 2;
      } while (local_d4 < (param_5 & 0xfffffffe));
    }
  }
  return;
}


