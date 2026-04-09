// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e1a088
// Entry Point: 00e1a088
// Size: 1252 bytes
// Signature: undefined FUN_00e1a088(void)


void FUN_00e1a088(ulong param_1,int param_2,ulong param_3,ulong param_4,long param_5,long param_6,
                 long param_7)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  float *pfVar23;
  float *pfVar24;
  ulong uVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
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
  float fVar55;
  float fVar56;
  float fVar57;
  
  iVar9 = (int)param_1;
  iVar5 = param_2 * iVar9;
  iVar4 = iVar9 * 2;
  uVar18 = (ulong)(param_2 - 1U);
  if (param_2 < 1) goto LAB_00e1a2f0;
  lVar14 = (long)iVar5;
  lVar11 = (long)iVar9;
  lVar16 = (long)(iVar5 * 3);
  lVar15 = (long)(iVar5 * 2);
  if (param_2 - 1U < 3) {
    uVar13 = 0;
    uVar17 = 0;
  }
  else {
    if (((iVar9 == 1) && (-1 < (int)(uVar18 << 2))) && ((uVar18 << 2 & 0xffffffff00000000) == 0)) {
      lVar21 = uVar18 * 4 + 4;
      uVar20 = param_4 + lVar21 * 4;
      uVar13 = 0;
      if (((uVar20 <= param_3 + (long)(param_2 * 2) * 4 ||
            param_3 + (uVar18 + (long)(param_2 * 2)) * 4 + 4 <= param_4) &&
          (uVar20 <= param_3 || param_3 + lVar21 <= param_4)) &&
         (uVar20 <= param_3 + (long)(param_2 * 3) * 4 ||
          param_3 + (uVar18 + (long)(param_2 * 3)) * 4 + 4 <= param_4)) {
        uVar17 = 0;
        if (uVar20 <= param_3 + (long)param_2 * 4 ||
            param_3 + ((long)param_2 + uVar18) * 4 + 4 <= param_4) {
          uVar18 = uVar18 + 1;
          uVar10 = 0;
          uVar13 = uVar18 & 0x1fffffffc;
          lVar22 = uVar13 * lVar11;
          lVar21 = lVar14 * 4;
          uVar17 = uVar18 & 0xfffffffc;
          lVar14 = lVar22 + lVar14;
          uVar20 = param_3;
          uVar25 = uVar13;
          iVar19 = iVar4;
          do {
            uVar6 = uVar10 << 2;
            uVar7 = uVar10 >> 0x1f;
            puVar8 = (undefined8 *)(uVar20 + lVar21);
            uVar28 = puVar8[1];
            uVar27 = *puVar8;
            puVar8 = (undefined8 *)(uVar20 + lVar16 * 4);
            uVar32 = puVar8[1];
            uVar31 = *puVar8;
            uVar25 = uVar25 - 4;
            puVar8 = (undefined8 *)(uVar20 + lVar15 * 4);
            uVar39 = puVar8[1];
            uVar37 = *puVar8;
            uVar10 = (ulong)((int)uVar10 + 4);
            puVar8 = (undefined8 *)(param_3 + (-uVar7 & 0xfffffffc00000000 | uVar6));
            uVar35 = puVar8[1];
            uVar34 = *puVar8;
            pfVar23 = (float *)((param_4 - 8) + (long)iVar19 * 4);
            iVar19 = iVar19 + 0x10;
            uVar20 = uVar20 + lVar11 * 0x10;
            fVar26 = (float)uVar27;
            fVar36 = (float)uVar31;
            fVar41 = fVar26 + fVar36;
            fVar29 = (float)((ulong)uVar27 >> 0x20);
            fVar42 = (float)((ulong)uVar31 >> 0x20);
            fVar44 = fVar29 + fVar42;
            fVar30 = (float)uVar28;
            fVar43 = (float)uVar32;
            fVar45 = fVar30 + fVar43;
            fVar33 = (float)((ulong)uVar28 >> 0x20);
            fVar48 = (float)((ulong)uVar32 >> 0x20);
            fVar46 = fVar33 + fVar48;
            fVar52 = (float)uVar34;
            fVar56 = (float)uVar37;
            fVar47 = fVar52 + fVar56;
            fVar53 = (float)((ulong)uVar34 >> 0x20);
            fVar57 = (float)((ulong)uVar37 >> 0x20);
            fVar49 = fVar53 + fVar57;
            fVar54 = (float)uVar35;
            fVar38 = (float)uVar39;
            fVar50 = fVar54 + fVar38;
            fVar55 = (float)((ulong)uVar35 >> 0x20);
            fVar40 = (float)((ulong)uVar39 >> 0x20);
            fVar51 = fVar55 + fVar40;
            *pfVar23 = fVar41 + fVar47;
            pfVar23[1] = fVar52 - fVar56;
            pfVar23[2] = fVar36 - fVar26;
            pfVar23[3] = fVar47 - fVar41;
            pfVar23[4] = fVar44 + fVar49;
            pfVar23[5] = fVar53 - fVar57;
            pfVar23[6] = fVar42 - fVar29;
            pfVar23[7] = fVar49 - fVar44;
            pfVar23[8] = fVar45 + fVar50;
            pfVar23[9] = fVar54 - fVar38;
            pfVar23[10] = fVar43 - fVar30;
            pfVar23[0xb] = fVar50 - fVar45;
            pfVar23[0xc] = fVar46 + fVar51;
            pfVar23[0xd] = fVar55 - fVar40;
            pfVar23[0xe] = fVar48 - fVar33;
            pfVar23[0xf] = fVar51 - fVar46;
          } while (uVar25 != 0);
          lVar15 = lVar22 + lVar15;
          lVar16 = lVar22 + lVar16;
          if (uVar18 == uVar13) goto LAB_00e1a2f0;
        }
        goto LAB_00e1a25c;
      }
    }
    uVar13 = 0;
    uVar17 = 0;
  }
