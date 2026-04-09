// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e124ec
// Entry Point: 00e124ec
// Size: 876 bytes
// Signature: undefined FUN_00e124ec(void)


void FUN_00e124ec(long param_1,uint param_2,long param_3)

{
  bool bVar1;
  undefined (*pauVar2) [16];
  uint uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  double *pdVar21;
  ulong uVar22;
  float *pfVar23;
  ulong uVar24;
  undefined (*pauVar25) [16];
  ulong uVar26;
  long lVar27;
  int iVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  double dVar33;
  undefined8 uVar34;
  undefined auVar35 [16];
  undefined auVar36 [16];
  double dVar37;
  undefined auVar38 [16];
  undefined auVar39 [16];
  double dVar40;
  undefined auVar41 [16];
  double dVar42;
  undefined auStack_68 [8];
  double dStack_60;
  long local_58;
  
  uVar3 = param_2 + 1;
  uVar16 = (ulong)uVar3;
  lVar8 = tpidr_el0;
  local_58 = *(long *)(lVar8 + 0x28);
  lVar17 = -((-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3) + 0xf & 0xfffffffffffffff0
            );
  lVar15 = (long)&dStack_60 + lVar17;
  if (-1 < (int)param_2) {
    if (uVar3 < 8) {
      uVar18 = 0;
LAB_00e12588:
      lVar17 = uVar16 - uVar18;
      pdVar21 = (double *)(lVar15 + uVar18 * 8);
      pfVar23 = (float *)(param_1 + uVar18 * 4);
      do {
        lVar17 = lVar17 + -1;
        *pdVar21 = (double)*pfVar23;
        pdVar21 = pdVar21 + 1;
        pfVar23 = pfVar23 + 1;
      } while (lVar17 != 0);
    }
    else {
      uVar18 = uVar16 & 0xfffffff8;
      puVar20 = (undefined8 *)(param_1 + 0x10);
      pdVar21 = (double *)(&stack0xffffffffffffffc0 + lVar17);
      uVar24 = uVar18;
      do {
        uVar30 = puVar20[-1];
        uVar34 = puVar20[-2];
        uVar32 = puVar20[1];
        uVar31 = *puVar20;
        puVar20 = puVar20 + 4;
        uVar24 = uVar24 - 8;
        pdVar21[-3] = (double)(float)((ulong)uVar34 >> 0x20);
        pdVar21[-4] = (double)(float)uVar34;
        pdVar21[-1] = (double)(float)((ulong)uVar30 >> 0x20);
        pdVar21[-2] = (double)(float)uVar30;
        pdVar21[1] = (double)(float)((ulong)uVar31 >> 0x20);
        *pdVar21 = (double)(float)uVar31;
        pdVar21[3] = (double)(float)((ulong)uVar32 >> 0x20);
        pdVar21[2] = (double)(float)uVar32;
        pdVar21 = pdVar21 + 8;
      } while (uVar24 != 0);
      if (uVar18 != uVar16) goto LAB_00e12588;
    }
    if (0 < (int)param_2) {
      uVar22 = (ulong)param_2;
      uVar16 = lVar15 + (ulong)param_2 * 8;
      lVar19 = 0;
      uVar24 = uVar22 + 0xffffffff;
      uVar18 = uVar22;
      lVar17 = lVar15;
      do {
        iVar7 = param_2 - (int)lVar19;
        iVar10 = (int)uVar18;
        uVar3 = (param_2 - 1) - (int)lVar19;
        iVar9 = iVar10;
        if (0 < iVar10) {
          iVar9 = 1;
        }
        iVar6 = iVar7;
        if (0 < iVar7) {
          iVar6 = 1;
        }
        uVar11 = uVar18 - 1;
        uVar26 = (ulong)(uint)(iVar7 - iVar6);
        lVar27 = (ulong)uVar3 * 8;
        uVar4 = (ulong)(uint)(iVar10 - iVar9) + 1;
        dVar33 = 0.0;
        uVar12 = uVar4 & 0x1fffffffc;
        uVar14 = lVar17 + lVar27;
        do {
          dVar42 = 0.0;
          dVar40 = 0.0;
          iVar28 = 0;
          dVar37 = *(double *)(lVar15 + uVar22 * 8);
          do {
            iVar5 = iVar10 + iVar28;
            dVar42 = (double)NEON_fmadd(dVar33,dVar42,dVar40);
            dVar40 = (double)NEON_fmadd(dVar33,dVar40,dVar37);
            iVar28 = iVar28 + -1;
            dVar37 = (double)NEON_fmadd(dVar33,dVar37,
                                        *(undefined8 *)(lVar17 + (ulong)(iVar5 - 1) * 8));
          } while (1 < iVar10 + iVar28 + 1);
          dVar42 = (double)NEON_fmadd(dVar40 * (double)(int)uVar11,dVar40,
                                      dVar42 * -(dVar37 * (double)iVar10));
          dVar42 = dVar42 * (double)(int)uVar11;
          if (dVar42 < 0.0) {
            uVar34 = 0xffffffff;
            goto LAB_00e1282c;
          }
          dVar42 = SQRT(dVar42);
          if (dVar40 <= 0.0) {
            dVar40 = dVar40 - dVar42;
            if (-1e-06 < dVar40) {
              dVar40 = -1e-06;
            }
          }
          else {
            dVar40 = dVar40 + dVar42;
            if (dVar40 < 1e-06) {
              dVar40 = 1e-06;
            }
          }
          dVar40 = (dVar37 * (double)iVar10) / dVar40;
          dVar33 = dVar33 - dVar40;
          dVar37 = -dVar40;
          if (0.0 <= dVar40) {
            dVar37 = dVar40;
          }
        } while (9.999999999999999e-12 <= ABS(dVar37 / dVar33));
        *(float *)(param_3 + uVar11 * 4) = (float)dVar33;
        uVar29 = uVar18;
        if (((((uint)(iVar10 - iVar9) < 3) || (uVar3 < (uint)(iVar7 - iVar6))) ||
            (uVar14 < uVar14 + uVar26 * -8)) ||
           ((uVar16 < uVar16 + uVar26 * -8 ||
            ((lVar17 + (uVar3 - uVar26) * 8 < uVar16 + 8 &&
             (uVar16 + uVar26 * -8 < lVar15 + lVar19 * 8 + lVar27 + 8U)))))) {
LAB_00e127c0:
          iVar9 = (int)uVar29 + 1;
          lVar27 = uVar29 << 3;
          lVar13 = (ulong)((int)uVar29 - 1) << 3;
          do {
            puVar20 = (undefined8 *)(lVar17 + lVar27);
            iVar9 = iVar9 + -1;
            lVar27 = lVar27 + -8;
            uVar34 = NEON_fmadd(dVar33,*puVar20,*(undefined8 *)(lVar17 + lVar13));
            *(undefined8 *)(lVar17 + lVar13) = uVar34;
            lVar13 = lVar13 + -8;
          } while (1 < iVar9);
        }
        else {
          uVar29 = uVar18 - (uVar4 & 0x1fffffffc);
          uVar14 = uVar24;
          pauVar25 = (undefined (*) [16])(uVar16 - 8);
          do {
            puVar20 = (undefined8 *)(lVar17 + (uVar14 & 0xffffffff) * 8);
            uVar12 = uVar12 - 4;
            pauVar2 = pauVar25 + -1;
            auVar35 = *pauVar25;
            pauVar25 = pauVar25 + -2;
            uVar14 = uVar14 - 4;
            auVar36 = NEON_ext(*pauVar2,*pauVar2,8,1);
            auVar35 = NEON_ext(auVar35,auVar35,8,1);
            auVar38 = NEON_ext(*(undefined (*) [16])(puVar20 + -1),
                               *(undefined (*) [16])(puVar20 + -1),8,1);
            auVar41 = NEON_ext(*(undefined (*) [16])(puVar20 + -3),
                               *(undefined (*) [16])(puVar20 + -3),8,1);
            auVar39._0_8_ = auVar38._0_8_ + auVar35._0_8_ * dVar33;
            auVar39._8_8_ = auVar38._8_8_ + auVar35._8_8_ * dVar33;
            auVar38._0_8_ = auVar41._0_8_ + auVar36._0_8_ * dVar33;
            auVar38._8_8_ = auVar41._8_8_ + auVar36._8_8_ * dVar33;
            auVar35 = NEON_ext(auVar39,auVar39,8,1);
            auVar36 = NEON_ext(auVar38,auVar38,8,1);
            *puVar20 = auVar35._8_8_;
            puVar20[-1] = auVar35._0_8_;
            puVar20[-2] = auVar36._8_8_;
            puVar20[-3] = auVar36._0_8_;
          } while (uVar12 != 0);
          if (uVar4 != (uVar4 & 0x1fffffffc)) goto LAB_00e127c0;
        }
        uVar34 = 0;
        lVar17 = lVar17 + 8;
        lVar19 = lVar19 + 1;
        uVar24 = uVar24 - 1;
        bVar1 = 1 < (long)uVar18;
        uVar18 = uVar11;
      } while (bVar1);
LAB_00e1282c:
      if (*(long *)(lVar8 + 0x28) == local_58) {
        return;
      }
      goto LAB_00e12824;
    }
  }
  uVar34 = 0;
  if (*(long *)(lVar8 + 0x28) == local_58) {
    return;
  }
LAB_00e12824:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar34);
}


