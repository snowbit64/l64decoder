// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _vorbis_apply_window
// Entry Point: 00e2233c
// Size: 804 bytes
// Signature: undefined _vorbis_apply_window(void)


void _vorbis_apply_window
               (void *param_1,long param_2,long param_3,int param_4,int param_5,int param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  int iVar12;
  ulong uVar13;
  float *pfVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined (*pauVar17) [16];
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined8 uVar25;
  undefined8 uVar26;
  
  lVar19 = *(long *)(param_3 + (long)param_5 * 8);
  iVar12 = 0;
  if (param_5 != 0) {
    iVar12 = param_4;
  }
  iVar5 = 0;
  if (param_5 != 0) {
    iVar5 = param_6;
  }
  iVar6 = *(int *)(param_2 + (long)iVar12 * 4);
  lVar9 = *(long *)(param_3 + (long)iVar12 * 8);
  iVar12 = *(int *)(param_2 + (long)iVar5 * 4);
  lVar8 = lVar19 + 3;
  if (-1 < lVar19) {
    lVar8 = lVar19;
  }
  lVar10 = *(long *)(param_3 + (long)iVar5 * 8);
  lVar4 = lVar19;
  if (-1 >= lVar19) {
    lVar4 = lVar19 + 1;
  }
  lVar8 = lVar8 >> 2;
  lVar1 = lVar9 + 3;
  lVar7 = lVar9;
  if (lVar9 < 0) {
    lVar9 = lVar9 + 1;
    lVar7 = lVar1;
  }
  lVar1 = lVar10 + 3;
  if (-1 < lVar10) {
    lVar1 = lVar10;
  }
  uVar21 = lVar8 - (lVar7 >> 2);
  if (-1 >= lVar10) {
    lVar10 = lVar10 + 1;
  }
  lVar2 = uVar21 + (lVar9 >> 1);
  uVar20 = ((lVar4 >> 1) + lVar8) - (lVar1 >> 2);
  uVar22 = lVar10 >> 1;
  if ((long)uVar21 < 1) {
    uVar21 = 0;
    if (0 < lVar2) goto LAB_00e22434;
  }
  else {
    memset(param_1,0,uVar21 * 4);
    uVar21 = uVar21 & 0xffffffff;
    if ((long)uVar21 < lVar2) {
LAB_00e22434:
      puVar11 = (&PTR_DAT_01013b50)[iVar6];
      uVar13 = ((lVar8 - (lVar7 >> 2)) + (lVar9 >> 1)) - uVar21;
      if ((uVar13 < 8) ||
         ((puVar3 = (undefined *)((long)param_1 + uVar21 * 4), puVar3 < puVar11 + uVar13 * 4 &&
          (puVar11 < (undefined *)((long)param_1 + lVar2 * 4))))) {
        uVar16 = 0;
      }
      else {
        uVar16 = uVar13 & 0xfffffffffffffff8;
        pauVar17 = (undefined (*) [16])(puVar11 + 0x10);
        uVar21 = uVar21 + uVar16;
        puVar15 = (undefined8 *)(puVar3 + 0x10);
        uVar18 = uVar16;
        do {
          auVar23 = pauVar17[-1];
          auVar24 = *pauVar17;
          pauVar17 = pauVar17 + 2;
          uVar18 = uVar18 - 8;
          uVar25 = puVar15[-2];
          uVar26 = *puVar15;
          *(float *)puVar15 = auVar23._8_4_ * (float)puVar15[-1];
          *(float *)((long)puVar15 + 4) = auVar23._12_4_ * (float)((ulong)puVar15[-1] >> 0x20);
          *(float *)(puVar15 + -2) = auVar23._0_4_ * (float)uVar25;
          *(float *)((long)puVar15 + -0xc) = auVar23._4_4_ * (float)((ulong)uVar25 >> 0x20);
          *(float *)(puVar15 + 2) = auVar24._8_4_ * (float)puVar15[1];
          *(float *)((long)puVar15 + 0x14) = auVar24._12_4_ * (float)((ulong)puVar15[1] >> 0x20);
          *(float *)puVar15 = auVar24._0_4_ * (float)uVar26;
          *(float *)((long)puVar15 + 4) = auVar24._4_4_ * (float)((ulong)uVar26 >> 0x20);
          puVar15 = puVar15 + 4;
        } while (uVar18 != 0);
        if (uVar13 == uVar16) goto LAB_00e22494;
      }
      pfVar14 = (float *)(puVar11 + uVar16 * 4);
      do {
        lVar9 = uVar21 * 4;
        uVar21 = uVar21 + 1;
        *(float *)((long)param_1 + lVar9) = *pfVar14 * *(float *)((long)param_1 + lVar9);
        pfVar14 = pfVar14 + 1;
      } while ((long)uVar21 < lVar2);
    }
  }
LAB_00e22494:
  lVar9 = uVar20 + uVar22;
  uVar21 = (ulong)(int)uVar20;
  if ((long)uVar21 < lVar9) {
    puVar11 = (&PTR_DAT_01013b50)[iVar12];
    lVar8 = (((lVar4 >> 1) + lVar8) - (lVar1 >> 2)) + uVar22;
    uVar13 = lVar8 - uVar21;
    uVar20 = uVar21;
    if (7 < uVar13) {
      uVar16 = lVar8 + ~uVar21;
      iVar12 = (int)uVar22 + -1;
      if ((iVar12 - (int)uVar16 <= iVar12) && (uVar16 >> 0x20 == 0)) {
        puVar3 = (undefined *)((long)param_1 + uVar21 * 4);
        lVar8 = (uVar22 << 0x20) + -0x100000000;
        if ((puVar11 + (lVar8 >> 0x1e) + 4 <= puVar3) ||
           ((undefined *)((long)param_1 + lVar9 * 4) <=
            puVar11 + ((uVar21 + (lVar8 >> 0x20)) - lVar9) * 4 + 4)) {
          uVar16 = uVar13 & 0xfffffffffffffff8;
          uVar20 = uVar21 + uVar16;
          uVar22 = (ulong)(uint)((int)uVar22 - (int)uVar16);
          puVar15 = (undefined8 *)(puVar3 + 0x10);
          uVar21 = uVar16;
          do {
            lVar4 = lVar8 >> 0x1e;
            lVar8 = lVar8 + -0x800000000;
            uVar25 = puVar15[-2];
            uVar26 = *puVar15;
            uVar21 = uVar21 - 8;
            auVar23 = NEON_rev64(*(undefined (*) [16])(puVar11 + lVar4 + -0xc),4);
            auVar24 = NEON_rev64(*(undefined (*) [16])(puVar11 + lVar4 + -0x1c),4);
            auVar23 = NEON_ext(auVar23,auVar23,8,1);
            auVar24 = NEON_ext(auVar24,auVar24,8,1);
            *(float *)puVar15 = auVar23._8_4_ * (float)puVar15[-1];
            *(float *)((long)puVar15 + 4) = auVar23._12_4_ * (float)((ulong)puVar15[-1] >> 0x20);
            *(float *)(puVar15 + -2) = auVar23._0_4_ * (float)uVar25;
            *(float *)((long)puVar15 + -0xc) = auVar23._4_4_ * (float)((ulong)uVar25 >> 0x20);
            *(float *)(puVar15 + 2) = auVar24._8_4_ * (float)puVar15[1];
            *(float *)((long)puVar15 + 0x14) = auVar24._12_4_ * (float)((ulong)puVar15[1] >> 0x20);
            *(float *)puVar15 = auVar24._0_4_ * (float)uVar26;
            *(float *)((long)puVar15 + 4) = auVar24._4_4_ * (float)((ulong)uVar26 >> 0x20);
            puVar15 = puVar15 + 4;
          } while (uVar21 != 0);
          if (uVar13 == uVar16) goto LAB_00e22544;
        }
      }
    }
    iVar12 = (int)uVar22;
    do {
      iVar12 = iVar12 + -1;
      lVar8 = uVar20 * 4;
      uVar20 = uVar20 + 1;
      *(float *)((long)param_1 + lVar8) =
           *(float *)(puVar11 + (long)iVar12 * 4) * *(float *)((long)param_1 + lVar8);
    } while ((long)uVar20 < lVar9);
  }
LAB_00e22544:
  lVar9 = (long)(int)uVar20;
  uVar21 = lVar19 - lVar9;
  if (uVar21 != 0 && lVar9 <= lVar19) {
    lVar8 = lVar9;
    if (7 < uVar21) {
      uVar22 = uVar21 & 0xfffffffffffffff8;
      lVar8 = lVar9 + uVar22;
      puVar15 = (undefined8 *)((long)param_1 + lVar9 * 4 + 0x10);
      uVar20 = uVar22;
      do {
        puVar15[-1] = 0;
        puVar15[-2] = 0;
        puVar15[1] = 0;
        *puVar15 = 0;
        uVar20 = uVar20 - 8;
        puVar15 = puVar15 + 4;
      } while (uVar20 != 0);
      if (uVar21 == uVar22) {
        return;
      }
    }
    do {
      *(undefined4 *)((long)param_1 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < lVar19);
  }
  return;
}


