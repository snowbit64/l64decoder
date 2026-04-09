// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clr_bot_supdiag_elt<float>
// Entry Point: 00b6e014
// Size: 432 bytes
// Signature: void __cdecl clr_bot_supdiag_elt<float>(float * param_1, int param_2, int param_3, float * param_4, int param_5, int param_6, int param_7)


/* void SVDUtilDetails::clr_bot_supdiag_elt<float>(float*, int, int, float*, int, int, int) */

void SVDUtilDetails::clr_bot_supdiag_elt<float>
               (float *param_1,int param_2,int param_3,float *param_4,int param_5,int param_6,
               int param_7)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  if (param_2 < param_3) {
    lVar10 = (long)param_3;
    lVar11 = (long)param_6;
    uVar12 = (ulong)(uint)param_6;
    lVar13 = (lVar10 + -1) * lVar11;
    lVar9 = 0;
    puVar2 = (undefined8 *)(param_4 + param_6 * param_3);
    uVar14 = uVar12 & 0xfffffffc;
    puVar3 = (undefined8 *)(param_4 + lVar13);
    lVar8 = lVar10;
    do {
      lVar4 = lVar8 + -1;
      lVar6 = lVar10 + lVar4 * lVar11;
      fVar16 = param_1[lVar6];
      if (fVar16 == 0.0) {
        return;
      }
      lVar1 = lVar4 + (int)lVar4 * param_6;
      fVar17 = param_1[lVar1];
      param_1[lVar6] = 0.0;
      fVar18 = (float)NEON_fmadd(fVar16,fVar16,fVar17 * fVar17);
      fVar18 = SQRT(fVar18);
      param_1[lVar1] = fVar18;
      fVar16 = fVar16 / fVar18;
      fVar17 = fVar17 / fVar18;
      fVar18 = -fVar16;
      if (lVar4 != param_2) {
        lVar6 = (lVar8 + -2) * lVar11;
        lVar8 = lVar6 + lVar10;
        lVar6 = lVar6 + lVar4;
        fVar20 = (float)NEON_fmadd(fVar17,param_1[lVar6],fVar16 * param_1[lVar8]);
        fVar19 = (float)NEON_fmadd(fVar18,param_1[lVar6],fVar17 * param_1[lVar8]);
        param_1[lVar6] = fVar20;
        param_1[lVar8] = fVar19;
      }
      if (0 < param_6) {
        if ((uint)param_6 < 4) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar14;
          puVar7 = puVar2;
          puVar15 = puVar3;
          if ((param_4 + (lVar13 - lVar9 * lVar11) < param_4 + (long)(param_6 * param_3) + uVar12)
             && (puVar2 < param_4 + ((lVar13 + uVar12) - lVar9 * lVar11))) {
            uVar5 = 0;
          }
          else {
            do {
              uVar5 = uVar5 - 4;
              fVar19 = (float)*puVar7;
              fVar20 = (float)((ulong)*puVar7 >> 0x20);
              fVar22 = (float)puVar7[1];
              fVar23 = (float)((ulong)puVar7[1] >> 0x20);
              fVar24 = (float)*puVar15;
              fVar25 = (float)((ulong)*puVar15 >> 0x20);
              fVar26 = (float)puVar15[1];
              fVar27 = (float)((ulong)puVar15[1] >> 0x20);
              puVar15[1] = CONCAT44(fVar23 * fVar16 + fVar27 * fVar17,
                                    fVar22 * fVar16 + fVar26 * fVar17);
              *puVar15 = CONCAT44(fVar20 * fVar16 + fVar25 * fVar17,
                                  fVar19 * fVar16 + fVar24 * fVar17);
              puVar7[1] = CONCAT44(fVar23 * fVar17 + fVar27 * fVar18,
                                   fVar22 * fVar17 + fVar26 * fVar18);
              *puVar7 = CONCAT44(fVar20 * fVar17 + fVar25 * fVar18,fVar19 * fVar17 + fVar24 * fVar18
                                );
              puVar7 = puVar7 + 2;
              puVar15 = puVar15 + 2;
            } while (uVar5 != 0);
            uVar5 = uVar14;
            if (uVar14 == uVar12) goto LAB_00b6e068;
          }
        }
        do {
          lVar8 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          uVar21 = NEON_fmadd(fVar17,*(undefined4 *)((long)puVar3 + lVar8),
                              fVar16 * *(float *)((long)puVar2 + lVar8));
          fVar19 = (float)NEON_fmadd(fVar18,*(undefined4 *)((long)puVar3 + lVar8),
                                     fVar17 * *(float *)((long)puVar2 + lVar8));
          *(undefined4 *)((long)puVar3 + lVar8) = uVar21;
          *(float *)((long)puVar2 + lVar8) = fVar19;
        } while (uVar12 != uVar5);
      }
LAB_00b6e068:
      lVar9 = lVar9 + 1;
      puVar3 = (undefined8 *)((long)puVar3 + lVar11 * -4);
      lVar8 = lVar4;
    } while (param_2 < lVar4);
  }
  return;
}


