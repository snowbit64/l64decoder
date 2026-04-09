// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RoughMSE
// Entry Point: 00a7fecc
// Size: 2872 bytes
// Signature: undefined __cdecl RoughMSE(EncodeParams * param_1, ulong param_2, ulong param_3)


/* BC6BC7Util::D3DX_BC7::RoughMSE(BC6BC7Util::D3DX_BC7::EncodeParams*, unsigned long, unsigned long)
    */

float BC6BC7Util::D3DX_BC7::RoughMSE(EncodeParams *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  byte *pbVar2;
  undefined *puVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  EncodeParams EVar25;
  EncodeParams EVar26;
  EncodeParams EVar27;
  EncodeParams EVar28;
  EncodeParams EVar29;
  int iVar30;
  long lVar31;
  byte *pbVar32;
  bool bVar33;
  ulong uVar34;
  ulong uVar35;
  undefined uVar36;
  undefined4 *puVar37;
  uint uVar38;
  float *pfVar39;
  uint uVar40;
  EncodeParams *pEVar41;
  long lVar42;
  long lVar43;
  ulong uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float local_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float local_1c0 [48];
  ulong local_100 [16];
  long local_80;
  
  lVar31 = tpidr_el0;
  local_80 = *(long *)(lVar31 + 0x28);
  lVar43 = 0;
  lVar42 = (ulong)(byte)*param_1 * 0xf;
  uVar44 = (ulong)(byte)(&ms_aInfo)[lVar42];
  pbVar5 = &DAT_0051f9a6 + lVar42;
  pbVar32 = &DAT_0051f9a5 + lVar42;
  if (param_3 != 0) {
    pbVar5 = &DAT_0051f9a5 + lVar42;
    pbVar32 = &DAT_0051f9a6 + lVar42;
  }
  lVar42 = -uVar44;
  pbVar2 = s_aPartitionTable + param_2 * 0x10 + uVar44 * 0x400;
  bVar7 = *pbVar32;
  bVar8 = *pbVar5;
  pEVar41 = param_1 + param_2 * 0x18 + 4;
  bVar9 = *pbVar2;
  bVar10 = pbVar2[1];
  bVar11 = pbVar2[2];
  bVar12 = pbVar2[3];
  bVar13 = pbVar2[4];
  bVar14 = pbVar2[5];
  bVar15 = pbVar2[6];
  bVar16 = pbVar2[7];
  bVar17 = pbVar2[8];
  bVar18 = pbVar2[9];
  bVar19 = pbVar2[10];
  bVar20 = pbVar2[0xc];
  bVar21 = pbVar2[0xe];
  bVar22 = pbVar2[0xf];
  bVar23 = pbVar2[0xd];
  bVar24 = pbVar2[0xb];
  do {
    if (-(ulong)bVar9 == lVar43) {
      local_100[0] = 0;
    }
    uVar35 = (ulong)(-(ulong)bVar9 == lVar43);
    if (-(ulong)bVar10 == lVar43) {
      local_100[uVar35] = 1;
      uVar35 = uVar35 + 1;
    }
    uVar40 = (uint)bVar7;
    if (-(ulong)bVar11 == lVar43) {
      uVar34 = uVar35 + 1;
      local_100[uVar35] = 2;
      uVar35 = uVar34;
      if (-(ulong)bVar12 == lVar43) goto LAB_00a80104;
LAB_00a80080:
      uVar34 = uVar35;
      if (-(ulong)bVar13 != lVar43) goto LAB_00a80088;
LAB_00a8011c:
      uVar34 = uVar35 + 1;
      local_100[uVar35] = 4;
      uVar35 = uVar34;
      if (-(ulong)bVar14 == lVar43) goto LAB_00a80134;
LAB_00a80090:
      uVar34 = uVar35;
      if (-(ulong)bVar15 != lVar43) goto LAB_00a80098;
LAB_00a8014c:
      uVar34 = uVar35 + 1;
      local_100[uVar35] = 6;
      uVar35 = uVar34;
      if (-(ulong)bVar16 == lVar43) goto LAB_00a80164;
LAB_00a800a0:
      uVar34 = uVar35;
      if (-(ulong)bVar17 != lVar43) goto LAB_00a800a8;
LAB_00a8017c:
      uVar34 = uVar35 + 1;
      local_100[uVar35] = 8;
      uVar35 = uVar34;
      if (-(ulong)bVar18 == lVar43) goto LAB_00a80194;
LAB_00a800b0:
      uVar34 = uVar35;
      if (-(ulong)bVar19 != lVar43) goto LAB_00a800b8;
LAB_00a801ac:
      uVar34 = uVar35 + 1;
      local_100[uVar35] = 10;
      uVar35 = uVar34;
      if (-(ulong)bVar24 == lVar43) goto LAB_00a801c4;
LAB_00a800c0:
      uVar34 = uVar35;
      if (-(ulong)bVar20 != lVar43) goto LAB_00a800c8;
LAB_00a801dc:
      uVar34 = uVar35 + 1;
      local_100[uVar35] = 0xc;
      uVar35 = uVar34;
      if (-lVar43 == (ulong)bVar23) goto LAB_00a801f4;
LAB_00a800d0:
      uVar34 = uVar35;
      if (-lVar43 != (ulong)bVar21) goto LAB_00a800d8;
LAB_00a8020c:
      uVar34 = uVar35 + 1;
      local_100[uVar35] = 0xe;
      uVar35 = uVar34;
      if (-lVar43 == (ulong)bVar22) goto LAB_00a80224;
LAB_00a800e0:
      if (uVar35 == 2) goto LAB_00a8000c;
LAB_00a8023c:
      if (uVar35 == 1) {
        puVar37 = (undefined4 *)(param_1 + local_100[0] * 4 + 0x601);
        *(undefined4 *)(pEVar41 + -3) = *puVar37;
        goto LAB_00a80020;
      }
      if (bVar8 == 0) {
        OptimizeRGBA(*(HDRColorA **)(param_1 + 0x648),(HDRColorA *)local_1c0,(HDRColorA *)&local_1d0
                     ,4,uVar35,local_100);
        fVar54 = local_1c0[0];
        if (local_1c0[0] <= 0.0) {
          fVar54 = 0.0;
        }
        fVar46 = local_1c0[2];
        if (local_1c0[2] <= 0.0) {
          fVar46 = 0.0;
        }
        fVar47 = local_1c0[3];
        if (local_1c0[3] <= 0.0) {
          fVar47 = 0.0;
        }
        fVar48 = local_1c8;
        if (local_1c8 <= 0.0) {
          fVar48 = 0.0;
        }
        fVar50 = fStack_1c4;
        if (fStack_1c4 <= 0.0) {
          fVar50 = 0.0;
        }
        fVar52 = local_1c0[1];
        if (local_1c0[1] <= 0.0) {
          fVar52 = 0.0;
        }
        fVar49 = fStack_1cc;
        if (fStack_1cc <= 0.0) {
          fVar49 = 0.0;
        }
        fVar45 = (float)NEON_fminnm(fVar54,0x3f800000);
        fVar46 = (float)NEON_fminnm(fVar46,0x3f800000);
        fVar47 = (float)NEON_fminnm(fVar47,0x3f800000);
        fVar54 = local_1d0;
        if (local_1d0 <= 0.0) {
          fVar54 = 0.0;
        }
        fVar51 = (float)NEON_fminnm(fVar48,0x3f800000);
        fVar53 = (float)NEON_fminnm(fVar50,0x3f800000);
        fVar48 = (float)NEON_fminnm(fVar52,0x3f800000);
        fVar50 = (float)NEON_fminnm(fVar49,0x3f800000);
        fVar54 = (float)NEON_fminnm(fVar54,0x3f800000);
        *(uint *)(pEVar41 + -3) =
             ((int)(fVar46 * 255.0 + 0.01) & 0xffU) << 0x10 | (int)(fVar47 * 255.0 + 0.01) << 0x18 |
             ((int)(fVar48 * 255.0 + 0.01) & 0xffU) << 8 | (int)(fVar45 * 255.0 + 0.01);
        *(uint *)(pEVar41 + 1) =
             ((int)(fVar51 * 255.0 + 0.01) & 0xffU) << 0x10 | (int)(fVar53 * 255.0 + 0.01) << 0x18 |
             ((int)(fVar50 * 255.0 + 0.01) & 0xffU) << 8 | (int)(fVar54 * 255.0 + 0.01);
        if (lVar42 == lVar43) {
          uVar38 = 1 << (ulong)(uVar40 & 0x1f);
          goto LAB_00a80680;
        }
      }
      else {
        EVar27 = param_1[local_100[0] * 4 + 0x604];
        EVar29 = param_1[local_100[1] * 4 + 0x604];
        EVar26 = param_1[local_100[2] * 4 + 0x604];
        EVar28 = EVar29;
        if ((byte)EVar27 <= (byte)EVar29) {
          EVar28 = EVar27;
        }
        EVar25 = param_1[local_100[3] * 4 + 0x604];
        if ((byte)EVar29 <= (byte)EVar27) {
          EVar29 = EVar27;
        }
        EVar27 = EVar26;
        if ((byte)EVar28 <= (byte)EVar26) {
          EVar27 = EVar28;
        }
        if ((byte)EVar26 <= (byte)EVar29) {
          EVar26 = EVar29;
        }
        EVar28 = EVar25;
        if ((byte)EVar27 <= (byte)EVar25) {
          EVar28 = EVar27;
        }
        EVar27 = param_1[local_100[4] * 4 + 0x604];
        if ((byte)EVar25 <= (byte)EVar26) {
          EVar25 = EVar26;
        }
        EVar29 = param_1[local_100[5] * 4 + 0x604];
        EVar26 = EVar27;
        if ((byte)EVar28 <= (byte)EVar27) {
          EVar26 = EVar28;
        }
        if ((byte)EVar27 <= (byte)EVar25) {
          EVar27 = EVar25;
        }
        EVar28 = EVar29;
        if ((byte)EVar26 <= (byte)EVar29) {
          EVar28 = EVar26;
        }
        if ((byte)EVar29 <= (byte)EVar27) {
          EVar29 = EVar27;
        }
        EVar27 = param_1[local_100[6] * 4 + 0x604];
        EVar25 = param_1[local_100[7] * 4 + 0x604];
        EVar26 = EVar27;
        if ((byte)EVar28 <= (byte)EVar27) {
          EVar26 = EVar28;
        }
        if ((byte)EVar27 <= (byte)EVar29) {
          EVar27 = EVar29;
        }
        EVar28 = EVar25;
        if ((byte)EVar26 <= (byte)EVar25) {
          EVar28 = EVar26;
        }
        EVar26 = param_1[local_100[8] * 4 + 0x604];
        if ((byte)EVar25 <= (byte)EVar27) {
          EVar25 = EVar27;
        }
        EVar29 = param_1[local_100[9] * 4 + 0x604];
        EVar27 = EVar26;
        if ((byte)EVar28 <= (byte)EVar26) {
          EVar27 = EVar28;
        }
        if ((byte)EVar26 <= (byte)EVar25) {
          EVar26 = EVar25;
        }
        EVar28 = EVar29;
        if ((byte)EVar27 <= (byte)EVar29) {
          EVar28 = EVar27;
        }
        EVar27 = param_1[local_100[10] * 4 + 0x604];
        if ((byte)EVar29 <= (byte)EVar26) {
          EVar29 = EVar26;
        }
        EVar25 = param_1[local_100[11] * 4 + 0x604];
        EVar26 = EVar27;
        if ((byte)EVar28 <= (byte)EVar27) {
          EVar26 = EVar28;
        }
        if ((byte)EVar27 <= (byte)EVar29) {
          EVar27 = EVar29;
        }
        EVar28 = EVar25;
        if ((byte)EVar26 <= (byte)EVar25) {
          EVar28 = EVar26;
        }
        EVar26 = param_1[local_100[12] * 4 + 0x604];
        if ((byte)EVar25 <= (byte)EVar27) {
          EVar25 = EVar27;
        }
        EVar29 = param_1[local_100[13] * 4 + 0x604];
        EVar27 = EVar26;
        if ((byte)EVar28 <= (byte)EVar26) {
          EVar27 = EVar28;
        }
        if ((byte)EVar26 <= (byte)EVar25) {
          EVar26 = EVar25;
        }
        EVar28 = EVar29;
        if ((byte)EVar27 <= (byte)EVar29) {
          EVar28 = EVar27;
        }
        EVar27 = param_1[local_100[14] * 4 + 0x604];
        if ((byte)EVar29 <= (byte)EVar26) {
          EVar29 = EVar26;
        }
        EVar25 = param_1[local_100[15] * 4 + 0x604];
        EVar26 = EVar27;
        if ((byte)EVar28 <= (byte)EVar27) {
          EVar26 = EVar28;
        }
        if ((byte)EVar27 <= (byte)EVar29) {
          EVar27 = EVar29;
        }
        EVar28 = EVar25;
        if ((byte)EVar26 <= (byte)EVar25) {
          EVar28 = EVar26;
        }
        if ((byte)EVar25 <= (byte)EVar27) {
          EVar25 = EVar27;
        }
        OptimizeRGB(*(HDRColorA **)(param_1 + 0x648),(HDRColorA *)local_1c0,(HDRColorA *)&local_1d0,
                    4,uVar35,local_100);
        fVar54 = local_1c0[0];
        if (local_1c0[0] <= 0.0) {
          fVar54 = 0.0;
        }
        fVar46 = local_1c0[1];
        if (local_1c0[1] <= 0.0) {
          fVar46 = 0.0;
        }
        fVar47 = local_1c0[2];
        if (local_1c0[2] <= 0.0) {
          fVar47 = 0.0;
        }
        fVar48 = local_1c0[3];
        if (local_1c0[3] <= 0.0) {
          fVar48 = 0.0;
        }
        fVar50 = local_1c8;
        if (local_1c8 <= 0.0) {
          fVar50 = 0.0;
        }
        fVar52 = fStack_1c4;
        if (fStack_1c4 <= 0.0) {
          fVar52 = 0.0;
        }
        fVar49 = fStack_1cc;
        if (fStack_1cc <= 0.0) {
          fVar49 = 0.0;
        }
        fVar45 = (float)NEON_fminnm(fVar54,0x3f800000);
        fVar46 = (float)NEON_fminnm(fVar46,0x3f800000);
        fVar47 = (float)NEON_fminnm(fVar47,0x3f800000);
        fVar48 = (float)NEON_fminnm(fVar48,0x3f800000);
        fVar54 = local_1d0;
        if (local_1d0 <= 0.0) {
          fVar54 = 0.0;
        }
        fVar51 = (float)NEON_fminnm(fVar50,0x3f800000);
        fVar52 = (float)NEON_fminnm(fVar52,0x3f800000);
        fVar50 = (float)NEON_fminnm(fVar49,0x3f800000);
        fVar54 = (float)NEON_fminnm(fVar54,0x3f800000);
        *(uint *)(pEVar41 + -3) =
             ((int)(fVar47 * 255.0 + 0.01) & 0xffU) << 0x10 | (int)(fVar48 * 255.0 + 0.01) << 0x18 |
             ((int)(fVar46 * 255.0 + 0.01) & 0xffU) << 8 | (int)(fVar45 * 255.0 + 0.01);
        *pEVar41 = EVar28;
        *(uint *)(pEVar41 + 1) =
             ((int)(fVar51 * 255.0 + 0.01) & 0xffU) << 0x10 | (int)(fVar52 * 255.0 + 0.01) << 0x18 |
             ((int)(fVar50 * 255.0 + 0.01) & 0xffU) << 8 | (int)(fVar54 * 255.0 + 0.01);
        pEVar41[4] = EVar25;
        if (lVar42 == lVar43) {
          uVar38 = 1 << (ulong)(uVar40 & 0x1f);
          goto LAB_00a807dc;
        }
      }
    }
    else {
      uVar34 = uVar35;
      if (-(ulong)bVar12 != lVar43) goto LAB_00a80080;
LAB_00a80104:
      uVar35 = uVar34 + 1;
      local_100[uVar34] = 3;
      uVar34 = uVar35;
      if (-(ulong)bVar13 == lVar43) goto LAB_00a8011c;
LAB_00a80088:
      uVar35 = uVar34;
      if (-(ulong)bVar14 != lVar43) goto LAB_00a80090;
LAB_00a80134:
      uVar35 = uVar34 + 1;
      local_100[uVar34] = 5;
      uVar34 = uVar35;
      if (-(ulong)bVar15 == lVar43) goto LAB_00a8014c;
LAB_00a80098:
      uVar35 = uVar34;
      if (-(ulong)bVar16 != lVar43) goto LAB_00a800a0;
LAB_00a80164:
      uVar35 = uVar34 + 1;
      local_100[uVar34] = 7;
      uVar34 = uVar35;
      if (-(ulong)bVar17 == lVar43) goto LAB_00a8017c;
LAB_00a800a8:
      uVar35 = uVar34;
      if (-(ulong)bVar18 != lVar43) goto LAB_00a800b0;
LAB_00a80194:
      uVar35 = uVar34 + 1;
      local_100[uVar34] = 9;
      uVar34 = uVar35;
      if (-(ulong)bVar19 == lVar43) goto LAB_00a801ac;
LAB_00a800b8:
      uVar35 = uVar34;
      if (-(ulong)bVar24 != lVar43) goto LAB_00a800c0;
LAB_00a801c4:
      uVar35 = uVar34 + 1;
      local_100[uVar34] = 0xb;
      uVar34 = uVar35;
      if (-(ulong)bVar20 == lVar43) goto LAB_00a801dc;
LAB_00a800c8:
      uVar35 = uVar34;
      if (-lVar43 != (ulong)bVar23) goto LAB_00a800d0;
LAB_00a801f4:
      uVar35 = uVar34 + 1;
      local_100[uVar34] = 0xd;
      uVar34 = uVar35;
      if (-lVar43 == (ulong)bVar21) goto LAB_00a8020c;
LAB_00a800d8:
      uVar35 = uVar34;
      if (-lVar43 != (ulong)bVar22) goto LAB_00a800e0;
LAB_00a80224:
      uVar35 = uVar34 + 1;
      local_100[uVar34] = 0xf;
      if (uVar35 != 2) goto LAB_00a8023c;
LAB_00a8000c:
      puVar37 = (undefined4 *)(param_1 + local_100[1] * 4 + 0x601);
      *(undefined4 *)(pEVar41 + -3) = *(undefined4 *)(param_1 + local_100[0] * 4 + 0x601);
LAB_00a80020:
      *(undefined4 *)(pEVar41 + 1) = *puVar37;
      if (lVar42 == lVar43) {
        uVar38 = 1 << (ulong)(uVar40 & 0x1f);
        if (bVar8 == 0) {
LAB_00a80680:
          uVar38 = uVar38 & 0xff;
          bVar9 = bVar7 - 2;
          if (uVar38 < 2) {
            uVar38 = 1;
          }
          pfVar39 = local_1c0;
          uVar35 = 0;
          do {
            if (uVar40 < 8) {
              lVar42 = uVar35 * 8 + param_2 * 0x18;
              lVar43 = 0;
              do {
                if (bVar9 < 3) {
                  EVar26 = param_1[lVar42 + 6];
                  iVar6 = *(int *)((&PTR_s_aWeights2_00fe4410)[(char)bVar9] + lVar43);
                  EVar27 = param_1[lVar42 + 7];
                  EVar28 = param_1[lVar42 + 2];
                  iVar30 = 0x40 - iVar6;
                  EVar29 = param_1[lVar42 + 3];
                  puVar3 = (undefined *)((long)pfVar39 + lVar43);
                  *puVar3 = (char)(iVar6 * (uint)(byte)param_1[lVar42 + 5] +
                                   iVar30 * (uint)(byte)param_1[lVar42 + 1] + 0x20 >> 6);
                  puVar3[1] = (char)(iVar6 * (uint)(byte)EVar26 + iVar30 * (uint)(byte)EVar28 + 0x20
                                    >> 6);
                  puVar3[2] = (char)(iVar6 * (uint)(byte)EVar27 + iVar30 * (uint)(byte)EVar29 + 0x20
                                    >> 6);
                  if (2 < bVar9) goto LAB_00a807cc;
LAB_00a80708:
                  uVar36 = (undefined)
                           (*(int *)((&PTR_s_aWeights2_00fe4410)[(char)bVar9] + lVar43) *
                            (uint)(byte)param_1[lVar42 + 8] +
                            (0x40 - *(int *)((&PTR_s_aWeights2_00fe4410)[(char)bVar9] + lVar43)) *
                            (uint)(byte)param_1[lVar42 + 4] + 0x20 >> 6);
                }
                else {
                  *(undefined *)((undefined2 *)((long)pfVar39 + lVar43) + 1) = 0;
                  *(undefined2 *)((long)pfVar39 + lVar43) = 0;
                  if (bVar9 < 3) goto LAB_00a80708;
LAB_00a807cc:
                  uVar36 = 0;
                }
                lVar1 = lVar43 + 4;
                *(undefined *)((long)pfVar39 + lVar43 + 3) = uVar36;
                lVar43 = lVar1;
              } while ((ulong)uVar38 * 4 - lVar1 != 0);
            }
            bVar33 = uVar35 != uVar44;
            pfVar39 = pfVar39 + 0x10;
            uVar35 = uVar35 + 1;
          } while (bVar33);
        }
        else {
LAB_00a807dc:
          uVar38 = uVar38 & 0xff;
          uVar4 = 1 << (ulong)(bVar8 & 0x1f) & 0xff;
          if (uVar38 < 2) {
            uVar38 = 1;
          }
          if (uVar4 < 2) {
            uVar4 = 1;
          }
          pfVar39 = local_1c0;
          uVar35 = 0;
          do {
            if (uVar40 < 8) {
              lVar43 = uVar35 * 8 + param_2 * 0x18;
              lVar42 = 0;
              do {
                if ((byte)(bVar7 - 2) < 3) {
                  EVar26 = param_1[lVar43 + 6];
                  iVar6 = *(int *)((&PTR_s_aWeights2_00fe4410)[(char)(bVar7 - 2)] + lVar42);
                  EVar27 = param_1[lVar43 + 7];
                  EVar28 = param_1[lVar43 + 2];
                  iVar30 = 0x40 - iVar6;
                  EVar29 = param_1[lVar43 + 3];
                  puVar3 = (undefined *)((long)pfVar39 + lVar42);
                  *puVar3 = (char)(iVar6 * (uint)(byte)param_1[lVar43 + 5] +
                                   iVar30 * (uint)(byte)param_1[lVar43 + 1] + 0x20 >> 6);
                  puVar3[1] = (char)(iVar6 * (uint)(byte)EVar26 + iVar30 * (uint)(byte)EVar28 + 0x20
                                    >> 6);
                  puVar3[2] = (char)(iVar6 * (uint)(byte)EVar27 + iVar30 * (uint)(byte)EVar29 + 0x20
                                    >> 6);
                }
                else {
                  *(undefined *)((undefined2 *)((long)pfVar39 + lVar42) + 1) = 0;
                  *(undefined2 *)((long)pfVar39 + lVar42) = 0;
                }
                lVar42 = lVar42 + 4;
              } while ((ulong)uVar38 * 4 - lVar42 != 0);
            }
            if (bVar8 < 8) {
              lVar42 = uVar35 * 8 + param_2 * 0x18;
              lVar43 = 0;
              do {
                if ((byte)(bVar8 - 2) < 3) {
                  uVar36 = (undefined)
                           (*(int *)((&PTR_s_aWeights2_00fe4410)[(char)(bVar8 - 2)] + lVar43) *
                            (uint)(byte)param_1[lVar42 + 8] +
                            (0x40 - *(int *)((&PTR_s_aWeights2_00fe4410)[(char)(bVar8 - 2)] + lVar43
                                            )) * (uint)(byte)param_1[lVar42 + 4] + 0x20 >> 6);
                }
                else {
                  uVar36 = 0;
                }
                lVar1 = lVar43 + 4;
                *(undefined *)((long)pfVar39 + lVar43 + 3) = uVar36;
                lVar43 = lVar1;
              } while ((ulong)uVar4 * 4 - lVar1 != 0);
            }
            bVar33 = uVar35 != uVar44;
            pfVar39 = pfVar39 + 0x10;
            uVar35 = uVar35 + 1;
          } while (bVar33);
        }
        fVar54 = 0.0;
        lVar42 = 0;
        pEVar41 = param_1 + 0x601;
        do {
          fVar46 = (float)ComputeError((LDRColorA *)pEVar41,
                                       (LDRColorA *)
                                       (local_1c0 +
                                       (ulong)(byte)s_aPartitionTable
                                                    [lVar42 + (param_2 + uVar44 * 0x40) * 0x10] *
                                       0x10),bVar7,bVar8,(ulong *)0x0,(ulong *)0x0);
          fVar54 = fVar54 + fVar46;
          lVar42 = lVar42 + 1;
          pEVar41 = (EncodeParams *)((LDRColorA *)pEVar41 + 4);
        } while (lVar42 != 0x10);
        if (*(long *)(lVar31 + 0x28) == local_80) {
          return fVar54;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    pEVar41 = pEVar41 + 8;
    lVar43 = lVar43 + -1;
  } while( true );
}


