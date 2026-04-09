// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clr_top_subdiag_elt<float>
// Entry Point: 00b6e668
// Size: 1140 bytes
// Signature: void __cdecl clr_top_subdiag_elt<float>(float * param_1, int param_2, int param_3, float * param_4, float * param_5, int param_6, int param_7, int param_8)


/* void SVDUtilDetails::clr_top_subdiag_elt<float>(float*, int, int, float*, float*, int, int, int)
    */

void SVDUtilDetails::clr_top_subdiag_elt<float>
               (float *param_1,int param_2,int param_3,float *param_4,float *param_5,int param_6,
               int param_7,int param_8)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  float *pfVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  ulong uVar32;
  undefined8 *puVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  
  uVar26 = (ulong)param_2;
  lVar14 = uVar26 + (long)param_7 * (long)param_2;
  uVar13 = (ulong)param_7;
  lVar21 = uVar26 + 1;
  lVar1 = uVar26 + 2;
  lVar22 = lVar21 * uVar13;
  uVar25 = -(ulong)((uint)param_7 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_7 << 2;
  lVar12 = 0;
  lVar2 = uVar25 + 4;
  pfVar31 = param_4 + lVar21;
  pfVar30 = param_1 + (long)param_7 * (long)param_2;
  uVar32 = -(ulong)((uint)param_8 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_8 << 2;
  uVar15 = uVar13 & 0xfffffffffffffffc;
  pfVar29 = param_1 + lVar22;
  puVar33 = (undefined8 *)(param_5 + lVar22);
  puVar10 = (undefined8 *)(param_5 + lVar1 * uVar13);
  lVar9 = lVar1;
  puVar11 = (undefined8 *)(param_1 + lVar22 + uVar26 + 1);
  uVar20 = uVar26;
  uVar27 = ~uVar26;
  puVar28 = (undefined8 *)(param_1 + lVar14 + 1);
  do {
    uVar3 = uVar20 + 1;
    lVar7 = uVar20 + (long)((int)uVar3 * param_7);
    lVar16 = uVar20 + (long)((int)uVar20 * param_7);
    lVar18 = 1;
    if (uVar3 != (long)param_3) {
      lVar18 = 2;
    }
    lVar4 = lVar1 + lVar12;
    fVar34 = param_1[lVar7];
    lVar5 = lVar18 + uVar3;
    fVar35 = param_1[lVar16];
    lVar6 = lVar4;
    if (lVar4 <= lVar5) {
      lVar6 = lVar5;
    }
    uVar23 = lVar6 + (~uVar26 - lVar12);
    fVar36 = (float)NEON_fmadd(fVar35,fVar35,fVar34 * fVar34);
    fVar36 = SQRT(fVar36);
    param_1[lVar16] = fVar36;
    param_1[lVar7] = 0.0;
    fVar34 = fVar34 / fVar36;
    fVar35 = fVar35 / fVar36;
    fVar36 = -fVar34;
    uVar17 = uVar3;
    if (uVar23 < 4) {
LAB_00b6e888:
      do {
        uVar23 = uVar17 + 1;
        fVar38 = (float)NEON_fmadd(fVar35,pfVar30[uVar17],fVar34 * pfVar29[uVar17]);
        fVar37 = (float)NEON_fmadd(fVar36,pfVar30[uVar17],fVar35 * pfVar29[uVar17]);
        pfVar30[uVar17] = fVar38;
        pfVar29[uVar17] = fVar37;
        uVar17 = uVar23;
      } while ((long)uVar23 < lVar5);
    }
    else {
      if (lVar4 <= lVar5) {
        lVar4 = lVar5;
      }
      lVar16 = lVar2 * lVar12;
      lVar7 = (lVar4 - (lVar12 + uVar26)) * 4 + -8;
      if (((undefined8 *)((long)(param_1 + lVar14 + 1) + lVar16) <
           (undefined8 *)((long)param_1 + lVar7 + lVar16 + (lVar22 + uVar26) * 4 + 8)) &&
         ((undefined8 *)((long)(param_1 + lVar22 + uVar26 + 1) + lVar16) <
          (undefined8 *)((long)param_1 + lVar7 + lVar16 + lVar14 * 4 + 8))) goto LAB_00b6e888;
      lVar7 = lVar9;
      if (lVar9 <= lVar18 + lVar21) {
        lVar7 = lVar18 + lVar21;
      }
      uVar17 = lVar7 + uVar27 & 0xfffffffffffffffc;
      puVar8 = puVar11;
      puVar24 = puVar28;
      do {
        uVar17 = uVar17 - 4;
        fVar37 = (float)*puVar8;
        fVar38 = (float)((ulong)*puVar8 >> 0x20);
        fVar40 = (float)puVar8[1];
        fVar41 = (float)((ulong)puVar8[1] >> 0x20);
        fVar42 = (float)*puVar24;
        fVar43 = (float)((ulong)*puVar24 >> 0x20);
        fVar44 = (float)puVar24[1];
        fVar45 = (float)((ulong)puVar24[1] >> 0x20);
        puVar24[1] = CONCAT44(fVar41 * fVar34 + fVar45 * fVar35,fVar40 * fVar34 + fVar44 * fVar35);
        *puVar24 = CONCAT44(fVar38 * fVar34 + fVar43 * fVar35,fVar37 * fVar34 + fVar42 * fVar35);
        puVar8[1] = CONCAT44(fVar41 * fVar35 + fVar45 * fVar36,fVar40 * fVar35 + fVar44 * fVar36);
        *puVar8 = CONCAT44(fVar38 * fVar35 + fVar43 * fVar36,fVar37 * fVar35 + fVar42 * fVar36);
        puVar8 = puVar8 + 2;
        puVar24 = puVar24 + 2;
      } while (uVar17 != 0);
      uVar17 = uVar3 + (uVar23 & 0xfffffffffffffffc);
      if (uVar23 != (uVar23 & 0xfffffffffffffffc)) goto LAB_00b6e888;
    }
    if (0 < param_6) {
      pfVar19 = pfVar31;
      uVar23 = (ulong)(uint)param_6;
      if (param_8 == 1) {
        fVar37 = param_4[uVar20];
        do {
          uVar23 = uVar23 - 1;
          fVar38 = (float)NEON_fmadd(fVar35,fVar37,fVar34 * *pfVar19);
          fVar37 = (float)NEON_fmadd(fVar36,fVar37,fVar35 * *pfVar19);
          pfVar19[-1] = fVar38;
          *pfVar19 = fVar37;
          pfVar19 = (float *)((long)pfVar19 + uVar32);
        } while (uVar23 != 0);
      }
      else {
        do {
          uVar23 = uVar23 - 1;
          fVar38 = (float)NEON_fmadd(fVar35,pfVar19[-1],fVar34 * *pfVar19);
          fVar37 = (float)NEON_fmadd(fVar36,pfVar19[-1],fVar35 * *pfVar19);
          pfVar19[-1] = fVar38;
          *pfVar19 = fVar37;
          pfVar19 = (float *)((long)pfVar19 + uVar32);
        } while (uVar23 != 0);
      }
    }
    if (uVar3 == (long)param_3) {
      return;
    }
    lVar7 = uVar20 + 2;
    lVar16 = uVar20 * uVar13 + lVar7;
    lVar18 = uVar20 * uVar13 + uVar3;
    fVar34 = param_1[lVar16];
    param_1[lVar16] = 0.0;
    fVar35 = param_1[lVar18];
    fVar36 = (float)NEON_fmadd(fVar35,fVar35,fVar34 * fVar34);
    fVar36 = SQRT(fVar36);
    param_1[lVar18] = fVar36;
    lVar18 = uVar3 * uVar13;
    lVar16 = lVar18 + lVar7;
    fVar34 = fVar34 / fVar36;
    fVar35 = fVar35 / fVar36;
    fVar36 = -fVar34;
    if (param_7 == 1) {
      fVar37 = (float)NEON_fmadd(fVar36,param_1[(-(ulong)((uint)param_2 >> 0x1f) &
                                                 0xfffffffe00000000 | (ulong)(uint)param_2 << 1) + 2
                                                + lVar12 * 2],fVar35 * param_1[lVar16]);
      fVar38 = (float)NEON_fmadd(fVar35,param_1[(-(ulong)((uint)param_2 >> 0x1f) &
                                                 0xfffffffe00000000 | (ulong)(uint)param_2 << 1) + 2
                                                + lVar12 * 2],fVar34 * param_1[lVar16]);
      pfVar19 = param_1 + lVar7 * uVar13 + uVar3;
      param_1[lVar18 + uVar3] = fVar38;
      param_1[lVar16] = fVar37;
    }
    else {
      pfVar19 = param_1 + lVar7 * uVar13 + uVar3;
      fVar38 = (float)NEON_fmadd(fVar35,param_1[lVar18 + uVar3],fVar34 * param_1[lVar16]);
      fVar37 = (float)NEON_fmadd(fVar36,param_1[lVar18 + uVar3],fVar35 * param_1[lVar16]);
      param_1[lVar18 + uVar3] = fVar38;
      param_1[lVar16] = fVar37;
      fVar37 = *pfVar19;
    }
    lVar7 = lVar7 * uVar13 + lVar7;
    fVar38 = (float)NEON_fmadd(fVar35,fVar37,fVar34 * param_1[lVar7]);
    fVar37 = (float)NEON_fmadd(fVar36,fVar37,fVar35 * param_1[lVar7]);
    *pfVar19 = fVar38;
    param_1[lVar7] = fVar37;
    if (0 < param_7) {
      puVar8 = puVar33;
      uVar20 = uVar15;
      puVar24 = puVar10;
      if ((uint)param_7 < 4) {
        uVar20 = 0;
      }
      else {
        do {
          uVar20 = uVar20 - 4;
          fVar37 = (float)*puVar24;
          fVar38 = (float)((ulong)*puVar24 >> 0x20);
          fVar40 = (float)puVar24[1];
          fVar41 = (float)((ulong)puVar24[1] >> 0x20);
          fVar42 = (float)*puVar8;
          fVar43 = (float)((ulong)*puVar8 >> 0x20);
          fVar44 = (float)puVar8[1];
          fVar45 = (float)((ulong)puVar8[1] >> 0x20);
          puVar8[1] = CONCAT44(fVar41 * fVar34 + fVar45 * fVar35,fVar40 * fVar34 + fVar44 * fVar35);
          *puVar8 = CONCAT44(fVar38 * fVar34 + fVar43 * fVar35,fVar37 * fVar34 + fVar42 * fVar35);
          puVar24[1] = CONCAT44(fVar41 * fVar35 + fVar45 * fVar36,fVar40 * fVar35 + fVar44 * fVar36)
          ;
          *puVar24 = CONCAT44(fVar38 * fVar35 + fVar43 * fVar36,fVar37 * fVar35 + fVar42 * fVar36);
          puVar8 = puVar8 + 2;
          puVar24 = puVar24 + 2;
        } while (uVar20 != 0);
        uVar20 = uVar15;
        if (uVar15 == uVar13) goto LAB_00b6e734;
      }
      do {
        lVar7 = uVar20 * 4;
        uVar20 = uVar20 + 1;
        uVar39 = NEON_fmadd(fVar35,*(undefined4 *)((long)puVar33 + lVar7),
                            fVar34 * *(float *)((long)puVar10 + lVar7));
        fVar37 = (float)NEON_fmadd(fVar36,*(undefined4 *)((long)puVar33 + lVar7),
                                   fVar35 * *(float *)((long)puVar10 + lVar7));
        *(undefined4 *)((long)puVar33 + lVar7) = uVar39;
        *(float *)((long)puVar10 + lVar7) = fVar37;
      } while (uVar13 != uVar20);
    }
LAB_00b6e734:
    lVar12 = lVar12 + 1;
    lVar9 = lVar9 + 1;
    lVar21 = lVar21 + 1;
    uVar27 = uVar27 - 1;
    puVar28 = (undefined8 *)((long)puVar28 + lVar2);
    puVar11 = (undefined8 *)((long)puVar11 + lVar2);
    pfVar29 = (float *)((long)pfVar29 + uVar25);
    pfVar30 = (float *)((long)pfVar30 + uVar25);
    pfVar31 = pfVar31 + 1;
    puVar33 = (undefined8 *)((long)puVar33 + uVar25);
    puVar10 = (undefined8 *)((long)puVar10 + uVar25);
    uVar20 = uVar3;
  } while( true );
}


