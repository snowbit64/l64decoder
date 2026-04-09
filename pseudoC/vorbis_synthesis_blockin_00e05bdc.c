// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_synthesis_blockin
// Entry Point: 00e05bdc
// Size: 3360 bytes
// Signature: undefined vorbis_synthesis_blockin(void)


undefined8 vorbis_synthesis_blockin(long param_1,long *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined auVar12 [16];
  undefined (*pauVar13) [16];
  bool bVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  undefined4 *puVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  undefined4 *puVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined8 *puVar35;
  undefined (*pauVar36) [16];
  int iVar37;
  long lVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  long lVar42;
  ulong uVar43;
  undefined8 *puVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  undefined8 *puVar48;
  float *pfVar49;
  ulong uVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  float *pfVar54;
  long lVar55;
  long lVar56;
  uint uVar57;
  long *plVar58;
  ulong uVar59;
  ulong uVar60;
  ulong uVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  ulong uVar66;
  undefined4 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined auVar73 [16];
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  
  if (param_2 == (long *)0x0) {
    return 0xffffff7d;
  }
  lVar64 = *(long *)(param_1 + 8);
  uVar57 = *(uint *)(param_1 + 0x24);
  uVar23 = *(uint *)(param_1 + 0x28);
  lVar31 = *(long *)(param_1 + 0x88);
  plVar58 = *(long **)(lVar64 + 0x30);
  uVar8 = *(uint *)(plVar58 + 0x2d2);
  uVar26 = (ulong)uVar8;
  if (((int)uVar23 < (int)uVar57) && (uVar23 != 0xffffffff)) {
    return 0xffffff7d;
  }
  lVar27 = *(long *)(param_1 + 0x40);
  lVar32 = param_2[7];
  *(undefined8 *)(param_1 + 0x48) = 0xffffffffffffffff;
  *(long *)(param_1 + 0x38) = lVar27;
  *(long *)(param_1 + 0x40) = lVar32;
  if (*(long *)(param_1 + 0x60) == -1) {
    lVar38 = param_2[0xc];
LAB_00e06784:
    *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
    *(undefined8 *)(lVar31 + 0xe0) = 0xffffffffffffffff;
    lVar20 = *param_2;
    *(long *)(param_1 + 0x60) = lVar38;
    if (lVar20 != 0) goto LAB_00e05c74;
LAB_00e067a4:
    lVar64 = *(long *)(lVar31 + 0xe0);
    uVar24 = uVar23;
joined_r0x00e067b0:
    if (lVar64 != -1) goto LAB_00e067b4;
LAB_00e0671c:
    lVar64 = 0;
    lVar27 = *(long *)(param_1 + 0x58);
    *(undefined8 *)(lVar31 + 0xe0) = 0;
    if (lVar27 == -1) goto LAB_00e06734;
LAB_00e067f4:
    lVar64 = plVar58[*(long *)(param_1 + 0x38)];
    lVar32 = plVar58[*(long *)(param_1 + 0x40)];
    lVar31 = lVar64 + 3;
    if (-1 < lVar64) {
      lVar31 = lVar64;
    }
    lVar64 = lVar32 + 3;
    if (-1 < lVar32) {
      lVar64 = lVar32;
    }
    lVar32 = param_2[0xb];
    lVar31 = lVar27 + (lVar31 >> 2) + (lVar64 >> 2);
    *(long *)(param_1 + 0x58) = lVar31;
    if ((lVar32 != -1) && (lVar31 != lVar32)) {
      if ((lVar32 < lVar31) &&
         ((uVar17 = lVar31 - lVar32, uVar17 != 0 && (*(int *)(param_2 + 10) != 0)))) {
        uVar19 = (ulong)(int)(uVar57 - uVar24 << (ulong)(uVar8 & 0x1f));
        if ((long)uVar17 <= (long)uVar19) {
          uVar19 = uVar17;
        }
        *(uint *)(param_1 + 0x24) =
             uVar57 - (int)((uVar19 & ((long)uVar19 >> 0x3f ^ 0xffffffffffffffffU)) >>
                           (uVar26 & 0x3f));
      }
      *(long *)(param_1 + 0x58) = lVar32;
      iVar37 = *(int *)(param_2 + 10);
      goto joined_r0x00e0687c;
    }
  }
  else {
    lVar38 = param_2[0xc];
    lVar20 = *(long *)(param_1 + 0x60) + 1;
    if (lVar20 != lVar38) goto LAB_00e06784;
    lVar38 = *param_2;
    *(long *)(param_1 + 0x60) = lVar20;
    if (lVar38 == 0) goto LAB_00e067a4;
LAB_00e05c74:
    uVar46 = (ulong)(uVar8 + 1);
    lVar38 = *(long *)(param_1 + 0x50);
    lVar20 = param_2[0x13];
    auVar12 = *(undefined (*) [16])(param_2 + 0x15);
    uVar17 = plVar58[1] >> (uVar46 & 0x3f);
    uVar19 = *plVar58 >> (uVar46 & 0x3f);
    uVar16 = (uint)uVar17;
    uVar24 = uVar16;
    if (lVar38 != 0) {
      uVar24 = 0;
    }
    uVar57 = 0;
    if (lVar38 != 0) {
      uVar57 = uVar16;
    }
    lVar32 = plVar58[lVar32];
    iVar37 = *(int *)(lVar64 + 4);
    uVar30 = uVar16;
    if ((int)uVar16 < 0) {
      uVar30 = uVar16 + 1;
    }
    uVar18 = (uint)uVar19;
    uVar7 = uVar18;
    if ((int)uVar18 < 0) {
      uVar7 = uVar18 + 1;
    }
    *(long *)(param_1 + 0x70) = SUB168(*(undefined (*) [16])(param_1 + 0x68),8) + param_2[0x14];
    *(long *)(param_1 + 0x68) = SUB168(*(undefined (*) [16])(param_1 + 0x68),0) + lVar20;
    *(long *)(param_1 + 0x80) = SUB168(*(undefined (*) [16])(param_1 + 0x78),8) + auVar12._8_8_;
    *(long *)(param_1 + 0x78) = SUB168(*(undefined (*) [16])(param_1 + 0x78),0) + auVar12._0_8_;
    if (0 < iVar37) {
      uVar46 = lVar32 >> (uVar46 & 0x3f);
      iVar37 = (int)uVar7 >> 1;
      lVar32 = (long)((ulong)uVar30 << 0x20) >> 0x21;
      lVar22 = (long)(int)uVar57;
      uVar59 = uVar46 & 0xffffffff;
      lVar20 = (long)-iVar37;
      lVar62 = (long)(int)uVar46;
      lVar38 = (long)(int)uVar24;
      uVar61 = uVar19 & 0xffffffff;
      iVar9 = uVar18 - 1;
      uVar23 = ((int)uVar30 >> 1) + iVar37;
      uVar21 = (ulong)uVar23;
      uVar30 = uVar18;
      if ((int)uVar18 < 1) {
        uVar30 = 0;
      }
      uVar50 = (ulong)uVar30;
      uVar66 = uVar17 & 0xffffffff;
      uVar60 = uVar21 - uVar50;
      lVar3 = (long)iVar9 + 1;
      lVar65 = 0;
      lVar33 = lVar3 - uVar61;
      lVar34 = (long)iVar37;
      iVar10 = uVar16 - 1;
      lVar51 = lVar38 * 4;
      bVar1 = iVar9 - (int)(uVar61 - 1) <= iVar9;
      bVar14 = uVar61 - 1 >> 0x20 == 0;
      lVar55 = lVar32 * 4 + (long)iVar37 * -4;
      lVar4 = lVar51 + lVar32 * 4 + lVar20 * 4;
      uVar47 = uVar19 & 7;
      uVar39 = uVar66 - (uVar17 & 7);
      uVar40 = uVar61 - uVar47;
      uVar41 = uVar60 & 0xfffffffffffffff8;
      lVar5 = (uVar19 << 0x20) + -0x100000000;
      iVar37 = uVar18 - 1;
      lVar42 = uVar59 - (uVar46 & 7);
      lVar63 = *(long *)(param_1 + 0x40);
      if (lVar27 == 0) goto LAB_00e06200;
LAB_00e05ed4:
      if (lVar63 == 0) {
        uVar19 = _vorbis_window_get(*(int *)(lVar31 + 8) - uVar8);
        lVar27 = *(long *)(*(long *)(param_1 + 0x10) + lVar65 * 8);
        uVar28 = *(ulong *)(*param_2 + lVar65 * 8);
        if (0 < (int)uVar18) {
          if (7 < uVar61 && (bVar1 && bVar14)) {
            uVar15 = 0;
            uVar45 = lVar27 + (lVar38 + lVar20 + lVar32 + uVar61) * 4;
            uVar43 = lVar27 + lVar38 * 4 + lVar32 * 4 + lVar20 * 4;
            if (((uVar28 + uVar61 * 4 <= uVar43 || uVar45 <= uVar28) &&
                (uVar19 + uVar61 * 4 <= uVar43 || uVar45 <= uVar19)) &&
               (uVar19 + lVar3 * 4 <= uVar43 || uVar45 <= uVar19 + lVar33 * 4)) {
              lVar63 = 0;
              lVar52 = lVar27 + lVar4 + 0x10;
              uVar15 = uVar40;
              lVar56 = lVar5;
              do {
                lVar53 = uVar19 + (lVar56 >> 0x1e);
                puVar44 = (undefined8 *)(uVar28 + lVar63);
                auVar12 = *(undefined (*) [16])(uVar19 + 0x10 + lVar63);
                lVar56 = lVar56 + -0x800000000;
                uVar79 = ((undefined8 *)(uVar19 + lVar63))[1];
                uVar78 = *(undefined8 *)(uVar19 + lVar63);
                uVar15 = uVar15 - 8;
                uVar75 = puVar44[1];
                uVar74 = *puVar44;
                auVar71 = NEON_rev64(*(undefined (*) [16])(lVar53 + -0x1c),4);
                lVar6 = lVar52 + lVar63;
                uVar69 = ((undefined8 *)(lVar52 + lVar63))[1];
                uVar68 = *(undefined8 *)(lVar52 + lVar63);
                auVar70 = NEON_rev64(*(undefined (*) [16])(lVar53 + -0xc),4);
                uVar77 = *(undefined8 *)(lVar6 + -8);
                uVar76 = *(undefined8 *)(lVar6 + -0x10);
                auVar72 = NEON_ext(auVar71,auVar71,8,1);
                auVar71 = NEON_ext(auVar70,auVar70,8,1);
                auVar70._0_8_ =
                     CONCAT44((float)((ulong)puVar44[2] >> 0x20) * auVar12._4_4_ +
                              auVar72._4_4_ * (float)((ulong)uVar68 >> 0x20),
                              (float)puVar44[2] * auVar12._0_4_ + auVar72._0_4_ * (float)uVar68);
                auVar70._8_4_ = (float)puVar44[3] * auVar12._8_4_ + auVar72._8_4_ * (float)uVar69;
                auVar70._12_4_ =
                     (float)((ulong)puVar44[3] >> 0x20) * auVar12._12_4_ +
                     auVar72._12_4_ * (float)((ulong)uVar69 >> 0x20);
                ((undefined8 *)(lVar52 + lVar63))[1] = auVar70._8_8_;
                *(undefined8 *)(lVar52 + lVar63) = auVar70._0_8_;
                lVar63 = lVar63 + 0x20;
                *(ulong *)(lVar6 + -8) =
                     CONCAT44((float)((ulong)uVar75 >> 0x20) * (float)((ulong)uVar79 >> 0x20) +
                              auVar71._12_4_ * (float)((ulong)uVar77 >> 0x20),
                              (float)uVar75 * (float)uVar79 + auVar71._8_4_ * (float)uVar77);
                *(ulong *)(lVar6 + -0x10) =
                     CONCAT44((float)((ulong)uVar74 >> 0x20) * (float)((ulong)uVar78 >> 0x20) +
                              auVar71._4_4_ * (float)((ulong)uVar76 >> 0x20),
                              (float)uVar74 * (float)uVar78 + auVar71._0_4_ * (float)uVar76);
              } while (uVar15 != 0);
              uVar15 = uVar40;
              if (uVar47 == 0) goto LAB_00e065d0;
            }
          }
          else {
            uVar15 = 0;
          }
          lVar52 = (ulong)(uint)(iVar37 - (int)uVar15) << 0x20;
          lVar63 = lVar4 + uVar15 * 4;
          do {
            lVar56 = uVar15 * 4;
            uVar15 = uVar15 + 1;
            lVar53 = lVar52 >> 0x1e;
            lVar52 = lVar52 + -0x100000000;
            uVar67 = NEON_fmadd(*(undefined4 *)(lVar27 + lVar63),*(undefined4 *)(uVar19 + lVar53),
                                *(float *)(uVar28 + lVar56) * *(float *)(uVar19 + lVar56));
            *(undefined4 *)(lVar27 + lVar63) = uVar67;
            lVar63 = lVar63 + 4;
          } while (uVar61 != uVar15);
        }
      }
      else {
        uVar19 = _vorbis_window_get(*(int *)(lVar31 + 0xc) - uVar8);
        lVar27 = *(long *)(*(long *)(param_1 + 0x10) + lVar65 * 8);
        uVar28 = *(ulong *)(*param_2 + lVar65 * 8);
        if (0 < (int)uVar16) {
          uVar15 = lVar27 + lVar38 * 4;
          if (uVar66 < 8 || (iVar10 < iVar10 - (int)(uVar66 - 1) || uVar66 - 1 >> 0x20 != 0)) {
            uVar45 = 0;
          }
          else {
            uVar45 = 0;
            uVar43 = lVar27 + (uVar66 + lVar38) * 4;
            if (((uVar28 + uVar66 * 4 <= uVar15 || uVar43 <= uVar28) &&
                (uVar19 + uVar66 * 4 <= uVar15 || uVar43 <= uVar19)) &&
               (uVar19 + ((long)iVar10 + 1) * 4 <= uVar15 ||
                uVar43 <= uVar19 + (((long)iVar10 + 1) - uVar66) * 4)) {
              lVar63 = 0x10;
              lVar52 = lVar27 + lVar51;
              uVar45 = uVar39;
              lVar56 = (uVar17 << 0x20) + -0x100000000;
              do {
                lVar53 = uVar19 + (lVar56 >> 0x1e);
                puVar44 = (undefined8 *)(uVar28 + lVar63);
                uVar69 = ((undefined8 *)(lVar52 + lVar63))[1];
                uVar68 = *(undefined8 *)(lVar52 + lVar63);
                lVar56 = lVar56 + -0x800000000;
                uVar45 = uVar45 - 8;
                puVar48 = (undefined8 *)(uVar19 + lVar63);
                auVar12 = *(undefined (*) [16])(puVar44 + -2);
                uVar74 = *puVar44;
                auVar70 = NEON_rev64(*(undefined (*) [16])(lVar53 + -0xc),4);
                lVar6 = lVar52 + lVar63;
                auVar71 = NEON_rev64(*(undefined (*) [16])(lVar53 + -0x1c),4);
                auVar70 = NEON_ext(auVar70,auVar70,8,1);
                uVar75 = *puVar48;
                auVar71 = NEON_ext(auVar71,auVar71,8,1);
                auVar72._0_8_ =
                     CONCAT44(auVar12._4_4_ * (float)((ulong)puVar48[-2] >> 0x20) +
                              auVar70._4_4_ * (float)((ulong)*(undefined8 *)(lVar6 + -0x10) >> 0x20)
                              ,auVar12._0_4_ * (float)puVar48[-2] +
                               auVar70._0_4_ * (float)*(undefined8 *)(lVar6 + -0x10));
                auVar72._8_4_ =
                     auVar12._8_4_ * (float)puVar48[-1] +
                     auVar70._8_4_ * (float)*(undefined8 *)(lVar6 + -8);
                auVar72._12_4_ =
                     auVar12._12_4_ * (float)((ulong)puVar48[-1] >> 0x20) +
                     auVar70._12_4_ * (float)((ulong)*(undefined8 *)(lVar6 + -8) >> 0x20);
                ((undefined8 *)(lVar52 + lVar63))[1] =
                     CONCAT44((float)((ulong)puVar44[1] >> 0x20) *
                              (float)((ulong)puVar48[1] >> 0x20) +
                              auVar71._12_4_ * (float)((ulong)uVar69 >> 0x20),
                              (float)puVar44[1] * (float)puVar48[1] + auVar71._8_4_ * (float)uVar69)
                ;
                *(undefined8 *)(lVar52 + lVar63) =
                     CONCAT44((float)((ulong)uVar74 >> 0x20) * (float)((ulong)uVar75 >> 0x20) +
                              auVar71._4_4_ * (float)((ulong)uVar68 >> 0x20),
                              (float)uVar74 * (float)uVar75 + auVar71._0_4_ * (float)uVar68);
                lVar63 = lVar63 + 0x20;
                *(long *)(lVar6 + -8) = auVar72._8_8_;
                *(undefined8 *)(lVar6 + -0x10) = auVar72._0_8_;
              } while (uVar45 != 0);
              uVar45 = uVar39;
              if ((uVar17 & 7) == 0) goto LAB_00e065d0;
            }
          }
          lVar63 = (ulong)((uVar16 - 1) - (int)uVar45) << 0x20;
          do {
            lVar52 = uVar45 * 4;
            lVar56 = lVar63 >> 0x1e;
            uVar45 = uVar45 + 1;
            lVar63 = lVar63 + -0x100000000;
            uVar67 = NEON_fmadd(*(undefined4 *)(uVar15 + lVar52),*(undefined4 *)(uVar19 + lVar56),
                                *(float *)(uVar28 + lVar52) * *(float *)(uVar19 + lVar52));
            *(undefined4 *)(uVar15 + lVar52) = uVar67;
          } while (uVar66 != uVar45);
        }
      }
LAB_00e065d0:
      do {
        if (0 < (int)uVar46) {
          if ((uVar59 < 8) ||
             (((ulong)(lVar27 + lVar22 * 4) < uVar28 + (lVar62 + uVar59) * 4 &&
              (uVar28 + lVar62 * 4 < lVar27 + (uVar59 + lVar22) * 4)))) {
            lVar63 = 0;
          }
          else {
            puVar44 = (undefined8 *)(lVar27 + (lVar22 + 4) * 4);
            pauVar36 = (undefined (*) [16])(uVar28 + (lVar62 + 4) * 4);
            lVar63 = lVar42;
            do {
              pauVar13 = pauVar36 + -1;
              uVar68 = *(undefined8 *)pauVar36[-1];
              auVar12 = *pauVar36;
              pauVar36 = pauVar36 + 2;
              lVar63 = lVar63 + -8;
              puVar44[-1] = *(undefined8 *)(*pauVar13 + 8);
              puVar44[-2] = uVar68;
              puVar44[1] = auVar12._8_8_;
              *puVar44 = auVar12._0_8_;
              puVar44 = puVar44 + 4;
            } while (lVar63 != 0);
            lVar63 = lVar42;
            if ((uVar46 & 7) == 0) goto LAB_00e06648;
          }
          lVar52 = uVar59 - lVar63;
          puVar25 = (undefined4 *)(lVar27 + lVar22 * 4 + lVar63 * 4);
          puVar29 = (undefined4 *)(uVar28 + lVar62 * 4 + lVar63 * 4);
          do {
            lVar52 = lVar52 + -1;
            *puVar25 = *puVar29;
            puVar25 = puVar25 + 1;
            puVar29 = puVar29 + 1;
          } while (lVar52 != 0);
        }
LAB_00e06648:
        lVar65 = lVar65 + 1;
        if (*(int *)(lVar64 + 4) <= lVar65) {
          lVar38 = *(long *)(param_1 + 0x50);
          uVar23 = *(uint *)(param_1 + 0x28);
          break;
        }
        lVar63 = *(long *)(param_1 + 0x40);
        if (*(long *)(param_1 + 0x38) != 0) goto LAB_00e05ed4;
LAB_00e06200:
        uVar15 = _vorbis_window_get(*(int *)(lVar31 + 8) - uVar8);
        lVar27 = *(long *)(*(long *)(param_1 + 0x10) + lVar65 * 8);
        uVar28 = *(ulong *)(*param_2 + lVar65 * 8);
        uVar19 = lVar27 + lVar38 * 4;
        if (lVar63 != 0) {
          if ((int)uVar18 < 1) {
            uVar30 = 0;
          }
          else {
            uVar30 = uVar18;
            if (7 < uVar61 && (bVar1 && bVar14)) {
              uVar43 = 0;
              uVar45 = lVar27 + (uVar61 + lVar38) * 4;
              if (((uVar28 + ((uVar61 + lVar32) - lVar34) * 4 <= uVar19 ||
                    uVar45 <= uVar28 + lVar32 * 4 + lVar20 * 4) &&
                  (uVar15 + uVar61 * 4 <= uVar19 || uVar45 <= uVar15)) &&
                 (uVar15 + lVar3 * 4 <= uVar19 || uVar45 <= uVar15 + lVar33 * 4)) {
                puVar44 = (undefined8 *)(uVar15 + 0x10);
                puVar48 = (undefined8 *)(uVar28 + ((lVar32 - lVar34) + 4) * 4);
                puVar35 = (undefined8 *)(lVar27 + (lVar38 + 4) * 4);
                lVar63 = lVar5;
                uVar19 = uVar40;
                do {
                  lVar52 = uVar15 + (lVar63 >> 0x1e);
                  uVar19 = uVar19 - 8;
                  auVar12 = *(undefined (*) [16])(puVar48 + -2);
                  uVar69 = puVar48[1];
                  uVar68 = *puVar48;
                  lVar63 = lVar63 + -0x800000000;
                  puVar48 = puVar48 + 4;
                  puVar2 = puVar44 + -2;
                  puVar11 = puVar44 + -1;
                  uVar75 = puVar44[1];
                  uVar74 = *puVar44;
                  auVar70 = NEON_rev64(*(undefined (*) [16])(lVar52 + -0xc),4);
                  puVar44 = puVar44 + 4;
                  auVar71 = NEON_rev64(*(undefined (*) [16])(lVar52 + -0x1c),4);
                  auVar70 = NEON_ext(auVar70,auVar70,8,1);
                  auVar72 = NEON_ext(auVar71,auVar71,8,1);
                  auVar71._0_8_ =
                       CONCAT44(auVar12._4_4_ * (float)((ulong)*puVar2 >> 0x20) +
                                auVar70._4_4_ * (float)((ulong)puVar35[-2] >> 0x20),
                                auVar12._0_4_ * (float)*puVar2 + auVar70._0_4_ * (float)puVar35[-2])
                  ;
                  auVar71._8_4_ =
                       auVar12._8_4_ * (float)*puVar11 + auVar70._8_4_ * (float)puVar35[-1];
                  auVar71._12_4_ =
                       auVar12._12_4_ * (float)((ulong)*puVar11 >> 0x20) +
                       auVar70._12_4_ * (float)((ulong)puVar35[-1] >> 0x20);
                  puVar35[-1] = auVar71._8_8_;
                  puVar35[-2] = auVar71._0_8_;
                  puVar35[1] = CONCAT44((float)((ulong)uVar69 >> 0x20) *
                                        (float)((ulong)uVar75 >> 0x20) +
                                        auVar72._12_4_ * (float)((ulong)puVar35[1] >> 0x20),
                                        (float)uVar69 * (float)uVar75 +
                                        auVar72._8_4_ * (float)puVar35[1]);
                  *puVar35 = CONCAT44((float)((ulong)uVar68 >> 0x20) *
                                      (float)((ulong)uVar74 >> 0x20) +
                                      auVar72._4_4_ * (float)((ulong)*puVar35 >> 0x20),
                                      (float)uVar68 * (float)uVar74 +
                                      auVar72._0_4_ * (float)*puVar35);
                  puVar35 = puVar35 + 4;
                } while (uVar19 != 0);
                uVar43 = uVar40;
                if (uVar47 == 0) goto LAB_00e063e4;
              }
            }
            else {
              uVar43 = 0;
            }
            lVar56 = uVar43 * 4;
            lVar52 = uVar61 - uVar43;
            lVar63 = (ulong)(uint)(iVar37 - (int)uVar43) << 0x20;
            pfVar49 = (float *)(uVar15 + lVar56);
            pfVar54 = (float *)(uVar28 + (lVar32 - lVar34) * 4 + lVar56);
            puVar25 = (undefined4 *)(lVar27 + lVar38 * 4 + lVar56);
            do {
              lVar56 = lVar63 >> 0x1e;
              lVar63 = lVar63 + -0x100000000;
              lVar52 = lVar52 + -1;
              uVar67 = NEON_fmadd(*puVar25,*(undefined4 *)(uVar15 + lVar56),*pfVar54 * *pfVar49);
              *puVar25 = uVar67;
              pfVar49 = pfVar49 + 1;
              pfVar54 = pfVar54 + 1;
              puVar25 = puVar25 + 1;
            } while (lVar52 != 0);
          }
LAB_00e063e4:
          if ((int)uVar30 < (int)uVar23) {
            uVar19 = (ulong)uVar30;
            if ((7 < uVar60) &&
               ((uVar28 + ((lVar32 + uVar21) - lVar34) * 4 <= lVar27 + (lVar38 + uVar50) * 4 ||
                (lVar27 + (lVar38 + uVar21) * 4 <= uVar28 + ((lVar32 + uVar50) - lVar34) * 4)))) {
              lVar52 = uVar19 * 4;
              uVar19 = uVar41 + uVar19;
              lVar63 = lVar55 + 0x10 + lVar52;
              lVar52 = lVar51 + 0x10 + lVar52;
              uVar15 = uVar41;
              do {
                pauVar36 = (undefined (*) [16])(uVar28 + lVar63);
                puVar44 = (undefined8 *)(lVar27 + lVar52);
                uVar15 = uVar15 - 8;
                lVar63 = lVar63 + 0x20;
                lVar52 = lVar52 + 0x20;
                uVar68 = *(undefined8 *)pauVar36[-1];
                auVar12 = *pauVar36;
                puVar44[-1] = *(undefined8 *)(pauVar36[-1] + 8);
                puVar44[-2] = uVar68;
                puVar44[1] = auVar12._8_8_;
                *puVar44 = auVar12._0_8_;
              } while (uVar15 != 0);
              if (uVar60 == uVar41) goto LAB_00e065d0;
            }
            lVar52 = lVar51 + uVar19 * 4;
            lVar63 = lVar55 + uVar19 * 4;
            lVar56 = uVar21 - uVar19;
            do {
              puVar25 = (undefined4 *)(uVar28 + lVar63);
              lVar63 = lVar63 + 4;
              lVar56 = lVar56 + -1;
              *(undefined4 *)(lVar27 + lVar52) = *puVar25;
              lVar52 = lVar52 + 4;
            } while (lVar56 != 0);
          }
          goto LAB_00e065d0;
        }
        if (0 < (int)uVar18) {
          if (7 < uVar61 && (bVar1 && bVar14)) {
            uVar45 = 0;
            uVar43 = lVar27 + (uVar61 + lVar38) * 4;
            if (((uVar28 + uVar61 * 4 <= uVar19 || uVar43 <= uVar28) &&
                (uVar15 + uVar61 * 4 <= uVar19 || uVar43 <= uVar15)) &&
               (uVar15 + lVar3 * 4 <= uVar19 || uVar43 <= uVar15 + lVar33 * 4)) {
              lVar63 = 0x10;
              lVar52 = lVar27 + lVar51;
              uVar45 = uVar40;
              lVar56 = lVar5;
              do {
                lVar53 = uVar15 + (lVar56 >> 0x1e);
                puVar44 = (undefined8 *)(uVar28 + lVar63);
                uVar69 = ((undefined8 *)(lVar52 + lVar63))[1];
                uVar68 = *(undefined8 *)(lVar52 + lVar63);
                lVar56 = lVar56 + -0x800000000;
                uVar45 = uVar45 - 8;
                puVar48 = (undefined8 *)(uVar15 + lVar63);
                auVar12 = *(undefined (*) [16])(puVar44 + -2);
                uVar74 = *puVar44;
                auVar70 = NEON_rev64(*(undefined (*) [16])(lVar53 + -0xc),4);
                lVar6 = lVar52 + lVar63;
                auVar71 = NEON_rev64(*(undefined (*) [16])(lVar53 + -0x1c),4);
                auVar70 = NEON_ext(auVar70,auVar70,8,1);
                uVar75 = *puVar48;
                auVar71 = NEON_ext(auVar71,auVar71,8,1);
                auVar73._0_8_ =
                     CONCAT44(auVar12._4_4_ * (float)((ulong)puVar48[-2] >> 0x20) +
                              auVar70._4_4_ * (float)((ulong)*(undefined8 *)(lVar6 + -0x10) >> 0x20)
                              ,auVar12._0_4_ * (float)puVar48[-2] +
                               auVar70._0_4_ * (float)*(undefined8 *)(lVar6 + -0x10));
                auVar73._8_4_ =
                     auVar12._8_4_ * (float)puVar48[-1] +
                     auVar70._8_4_ * (float)*(undefined8 *)(lVar6 + -8);
                auVar73._12_4_ =
                     auVar12._12_4_ * (float)((ulong)puVar48[-1] >> 0x20) +
                     auVar70._12_4_ * (float)((ulong)*(undefined8 *)(lVar6 + -8) >> 0x20);
                ((undefined8 *)(lVar52 + lVar63))[1] =
                     CONCAT44((float)((ulong)puVar44[1] >> 0x20) *
                              (float)((ulong)puVar48[1] >> 0x20) +
                              auVar71._12_4_ * (float)((ulong)uVar69 >> 0x20),
                              (float)puVar44[1] * (float)puVar48[1] + auVar71._8_4_ * (float)uVar69)
                ;
                *(undefined8 *)(lVar52 + lVar63) =
                     CONCAT44((float)((ulong)uVar74 >> 0x20) * (float)((ulong)uVar75 >> 0x20) +
                              auVar71._4_4_ * (float)((ulong)uVar68 >> 0x20),
                              (float)uVar74 * (float)uVar75 + auVar71._0_4_ * (float)uVar68);
                lVar63 = lVar63 + 0x20;
                *(long *)(lVar6 + -8) = auVar73._8_8_;
                *(undefined8 *)(lVar6 + -0x10) = auVar73._0_8_;
              } while (uVar45 != 0);
              uVar45 = uVar40;
              if (uVar47 == 0) goto LAB_00e065d0;
            }
          }
          else {
            uVar45 = 0;
          }
          lVar63 = (ulong)(uint)(iVar37 - (int)uVar45) << 0x20;
          do {
            lVar52 = uVar45 * 4;
            lVar56 = lVar63 >> 0x1e;
            uVar45 = uVar45 + 1;
            lVar63 = lVar63 + -0x100000000;
            uVar67 = NEON_fmadd(*(undefined4 *)(uVar19 + lVar52),*(undefined4 *)(uVar15 + lVar56),
                                *(float *)(uVar28 + lVar52) * *(float *)(uVar15 + lVar52));
            *(undefined4 *)(uVar19 + lVar52) = uVar67;
          } while (uVar61 != uVar45);
        }
      } while( true );
    }
    lVar64 = (long)(int)uVar16;
    if (lVar38 != 0) {
      lVar64 = 0;
    }
    *(long *)(param_1 + 0x50) = lVar64;
    if (uVar23 == 0xffffffff) {
      *(uint *)(param_1 + 0x24) = uVar57;
      *(uint *)(param_1 + 0x28) = uVar57;
      lVar64 = *(long *)(lVar31 + 0xe0);
      uVar24 = uVar57;
      goto joined_r0x00e067b0;
    }
    *(uint *)(param_1 + 0x28) = uVar24;
    lVar27 = plVar58[*(long *)(param_1 + 0x38)];
    lVar32 = plVar58[*(long *)(param_1 + 0x40)];
    lVar64 = lVar27 + 3;
    if (-1 < lVar27) {
      lVar64 = lVar27;
    }
    lVar27 = lVar32 + 3;
    if (-1 < lVar32) {
      lVar27 = lVar32;
    }
    uVar57 = uVar24 + (int)((lVar27 >> 2) + (lVar64 >> 2) >> (uVar26 & 0x3f));
    *(uint *)(param_1 + 0x24) = uVar57;
    lVar64 = *(long *)(lVar31 + 0xe0);
    if (lVar64 == -1) goto LAB_00e0671c;
LAB_00e067b4:
    lVar32 = plVar58[*(long *)(param_1 + 0x38)];
    lVar38 = plVar58[*(long *)(param_1 + 0x40)];
    lVar27 = lVar32 + 3;
    if (-1 < lVar32) {
      lVar27 = lVar32;
    }
    lVar32 = lVar38 + 3;
    if (-1 < lVar38) {
      lVar32 = lVar38;
    }
    lVar64 = lVar64 + (lVar27 >> 2) + (lVar32 >> 2);
    lVar27 = *(long *)(param_1 + 0x58);
    *(long *)(lVar31 + 0xe0) = lVar64;
    if (lVar27 != -1) goto LAB_00e067f4;
LAB_00e06734:
    lVar31 = param_2[0xb];
    if (lVar31 != -1) {
      uVar17 = lVar64 - lVar31;
      *(long *)(param_1 + 0x58) = lVar31;
      if (uVar17 != 0 && lVar31 <= lVar64) {
        uVar17 = uVar17 & ((long)uVar17 >> 0x3f ^ 0xffffffffffffffffU);
        if (*(int *)(param_2 + 10) == 0) {
          uVar24 = uVar24 + (int)(uVar17 >> (uVar26 & 0x3f));
          if ((int)uVar24 <= (int)uVar57) {
            uVar57 = uVar24;
          }
          *(uint *)(param_1 + 0x28) = uVar57;
          iVar37 = *(int *)(param_2 + 10);
          goto joined_r0x00e0687c;
        }
        uVar19 = (ulong)(int)(uVar57 - uVar24 << (ulong)(uVar8 & 0x1f));
        if ((long)uVar17 <= (long)uVar19) {
          uVar19 = uVar17;
        }
        *(uint *)(param_1 + 0x24) = uVar57 - (int)((long)uVar19 >> (uVar26 & 0x3f));
      }
    }
  }
  iVar37 = *(int *)(param_2 + 10);
joined_r0x00e0687c:
  if (iVar37 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 1;
  return 0;
}


