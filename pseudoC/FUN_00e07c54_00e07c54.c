// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e07c54
// Entry Point: 00e07c54
// Size: 1244 bytes
// Signature: undefined FUN_00e07c54(void)


void FUN_00e07c54(long param_1,long param_2,float *param_3,long param_4,long param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float *pfVar11;
  ulong uVar12;
  long lVar13;
  float *pfVar14;
  float *pfVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined4 *puVar19;
  int iVar20;
  int *piVar21;
  long lVar22;
  ulong uVar23;
  float *pfVar24;
  ulong uVar25;
  float fVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float afStack_70 [2];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar3 = *(uint *)(param_1 + 4);
  uVar25 = (ulong)(int)uVar3;
  lVar8 = -(uVar25 * 4 + 0xf & 0xfffffffffffffff0);
  pfVar24 = (float *)((long)afStack_70 + lVar8);
  uVar27 = *(uint *)(param_1 + 0xe8);
  fVar28 = *(float *)(param_2 + 0x3c);
  uVar4 = uVar27 >> 1;
  if ((int)uVar27 < 6) {
    uVar4 = 2;
  }
  if ((int)uVar27 < 0) {
    uVar27 = uVar27 + 1;
  }
  fVar26 = fVar28 - (float)(((int)uVar27 >> 1) + -2);
  if (fVar26 <= 0.0) {
    fVar26 = 0.0;
  }
  if (fVar26 <= fVar28) {
    fVar28 = fVar26;
  }
  if (0 < (int)uVar3) {
    pfVar11 = *(float **)(param_1 + 0x30);
    if (uVar3 < 8) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      if ((param_3 + uVar25 <= pfVar24 || pfVar24 + uVar25 <= param_3) &&
         (pfVar11 + uVar25 <= pfVar24 || pfVar24 + uVar25 <= pfVar11)) {
        uVar12 = uVar25 & 0xfffffffffffffff8;
        puVar9 = (undefined8 *)(param_3 + 4);
        puVar10 = (undefined8 *)(pfVar11 + 4);
        puVar16 = (undefined8 *)(&stack0xffffffffffffffa0 + lVar8);
        uVar23 = uVar12;
        do {
          puVar6 = puVar9 + -1;
          uVar31 = puVar9[-2];
          uVar33 = puVar9[1];
          uVar32 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar23 = uVar23 - 8;
          puVar7 = puVar10 + -1;
          uVar34 = puVar10[-2];
          uVar37 = puVar10[1];
          uVar36 = *puVar10;
          puVar10 = puVar10 + 4;
          puVar16[-1] = CONCAT44((float)((ulong)*puVar6 >> 0x20) * (float)((ulong)*puVar7 >> 0x20),
                                 (float)*puVar6 * (float)*puVar7);
          puVar16[-2] = CONCAT44((float)((ulong)uVar31 >> 0x20) * (float)((ulong)uVar34 >> 0x20),
                                 (float)uVar31 * (float)uVar34);
          puVar16[1] = CONCAT44((float)((ulong)uVar33 >> 0x20) * (float)((ulong)uVar37 >> 0x20),
                                (float)uVar33 * (float)uVar37);
          *puVar16 = CONCAT44((float)((ulong)uVar32 >> 0x20) * (float)((ulong)uVar36 >> 0x20),
                              (float)uVar32 * (float)uVar36);
          puVar16 = puVar16 + 4;
        } while (uVar23 != 0);
        if (uVar12 == uVar25) goto LAB_00e07d2c;
      }
    }
    lVar13 = uVar25 - uVar12;
    pfVar11 = pfVar11 + uVar12;
    pfVar14 = pfVar24 + uVar12;
    pfVar15 = param_3 + uVar12;
    do {
      lVar13 = lVar13 + -1;
      *pfVar14 = *pfVar15 * *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar14 = pfVar14 + 1;
      pfVar15 = pfVar15 + 1;
    } while (lVar13 != 0);
  }
