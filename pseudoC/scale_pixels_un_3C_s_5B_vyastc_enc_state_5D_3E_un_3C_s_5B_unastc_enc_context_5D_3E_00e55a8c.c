// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: scale_pixels___un_3C_s_5B_vyastc_enc_state_5D__3E_un_3C_s_5B_unastc_enc_context_5D__3E_
// Entry Point: 00e55a8c
// Size: 1184 bytes
// Signature: undefined scale_pixels___un_3C_s_5B_vyastc_enc_state_5D__3E_un_3C_s_5B_unastc_enc_context_5D__3E_(void)


void scale_pixels___un_3C_s_5B_vyastc_enc_state_5D__3E_un_3C_s_5B_unastc_enc_context_5D__3E_
               (undefined param_1 [16],long param_2,uint *param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined (*pauVar14) [16];
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  size_t sVar18;
  undefined8 *puVar19;
  int iVar20;
  ulong uVar21;
  undefined (*pauVar22) [16];
  undefined8 *puVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined8 uVar31;
  undefined8 uVar32;
  int local_2cc;
  undefined8 local_2a0 [5];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260 [64];
  
  uVar3 = param_3[1];
  if ((int)uVar3 < 1) {
    return;
  }
  uVar26 = 0;
  uVar24 = *(uint *)(param_2 + 0x2044);
  uVar4 = *param_3;
  iVar6 = *(int *)(&UNK_00563940 + (long)(int)(uVar3 - 2) * 4 + (long)(int)(uVar24 - 4) * 0x14);
  iVar7 = *(int *)(&UNK_00563940 +
                  (long)(int)(uVar4 - 2) * 4 + (long)(*(int *)(param_2 + 0x2040) + -4) * 0x14);
  uVar28 = (uint)(param_1[0] & 1) + (uint)(param_1[4] & 2) +
           (uint)(param_1[8] & 4) + (uint)(param_1[12] & 8);
  uVar5 = param_3[2];
  uVar27 = (ulong)uVar5;
  uVar25 = (ulong)*(uint *)(param_2 + 0x2040);
  local_2cc = 0;
  if (uVar24 != uVar3) goto LAB_00e55ba0;
  do {
    uVar24 = (uint)uVar25;
    if ((0 < (int)uVar24) && (0 < (int)uVar5)) {
      uVar12 = 0;
      if ((int)uVar24 < 2) {
        uVar24 = 1;
      }
      puVar19 = local_260;
      uVar13 = uVar27;
      iVar2 = local_2cc;
      iVar20 = local_2cc;
      puVar17 = puVar19;
      do {
        do {
          auVar29 = *(undefined (*) [16])(param_2 + (long)iVar2 * 0x10);
          puVar19[1] = auVar29._8_8_;
          *puVar19 = auVar29._0_8_;
          uVar13 = uVar13 - 1;
          puVar19 = puVar19 + 2;
          iVar2 = iVar2 + 0x40;
        } while (uVar13 != 0);
        uVar12 = uVar12 + 1;
        iVar2 = iVar20 + 1;
        puVar19 = puVar17 + 8;
        uVar13 = uVar27;
        iVar20 = iVar2;
        puVar17 = puVar19;
      } while (uVar12 != uVar24);
    }
LAB_00e55c50:
    uVar24 = (uint)uVar25;
    if (uVar24 == uVar4) {
      if (0 < (int)uVar4) {
        uVar25 = 0;
        pauVar14 = (undefined (*) [16])local_260;
        iVar2 = local_2cc;
        do {
          if (0 < (int)uVar5) {
            uVar12 = uVar27;
            pauVar22 = pauVar14;
            iVar20 = iVar2;
            if ((uVar28 & 1) == 0) {
              sVar18 = 0;
              do {
                auVar29 = NEON_fmax(*(undefined (*) [16])(*pauVar14 + sVar18),ZEXT816(0),4);
                auVar9._8_4_ = 0x437f0000;
                auVar9._0_8_ = 0x437f0000437f0000;
                auVar9._12_4_ = 0x437f0000;
                auVar29 = NEON_fmin(auVar29,auVar9,4);
                lVar1 = param_2 + (long)iVar20 * 0x10;
                if ((uVar28 >> 1 & 1) != 0) {
                  *(int *)(lVar1 + 0x1004) = auVar29._4_4_;
                }
                if ((uVar28 >> 2 & 1) != 0) {
                  *(int *)(lVar1 + 0x1008) = auVar29._8_4_;
                }
                if ((uVar28 >> 3 & 1) != 0) {
                  *(int *)(lVar1 + 0x100c) = auVar29._12_4_;
                }
                iVar20 = iVar20 + 0x40;
                sVar18 = sVar18 + 0x10;
              } while (uVar27 << 4 != sVar18);
            }
            else {
              do {
                auVar29 = NEON_fmax(*pauVar22,ZEXT816(0),4);
                auVar10._8_4_ = 0x437f0000;
                auVar10._0_8_ = 0x437f0000437f0000;
                auVar10._12_4_ = 0x437f0000;
                auVar29 = NEON_fmin(auVar29,auVar10,4);
                lVar1 = param_2 + (long)iVar20 * 0x10;
                *(int *)(lVar1 + 0x1000) = auVar29._0_4_;
                if ((uVar28 >> 1 & 1) != 0) {
                  *(int *)(lVar1 + 0x1004) = auVar29._4_4_;
                }
                if ((uVar28 >> 2 & 1) != 0) {
                  *(int *)(lVar1 + 0x1008) = auVar29._8_4_;
                }
                if ((uVar28 >> 3 & 1) != 0) {
                  *(int *)(lVar1 + 0x100c) = auVar29._12_4_;
                }
                iVar20 = iVar20 + 0x40;
                pauVar22 = pauVar22 + 1;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
          }
          uVar25 = uVar25 + 1;
          iVar2 = iVar2 + 1;
          pauVar14 = pauVar14 + 4;
        } while (uVar25 != uVar4);
      }
    }
    else if (0 < (int)uVar4) {
      uVar11 = 0;
      uStack_278 = 0;
      local_2a0[4] = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      local_2a0[1] = 0;
      local_2a0[0] = 0;
      local_2a0[3] = 0;
      local_2a0[2] = 0;
      iVar2 = local_2cc;
      do {
        local_2a0[2] = 0;
        local_2a0[3] = 0;
        local_2a0[0] = 0;
        local_2a0[1] = 0;
        uStack_270 = 0;
        uStack_268 = 0;
        local_2a0[4] = 0;
        uStack_278 = 0;
        if ((int)uVar24 < 1) {
LAB_00e55de4:
          if (0 < (int)uVar5) {
            pauVar14 = (undefined (*) [16])local_2a0;
            uVar25 = uVar27;
            iVar20 = iVar2;
            if ((uVar28 & 1) == 0) {
              do {
                auVar30 = NEON_fmax(*pauVar14,ZEXT816(0),4);
                auVar29._8_4_ = 0x437f0000;
                auVar29._0_8_ = 0x437f0000437f0000;
                auVar29._12_4_ = 0x437f0000;
                auVar29 = NEON_fmin(auVar30,auVar29,4);
                lVar1 = param_2 + (long)iVar20 * 0x10;
                if ((uVar28 >> 1 & 1) != 0) {
                  *(int *)(lVar1 + 0x1004) = auVar29._4_4_;
                }
                if ((uVar28 >> 2 & 1) != 0) {
                  *(int *)(lVar1 + 0x1008) = auVar29._8_4_;
                }
                if ((uVar28 >> 3 & 1) != 0) {
                  *(int *)(lVar1 + 0x100c) = auVar29._12_4_;
                }
                iVar20 = iVar20 + 0x40;
                pauVar14 = pauVar14 + 1;
                uVar25 = uVar25 - 1;
              } while (uVar25 != 0);
            }
            else {
              do {
                auVar29 = NEON_fmax(*pauVar14,ZEXT816(0),4);
                auVar30._8_4_ = 0x437f0000;
                auVar30._0_8_ = 0x437f0000437f0000;
                auVar30._12_4_ = 0x437f0000;
                auVar29 = NEON_fmin(auVar29,auVar30,4);
                lVar1 = param_2 + (long)iVar20 * 0x10;
                *(int *)(lVar1 + 0x1000) = auVar29._0_4_;
                if ((uVar28 >> 1 & 1) != 0) {
                  *(int *)(lVar1 + 0x1004) = auVar29._4_4_;
                }
                if ((uVar28 >> 2 & 1) != 0) {
                  *(int *)(lVar1 + 0x1008) = auVar29._8_4_;
                }
                if ((uVar28 >> 3 & 1) != 0) {
                  *(int *)(lVar1 + 0x100c) = auVar29._12_4_;
                }
                pauVar14 = pauVar14 + 1;
                uVar25 = uVar25 - 1;
                iVar20 = iVar20 + 0x40;
              } while (uVar25 != 0);
            }
          }
        }
        else {
          uStack_268 = 0;
          uStack_270 = 0;
          uStack_278 = 0;
          local_2a0[4] = 0;
          local_2a0[3] = 0;
          local_2a0[2] = 0;
          local_2a0[1] = 0;
          local_2a0[0] = 0;
          if (0 < (int)uVar5) {
            uVar12 = 0;
            uVar24 = (uint)uVar25;
            if ((int)uVar24 < 2) {
              uVar24 = 1;
            }
            puVar19 = local_260;
            do {
              fVar8 = *(float *)(&UNK_00563460 +
                                (long)(int)(uVar11 + uVar4 * (int)uVar12) * 4 + (long)iVar7 * 4);
              puVar17 = local_2a0;
              uVar25 = uVar27;
              puVar23 = puVar19;
              do {
                uVar31 = *puVar23;
                puVar17[1] = CONCAT44((float)((ulong)puVar17[1] >> 0x20) +
                                      (float)((ulong)puVar23[1] >> 0x20) * fVar8,
                                      (float)puVar17[1] + (float)puVar23[1] * fVar8);
                *puVar17 = CONCAT44((float)((ulong)*puVar17 >> 0x20) +
                                    (float)((ulong)uVar31 >> 0x20) * fVar8,
                                    (float)*puVar17 + (float)uVar31 * fVar8);
                uVar25 = uVar25 - 1;
                puVar17 = puVar17 + 2;
                puVar23 = puVar23 + 2;
              } while (uVar25 != 0);
              uVar12 = uVar12 + 1;
              puVar19 = puVar19 + 8;
            } while (uVar12 != uVar24);
            goto LAB_00e55de4;
          }
        }
        uVar11 = uVar11 + 1;
        if (uVar11 == uVar4) break;
        uVar24 = *(uint *)(param_2 + 0x2040);
        uVar25 = (ulong)uVar24;
        iVar2 = iVar2 + 1;
        uStack_278 = 0;
        local_2a0[4] = 0;
        uStack_268 = 0;
        uStack_270 = 0;
        local_2a0[1] = 0;
        local_2a0[0] = 0;
        local_2a0[3] = 0;
        local_2a0[2] = 0;
      } while( true );
    }
    uVar26 = uVar26 + 1;
    if (uVar26 == uVar3) {
      return;
    }
    uVar24 = *(uint *)(param_2 + 0x2044);
    local_2cc = local_2cc + 8;
    uVar25 = (ulong)*(uint *)(param_2 + 0x2040);
  } while (uVar24 == uVar3);
LAB_00e55ba0:
  if (0 < (int)uVar25) {
    uVar12 = uVar25;
    if ((int)uVar5 < 1) {
      do {
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    else {
      uVar12 = 0;
      puVar19 = local_260;
      do {
        memset(local_260 + uVar12 * 8,0,uVar27 << 4);
        if (0 < (int)uVar24) {
          uVar13 = 0;
          uVar15 = uVar12 & 0xffffffff;
          do {
            fVar8 = *(float *)(&UNK_00563460 +
                              (long)(int)(uVar26 + uVar3 * (int)uVar13) * 4 + (long)iVar6 * 4);
            uVar16 = uVar27;
            puVar17 = puVar19;
            uVar21 = uVar15;
            do {
              puVar23 = (undefined8 *)(param_2 + (long)(int)uVar21 * 0x10);
              uVar32 = puVar23[1];
              uVar31 = *puVar23;
              puVar17[1] = CONCAT44((float)((ulong)puVar17[1] >> 0x20) +
                                    (float)((ulong)uVar32 >> 0x20) * fVar8,
                                    (float)puVar17[1] + (float)uVar32 * fVar8);
              *puVar17 = CONCAT44((float)((ulong)*puVar17 >> 0x20) +
                                  (float)((ulong)uVar31 >> 0x20) * fVar8,
                                  (float)*puVar17 + (float)uVar31 * fVar8);
              uVar21 = (ulong)((int)uVar21 + 0x40);
              uVar16 = uVar16 - 1;
              puVar17 = puVar17 + 2;
            } while (uVar16 != 0);
            uVar13 = uVar13 + 1;
            uVar15 = (ulong)((int)uVar15 + 8);
          } while (uVar13 != uVar24);
        }
        uVar12 = uVar12 + 1;
        puVar19 = puVar19 + 8;
      } while (uVar12 != uVar25);
    }
  }
  goto LAB_00e55c50;
}


