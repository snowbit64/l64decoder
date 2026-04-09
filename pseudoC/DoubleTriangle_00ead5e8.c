// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DoubleTriangle
// Entry Point: 00ead5e8
// Size: 1000 bytes
// Signature: undefined DoubleTriangle(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VHACD::ICHull::DoubleTriangle() */

void VHACD::ICHull::DoubleTriangle(void)

{
  long lVar1;
  ICHull *in_x0;
  undefined8 uVar2;
  CircularListElement *pCVar3;
  ulong uVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  double local_80;
  double dStack_78;
  double local_70;
  undefined4 local_68;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pdVar5 = *(double **)(in_x0 + 8);
  in_x0[0x698] = (ICHull)0x0;
  pdVar7 = (double *)pdVar5[7];
  dVar10 = pdVar7[1];
  pdVar9 = pdVar5;
  dVar14 = pdVar5[2];
  dVar11 = pdVar7[2];
  do {
    pdVar8 = pdVar7;
    pdVar7 = (double *)pdVar8[7];
    dVar13 = dVar10 - pdVar9[1];
    dVar10 = pdVar7[1];
    dVar12 = dVar10 - pdVar9[1];
    dVar15 = pdVar7[2] - dVar14;
    dVar16 = (double)NEON_fmadd(dVar15,dVar13,dVar12 * -(dVar11 - dVar14));
    if (dVar16 != 0.0) {
LAB_00ead6c8:
      *(CircularListElement *)((long)pdVar7 + 0x31) = (CircularListElement)0x1;
      *(CircularListElement *)((long)pdVar8 + 0x31) = (CircularListElement)0x1;
      *(CircularListElement *)((long)pdVar9 + 0x31) = (CircularListElement)0x1;
      pCVar3 = (CircularListElement *)
               MakeFace(in_x0,(CircularListElement *)pdVar9,(CircularListElement *)pdVar8,
                        (CircularListElement *)pdVar7,(CircularListElement *)0x0);
      MakeFace(in_x0,(CircularListElement *)pdVar7,(CircularListElement *)pdVar8,
               (CircularListElement *)pdVar9,pCVar3);
      pdVar6 = (double *)pdVar7[7];
      *(double **)(in_x0 + 8) = pdVar6;
      dVar18 = *pdVar6;
      dVar20 = pdVar6[1];
      dVar11 = *pdVar8;
      dVar14 = pdVar8[1];
      dVar10 = pdVar7[1];
      dVar13 = pdVar7[2];
      dVar21 = pdVar6[2];
      dVar12 = pdVar8[2];
      dVar16 = *pdVar7;
      dVar17 = *pdVar9;
      dVar15 = pdVar9[1];
      dVar23 = (double)NEON_fmadd(dVar12 - dVar21,dVar16 - dVar18,
                                  (dVar13 - dVar21) * -(dVar11 - dVar18));
      dVar19 = pdVar9[2];
      uVar2 = NEON_fmadd(dVar14 - dVar20,dVar13 - dVar21,(dVar10 - dVar20) * -(dVar12 - dVar21));
      uVar22 = NEON_fmadd(dVar11 - dVar18,dVar10 - dVar20,(dVar16 - dVar18) * -(dVar14 - dVar20));
      uVar2 = NEON_fmadd(dVar17 - dVar18,uVar2,(dVar15 - dVar20) * dVar23);
      dVar18 = (double)NEON_fmadd(dVar19 - dVar21,uVar22,uVar2);
      pdVar5 = pdVar6;
      if (1e-15 <= ABS(dVar18)) goto LAB_00ead884;
      goto LAB_00ead79c;
    }
    dVar16 = *pdVar8 - *pdVar9;
    dVar17 = *pdVar7 - *pdVar9;
    dVar14 = (double)NEON_fmadd(dVar11 - dVar14,dVar17,dVar15 * -dVar16);
    if ((dVar14 != 0.0) ||
       (dVar14 = (double)NEON_fmadd(dVar16,dVar12,dVar17 * -dVar13), dVar14 != 0.0))
    goto LAB_00ead6c8;
    pdVar9 = pdVar8;
    dVar14 = dVar11;
    dVar11 = pdVar7[2];
  } while (pdVar8 != pdVar5);
  uVar2 = 1;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
  goto LAB_00ead9cc;
  while( true ) {
    dVar18 = *pdVar5;
    dVar20 = pdVar5[1];
    dVar21 = pdVar5[2];
    dVar23 = (double)NEON_fmadd(dVar12 - dVar21,dVar16 - dVar18,
                                (dVar13 - dVar21) * -(dVar11 - dVar18));
    uVar2 = NEON_fmadd(dVar14 - dVar20,dVar13 - dVar21,(dVar10 - dVar20) * -(dVar12 - dVar21));
    uVar22 = NEON_fmadd(dVar11 - dVar18,dVar10 - dVar20,(dVar16 - dVar18) * -(dVar14 - dVar20));
    uVar2 = NEON_fmadd(dVar17 - dVar18,uVar2,(dVar15 - dVar20) * dVar23);
    dVar18 = (double)NEON_fmadd(dVar19 - dVar21,uVar22,uVar2);
    if (1e-15 <= ABS(dVar18)) break;
LAB_00ead79c:
    pdVar5 = (double *)pdVar5[7];
    if (*(char *)((long)pdVar5 + 0x31) != '\0') {
      dVar18 = dVar17 + 0.0;
      dVar20 = dVar15 + 0.0;
      dVar21 = dVar19 + 0.0;
      for (pdVar5 = (double *)pdVar9[7]; pdVar5 != pdVar9; pdVar5 = (double *)pdVar5[7]) {
        dVar18 = dVar18 + *pdVar5;
        dVar20 = dVar20 + pdVar5[1];
        dVar21 = dVar21 + pdVar5[2];
      }
      dStack_78 = (double)NEON_fmadd(dVar12 - dVar19,dVar16 - dVar17,
                                     (dVar13 - dVar19) * -(dVar11 - dVar17));
      local_80 = (double)NEON_fmadd(dVar14 - dVar15,dVar13 - dVar19,
                                    (dVar10 - dVar15) * -(dVar12 - dVar19));
      local_70 = (double)NEON_fmadd(dVar11 - dVar17,dVar10 - dVar15,
                                    (dVar16 - dVar17) * -(dVar14 - dVar15));
      *(double *)(in_x0 + 0x680) = local_80;
      *(double *)(in_x0 + 0x688) = dStack_78;
      uVar2 = NEON_fmadd(local_80,local_80,dStack_78 * dStack_78);
      *(double *)(in_x0 + 0x690) = local_70;
      dVar14 = (double)NEON_fmadd(local_70,local_70,uVar2);
      dVar14 = SQRT(dVar14);
      dVar11 = (double)NEON_ucvtf(*(undefined8 *)(in_x0 + 0x10));
      if (dVar14 != 0.0) {
        local_80 = local_80 / dVar14;
        dStack_78 = dStack_78 / dVar14;
        *(double *)(in_x0 + 0x680) = local_80;
        local_70 = local_70 / dVar14;
        *(double *)(in_x0 + 0x688) = dStack_78;
        *(double *)(in_x0 + 0x690) = local_70;
      }
      local_80 = dVar18 / dVar11 + local_80;
      dStack_78 = dVar20 / dVar11 + dStack_78;
      local_70 = dVar21 / dVar11 + local_70;
      *(double **)(in_x0 + 8) = pdVar7;
      uVar4 = AddPoints(in_x0,(Vec3 *)&local_80,1);
      if ((uVar4 & 1) != 0) {
        *(undefined4 *)(*(long *)(in_x0 + 8) + 0x18) = 0x7fffffff;
      }
      uVar2 = 0;
      in_x0[0x698] = (ICHull)0x1;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
      goto LAB_00ead9cc;
    }
  }
  if (pdVar5 != pdVar6) {
    TMMVertex::TMMVertex((TMMVertex *)&local_80);
    local_68 = *(undefined4 *)(pdVar5 + 3);
    pdVar7 = *(double **)(in_x0 + 8);
    dStack_78 = pdVar5[1];
    local_80 = *pdVar5;
    local_70 = pdVar5[2];
    *(undefined4 *)(pdVar5 + 3) = *(undefined4 *)(pdVar7 + 3);
    *pdVar5 = *pdVar7;
    pdVar5[1] = pdVar7[1];
    pdVar5[2] = pdVar7[2];
    *pdVar7 = local_80;
    *(undefined4 *)(pdVar7 + 3) = local_68;
    pdVar7[1] = dStack_78;
    pdVar7[2] = local_70;
    TMMVertex::~TMMVertex((TMMVertex *)&local_80);
  }
LAB_00ead884:
  uVar2 = 0;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00ead9cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