LAB_00e07d2c:
  fVar41 = *(float *)(param_1 + 0xc);
  mdct_forward(param_1 + 0x10,pfVar24,pfVar24);
  fVar26 = *pfVar24;
  dVar30 = (double)*(float *)((long)afStack_70 + lVar8 + 4);
  iVar20 = *(int *)(param_5 + 0x8c);
  uVar31 = NEON_fmadd(dVar30 * 0.7,dVar30,(double)(fVar26 * fVar26));
  dVar30 = (double)NEON_fmadd((double)*(float *)((long)&local_68 + lVar8) * 0.2,
                              (double)*(float *)((long)&local_68 + lVar8),uVar31);
  fVar29 = (float)dVar30;
  if (iVar20 == 0) {
    fVar35 = *(float *)(param_5 + 0x88);
    *(float *)(param_5 + 0x88) = fVar29;
    fVar35 = fVar35 + fVar29;
    uVar12 = (ulong)(uint)fVar35;
    *(float *)(param_5 + 0x84) = fVar35;
  }
  else {
    uVar12 = CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x84) >> 0x20) + fVar29,
                      (float)*(undefined8 *)(param_5 + 0x84) + fVar29);
    *(ulong *)(param_5 + 0x84) = uVar12;
  }
  lVar13 = param_5 + (long)iVar20 * 4;
  iVar1 = 0;
  if (iVar20 < 0xe) {
    iVar1 = iVar20 + 1;
  }
  if ((long)uVar25 < 0) {
    uVar25 = uVar25 + 1;
  }
  fVar35 = *(float *)(lVar13 + 0x48);
  *(int *)(param_5 + 0x8c) = iVar1;
  *(float *)(param_5 + 0x84) = (float)uVar12 - fVar35;
  *(float *)(lVar13 + 0x48) = fVar29;
  if (1 < (int)uVar3) {
    lVar13 = 0;
    fVar29 = (float)NEON_fmadd((float)(ulong)((uint)((float)uVar12 * 0.0625) & 0x7fffffff),
                               0x3540a8c1,0xc43f2770);
    dVar30 = (double)NEON_fmadd((double)fVar29,0x3fe0000000000000,0xc02e000000000000);
    fVar29 = (float)dVar30;
    lVar18 = 0;
    while( true ) {
      uVar27 = NEON_fmadd(fVar26,fVar26,pfVar24[lVar18 + 1] * pfVar24[lVar18 + 1]);
      fVar35 = (float)NEON_fmadd((float)(ulong)(uVar27 & 0x7fffffff),0x3540a8c1,0xc43f2770);
      fVar26 = fVar29;
      if (fVar29 <= fVar35 * 0.5) {
        fVar26 = fVar35 * 0.5;
      }
      fVar35 = fVar41;
      if (fVar41 <= fVar26) {
        fVar35 = fVar26;
      }
      *(float *)((long)pfVar24 + lVar13) = fVar35;
      if ((long)uVar25 >> 1 <= lVar18 + 2) break;
      fVar26 = pfVar24[lVar18 + 2];
      fVar29 = fVar29 + -8.0;
      lVar13 = lVar13 + 4;
      lVar18 = lVar18 + 2;
    }
  }
  uVar27 = 0;
  lVar13 = 0;
  do {
    uVar3 = *(uint *)(param_4 + lVar13 * 0x18 + 4);
    uVar25 = (ulong)(int)uVar3;
    if ((int)uVar3 < 1) {
      fVar26 = 0.0;
    }
    else {
      piVar21 = (int *)(param_4 + lVar13 * 0x18);
      lVar18 = (long)*piVar21;
      lVar22 = *(long *)(piVar21 + 2);
      if (uVar3 < 8) {
        fVar26 = 0.0;
        uVar23 = 0;
      }
      else {
        uVar23 = uVar25 & 0xfffffffffffffff8;
        fVar26 = 0.0;
        puVar9 = (undefined8 *)(&stack0xffffffffffffffa0 + lVar18 * 4 + lVar8);
        puVar10 = (undefined8 *)(lVar22 + 0x10);
        uVar12 = uVar23;
        do {
          uVar12 = uVar12 - 8;
          fVar26 = fVar26 + (float)puVar9[-2] * (float)puVar10[-2] +
                   (float)((ulong)puVar9[-2] >> 0x20) * (float)((ulong)puVar10[-2] >> 0x20) +
                   (float)puVar9[-1] * (float)puVar10[-1] +
                   (float)((ulong)puVar9[-1] >> 0x20) * (float)((ulong)puVar10[-1] >> 0x20) +
                   (float)*puVar9 * (float)*puVar10 +
                   (float)((ulong)*puVar9 >> 0x20) * (float)((ulong)*puVar10 >> 0x20) +
                   (float)puVar9[1] * (float)puVar10[1] +
                   (float)((ulong)puVar9[1] >> 0x20) * (float)((ulong)puVar10[1] >> 0x20);
          puVar9 = puVar9 + 4;
          puVar10 = puVar10 + 4;
        } while (uVar12 != 0);
        if (uVar23 == uVar25) goto LAB_00e07ff0;
      }
      lVar17 = uVar25 - uVar23;
      puVar19 = (undefined4 *)(lVar22 + uVar23 * 4);
      pfVar11 = pfVar24 + uVar23 + lVar18;
      do {
        lVar17 = lVar17 + -1;
        fVar26 = (float)NEON_fmadd(*pfVar11,*puVar19,fVar26);
        puVar19 = puVar19 + 1;
        pfVar11 = pfVar11 + 1;
      } while (lVar17 != 0);
    }
LAB_00e07ff0:
    lVar18 = param_5 + lVar13 * 0x90;
    piVar21 = (int *)(lVar18 + 0x44);
    iVar1 = *piVar21;
    iVar20 = 0x10;
    if (0 < iVar1) {
      iVar20 = -1;
    }
    fVar26 = fVar26 * *(float *)(param_4 + lVar13 * 0x18 + 0x10);
    iVar20 = iVar20 + iVar1;
    fVar41 = *(float *)(lVar18 + (long)iVar20 * 4);
    fVar29 = fVar41;
    if (fVar41 <= fVar26) {
      fVar29 = fVar26;
    }
    if (fVar26 <= fVar41) {
      fVar41 = fVar26;
    }
    if (uVar4 == 0) {
      fVar35 = 99999.0;
      fVar38 = -99999.0;
    }
    else {
      uVar25 = (ulong)uVar4;
      fVar39 = 99999.0;
      fVar40 = -99999.0;
      do {
        iVar2 = 0x10;
        if (0 < iVar20) {
          iVar2 = -1;
        }
        iVar20 = iVar2 + iVar20;
        fVar35 = *(float *)(param_5 + lVar13 * 0x90 + (long)iVar20 * 4);
        fVar38 = fVar35;
        if (fVar35 <= fVar40) {
          fVar38 = fVar40;
        }
        if (fVar39 <= fVar35) {
          fVar35 = fVar39;
        }
        uVar25 = uVar25 - 1;
        fVar39 = fVar35;
        fVar40 = fVar38;
      } while (uVar25 != 0);
    }
    lVar22 = lVar13 * 0x90;
    lVar18 = param_2 + lVar13 * 4;
    lVar13 = lVar13 + 1;
    *(float *)(param_5 + lVar22 + (long)iVar1 * 4) = fVar26;
    iVar20 = 0;
    if (iVar1 < 0x10) {
      iVar20 = iVar1 + 1;
    }
    fVar26 = *(float *)(lVar18 + 4);
    fVar39 = *(float *)(lVar18 + 0x20);
    *piVar21 = iVar20;
    uVar3 = uVar27 | 5;
    if (fVar29 - fVar38 <= fVar28 + fVar26) {
      uVar3 = uVar27;
    }
    uVar27 = uVar3 | 2;
    if (fVar39 - fVar28 <= fVar41 - fVar35) {
      uVar27 = uVar3;
    }
    if (lVar13 == 7) {
      if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar27);
      }
      return;
    }
  } while( true );
}


