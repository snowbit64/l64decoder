// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TriBoxOverlap
// Entry Point: 00ec97e8
// Size: 1024 bytes
// Signature: undefined __cdecl TriBoxOverlap(Vec3 * param_1, Vec3 * param_2, Vec3 * param_3, Vec3 * param_4, Vec3 * param_5)


/* VHACD::TriBoxOverlap(VHACD::Vec3<double> const&, VHACD::Vec3<double> const&, VHACD::Vec3<double>
   const&, VHACD::Vec3<double> const&, VHACD::Vec3<double> const&) */

void VHACD::TriBoxOverlap(Vec3 *param_1,Vec3 *param_2,Vec3 *param_3,Vec3 *param_4,Vec3 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
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
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  double local_70;
  double dStack_68;
  double local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  dVar8 = *(double *)(param_1 + 8);
  dVar6 = *(double *)(param_1 + 0x10);
  dVar12 = *(double *)(param_4 + 8) - dVar8;
  dStack_68 = *(double *)(param_3 + 8) - dVar8;
  dVar7 = *(double *)(param_4 + 0x10) - dVar6;
  local_60 = *(double *)(param_3 + 0x10) - dVar6;
  dVar6 = *(double *)(param_5 + 0x10) - dVar6;
  dVar3 = dVar12 - dStack_68;
  dVar15 = ABS(dVar12 - dStack_68);
  dVar16 = *(double *)param_1;
  dVar5 = dVar7 - local_60;
  dVar8 = *(double *)(param_5 + 8) - dVar8;
  dVar14 = ABS(dVar7 - local_60);
  dVar4 = -dVar3;
  dVar10 = (double)NEON_fmadd(dVar5,dStack_68,local_60 * dVar4);
  dVar17 = (double)NEON_fmadd(dVar5,dVar8,dVar6 * dVar4);
  dVar13 = *(double *)(param_2 + 8);
  dVar9 = *(double *)(param_2 + 0x10);
  dVar18 = dVar17;
  if (dVar17 <= dVar10) {
    dVar18 = dVar10;
    dVar10 = dVar17;
  }
  local_70 = *(double *)param_3 - dVar16;
  dVar20 = (double)NEON_fmadd(dVar14,dVar13,dVar15 * dVar9);
  dVar17 = (double)NEON_fnmadd(dVar14,dVar13,-(dVar15 * dVar9));
  if (dVar10 <= dVar20 && dVar17 <= dVar18) {
    uVar2 = 0;
    dVar18 = *(double *)param_4 - dVar16;
    dVar16 = *(double *)param_5 - dVar16;
    dVar20 = dVar18 - local_70;
    dVar10 = (double)NEON_fmsub(dVar5,local_70,local_60 * dVar20);
    dVar23 = (double)NEON_fmsub(dVar5,dVar16,dVar20 * dVar6);
    dVar21 = ABS(dVar18 - local_70) * dVar9;
    dVar19 = *(double *)param_2;
    dVar26 = (double)NEON_fmadd(dVar14,dVar19,dVar21);
    dVar17 = dVar23;
    if (dVar23 <= dVar10) {
      dVar17 = dVar10;
      dVar10 = dVar23;
    }
    if ((dVar10 <= dVar26) &&
       (dVar10 = (double)NEON_fnmadd(dVar14,dVar19,-dVar21), dVar10 <= dVar17)) {
      dVar17 = -dVar20;
      dVar21 = ABS(dVar18 - local_70) * dVar13;
      uVar2 = 0;
      dVar26 = (double)NEON_fmadd(dVar15,dVar19,dVar21);
      dVar23 = (double)NEON_fmadd(dVar3,dVar18,dVar12 * dVar17);
      dVar10 = (double)NEON_fmadd(dVar3,dVar16,dVar8 * dVar17);
      dVar14 = dVar23;
      if (dVar23 <= dVar10) {
        dVar14 = dVar10;
        dVar10 = dVar23;
      }
      if ((dVar10 <= dVar26) &&
         (dVar10 = (double)NEON_fnmadd(dVar15,dVar19,-dVar21), dVar10 <= dVar14)) {
        dVar21 = dVar8 - dVar12;
        dVar23 = dVar6 - dVar7;
        uVar2 = 0;
        dVar26 = ABS(dVar21);
        dVar10 = (double)NEON_fmadd(dVar23,dStack_68,local_60 * -dVar21);
        dVar27 = (double)NEON_fmadd(dVar23,dVar8,dVar6 * -dVar21);
        dVar24 = ABS(dVar23);
        dVar15 = (double)NEON_fmadd(dVar24,dVar13,dVar26 * dVar9);
        dVar14 = dVar27;
        if (dVar27 <= dVar10) {
          dVar14 = dVar10;
          dVar10 = dVar27;
        }
        if ((dVar10 <= dVar15) &&
           (dVar10 = (double)NEON_fnmadd(dVar24,dVar13,-(dVar26 * dVar9)), dVar10 <= dVar14)) {
          dVar22 = dVar16 - dVar18;
          uVar2 = 0;
          dVar10 = (double)NEON_fmsub(dVar23,local_70,local_60 * dVar22);
          dVar15 = (double)NEON_fmsub(dVar23,dVar16,dVar22 * dVar6);
          dVar28 = ABS(dVar22) * dVar9;
          dVar27 = (double)NEON_fmadd(dVar24,dVar19,dVar28);
          dVar14 = dVar15;
          if (dVar15 <= dVar10) {
            dVar14 = dVar10;
            dVar10 = dVar15;
          }
          if ((dVar10 <= dVar27) &&
             (dVar10 = (double)NEON_fnmadd(dVar24,dVar19,-dVar28), dVar10 <= dVar14)) {
            uVar2 = 0;
            dVar10 = (double)NEON_fmadd(dVar21,local_70,dStack_68 * -dVar22);
            dVar15 = (double)NEON_fmadd(dVar21,dVar18,dVar12 * -dVar22);
            dVar27 = ABS(dVar22) * dVar13;
            dVar24 = (double)NEON_fmadd(dVar26,dVar19,dVar27);
            dVar14 = dVar15;
            if (dVar15 <= dVar10) {
              dVar14 = dVar10;
              dVar10 = dVar15;
            }
            if ((dVar10 <= dVar24) &&
               (dVar10 = (double)NEON_fnmadd(dVar26,dVar19,-dVar27), dVar10 <= dVar14)) {
              dVar28 = dStack_68 - dVar8;
              dVar15 = local_60 - dVar6;
              uVar2 = 0;
              dVar27 = ABS(dVar28);
              dVar10 = (double)NEON_fmadd(dVar15,dStack_68,local_60 * -dVar28);
              dVar26 = (double)NEON_fmadd(dVar15,dVar12,dVar7 * -dVar28);
              dVar25 = ABS(dVar15);
              dVar24 = (double)NEON_fmadd(dVar25,dVar13,dVar27 * dVar9);
              dVar14 = dVar26;
              if (dVar26 <= dVar10) {
                dVar14 = dVar10;
                dVar10 = dVar26;
              }
              if ((dVar10 <= dVar24) &&
                 (dVar10 = (double)NEON_fnmadd(dVar25,dVar13,-(dVar27 * dVar9)), dVar10 <= dVar14))
              {
                dVar26 = local_70 - dVar16;
                uVar2 = 0;
                dVar10 = (double)NEON_fmsub(dVar15,local_70,local_60 * dVar26);
                dVar24 = (double)NEON_fmsub(dVar15,dVar18,dVar7 * dVar26);
                dVar15 = ABS(dVar26) * dVar9;
                dVar11 = (double)NEON_fmadd(dVar25,dVar19,dVar15);
                dVar14 = dVar24;
                if (dVar24 <= dVar10) {
                  dVar14 = dVar10;
                  dVar10 = dVar24;
                }
                if ((dVar10 <= dVar11) &&
                   (dVar10 = (double)NEON_fnmadd(dVar25,dVar19,-dVar15), dVar10 <= dVar14)) {
                  uVar2 = 0;
                  dVar15 = (double)NEON_fmadd(dVar28,dVar18,dVar12 * -dVar26);
                  dVar10 = (double)NEON_fmadd(dVar28,dVar16,dVar8 * -dVar26);
                  dVar24 = ABS(dVar26) * dVar13;
                  dVar26 = (double)NEON_fmadd(dVar27,dVar19,dVar24);
                  dVar14 = dVar15;
                  if (dVar15 <= dVar10) {
                    dVar14 = dVar10;
                    dVar10 = dVar15;
                  }
                  if ((dVar10 <= dVar26) &&
                     (dVar10 = (double)NEON_fnmadd(dVar27,dVar19,-dVar24), dVar10 <= dVar14)) {
                    uVar2 = 0;
                    dVar10 = dVar18;
                    if (local_70 <= dVar18) {
                      dVar10 = local_70;
                    }
                    if (dVar18 <= local_70) {
                      dVar18 = local_70;
                    }
                    dVar14 = dVar16;
                    if (dVar10 <= dVar16) {
                      dVar14 = dVar10;
                    }
                    if (dVar16 <= dVar18) {
                      dVar16 = dVar18;
                    }
                    if ((dVar14 <= dVar19) && (-dVar19 <= dVar16)) {
                      uVar2 = 0;
                      dVar10 = dVar12;
                      if (dStack_68 <= dVar12) {
                        dVar10 = dStack_68;
                      }
                      if (dVar12 <= dStack_68) {
                        dVar12 = dStack_68;
                      }
                      dVar18 = dVar8;
                      if (dVar10 <= dVar8) {
                        dVar18 = dVar10;
                      }
                      if (dVar8 <= dVar12) {
                        dVar8 = dVar12;
                      }
                      if ((dVar18 <= dVar13) && (-dVar13 <= dVar8)) {
                        uVar2 = 0;
                        dVar10 = dVar7;
                        if (local_60 <= dVar7) {
                          dVar10 = local_60;
                        }
                        if (dVar7 <= local_60) {
                          dVar7 = local_60;
                        }
                        dVar18 = dVar6;
                        if (dVar10 <= dVar6) {
                          dVar18 = dVar10;
                        }
                        if (dVar6 <= dVar7) {
                          dVar6 = dVar7;
                        }
                        if ((dVar18 <= dVar9) && (-dVar9 <= dVar6)) {
                          uStack_80 = NEON_fmadd(dVar5,dVar22,dVar23 * dVar17);
                          local_78 = NEON_fmadd(dVar20,dVar21,dVar22 * dVar4);
                          local_88 = NEON_fmadd(dVar3,dVar23,dVar21 * -dVar5);
                          uVar2 = PlaneBoxOverlap((Vec3 *)&local_88,(Vec3 *)&local_70,param_2);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar2 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


