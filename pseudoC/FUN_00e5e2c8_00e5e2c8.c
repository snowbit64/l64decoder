// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e5e2c8
// Entry Point: 00e5e2c8
// Size: 3644 bytes
// Signature: undefined FUN_00e5e2c8(void)


uint FUN_00e5e2c8(int *param_1,long param_2,int param_3,undefined (*param_4) [16],uint param_5,
                 int param_6)

{
  undefined (*pauVar1) [16];
  undefined2 uVar2;
  undefined auVar3 [16];
  undefined (*pauVar4) [16];
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined (*pauVar19) [16];
  ulong uVar20;
  short *psVar21;
  int iVar22;
  short *psVar23;
  undefined2 *puVar24;
  uint uVar25;
  undefined (*pauVar26) [16];
  undefined2 *puVar27;
  uint uVar28;
  ulong uVar29;
  uint uVar30;
  undefined *puVar31;
  long lVar32;
  long lVar33;
  uint uVar34;
  undefined *puVar35;
  undefined4 uVar36;
  long lVar37;
  uint uVar38;
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined local_140 [12];
  int iStack_134;
  long local_130;
  long local_128;
  undefined (*local_120) [16];
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  int local_104;
  long local_100;
  uint local_f8;
  int local_f4;
  undefined *local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  int local_cc;
  undefined2 local_c8;
  undefined6 uStack_c6;
  uint local_c0;
  uint local_bc;
  undefined auStack_b8 [8];
  int local_b0;
  int local_a0;
  uint local_98;
  undefined auStack_80 [16];
  long local_70;
  uint uVar39;
  
  puVar35 = local_140;
  lVar37 = tpidr_el0;
  local_70 = *(long *)(lVar37 + 0x28);
  iVar11 = param_1[3];
  local_c0 = 0;
  uVar12 = iVar11 / 0x32;
  uVar7 = (int)uVar12 >> 3;
  if ((int)param_5 < (int)uVar7) {
    if (*(long *)(lVar37 + 0x28) == local_70) {
      return 0xfffffffe;
    }
    goto LAB_00e5e334;
  }
  iVar10 = param_1[2];
  uVar9 = (int)uVar12 >> 1;
  uVar28 = (iVar11 / 0x19) * 3;
  uVar38 = (int)uVar12 >> 2;
  if ((int)uVar28 <= (int)param_5) {
    param_5 = uVar28;
  }
  if (param_3 < 2) {
    if (param_1[0x10] <= (int)param_5) {
      param_5 = param_1[0x10];
    }
LAB_00e5e470:
    iVar22 = param_1[0xf];
    if (iVar22 == 0) {
      if (0 < (int)(param_1[2] * param_5)) {
        memset(param_4,0,(ulong)(param_1[2] * param_5) << 1);
        if (*(long *)(lVar37 + 0x28) == local_70) {
          return param_5;
        }
        goto LAB_00e5e334;
      }
    }
    else {
      uVar28 = param_5;
      if ((int)param_5 <= (int)uVar12) {
        uVar34 = param_5;
        if ((((int)param_5 < (int)uVar12) && (uVar34 = uVar9, (int)param_5 <= (int)uVar9)) &&
           (uVar34 = param_5, iVar22 != 1000)) {
          bVar6 = (int)param_5 < (int)uVar9;
          bVar5 = false;
          if (bVar6) {
            bVar5 = (int)(param_5 - uVar38) < 0;
          }
          uVar34 = uVar38;
          if ((!bVar6 || param_5 == uVar38) || bVar5 != (bVar6 && SBORROW4(param_5,uVar38))) {
            uVar34 = param_5;
          }
        }
        uVar30 = (uint)(iVar22 != 0x3ea);
        local_cc = 0;
        uVar28 = (uint)(iVar22 != 0x3ea && (int)uVar9 <= (int)param_5);
        local_e8 = 0;
        uVar25 = 0;
        iVar8 = 0;
        lVar32 = 0;
        uVar39 = (uint)((int)uVar9 <= (int)param_5);
        local_100 = (long)iVar11;
        local_f8 = uVar7;
        local_f4 = param_3;
        local_e0 = (long)*param_1;
        local_d8 = (ulong)uVar38;
        uVar7 = uVar28;
LAB_00e5e5c8:
        local_f0 = (undefined *)0x0;
        uVar38 = (uint)(iVar22 == 0x3ea);
        goto LAB_00e5e5d8;
      }
      do {
        uVar7 = uVar28;
        if ((int)uVar12 <= (int)uVar28) {
          uVar7 = uVar12;
        }
        uVar7 = FUN_00e5e2c8(param_1,0,0,param_4,uVar7,0);
        if ((int)uVar7 < 0) {
          if (*(long *)(lVar37 + 0x28) == local_70) {
            return uVar7;
          }
          goto LAB_00e5e334;
        }
        uVar28 = uVar28 - uVar7;
        param_4 = (undefined (*) [16])(*param_4 + (long)(int)(param_1[2] * uVar7) * 2);
      } while (0 < (int)uVar28);
    }
  }
  else {
    if (param_2 == 0) goto LAB_00e5e470;
    local_cc = param_1[0xd];
    iVar22 = param_1[0xe];
    uVar34 = param_1[0x10];
    local_100 = (long)iVar11;
    local_f8 = uVar7;
    local_f4 = param_3;
    local_e8 = param_2;
    local_e0 = (long)*param_1;
    local_d8 = (ulong)uVar38;
    ec_dec_init(auStack_b8);
    uVar30 = (uint)(iVar22 != 0x3ea);
    iVar11 = param_1[0xf];
    bVar6 = (int)uVar9 <= (int)param_5;
    uVar38 = (uint)bVar6;
    uVar39 = (uint)bVar6;
    uVar28 = (uint)(iVar22 != 0x3ea && bVar6);
    uVar7 = uVar28;
    if (iVar11 < 1) {
      iVar8 = 0;
      lVar32 = 0;
      uVar25 = 1;
      uVar39 = uVar38;
      goto LAB_00e5e5c8;
    }
    if (((iVar22 != 0x3ea) || (iVar11 == 0x3ea)) || (param_1[0x11] != 0)) {
      if (iVar22 == 0x3ea) {
        uVar30 = 0;
        iVar8 = 0;
        lVar32 = 0;
        uVar25 = 1;
        uVar39 = uVar38;
        uVar7 = 0;
      }
      else {
        uVar30 = 1;
        if (iVar11 == 0x3ea) goto LAB_00e5e3fc;
        iVar8 = 0;
        lVar32 = 0;
        uVar25 = 1;
        uVar39 = uVar38;
        uVar7 = (uint)bVar6;
      }
      goto LAB_00e5e5c8;
    }
LAB_00e5e3fc:
    uVar25 = (uint)local_d8;
    lVar32 = (long)param_1[2] * (long)(int)uVar25;
    if (iVar22 != 0x3ea) {
      uVar25 = 1;
      iVar8 = 1;
      uVar39 = uVar38;
      goto LAB_00e5e5c8;
    }
    puVar35 = local_140 + -(lVar32 * 2 + 0xfU & 0xfffffffffffffff0);
    if ((int)uVar34 <= (int)uVar25) {
      uVar25 = uVar34;
    }
    local_10c = uVar30;
    local_108 = uVar28;
    local_f0 = puVar35;
    FUN_00e5e2c8(param_1,0,0,puVar35,uVar25,0);
    lVar32 = 0;
    iVar22 = 0x3ea;
    uVar38 = 1;
    iVar8 = 1;
    uVar25 = 1;
    uVar28 = local_108;
    uVar30 = local_10c;
    uVar7 = local_108;
LAB_00e5e5d8:
    if ((int)param_5 < (int)uVar34) {
      if (*(long *)(lVar37 + 0x28) == local_70) {
        return 0xffffffff;
      }
      goto LAB_00e5e334;
    }
    local_114 = uVar38 | uVar39;
    if (local_114 == 0) {
      if ((int)uVar9 <= (int)uVar34) {
        uVar9 = uVar34;
      }
      uVar15 = (ulong)(param_1[2] * uVar9);
    }
    else {
      uVar15 = 0;
    }
    pauVar19 = (undefined (*) [16])
               (puVar35 +
               -((-(uVar15 >> 0x1f) & 0xfffffffe00000000 | uVar15 << 1) + 0xf & 0xfffffffffffffff0))
    ;
    local_120 = pauVar19;
    local_118 = uVar28;
    local_108 = uVar7;
    local_104 = iVar22;
    if ((uVar30 & 1) == 0) {
      bVar6 = param_6 == 0;
      uVar36 = 0;
      uVar7 = 0;
      local_110 = 0;
      iVar11 = 0;
    }
    else {
      pauVar26 = param_4;
      if (uVar7 == 0) {
        pauVar26 = pauVar19;
      }
      iStack_134 = iVar8;
      local_130 = lVar32;
      local_110 = uVar25;
      local_10c = uVar30;
      if (param_1[0xf] == 0x3ea) {
        silk_InitDecoder((long)param_1 + (long)iVar10);
      }
      iVar11 = 0;
      if (param_1[3] != 0) {
        iVar11 = (int)(uVar34 * 1000) / param_1[3];
      }
      if (iVar11 < 0xb) {
        iVar11 = 10;
      }
      param_1[8] = iVar11;
      if (local_110 != 0) {
        param_1[5] = param_1[0xc];
        if ((local_104 == 1000) && (local_cc - 0x44dU < 3)) {
          iVar11 = (local_cc - 0x44dU) * 4000 + 8000;
        }
        else {
          iVar11 = 16000;
        }
        param_1[7] = iVar11;
      }
      iVar22 = param_6 << 1;
      iVar11 = 0;
      local_128 = lVar37;
      if (local_e8 == 0) {
        iVar22 = 1;
      }
      do {
        iVar8 = silk_Decode((long)param_1 + (long)iVar10,param_1 + 4,iVar22,iVar11 == 0,auStack_b8,
                            pauVar26,&local_bc,param_1[0xb]);
        uVar7 = local_bc;
        if (iVar8 != 0) {
          if (iVar22 == 0) {
            if (*(long *)(local_128 + 0x28) == local_70) {
              return 0xfffffffd;
            }
            goto LAB_00e5e334;
          }
          local_bc = uVar34;
          uVar7 = uVar34;
          if (0 < (int)(param_1[2] * uVar34)) {
            memset(pauVar26,0,(ulong)(param_1[2] * uVar34) << 1);
          }
        }
        iVar8 = local_f4;
        lVar37 = local_128;
        iVar11 = uVar7 + iVar11;
        pauVar26 = (undefined (*) [16])(*pauVar26 + (long)(int)(param_1[2] * uVar7) * 2);
      } while (iVar11 < (int)uVar34);
      bVar6 = param_6 == 0;
      if ((local_110 & bVar6) == 1) {
        iVar11 = 0x14;
        if (param_1[0xe] != 0x3e9) {
          iVar11 = 0;
        }
        iVar11 = local_a0 + (int)LZCOUNT(local_98) + iVar11 + -0xf;
        if (iVar11 != local_f4 * 8 && iVar11 + local_f4 * -8 < 0 == SBORROW4(iVar11,local_f4 * 8)) {
          uVar7 = 0;
          local_110 = 0;
          iVar11 = 0;
          bVar6 = true;
          uVar36 = 0x11;
          lVar32 = local_130;
          uVar30 = local_10c;
          iVar8 = iStack_134;
          goto LAB_00e5e8ec;
        }
        if (local_104 == 0x3e9) {
          uVar9 = ec_dec_bit_logp(auStack_b8,0xc);
          if (uVar9 == 0) {
            uVar7 = 0;
            local_110 = 0;
            iVar11 = 0;
            bVar6 = true;
            goto LAB_00e5e8e0;
          }
          iVar11 = ec_dec_bit_logp(auStack_b8,1);
          iVar10 = ec_dec_uint(auStack_b8,0x100);
          uVar7 = iVar10 + 2;
          iVar10 = (int)LZCOUNT(local_98);
        }
        else {
          uVar9 = 1;
          iVar11 = ec_dec_bit_logp(auStack_b8,1);
          iVar10 = (int)LZCOUNT(local_98);
          uVar7 = iVar8 - (local_a0 + iVar10 + -0x19 >> 3);
        }
        iVar8 = iVar8 - uVar7;
        iVar22 = iVar8 * 8;
        iVar10 = local_a0 + iVar10 + -0x20;
        local_110 = 0;
        if (iVar10 <= iVar22) {
          local_110 = uVar7;
        }
        local_f4 = 0;
        if (iVar10 <= iVar22) {
          local_f4 = iVar8;
        }
        uVar7 = 0;
        if (iVar10 <= iVar22) {
          uVar7 = uVar9;
        }
        bVar6 = true;
        local_b0 = local_b0 - local_110;
      }
      else {
        uVar7 = 0;
        local_110 = 0;
        iVar11 = 0;
      }
LAB_00e5e8e0:
      uVar36 = 0x11;
      lVar32 = local_130;
      uVar30 = local_10c;
      iVar8 = iStack_134;
    }
LAB_00e5e8ec:
    uVar9 = 0;
    if (uVar7 == 0) {
      uVar9 = (uint)lVar32;
    }
    lVar32 = (long)param_1 + local_e0;
    puVar35 = (undefined *)
              ((long)pauVar19 -
              ((-(ulong)(uVar9 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar9 << 1) + 0xf &
              0xfffffffffffffff0));
    uVar9 = (uint)(iVar8 != 0 && uVar7 == 0);
    local_e0 = CONCAT44(local_e0._4_4_,uVar9);
    local_10c = uVar7;
    if ((uVar9 & uVar30) == 1) {
      uVar7 = (uint)local_d8;
      if ((int)uVar34 <= (int)(uint)local_d8) {
        uVar7 = uVar34;
      }
      FUN_00e5e2c8(param_1,0,0,puVar35,uVar7,0);
      local_f0 = puVar35;
    }
    uVar14 = 0x15;
    if (local_cc < 0x44e) {
      if (local_cc != 0) {
        if (local_cc == 0x44d) {
          uVar14 = 0xd;
        }
        goto LAB_00e5e9a4;
      }
LAB_00e5e9b4:
      iVar10 = opus_custom_decoder_ctl(lVar32,0x2718,param_1[0xc]);
      if (iVar10 == 0) {
        if (local_10c == 0) {
          local_cc = 0;
          puVar35 = auStack_80;
          uVar7 = (uint)(iVar11 != 0);
        }
        else {
          puVar35 = puVar35 + -((long)param_1[2] * (long)(int)local_d8 * 2 + 0xfU &
                               0xfffffffffffffff0);
          if (iVar11 != 0) {
            iVar11 = opus_custom_decoder_ctl(lVar32,0x271a,0);
            if (iVar11 == 0) {
              celt_decode_with_ec(lVar32,local_e8 + local_f4,local_110,puVar35,local_d8,0,0);
              iVar11 = opus_custom_decoder_ctl(lVar32,0xfbf,&local_c0);
              if (iVar11 == 0) {
                uVar7 = 1;
                local_cc = 1;
                goto LAB_00e5eaac;
              }
            }
            goto LAB_00e5e9c8;
          }
          local_cc = 0;
          uVar7 = 0;
        }
LAB_00e5eaac:
        iVar11 = opus_custom_decoder_ctl(lVar32,0x271a,uVar36);
        if (iVar11 == 0) {
          if (local_104 == 1000) {
            local_c8 = 0xffff;
            if (((local_108 & 1) == 0) && (0 < (int)(param_1[2] * uVar34))) {
              memset(param_4,0,(ulong)(param_1[2] * uVar34) << 1);
            }
            uVar15 = local_d8;
            iVar11 = local_f4;
            if ((param_1[0xf] == 0x3e9) && ((local_cc == 0 || (param_1[0x11] == 0)))) {
              iVar10 = opus_custom_decoder_ctl(lVar32,0x271a,0);
              if (iVar10 != 0) goto LAB_00e5e9c8;
              celt_decode_with_ec(lVar32,&local_c8,2,param_4,local_f8,0,local_118);
            }
            uVar12 = 0;
          }
          else {
            if ((int)uVar34 <= (int)uVar12) {
              uVar12 = uVar34;
            }
            if ((((local_104 != param_1[0xf]) && (0 < param_1[0xf])) && (param_1[0x11] == 0)) &&
               (iVar11 = opus_custom_decoder_ctl(lVar32,0xfbc), iVar11 != 0)) goto LAB_00e5e9c8;
            iVar11 = local_f4;
            lVar17 = local_e8;
            if (!bVar6) {
              lVar17 = 0;
            }
            uVar12 = celt_decode_with_ec(lVar32,lVar17,local_f4,param_4,uVar12,auStack_b8,local_118)
            ;
            uVar15 = local_d8;
          }
          if ((local_114 & 1) == 0) {
            uVar9 = param_1[2] * uVar34;
            uVar16 = (ulong)uVar9;
            if (0 < (int)uVar9) {
              if (uVar9 < 0x10) {
                uVar20 = 0;
              }
              else {
                uVar20 = uVar16 & 0xfffffff0;
                pauVar19 = param_4 + 1;
                pauVar26 = local_120 + 1;
                uVar18 = uVar20;
                do {
                  uVar18 = uVar18 - 0x10;
                  pauVar1 = pauVar26 + -1;
                  pauVar4 = pauVar26 + -1;
                  auVar40 = *pauVar26;
                  pauVar26 = pauVar26 + 2;
                  auVar43._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar4 + 8) >> 0x20);
                  auVar43._0_12_ = *(undefined (*) [12])*pauVar1;
                  auVar43 = NEON_sqadd(pauVar19[-1],auVar43,2);
                  auVar40 = NEON_sqadd(*pauVar19,auVar40,2);
                  *(long *)(pauVar19[-1] + 8) = auVar43._8_8_;
                  *(long *)pauVar19[-1] = auVar43._0_8_;
                  *(long *)(*pauVar19 + 8) = auVar40._8_8_;
                  *(long *)*pauVar19 = auVar40._0_8_;
                  pauVar19 = pauVar19 + 2;
                } while (uVar18 != 0);
                if (uVar20 == uVar16) goto LAB_00e5ec80;
              }
              lVar17 = uVar16 - uVar20;
              psVar21 = (short *)(*local_120 + uVar20 * 2);
              psVar23 = (short *)(*param_4 + uVar20 * 2);
              do {
                iVar10 = (int)*psVar23 + (int)*psVar21;
                if (0x7ffe < iVar10) {
                  iVar10 = 0x7fff;
                }
                if (iVar10 == -0x8000 || iVar10 + 0x8000 < 0 != SCARRY4(iVar10,0x8000)) {
                  iVar10 = -0x8000;
                }
                lVar17 = lVar17 + -1;
                *psVar23 = (short)iVar10;
                psVar21 = psVar21 + 1;
                psVar23 = psVar23 + 1;
              } while (lVar17 != 0);
            }
          }
LAB_00e5ec80:
          iVar10 = opus_custom_decoder_ctl(lVar32,0x271f,&local_c8);
          if (iVar10 == 0) {
            uVar14 = *(undefined8 *)(CONCAT62(uStack_c6,local_c8) + 0x40);
            if ((local_10c == 0 | uVar7) != 0) {
joined_r0x00e5ee0c:
              if (local_cc == 0) {
                if ((int)local_e0 != 0) goto LAB_00e5ee18;
LAB_00e5ee7c:
                iVar10 = param_1[10];
              }
              else {
                uVar9 = param_1[2];
                uVar16 = (ulong)uVar9;
                if ((0 < (int)uVar9) && (399 < (int)local_100)) {
                  uVar18 = 0;
                  lVar32 = uVar16 * 2;
                  uVar38 = local_f8;
                  if ((int)local_f8 < 2) {
                    uVar38 = 1;
                  }
                  uVar20 = (ulong)uVar38;
                  uVar29 = uVar20 & 0x7ffffffe;
                  puVar31 = puVar35;
                  pauVar19 = param_4;
                  do {
                    if (uVar38 < 2) {
                      uVar13 = 0;
LAB_00e5ed54:
                      lVar17 = lVar32 * uVar13;
                      lVar33 = uVar20 - uVar13;
                      do {
                        lVar33 = lVar33 + -1;
                        *(undefined2 *)(*pauVar19 + lVar17) = *(undefined2 *)(puVar31 + lVar17);
                        lVar17 = lVar17 + lVar32;
                      } while (lVar33 != 0);
                    }
                    else {
                      lVar17 = 0;
                      uVar13 = uVar29;
                      do {
                        uVar13 = uVar13 - 2;
                        uVar2 = *(undefined2 *)(puVar31 + lVar17 + lVar32);
                        *(undefined2 *)(*pauVar19 + lVar17) = *(undefined2 *)(puVar31 + lVar17);
                        *(undefined2 *)(*pauVar19 + lVar17 + lVar32) = uVar2;
                        lVar17 = lVar17 + uVar16 * 4;
                      } while (uVar13 != 0);
                      uVar13 = uVar29;
                      if (uVar29 != uVar20) goto LAB_00e5ed54;
                    }
                    uVar18 = uVar18 + 1;
                    pauVar19 = (undefined (*) [16])(*pauVar19 + 2);
                    puVar31 = puVar31 + 2;
                  } while (uVar18 != uVar16);
                }
                uVar18 = -(ulong)(uVar9 * local_f8 >> 0x1f) & 0xfffffffe00000000 |
                         (ulong)(uVar9 * local_f8) << 1;
                FUN_00e5f914(puVar35 + uVar18,*param_4 + uVar18,*param_4 + uVar18,local_f8,uVar16,
                             uVar14,param_1[3]);
                if ((int)local_e0 == 0) goto LAB_00e5ee7c;
LAB_00e5ee18:
                iVar10 = param_1[2];
                if ((int)uVar34 < (int)uVar15) {
                  iVar22 = param_1[3];
                  puVar35 = local_f0;
                  pauVar19 = param_4;
                }
                else {
                  uVar9 = iVar10 * local_f8;
                  uVar15 = (ulong)uVar9;
                  if (0 < (int)uVar9) {
                    if (uVar9 < 0x10) {
                      uVar18 = 0;
                    }
                    else {
                      iVar11 = local_f4;
                      if ((param_4 < (undefined (*) [16])(local_f0 + uVar15 * 2)) &&
                         (local_f0 < *param_4 + uVar15 * 2)) {
                        uVar18 = 0;
                      }
                      else {
                        uVar18 = uVar15 & 0xfffffff0;
                        pauVar19 = (undefined (*) [16])(local_f0 + 0x10);
                        pauVar26 = param_4 + 1;
                        uVar16 = uVar18;
                        do {
                          auVar43 = pauVar19[-1];
                          auVar40 = *pauVar19;
                          pauVar19 = pauVar19 + 2;
                          uVar16 = uVar16 - 0x10;
                          *(long *)(pauVar26[-1] + 8) = auVar43._8_8_;
                          *(long *)pauVar26[-1] = auVar43._0_8_;
                          *(long *)(*pauVar26 + 8) = auVar40._8_8_;
                          *(long *)*pauVar26 = auVar40._0_8_;
                          pauVar26 = pauVar26 + 2;
                        } while (uVar16 != 0);
                        if (uVar18 == uVar15) goto LAB_00e5ef2c;
                      }
                    }
                    lVar32 = uVar15 - uVar18;
                    puVar24 = (undefined2 *)(*param_4 + uVar18 * 2);
                    puVar27 = (undefined2 *)(local_f0 + uVar18 * 2);
                    do {
                      lVar32 = lVar32 + -1;
                      *puVar24 = *puVar27;
                      puVar24 = puVar24 + 1;
                      puVar27 = puVar27 + 1;
                    } while (lVar32 != 0);
                  }
LAB_00e5ef2c:
                  iVar22 = param_1[3];
                  uVar15 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffe00000000 | uVar15 << 1;
                  pauVar19 = (undefined (*) [16])(*param_4 + uVar15);
                  puVar35 = local_f0 + uVar15;
                }
                FUN_00e5f914(puVar35,pauVar19,pauVar19,local_f8,iVar10,uVar14,iVar22);
                iVar10 = param_1[10];
              }
              if (iVar10 != 0) {
                iVar10 = FUN_00e5f9b0((short)iVar10 * 0x550b + 0x4000U >> 0xf);
                uVar9 = param_1[2] * uVar34;
                uVar15 = (ulong)uVar9;
                if (0 < (int)uVar9) {
                  lVar32 = (long)iVar10;
                  if (uVar9 < 8) {
                    uVar18 = 0;
                  }
                  else {
                    uVar18 = uVar15 & 0xfffffff8;
                    auVar40._8_4_ = 0x7fff;
                    auVar40._0_8_ = 0x7fff00007fff;
                    auVar40._12_4_ = 0x7fff;
                    uVar16 = uVar18;
                    pauVar19 = param_4;
                    do {
                      auVar43 = *pauVar19;
                      uVar16 = uVar16 - 8;
                      auVar41._4_4_ = (int)((ulong)(lVar32 * (int)auVar43._10_2_ + 0x8000) >> 0x10);
                      auVar41._0_4_ = (int)((ulong)(lVar32 * (int)auVar43._8_2_ + 0x8000) >> 0x10);
                      auVar41._12_4_ = (int)((ulong)(lVar32 * (int)auVar43._14_2_ + 0x8000) >> 0x10)
                      ;
                      auVar41._8_4_ = (int)((ulong)(lVar32 * (int)auVar43._12_2_ + 0x8000) >> 0x10);
                      auVar3._12_4_ = (int)((ulong)(lVar32 * (int)auVar43._6_2_ + 0x8000) >> 0x10);
                      auVar3._8_4_ = (int)((ulong)(lVar32 * (int)auVar43._4_2_ + 0x8000) >> 0x10);
                      auVar42._8_4_ = 0xffff8001;
                      auVar42._0_8_ = 0xffff8001ffff8001;
                      auVar42._12_4_ = 0xffff8001;
                      auVar42 = NEON_smax(auVar41,auVar42,4);
                      auVar44._8_4_ = 0xffff8001;
                      auVar44._0_8_ = 0xffff8001ffff8001;
                      auVar44._12_4_ = 0xffff8001;
                      auVar3._4_4_ = (int)((ulong)(lVar32 * (int)auVar43._2_2_ + 0x8000) >> 0x10);
                      auVar3._0_4_ = (int)((ulong)(lVar32 * (int)auVar43._0_2_ + 0x8000) >> 0x10);
                      auVar44 = NEON_smax(auVar3,auVar44,4);
                      auVar43 = NEON_smin(auVar42,auVar40,4);
                      auVar42 = NEON_smin(auVar44,auVar40,4);
                      *(short *)pauVar19[1] = auVar43._0_2_;
                      *(short *)(pauVar19[1] + 2) = auVar43._4_2_;
                      *(short *)(pauVar19[1] + 4) = auVar43._8_2_;
                      *(short *)(pauVar19[1] + 6) = auVar43._12_2_;
                      *(short *)*pauVar19 = auVar42._0_2_;
                      *(short *)(*pauVar19 + 2) = auVar42._4_2_;
                      *(short *)(*pauVar19 + 4) = auVar42._8_2_;
                      *(short *)(*pauVar19 + 6) = auVar42._12_2_;
                      pauVar19 = pauVar19 + 1;
                    } while (uVar16 != 0);
                    if (uVar18 == uVar15) goto LAB_00e5f0b0;
                  }
                  lVar17 = uVar15 - uVar18;
                  psVar21 = (short *)(*param_4 + uVar18 * 2);
                  do {
                    iVar10 = (int)((ulong)(*psVar21 * lVar32 + 0x8000) >> 0x10);
                    if (iVar10 < -0x7ffe) {
                      iVar10 = -0x7fff;
                    }
                    if (0x7ffe < iVar10) {
                      iVar10 = 0x7fff;
                    }
                    lVar17 = lVar17 + -1;
                    *psVar21 = (short)iVar10;
                    psVar21 = psVar21 + 1;
                  } while (lVar17 != 0);
                }
              }
LAB_00e5f0b0:
              uVar9 = 0;
              if (1 < iVar11) {
                uVar9 = local_c0 ^ local_98;
              }
              if (-1 < (int)uVar12) {
                uVar12 = uVar34;
              }
              param_1[0x13] = uVar9;
              param_1[0xf] = local_104;
              param_1[0x11] = (uint)(local_10c != 0) & (uVar7 ^ 1);
              if (*(long *)(lVar37 + 0x28) == local_70) {
                return uVar12;
              }
              goto LAB_00e5e334;
            }
            local_d8 = CONCAT44(local_d8._4_4_,uVar12);
            iVar10 = opus_custom_decoder_ctl(lVar32,0xfbc);
            if ((iVar10 == 0) && (iVar10 = opus_custom_decoder_ctl(lVar32,0x271a,0), iVar10 == 0)) {
              celt_decode_with_ec(lVar32,local_e8 + iVar11,local_110,puVar35,uVar15 & 0xffffffff,0,0
                                 );
              iVar10 = opus_custom_decoder_ctl(lVar32,0xfbf,&local_c0);
              if (iVar10 == 0) {
                iVar10 = param_1[2];
                FUN_00e5f914(*param_4 + (long)(int)(iVar10 * (uVar34 - local_f8)) * 2,
                             puVar35 + (long)(int)(iVar10 * local_f8) * 2,
                             *param_4 + (long)(int)(iVar10 * (uVar34 - local_f8)) * 2,local_f8,
                             iVar10,uVar14,param_1[3]);
                uVar12 = (uint)local_d8;
                goto joined_r0x00e5ee0c;
              }
            }
          }
        }
      }
    }
    else {
      if (local_cc - 0x44eU < 2) {
        uVar14 = 0x11;
      }
      else if (local_cc == 0x450) {
        uVar14 = 0x13;
      }
LAB_00e5e9a4:
      iVar10 = opus_custom_decoder_ctl(lVar32,0x271c,uVar14);
      if (iVar10 == 0) goto LAB_00e5e9b4;
    }
LAB_00e5e9c8:
    param_5 = 0xfffffffd;
  }
  if (*(long *)(lVar37 + 0x28) == local_70) {
    return param_5;
  }
LAB_00e5e334:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