LAB_00e1a25c:
  iVar12 = param_2 - (int)uVar13;
  iVar19 = (int)uVar17 << 2;
  uVar18 = param_3;
  do {
    uVar20 = -(uVar17 >> 0x1f) & 0xfffffffc00000000 | uVar17 << 2;
    uVar17 = (ulong)(uint)((int)uVar17 + iVar9);
    iVar12 = iVar12 + -1;
    fVar26 = *(float *)(uVar18 + lVar14 * 4) + *(float *)(uVar18 + lVar16 * 4);
    fVar29 = *(float *)(param_3 + uVar20) + *(float *)(uVar18 + lVar15 * 4);
    *(float *)(param_4 + (long)iVar19 * 4) = fVar26 + fVar29;
    *(float *)(param_4 + (long)(iVar9 * 4 + -1 + iVar19) * 4) = fVar29 - fVar26;
    *(float *)(param_4 + (long)(iVar4 + -1 + iVar19) * 4) =
         *(float *)(param_3 + uVar20) - *(float *)(uVar18 + lVar15 * 4);
    iVar1 = iVar4 + iVar19;
    pfVar23 = (float *)(uVar18 + lVar16 * 4);
    iVar19 = iVar19 + iVar9 * 4;
    pfVar24 = (float *)(uVar18 + lVar14 * 4);
    uVar18 = uVar18 + lVar11 * 4;
    *(float *)(param_4 + (long)iVar1 * 4) = *pfVar23 - *pfVar24;
  } while (iVar12 != 0);
