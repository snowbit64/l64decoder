// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_lpc_from_data
// Entry Point: 00e0aab0
// Size: 1036 bytes
// Signature: undefined vorbis_lpc_from_data(void)


float vorbis_lpc_from_data(undefined8 *param_1,long param_2,int param_3,uint param_4)

{
  undefined (*pauVar1) [16];
  undefined (*pauVar2) [16];
  ulong uVar3;
  undefined8 *puVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  double dVar8;
  undefined (*pauVar9) [16];
  double *pdVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  double *pdVar16;
  float *pfVar17;
  long lVar18;
  undefined (*pauVar19) [16];
  double *pdVar20;
  long lVar21;
  long lVar22;
  double *pdVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  double *pdVar30;
  double *pdVar31;
  ulong uVar32;
  double dVar33;
  double dVar34;
  undefined auVar35 [16];
  double dVar36;
  undefined auVar37 [16];
  double dVar38;
  undefined auStack_68 [8];
  double dStack_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  lVar14 = -((-(ulong)(param_4 + 1 >> 0x1f) & 0xfffffff800000000 | (ulong)(param_4 + 1) << 3) + 0xf
            & 0xfffffffffffffff0);
  pdVar16 = (double *)((long)&dStack_60 + lVar14);
  pdVar31 = (double *)
            ((long)pdVar16 -
            ((-(ulong)(param_4 >> 0x1f) & 0xfffffff800000000 | (ulong)param_4 << 3) + 0xf &
            0xfffffffffffffff0));
  if (param_4 == 0xffffffff) {
    dVar38 = NAN;
  }
  else {
    lVar24 = (long)(int)param_4;
    lVar18 = (long)param_3;
    lVar21 = lVar24 * 4;
    lVar15 = 0;
    lVar22 = (long)param_1 + lVar24 * -4;
    uVar13 = lVar18 - lVar24;
    lVar25 = lVar24;
    do {
      dVar38 = 0.0;
      if (lVar25 < lVar18) {
        dVar38 = 0.0;
        uVar32 = (lVar18 - lVar24) + lVar15;
        lVar26 = lVar25;
        if (7 < uVar32) {
          dVar38 = 0.0;
          uVar11 = uVar13 & 0xfffffffffffffff8;
          lVar26 = lVar25 + (uVar32 & 0xfffffffffffffff8);
          puVar12 = param_1;
          do {
            puVar4 = (undefined8 *)((long)puVar12 + lVar21);
            uVar11 = uVar11 - 8;
            auVar35 = *(undefined (*) [16])(puVar4 + 2);
            dVar38 = dVar38 + (double)(float)*puVar4 * (double)(float)*puVar12 +
                     (double)(float)((ulong)*puVar4 >> 0x20) *
                     (double)(float)((ulong)*puVar12 >> 0x20) +
                     (double)(float)puVar4[1] * (double)(float)puVar12[1] +
                     (double)(float)((ulong)puVar4[1] >> 0x20) *
                     (double)(float)((ulong)puVar12[1] >> 0x20) +
                     (double)auVar35._0_4_ * (double)(float)puVar12[2] +
                     (double)auVar35._4_4_ * (double)(float)((ulong)puVar12[2] >> 0x20) +
                     (double)auVar35._8_4_ * (double)(float)puVar12[3] +
                     (double)auVar35._12_4_ * (double)(float)((ulong)puVar12[3] >> 0x20);
            puVar12 = puVar12 + 4;
          } while (uVar11 != 0);
          if (uVar32 == (uVar32 & 0xfffffffffffffff8)) goto LAB_00e0ab48;
        }
        do {
          lVar28 = lVar26 * 4;
          lVar26 = lVar26 + 1;
          dVar38 = (double)NEON_fmadd((double)*(float *)((long)param_1 + lVar28),
                                      (double)*(float *)(lVar22 + lVar28),dVar38);
        } while (lVar26 < lVar18);
      }
LAB_00e0ab48:
      lVar15 = lVar15 + 1;
      uVar13 = uVar13 + 1;
      lVar21 = lVar21 + -4;
      lVar22 = lVar22 + 4;
      pdVar16[lVar25] = dVar38;
      bVar5 = lVar25 != 0;
      lVar25 = lVar25 + -1;
    } while (bVar5);
    dVar38 = *pdVar16 * 1.0000000001;
    if (0 < (int)param_4) {
      uVar32 = (ulong)param_4;
      pdVar20 = pdVar31 + -1;
      pauVar19 = (undefined (*) [16])(auStack_68 + lVar14);
      dVar8 = (double)NEON_fmadd(*pdVar16,0x3e112e0be826d695,0x3ddb7cdfd9d7bdbb);
      uVar13 = 0;
      pdVar23 = pdVar16;
      do {
        uVar6 = (uint)(uVar13 >> 1) & 0x7fffffff;
        if (uVar6 < 2) {
          uVar6 = 1;
        }
        uVar11 = (ulong)uVar6;
        if (dVar38 < dVar8) {
          uVar6 = param_4 - (int)uVar13;
          memset(pdVar31 + (uVar13 & 0xffffffff),0,
                 -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3);
          if ((int)param_4 < 1) goto LAB_00e0ae88;
          goto LAB_00e0adf0;
        }
        uVar3 = uVar13 + 1;
        dVar33 = -pdVar16[uVar3];
        if (uVar13 == 0) {
          dVar33 = dVar33 / dVar38;
          *pdVar31 = dVar33;
        }
        else {
          if (uVar13 < 4) {
            uVar27 = 0;
LAB_00e0ad48:
            pdVar10 = pdVar23 + -uVar27;
            do {
              pdVar30 = pdVar31 + uVar27;
              uVar27 = uVar27 + 1;
              dVar33 = (double)NEON_fmsub(*pdVar30,*pdVar10,dVar33);
              pdVar10 = pdVar10 + -1;
            } while (uVar13 != uVar27);
          }
          else {
            uVar29 = uVar13 & 0xfffffffffffffffc;
            uVar27 = uVar13 & 0x7ffffffffffffffc;
            pauVar9 = pauVar19;
            pdVar10 = pdVar31 + 2;
            do {
              pauVar1 = pauVar9 + -1;
              auVar35 = *pauVar9;
              pauVar9 = pauVar9 + -2;
              uVar29 = uVar29 - 4;
              pauVar2 = (undefined (*) [16])(pdVar10 + -2);
              pdVar30 = pdVar10 + 1;
              dVar34 = *pdVar10;
              auVar35 = NEON_ext(auVar35,auVar35,8,1);
              pdVar10 = pdVar10 + 4;
              auVar37 = NEON_ext(*pauVar1,*pauVar1,8,1);
              dVar33 = dVar33 + auVar35._0_8_ * -SUB168(*pauVar2,0) +
                       auVar35._8_8_ * -SUB168(*pauVar2,8) + auVar37._0_8_ * -dVar34 +
                       auVar37._8_8_ * -*pdVar30;
            } while (uVar29 != 0);
            if (uVar13 != uVar27) goto LAB_00e0ad48;
          }
          dVar33 = dVar33 / dVar38;
          pdVar31[uVar13] = dVar33;
          pdVar10 = pdVar31;
          uVar27 = uVar11;
          pdVar30 = pdVar20;
          if (uVar13 < 2) {
            uVar11 = 0;
          }
          else {
            do {
              dVar34 = *pdVar10;
              uVar27 = uVar27 - 1;
              dVar36 = (double)NEON_fmadd(dVar33,*pdVar30,dVar34);
              *pdVar10 = dVar36;
              dVar34 = (double)NEON_fmadd(dVar33,dVar34,*pdVar30);
              *pdVar30 = dVar34;
              pdVar10 = pdVar10 + 1;
              pdVar30 = pdVar30 + -1;
            } while (uVar27 != 0);
          }
          if ((uVar13 & 1) != 0) {
            dVar34 = (double)NEON_fmadd(pdVar31[uVar11],dVar33,pdVar31[uVar11]);
            pdVar31[uVar11] = dVar34;
          }
        }
        dVar33 = (double)NEON_fmsub(dVar33,dVar33,0x3ff0000000000000);
        pauVar19 = (undefined (*) [16])(*pauVar19 + 8);
        pdVar23 = pdVar23 + 1;
        pdVar20 = pdVar20 + 1;
        dVar38 = dVar38 * dVar33;
        uVar13 = uVar3;
      } while (uVar3 != uVar32);
      if (0 < (int)param_4) {
LAB_00e0adf0:
        dVar8 = 0.99;
        uVar13 = uVar32;
        pdVar16 = pdVar31;
        do {
          uVar13 = uVar13 - 1;
          dVar33 = dVar8 * *pdVar16;
          dVar8 = dVar8 * 0.99;
          *pdVar16 = dVar33;
          pdVar16 = pdVar16 + 1;
        } while (uVar13 != 0);
        if (param_4 < 8) {
          uVar11 = 0;
        }
        else {
          uVar11 = uVar32 & 0xfffffff8;
          puVar12 = (undefined8 *)(param_2 + 0x10);
          pdVar16 = pdVar31 + 4;
          uVar13 = uVar11;
          do {
            dVar34 = pdVar16[-3];
            dVar8 = pdVar16[-4];
            uVar13 = uVar13 - 8;
            dVar36 = pdVar16[1];
            dVar33 = *pdVar16;
            auVar35 = *(undefined (*) [16])(pdVar16 + 2);
            puVar12[-1] = CONCAT44((float)pdVar16[-1],(float)pdVar16[-2]);
            puVar12[-2] = CONCAT44((float)dVar34,(float)dVar8);
            puVar12[1] = CONCAT44((float)auVar35._8_8_,(float)auVar35._0_8_);
            *puVar12 = CONCAT44((float)dVar36,(float)dVar33);
            puVar12 = puVar12 + 4;
            pdVar16 = pdVar16 + 8;
          } while (uVar13 != 0);
          if (uVar11 == uVar32) goto LAB_00e0ae88;
        }
        lVar14 = uVar32 - uVar11;
        pfVar17 = (float *)(param_2 + uVar11 * 4);
        pdVar16 = pdVar31 + uVar11;
        do {
          lVar14 = lVar14 + -1;
          *pfVar17 = (float)*pdVar16;
          pfVar17 = pfVar17 + 1;
          pdVar16 = pdVar16 + 1;
        } while (lVar14 != 0);
      }
    }
  }
LAB_00e0ae88:
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (float)dVar38;
}


