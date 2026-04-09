// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clr_top_supdiag_elt<float>
// Entry Point: 00b6e1c4
// Size: 520 bytes
// Signature: void __cdecl clr_top_supdiag_elt<float>(float * param_1, int param_2, int param_3, float * param_4, int param_5, int param_6, int param_7)


/* void SVDUtilDetails::clr_top_supdiag_elt<float>(float*, int, int, float*, int, int, int) */

void SVDUtilDetails::clr_top_supdiag_elt<float>
               (float *param_1,int param_2,int param_3,float *param_4,int param_5,int param_6,
               int param_7)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  
  if (param_2 < param_3) {
    lVar7 = (long)param_2;
    uVar8 = (ulong)(uint)param_5;
    lVar6 = (long)param_7;
    lVar5 = 0;
    puVar2 = (undefined8 *)(param_4 + lVar7);
    uVar4 = uVar8 & 0xfffffffc;
    lVar9 = 4;
    lVar10 = lVar7 + 1;
    lVar11 = lVar7;
    do {
      lVar1 = lVar11 + 1;
      lVar3 = lVar1 + param_6 * param_2;
      fVar17 = param_1[lVar3];
      if (fVar17 == 0.0) {
        return;
      }
      lVar13 = lVar1 + (int)lVar1 * param_6;
      fVar16 = param_1[lVar13];
      param_1[lVar3] = 0.0;
      fVar18 = (float)NEON_fmadd(fVar17,fVar17,fVar16 * fVar16);
      fVar18 = SQRT(fVar18);
      param_1[lVar13] = fVar18;
      fVar16 = fVar16 / fVar18;
      fVar17 = fVar17 / fVar18;
      if (lVar1 != param_3) {
        lVar3 = lVar11 + 2 + lVar1 * param_6;
        lVar11 = lVar11 + 2 + (long)(param_6 * param_2);
        fVar19 = (float)NEON_fmadd(fVar16,param_1[lVar11],fVar17 * param_1[lVar3]);
        fVar18 = (float)NEON_fmsub(fVar17,param_1[lVar11],fVar16 * param_1[lVar3]);
        param_1[lVar11] = fVar19;
        param_1[lVar3] = fVar18;
      }
      if (0 < param_5) {
        fVar18 = -fVar17;
        if (((uint)param_5 < 4 || param_7 != 1) ||
           ((uVar12 = uVar4, puVar14 = puVar2, param_4 + lVar7 + 1 + lVar5 < param_4 + lVar7 + uVar8
            && (puVar2 < param_4 + lVar7 + uVar8 + 1 + lVar5)))) {
          uVar12 = 0;
        }
        else {
          do {
            uVar12 = uVar12 - 4;
            uVar27 = ((undefined8 *)((long)puVar14 + lVar9))[1];
            uVar24 = *(undefined8 *)((long)puVar14 + lVar9);
            fVar19 = (float)*puVar14;
            fVar20 = (float)((ulong)*puVar14 >> 0x20);
            fVar21 = (float)puVar14[1];
            fVar22 = (float)((ulong)puVar14[1] >> 0x20);
            fVar23 = (float)uVar24;
            fVar25 = (float)((ulong)uVar24 >> 0x20);
            fVar26 = (float)uVar27;
            fVar28 = (float)((ulong)uVar27 >> 0x20);
            ((undefined8 *)((long)puVar14 + lVar9))[1] =
                 CONCAT44(fVar22 * fVar17 + fVar28 * fVar16,fVar21 * fVar17 + fVar26 * fVar16);
            *(undefined8 *)((long)puVar14 + lVar9) =
                 CONCAT44(fVar20 * fVar17 + fVar25 * fVar16,fVar19 * fVar17 + fVar23 * fVar16);
            puVar14[1] = CONCAT44(fVar22 * fVar16 + fVar28 * fVar18,
                                  fVar21 * fVar16 + fVar26 * fVar18);
            *puVar14 = CONCAT44(fVar20 * fVar16 + fVar25 * fVar18,fVar19 * fVar16 + fVar23 * fVar18)
            ;
            puVar14 = puVar14 + lVar6 * 2;
          } while (uVar12 != 0);
          uVar12 = uVar4;
          if (uVar4 == uVar8) goto LAB_00b6e244;
        }
        lVar13 = uVar8 - uVar12;
        lVar11 = lVar7 + lVar6 * uVar12;
        lVar3 = lVar10 + lVar6 * uVar12;
        pfVar15 = param_4;
        do {
          lVar13 = lVar13 + -1;
          fVar20 = (float)NEON_fmadd(fVar16,pfVar15[lVar3],fVar17 * pfVar15[lVar11]);
          fVar19 = (float)NEON_fmadd(fVar18,pfVar15[lVar3],fVar16 * pfVar15[lVar11]);
          pfVar15[lVar3] = fVar20;
          pfVar15[lVar11] = fVar19;
          pfVar15 = pfVar15 + lVar6;
        } while (lVar13 != 0);
      }
LAB_00b6e244:
      lVar5 = lVar5 + 1;
      lVar9 = lVar9 + 4;
      lVar10 = lVar10 + 1;
      lVar11 = lVar1;
    } while (lVar1 != param_3);
  }
  return;
}


