// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_Decode
// Entry Point: 00e5fa84
// Size: 3416 bytes
// Signature: undefined silk_Decode(void)


/* WARNING: Type propagation algorithm not settling */

void silk_Decode(long param_1,int *param_2,int param_3,int param_4,undefined8 param_5,
                undefined4 *param_6,uint *param_7,undefined4 param_8)

{
  undefined auVar1 [16];
  long *plVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  size_t __n;
  uint uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  undefined2 *puVar14;
  undefined4 *puVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong *puVar18;
  int *piVar19;
  undefined *puVar20;
  int iVar21;
  uint uVar22;
  undefined4 *puVar23;
  long lVar24;
  undefined4 *puVar25;
  ulong *puVar26;
  long lVar27;
  int iVar28;
  int iVar29;
  undefined auVar30 [13];
  undefined auVar31 [16];
  undefined auVar32 [13];
  undefined auVar33 [16];
  undefined auVar34 [16];
  long local_380;
  int local_378;
  int local_374;
  undefined *local_370;
  undefined4 *local_368;
  long local_360;
  uint local_354;
  int *local_350;
  uint local_344;
  undefined4 *local_340;
  int local_338;
  undefined4 local_334;
  undefined8 local_330;
  undefined8 uStack_328;
  uint *local_318;
  long local_310;
  int *local_308;
  undefined8 local_300;
  uint local_2f8;
  int local_2f4;
  undefined4 *local_2f0;
  long alStack_2e8 [79];
  long local_70;
  
  plVar2 = &local_380;
  local_338 = param_3;
  local_334 = param_8;
  local_318 = param_7;
  local_340 = param_6;
  lVar27 = tpidr_el0;
  local_70 = *(long *)(lVar27 + 0x28);
  uVar7 = param_2[1];
  uVar8 = (ulong)uVar7;
  local_2f4 = 0;
  local_300 = 0;
  if ((param_4 != 0) && (0 < (int)uVar7)) {
    if (uVar7 < 2) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar8 & 0xfffffffe;
      uVar17 = uVar12;
      lVar13 = param_1;
      do {
        *(undefined4 *)(lVar13 + 0x960) = 0;
        uVar17 = uVar17 - 2;
        *(undefined4 *)(lVar13 + 0x1a20) = 0;
        lVar13 = lVar13 + 0x2180;
      } while (uVar17 != 0);
      if (uVar12 == uVar8) goto LAB_00e5fb40;
    }
    lVar13 = uVar8 - uVar12;
    puVar23 = (undefined4 *)(param_1 + uVar12 * 0x10c0 + 0x960);
    do {
      *puVar23 = 0;
      puVar23 = puVar23 + 0x430;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
LAB_00e5fb40:
  local_308 = param_2;
  if (*(int *)(param_1 + 0x2190) < (int)uVar7) {
    iVar3 = silk_init_decoder(param_1 + 0x10c0);
    uVar8 = (ulong)(uint)local_308[1];
    if (local_308[1] != 1) goto LAB_00e5fbb0;
LAB_00e5fb80:
    if (*(int *)(param_1 + 0x2190) != 2) goto LAB_00e5fbb0;
    iVar4 = *(int *)(param_1 + 0x960);
    uVar22 = (uint)(local_308[3] == *(int *)(param_1 + 0x90c) * 1000);
    uVar7 = local_354;
  }
  else {
    iVar3 = 0;
    if (uVar7 == 1) goto LAB_00e5fb80;
LAB_00e5fbb0:
    iVar4 = *(int *)(param_1 + 0x960);
    uVar22 = 0;
    uVar7 = local_354;
  }
  local_354 = uVar22;
  uVar22 = local_354;
  if ((iVar4 == 0) && (0 < (int)uVar8)) {
    lVar13 = 0;
    lVar10 = param_1;
    do {
      iVar21 = local_308[4];
      iVar4 = -0xcb;
      if (iVar21 < 0x14) {
        uVar5 = 2;
        uVar11 = 1;
        if ((iVar21 != 0) && (iVar21 != 10)) goto LAB_00e60458;
      }
      else if (iVar21 == 0x3c) {
        uVar5 = 4;
        uVar11 = 3;
      }
      else if (iVar21 == 0x28) {
        uVar5 = 4;
        uVar11 = 2;
      }
      else {
        if (iVar21 != 0x14) goto LAB_00e60458;
        uVar5 = 4;
        uVar11 = 1;
      }
      *(undefined4 *)(lVar10 + 0x964) = uVar11;
      iVar4 = -200;
      *(undefined4 *)(lVar10 + 0x914) = uVar5;
      uVar7 = local_308[3] >> 10;
      if ((0xf < uVar7) || ((1 << (ulong)(uVar7 & 0x1f) & 0x8880U) == 0)) goto LAB_00e60458;
      iVar4 = silk_decoder_set_fs(lVar10,uVar7 + 1,local_308[2]);
      iVar3 = iVar4 + iVar3;
      lVar13 = lVar13 + 1;
      lVar10 = lVar10 + 0x10c0;
      uVar8 = (ulong)local_308[1];
      uVar22 = local_354;
      uVar7 = local_354;
    } while (lVar13 < (long)uVar8);
  }
  local_354 = uVar7;
  iVar4 = *local_308;
  if (iVar4 == 2) {
    if ((int)uVar8 == 2) {
      if ((*(int *)(param_1 + 0x218c) == 1) || (*(int *)(param_1 + 0x2190) == 1)) {
        *(undefined4 *)(param_1 + 0x2180) = 0;
        *(undefined4 *)(param_1 + 0x2188) = 0;
        memcpy((void *)(param_1 + 0x1a50),(void *)(param_1 + 0x990),0x130);
        iVar4 = *local_308;
        uVar8 = (ulong)(uint)local_308[1];
        goto LAB_00e5fcf0;
      }
      uVar8 = 2;
    }
    iVar4 = 2;
  }
LAB_00e5fcf0:
  *(int *)(param_1 + 0x218c) = iVar4;
  iVar4 = (int)uVar8;
  *(int *)(param_1 + 0x2190) = iVar4;
  if (local_308[2] - 0xbb81U < 0xffff63bf) {
    iVar4 = -200;
    goto LAB_00e60458;
  }
  local_360 = lVar27;
  local_310 = param_1;
  local_354 = uVar22;
  local_370 = (undefined *)(param_1 + 0x19c8);
  piVar19 = local_308;
  iVar21 = local_338;
  if ((local_338 == 1) || (*(int *)(param_1 + 0x960) != 0)) {
LAB_00e5fd48:
    if (iVar4 == 2) {
      if (iVar21 == 0) {
        silk_stereo_decode_pred(param_5,&local_300);
        if (*(int *)(param_1 + (long)*(int *)(param_1 + 0x960) * 4 + 0x1a30) == 0)
        goto LAB_00e5fd8c;
LAB_00e5fe58:
        local_2f4 = 0;
        piVar19 = local_308;
      }
      else if ((iVar21 == 2) &&
              (*(int *)(param_1 + (long)*(int *)(param_1 + 0x960) * 4 + 0x980) == 1)) {
        silk_stereo_decode_pred(param_5,&local_300);
        if (*(int *)(param_1 + (long)*(int *)(param_1 + 0x960) * 4 + 0x1a40) != 0)
        goto LAB_00e5fe58;
LAB_00e5fd8c:
        silk_stereo_decode_mid_only(param_5,&local_2f4);
        piVar19 = local_308;
      }
      else {
        local_300 = CONCAT44((int)*(short *)(local_370 + 0x7ba),(int)*(short *)(local_370 + 0x7b8));
      }
    }
  }
  else {
    if (0 < iVar4) {
      lVar13 = 0;
      lVar27 = param_1 + 0x970;
      do {
        lVar10 = local_310 + lVar13 * 0x10c0;
        if (0 < *(int *)(lVar10 + 0x964)) {
          lVar24 = 0;
          do {
            uVar5 = ec_dec_bit_logp(param_5,1);
            *(undefined4 *)(lVar27 + lVar24 * 4) = uVar5;
            lVar24 = lVar24 + 1;
          } while (lVar24 < *(int *)(lVar10 + 0x964));
        }
        uVar5 = ec_dec_bit_logp(param_5,1);
        param_1 = local_310;
        lVar27 = lVar27 + 0x10c0;
        lVar10 = lVar13 * 0x10c0;
        lVar13 = lVar13 + 1;
        *(undefined4 *)(local_310 + lVar10 + 0x97c) = uVar5;
        uVar8 = (ulong)local_308[1];
      } while (lVar13 < (long)uVar8);
      piVar19 = local_308;
      iVar21 = local_338;
      if (0 < local_308[1]) {
        lVar13 = 0;
        puVar26 = (ulong *)(local_310 + 0x990);
        lVar27 = local_310 + 0x980;
        uStack_328 = 0x300000002;
        local_330 = (int *)0x100000000;
        do {
          lVar10 = param_1 + lVar13 * 0x10c0;
          *(undefined4 *)(lVar10 + 0x988) = 0;
          *(undefined8 *)(lVar10 + 0x980) = 0;
          if (*(int *)(lVar10 + 0x97c) != 0) {
            lVar24 = param_1 + lVar13 * 0x10c0;
            iVar4 = *(int *)(lVar24 + 0x964);
            if (iVar4 == 1) {
              *(undefined4 *)(lVar10 + 0x980) = 1;
            }
            else {
              iVar4 = ec_dec_icdf(param_5,*(undefined8 *)
                                           (silk_LBRR_flags_iCDF_ptr + (long)(iVar4 + -2) * 8),8);
              uVar7 = *(uint *)(lVar24 + 0x964);
              uVar8 = (ulong)(int)uVar7;
              piVar19 = local_308;
              iVar21 = local_338;
              if (0 < (int)uVar7) {
                uVar22 = iVar4 + 1;
                if (uVar7 < 8) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = uVar8 & 0xfffffffffffffff8;
                  iVar28 = (int)uStack_328;
                  iVar29 = (int)((ulong)uStack_328 >> 0x20);
                  iVar4 = (int)local_330;
                  iVar6 = (int)((ulong)local_330 >> 0x20);
                  uVar12 = uVar17;
                  puVar18 = puVar26;
                  do {
                    auVar31._4_4_ = iVar6;
                    auVar31._0_4_ = iVar4;
                    auVar31._8_4_ = iVar28;
                    auVar31._12_4_ = iVar29;
                    auVar31 = NEON_neg(auVar31,4);
                    uVar12 = uVar12 - 8;
                    auVar33._0_4_ = -4 - iVar4;
                    auVar33._4_4_ = -4 - iVar6;
                    auVar33._8_4_ = -4 - iVar28;
                    auVar33._12_4_ = -4 - iVar29;
                    iVar4 = iVar4 + 8;
                    iVar6 = iVar6 + 8;
                    iVar28 = iVar28 + 8;
                    iVar29 = iVar29 + 8;
                    auVar34._4_4_ = uVar22;
                    auVar34._0_4_ = uVar22;
                    auVar34._8_4_ = uVar22;
                    auVar34._12_4_ = uVar22;
                    auVar31 = NEON_ushl(auVar34,auVar31,4);
                    auVar1._4_4_ = uVar22;
                    auVar1._0_4_ = uVar22;
                    auVar1._8_4_ = uVar22;
                    auVar1._12_4_ = uVar22;
                    auVar34 = NEON_ushl(auVar1,auVar33,4);
                    auVar30._0_8_ =
                         CONCAT35(0,CONCAT14(auVar31[4],(uint)(auVar31[0] & 1)) & 0x1ffffffff);
                    auVar30[8] = auVar31[8] & 1;
                    auVar30._9_3_ = 0;
                    auVar30[12] = auVar31[12] & 1;
                    auVar32._0_8_ =
                         CONCAT35(0,CONCAT14(auVar34[4],(uint)(auVar34[0] & 1)) & 0x1ffffffff);
                    auVar32[8] = auVar34[8] & 1;
                    auVar32._9_3_ = 0;
                    auVar32[12] = auVar34[12] & 1;
                    puVar18[-1] = (ulong)auVar30._8_5_;
                    puVar18[-2] = auVar30._0_8_;
                    puVar18[1] = (ulong)auVar32._8_5_;
                    *puVar18 = auVar32._0_8_;
                    puVar18 = puVar18 + 4;
                  } while (uVar12 != 0);
                  if (uVar17 == uVar8) goto LAB_00e604cc;
                }
                do {
                  *(uint *)(lVar27 + uVar17 * 4) = uVar22 >> (ulong)((uint)uVar17 & 0x1f) & 1;
                  uVar17 = uVar17 + 1;
                } while ((long)uVar17 < (long)uVar8);
              }
            }
          }
LAB_00e604cc:
          uVar8 = (ulong)piVar19[1];
          lVar13 = lVar13 + 1;
          puVar26 = puVar26 + 0x218;
          lVar27 = lVar27 + 0x10c0;
        } while (lVar13 < (long)uVar8);
      }
    }
    iVar4 = (int)uVar8;
    if ((iVar21 != 0) || (*(int *)(param_1 + 0x964) < 1)) goto LAB_00e5fd48;
    if (0 < iVar4) {
      uVar17 = 0;
      uVar7 = 0xffffffff;
      local_330 = (int *)(param_1 + 0x1a40);
      lVar27 = 0x980;
      do {
        local_344 = uVar7;
        if (0 < (int)uVar8) {
          lVar13 = 0;
          lVar10 = param_1;
          if (uVar17 == 0) {
            do {
              if (*(int *)(lVar10 + 0x980) != 0) {
                if ((((int)uVar8 == 2) && (lVar13 == 0)) &&
                   (silk_stereo_decode_pred(param_5,&local_300), *local_330 == 0)) {
                  silk_stereo_decode_mid_only(param_5,&local_2f4);
                }
                silk_decode_indices(lVar10,param_5,0,1,0);
                silk_decode_pulses(param_5,&local_2f0,(long)*(char *)(lVar10 + 0xae5),
                                   (long)*(char *)(lVar10 + 0xae6),*(undefined4 *)(lVar10 + 0x918));
                uVar8 = (ulong)(uint)local_308[1];
                piVar19 = local_308;
              }
              lVar13 = lVar13 + 1;
              lVar10 = lVar10 + 0x10c0;
            } while (lVar13 < (int)uVar8);
          }
          else {
            do {
              if (*(int *)(lVar10 + lVar27) != 0) {
                if ((((int)uVar8 == 2) && (lVar13 == 0)) &&
                   (silk_stereo_decode_pred(param_5,&local_300), local_330[uVar17] == 0)) {
                  silk_stereo_decode_mid_only(param_5,&local_2f4);
                }
                silk_decode_indices(lVar10,param_5,uVar17 & 0xffffffff,1,
                                    (ulong)(*(int *)(lVar10 + (ulong)uVar7 * 4 + 0x980) != 0) << 1);
                silk_decode_pulses(param_5,&local_2f0,(long)*(char *)(lVar10 + 0xae5),
                                   (long)*(char *)(lVar10 + 0xae6),*(undefined4 *)(lVar10 + 0x918));
                uVar8 = (ulong)(uint)local_308[1];
                piVar19 = local_308;
              }
              lVar13 = lVar13 + 1;
              lVar10 = lVar10 + 0x10c0;
            } while (lVar13 < (int)uVar8);
          }
        }
        iVar4 = (int)uVar8;
        uVar17 = uVar17 + 1;
        lVar27 = lVar27 + 4;
        uVar7 = local_344 + 1;
      } while ((long)uVar17 < (long)*(int *)(param_1 + 0x964));
      goto LAB_00e5fd48;
    }
  }
  iVar4 = piVar19[1];
  local_330 = (int *)CONCAT44(local_330._4_4_,(uint)(local_2f4 == 0));
  if ((iVar4 == 2) && (local_2f4 == 0)) {
    if (*(int *)(param_1 + 0x2194) == 1) {
      memset((void *)(param_1 + 0x1604),0,0x3c0);
      *(undefined4 *)(param_1 + 0x211c) = 0;
      *(undefined4 *)(param_1 + 0x19c4) = 100;
      *(undefined8 *)(param_1 + 0x15cc) = 0;
      *(undefined8 *)(param_1 + 0x15c4) = 0;
      *(undefined8 *)(param_1 + 0x15dc) = 0;
      *(undefined8 *)(param_1 + 0x15d4) = 0;
      *(undefined8 *)(param_1 + 0x15ec) = 0;
      *(undefined8 *)(param_1 + 0x15e4) = 0;
      *(undefined8 *)(param_1 + 0x15fc) = 0;
      *(undefined8 *)(param_1 + 0x15f4) = 0;
      *local_370 = 10;
      *(undefined4 *)(param_1 + 0x1a08) = 1;
      iVar4 = local_308[1];
      piVar19 = local_308;
    }
    else {
      iVar4 = 2;
    }
  }
  iVar6 = iVar4 * piVar19[3];
  iVar28 = *piVar19 * piVar19[2];
  puVar23 = local_340;
  if (iVar28 <= iVar6) {
    plVar2 = (long *)((long)&local_380 -
                     (((long)*(int *)(param_1 + 0x918) + 2) * (long)iVar4 * 2 + 0xfU &
                     0xfffffffffffffff0));
    puVar23 = (undefined4 *)plVar2;
  }
  lVar27 = (long)puVar23 + (long)*(int *)(param_1 + 0x918) * 2 + 4;
  local_2f0 = puVar23;
  alStack_2e8[0] = lVar27;
  if (iVar21 == 0) {
LAB_00e5ffa8:
    local_344 = (uint)(iVar21 == 2);
    local_350 = (int *)(param_1 + 0x2194);
    if (0 < iVar4) {
      iVar4 = *(int *)(param_1 + 0x960);
      goto joined_r0x00e5ffe0;
    }
LAB_00e60128:
    uVar8 = (ulong)(int)local_2f8;
    *puVar23 = *(undefined4 *)(param_1 + 0x2184);
    *(undefined4 *)(param_1 + 0x2184) = *(undefined4 *)((long)puVar23 + uVar8 * 2);
  }
  else {
    uVar7 = local_330._4_4_;
    if (*(int *)(param_1 + 0x2194) == 0) {
      local_330 = (int *)CONCAT44(local_330._4_4_,1);
      goto LAB_00e5ffa8;
    }
    local_330 = (int *)((ulong)local_330._4_4_ << 0x20);
    if ((iVar21 != 2) || (iVar4 != 2)) goto LAB_00e5ffa8;
    local_350 = (int *)(param_1 + 0x2194);
    local_330 = (int *)CONCAT44(uVar7,(uint)(*(int *)(param_1 + (long)*(int *)(param_1 + 0x1a20) * 4
                                                     + 0x1a40) == 1));
    local_344 = 1;
    iVar4 = *(int *)(param_1 + 0x960);
joined_r0x00e5ffe0:
    lVar13 = (ulong)(0 < iVar4) << 1;
    if ((0 < iVar4) && (local_344 != 0)) {
      lVar13 = (ulong)(*(int *)(param_1 + (ulong)(iVar4 - 1) * 4 + 0x980) != 0) << 1;
    }
    local_374 = iVar28;
    iVar4 = silk_decode_frame(param_1,param_5,puVar23 + 1,&local_2f8,iVar21,lVar13,local_334);
    iVar3 = iVar4 + iVar3;
    iVar4 = local_308[1];
    *(int *)(param_1 + 0x960) = *(int *)(param_1 + 0x960) + 1;
    piVar19 = local_308;
    iVar28 = local_374;
    if (iVar4 < 2) goto LAB_00e60128;
    local_380 = lVar27;
    local_378 = iVar6;
    iVar4 = -2;
    local_368 = puVar23;
    lVar13 = param_1 + 0x1a40;
    lVar27 = 1;
    do {
      if ((int)local_330 == 0) {
        memset((void *)(alStack_2e8[lVar27 + -1] + 4),0,(long)(int)local_2f8 << 1);
      }
      else {
        if (iVar4 + *(int *)(param_1 + 0x960) + 1 < 1) {
          uVar8 = 0;
        }
        else if (local_344 == 0) {
          uVar7 = 1;
          if (*local_350 == 0) {
            uVar7 = 2;
          }
          uVar8 = (ulong)uVar7;
        }
        else {
          uVar8 = (ulong)(*(int *)(lVar13 + (ulong)(uint)(*(int *)(param_1 + 0x960) + iVar4) * 4) !=
                         0) << 1;
        }
        iVar6 = silk_decode_frame(lVar13 + -0x980,param_5,alStack_2e8[lVar27 + -1] + 4,&local_2f8,
                                  iVar21,uVar8,local_334);
        iVar3 = iVar6 + iVar3;
      }
      puVar23 = local_368;
      iVar28 = local_374;
      iVar6 = local_378;
      lVar27 = lVar27 + 1;
      iVar4 = iVar4 + -1;
      *(int *)(lVar13 + -0x20) = *(int *)(lVar13 + -0x20) + 1;
      lVar13 = lVar13 + 0x10c0;
    } while (lVar27 < local_308[1]);
    piVar19 = local_308;
    if ((*local_308 != 2) || (local_308[1] != 2)) goto LAB_00e60128;
    silk_stereo_MS_to_LR
              (param_1 + 0x2180,local_368,local_380,&local_300,*(undefined4 *)(param_1 + 0x90c),
               local_2f8);
    uVar8 = (ulong)local_2f8;
    piVar19 = local_308;
  }
  iVar4 = *(short *)(param_1 + 0x90c) * 1000;
  uVar7 = 0;
  if (iVar4 != 0) {
    uVar7 = (piVar19[2] * (int)uVar8) / iVar4;
  }
  *local_318 = uVar7;
  iVar21 = *piVar19;
  iVar29 = piVar19[1];
  if (iVar21 != 2) {
    uVar7 = 0;
  }
  puVar9 = (undefined4 *)
           ((long)plVar2 -
           ((-(ulong)(uVar7 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar7 << 1) + 0xf &
           0xfffffffffffffff0));
  puVar25 = puVar9;
  if (iVar21 != 2) {
    puVar25 = local_340;
  }
  if (iVar6 < iVar28) {
    iVar4 = *(int *)(local_310 + 0x918);
    __n = ((long)iVar4 + 2) * (long)iVar29 * 2;
    puVar23 = (undefined4 *)((long)puVar9 - (__n + 0xf & 0xfffffffffffffff0));
    memcpy(puVar23,local_340,__n);
    alStack_2e8[0] = (long)puVar23 + (long)iVar4 * 2 + 4;
    piVar19 = local_308;
    local_2f0 = puVar23;
  }
  iVar4 = iVar21;
  if (iVar29 <= iVar21) {
    iVar4 = iVar29;
  }
  if (0 < iVar4) {
    puVar9 = local_340;
    lVar27 = 0;
    local_368 = puVar23;
    while( true ) {
      iVar4 = silk_resampler(local_310 + lVar27 * 0x10c0 + 0x990,puVar25,(long)puVar23 + 2,
                             uVar8 & 0xffffffff);
      iVar21 = *local_308;
      if ((iVar21 == 2) &&
         (uVar8 = (ulong)*local_318, puVar23 = puVar25, puVar15 = puVar9, 0 < (int)*local_318)) {
        do {
          uVar8 = uVar8 - 1;
          *(undefined2 *)puVar15 = *(undefined2 *)puVar23;
          puVar23 = (undefined4 *)((long)puVar23 + 2);
          puVar15 = puVar15 + 1;
        } while (uVar8 != 0);
      }
      iVar29 = local_308[1];
      iVar3 = iVar4 + iVar3;
      iVar4 = iVar21;
      if (iVar29 <= iVar21) {
        iVar4 = iVar29;
      }
      piVar19 = local_308;
      puVar23 = local_368;
      if ((long)iVar4 <= lVar27 + 1) break;
      puVar23 = (undefined4 *)alStack_2e8[lVar27];
      puVar9 = (undefined4 *)((long)puVar9 + 2);
      uVar8 = (ulong)local_2f8;
      lVar27 = lVar27 + 1;
    }
  }
  lVar13 = local_310;
  iVar4 = iVar3;
  if ((iVar21 == 2) && (iVar29 == 1)) {
    if ((local_354 & 1) == 0) {
      uVar7 = *local_318;
      uVar8 = (ulong)uVar7;
      if (0 < (int)uVar7) {
        if (uVar7 == 1) {
          uVar12 = 0;
        }
        else {
          uVar12 = uVar8 & 0xfffffffe;
          puVar23 = local_340 + 1;
          uVar17 = uVar12;
          do {
            uVar17 = uVar17 - 2;
            *(undefined2 *)((long)puVar23 + -2) = *(undefined2 *)(puVar23 + -1);
            *(undefined2 *)((long)puVar23 + 2) = *(undefined2 *)puVar23;
            puVar23 = puVar23 + 2;
          } while (uVar17 != 0);
          if (uVar12 == uVar8) goto LAB_00e60628;
        }
        lVar27 = uVar8 - uVar12;
        puVar14 = (undefined2 *)((long)local_340 + uVar12 * 4 + 2);
        do {
          lVar27 = lVar27 + -1;
          *puVar14 = puVar14[-1];
          puVar14 = puVar14 + 2;
        } while (lVar27 != 0);
      }
LAB_00e60628:
      iVar3 = *(int *)(local_310 + 0x105c);
      goto joined_r0x00e60354;
    }
    iVar4 = silk_resampler(local_310 + 0x1a50,puVar25,(long)puVar23 + 2,local_2f8);
    iVar4 = iVar4 + iVar3;
    uVar8 = (ulong)*local_318;
    piVar19 = local_308;
    if (0 < (int)*local_318) {
      puVar14 = (undefined2 *)((long)local_340 + 2);
      do {
        uVar8 = uVar8 - 1;
        *puVar14 = *(undefined2 *)puVar25;
        puVar14 = puVar14 + 2;
        puVar25 = (undefined4 *)((long)puVar25 + 2);
      } while (uVar8 != 0);
      iVar3 = *(int *)(lVar13 + 0x105c);
      goto joined_r0x00e60354;
    }
    if (*(int *)(lVar13 + 0x105c) != 2) goto LAB_00e60358;
LAB_00e60300:
    piVar19[5] = *(int *)(&DAT_00563d08 + (long)(*(int *)(lVar13 + 0x90c) + -8 >> 2) * 4) *
                 *(int *)(lVar13 + 0x904);
    lVar27 = local_360;
  }
  else {
    iVar3 = *(int *)(local_310 + 0x105c);
joined_r0x00e60354:
    if (iVar3 == 2) goto LAB_00e60300;
LAB_00e60358:
    piVar19[5] = 0;
    lVar27 = local_360;
  }
  local_360 = lVar27;
  if (local_338 == 1) {
    uVar7 = *(uint *)(lVar13 + 0x2190);
    uVar8 = (ulong)uVar7;
    if (0 < (int)uVar7) {
      if (uVar7 == 1) {
        uVar12 = 0;
      }
      else {
        uVar12 = uVar8 & 0xfffffffe;
        puVar16 = (undefined *)(lVar13 + 0x908);
        uVar17 = uVar12;
        puVar20 = local_370;
        do {
          *puVar20 = 10;
          puVar20 = puVar20 + 0x2180;
          *puVar16 = 10;
          puVar16 = puVar16 + 0x2180;
          uVar17 = uVar17 - 2;
        } while (uVar17 != 0);
        if (uVar12 == uVar8) goto LAB_00e60458;
      }
      lVar10 = uVar8 - uVar12;
      puVar16 = (undefined *)(lVar13 + uVar12 * 0x10c0 + 0x908);
      do {
        *puVar16 = 10;
        puVar16 = puVar16 + 0x10c0;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  else {
    *local_350 = local_2f4;
  }
LAB_00e60458:
  if (*(long *)(lVar27 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