LAB_00e1a2f0:
  if (1 < iVar9) {
    if (iVar9 != 2) {
      if (0 < param_2) {
        iVar12 = 0;
        iVar19 = 0;
        lVar16 = param_3 + (long)iVar5 * 0xc;
        lVar11 = (param_1 & 0xffffffff) * 4;
        lVar14 = param_3 + (long)iVar5 * 8;
        lVar15 = param_3 + (long)iVar5 * 4;
        uVar18 = param_3;
        iVar1 = iVar4;
        do {
          lVar21 = 0;
          pfVar23 = (float *)((param_4 - 0xc) + (long)iVar1 * 4);
          pfVar24 = (float *)((param_4 - 0xc) + ((long)iVar4 + (long)iVar1) * 4);
          uVar20 = 2;
          do {
            pfVar2 = (float *)(param_5 + 4 + lVar21);
            uVar20 = uVar20 + 2;
            fVar26 = pfVar2[-1];
            fVar29 = *pfVar2;
            fVar33 = *(float *)(lVar15 + lVar21 + 4);
            fVar36 = *(float *)(lVar15 + lVar21 + 8);
            pfVar2 = (float *)(param_6 + 4 + lVar21);
            pfVar3 = (float *)(param_7 + 4 + lVar21);
            fVar42 = *(float *)(lVar14 + lVar21 + 4);
            fVar48 = *(float *)(lVar14 + lVar21 + 8);
            fVar56 = pfVar2[-1];
            fVar52 = *pfVar2;
            fVar57 = pfVar3[-1];
            fVar53 = *pfVar3;
            fVar54 = *(float *)(lVar16 + lVar21 + 4);
            fVar55 = *(float *)(lVar16 + lVar21 + 8);
            pfVar2 = (float *)(param_4 + 4 + ((long)iVar4 + (long)iVar12) * 4 + lVar21);
            fVar30 = (float)NEON_fmadd(fVar26,fVar33,fVar29 * fVar36);
            fVar26 = (float)NEON_fmadd(fVar26,fVar36,fVar33 * -fVar29);
            fVar29 = (float)NEON_fmadd(fVar56,fVar42,fVar52 * fVar48);
            fVar43 = (float)NEON_fmadd(fVar57,fVar54,fVar53 * fVar55);
            fVar33 = *(float *)(uVar18 + lVar21 + 4);
            fVar36 = *(float *)(uVar18 + lVar21 + 8);
            fVar42 = (float)NEON_fmadd(fVar56,fVar48,fVar42 * -fVar52);
            lVar22 = param_4 + (long)iVar12 * 4 + lVar21;
            fVar48 = (float)NEON_fmadd(fVar57,fVar55,fVar54 * -fVar53);
            lVar21 = lVar21 + 8;
            fVar52 = fVar29 + fVar33;
            fVar33 = fVar33 - fVar29;
            fVar29 = fVar42 + fVar36;
            fVar36 = fVar36 - fVar42;
            *(float *)(lVar22 + 4) = fVar30 + fVar43 + fVar52;
            *(float *)(lVar22 + 8) = fVar26 + fVar48 + fVar29;
            *pfVar23 = fVar33 - (fVar26 - fVar48);
            pfVar23[1] = (fVar43 - fVar30) - fVar36;
            pfVar23 = pfVar23 + -2;
            *pfVar2 = (fVar26 - fVar48) + fVar33;
            pfVar2[1] = fVar36 + (fVar43 - fVar30);
            *pfVar24 = fVar52 - (fVar30 + fVar43);
            pfVar24[1] = (fVar26 + fVar48) - fVar29;
            pfVar24 = pfVar24 + -2;
          } while (uVar20 < (param_1 & 0xffffffff));
          iVar19 = iVar19 + 1;
          iVar12 = iVar12 + iVar9 * 4;
          iVar1 = iVar1 + iVar9 * 4;
          uVar18 = uVar18 + lVar11;
          lVar16 = lVar16 + lVar11;
          lVar14 = lVar14 + lVar11;
          lVar15 = lVar15 + lVar11;
        } while (iVar19 != param_2);
      }
      if ((param_1 & 1) != 0) {
        return;
      }
    }
    if (0 < param_2) {
      iVar19 = iVar9 + iVar5 + -1;
      uVar18 = -(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2;
      lVar14 = ((long)iVar19 + (long)iVar5) * 4;
      do {
        fVar26 = *(float *)(param_3 + (long)iVar19 * 4);
        fVar29 = *(float *)(param_3 + (long)(iVar19 + iVar5 * 2) * 4);
        uVar20 = param_3 + uVar18;
        pfVar23 = (float *)(param_4 + uVar18);
        pfVar24 = (float *)(param_4 + ((long)iVar9 + (long)iVar4) * 4);
        param_2 = param_2 + -1;
        param_4 = param_4 + (-(ulong)((uint)(iVar9 << 2) >> 0x1f) & 0xfffffffc00000000 |
                            (ulong)(uint)(iVar9 << 2) << 2);
        fVar30 = (fVar26 - fVar29) * 0.7071068;
        fVar26 = (fVar26 + fVar29) * -0.7071068;
        pfVar23[-1] = *(float *)(uVar20 - 4) + fVar30;
        pfVar24[-1] = *(float *)(uVar20 - 4) - fVar30;
        *pfVar23 = fVar26 - *(float *)(param_3 + lVar14);
        *pfVar24 = fVar26 + *(float *)(param_3 + lVar14);
        param_3 = uVar20;
      } while (param_2 != 0);
    }
  }
  return;
}


