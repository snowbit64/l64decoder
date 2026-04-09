// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Voxelize
// Entry Point: 00eaafe8
// Size: 1772 bytes
// Signature: undefined __thiscall Voxelize(Volume * this, double * param_1, uint param_2, int * param_3, uint param_4, ulong param_5, FillMode param_6, RaycastMesh * param_7)


/* VHACD::Volume::Voxelize(double const*, unsigned int, int const*, unsigned int, unsigned long,
   VHACD::FillMode, VHACD::RaycastMesh*) */

void __thiscall
VHACD::Volume::Voxelize
          (Volume *this,double *param_1,uint param_2,int *param_3,uint param_4,ulong param_5,
          FillMode param_6,RaycastMesh *param_7)

{
  bool bVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined (*pauVar9) [16];
  ulong uVar10;
  undefined (*pauVar11) [16];
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  double *pdVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  double *pdVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  double *pdVar30;
  undefined (*pauVar31) [16];
  long *plVar32;
  double dVar33;
  undefined auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  long local_80;
  
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  if (param_2 != 0) {
    auVar34 = *(undefined (*) [16])param_1;
    dVar35 = param_1[2];
    pauVar9 = (undefined (*) [16])(this + 8);
    dVar39 = auVar34._8_8_;
    *(double *)(this + 0x10) = dVar39;
    dVar38 = auVar34._0_8_;
    *(double *)*pauVar9 = dVar38;
    pauVar11 = (undefined (*) [16])(this + 0x20);
    *(double *)(this + 0x28) = dVar39;
    *(double *)*pauVar11 = dVar38;
    pdVar16 = (double *)(this + 0x30);
    *pdVar16 = dVar35;
    pdVar20 = (double *)(this + 0x18);
    *pdVar20 = dVar35;
    dVar33 = dVar35;
    if (param_2 != 1) {
      lVar12 = (ulong)param_2 - 1;
      uVar28 = 5;
      dVar37 = dVar39;
      do {
        dVar40 = param_1[uVar28];
        dVar42 = param_1[uVar28 - 2];
        dVar41 = param_1[uVar28 - 1];
        dVar43 = auVar34._0_8_;
        pauVar31 = pauVar9;
        dVar36 = dVar42;
        if ((dVar42 < dVar38) ||
           (bVar1 = dVar43 < dVar42, pauVar31 = pauVar11, dVar36 = dVar38, dVar43 = dVar42, bVar1))
        {
          auVar34._8_8_ = 0;
          auVar34._0_8_ = dVar43;
          *(double *)*pauVar31 = dVar42;
          dVar38 = dVar36;
        }
        pdVar30 = (double *)(this + 0x10);
        dVar36 = dVar41;
        dVar43 = dVar39;
        if ((dVar41 < dVar37) ||
           (pdVar30 = (double *)(this + 0x28), dVar36 = dVar37, dVar43 = dVar41, dVar39 < dVar41)) {
          dVar39 = dVar43;
          *pdVar30 = dVar41;
          dVar37 = dVar36;
        }
        pdVar30 = pdVar20;
        dVar36 = dVar40;
        dVar43 = dVar35;
        if ((dVar40 < dVar33) ||
           (pdVar30 = pdVar16, dVar36 = dVar33, dVar43 = dVar40, dVar35 < dVar40)) {
          dVar35 = dVar43;
          *pdVar30 = dVar40;
          dVar33 = dVar36;
        }
        lVar12 = lVar12 + -1;
        uVar28 = uVar28 + 3;
      } while (lVar12 != 0);
      auVar34 = *pauVar11;
      dVar39 = *(double *)(this + 0x10);
      dVar38 = *(double *)*pauVar9;
      dVar35 = *pdVar20;
      dVar33 = *pdVar16;
    }
    dVar38 = auVar34._0_8_ - dVar38;
    dVar39 = auVar34._8_8_ - dVar39;
    dVar33 = dVar33 - dVar35;
    if (dVar39 <= dVar38 && dVar33 <= dVar38) {
      *(ulong *)(this + 0x40) = param_5;
      *(long *)(this + 0x50) = (long)((dVar33 * (double)(unkuint9)param_5) / dVar38) + 2;
      *(long *)(this + 0x48) = (long)((dVar39 * (double)(unkuint9)param_5) / dVar38) + 2;
    }
    else if (dVar38 <= dVar39 && dVar33 <= dVar39) {
      *(long *)(this + 0x40) = (long)((dVar38 * (double)(unkuint9)param_5) / dVar39) + 2;
      *(ulong *)(this + 0x48) = param_5;
      *(long *)(this + 0x50) = (long)((dVar33 * (double)(unkuint9)param_5) / dVar39) + 2;
      dVar38 = dVar39;
    }
    else {
      *(ulong *)(this + 0x50) = param_5;
      *(long *)(this + 0x48) = (long)((dVar39 * (double)(unkuint9)param_5) / dVar33) + 2;
      *(long *)(this + 0x40) = (long)((dVar38 * (double)(unkuint9)param_5) / dVar33) + 2;
      dVar38 = dVar33;
    }
    *(double *)(this + 0x38) = dVar38 / (double)(unkuint9)(param_5 - 1);
    Allocate();
    auVar34 = NEON_fmov(0x3fe0000000000000,8);
    plVar32 = (long *)(this + 0x58);
    *plVar32 = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    uStack_f8 = auVar34._8_8_;
    local_100 = auVar34._0_8_;
    local_f0 = 0x3fe0000000000000;
    if (param_4 != 0) {
      lVar12 = 0;
      uVar17 = 0;
      dVar38 = (double)(unkuint9)(param_5 - 1) / dVar38;
      do {
        dVar33 = *(double *)(this + 8);
        dVar39 = *(double *)(this + 0x10);
        piVar2 = param_3 + lVar12;
        dVar35 = *(double *)(this + 0x18);
        uVar28 = *piVar2 * 3;
        uVar6 = piVar2[1] * 3;
        uVar7 = piVar2[2] * 3;
        local_c8 = dVar38 * (param_1[uVar28] - dVar33);
        dStack_b0 = dVar38 * (param_1[uVar6] - dVar33);
        dStack_c0 = dVar38 * (param_1[uVar28 + 1] - dVar39);
        local_98 = dVar38 * (param_1[uVar7] - dVar33);
        local_a8 = dVar38 * (param_1[uVar6 + 1] - dVar39);
        dStack_a0 = dVar38 * (param_1[uVar6 + 2] - dVar35);
        local_b8 = dVar38 * (param_1[uVar28 + 2] - dVar35);
        dStack_90 = dVar38 * (param_1[uVar7 + 1] - dVar39);
        uVar10 = (ulong)(local_c8 + 0.5);
        local_88 = dVar38 * (param_1[uVar7 + 2] - dVar35);
        uVar13 = (ulong)(dStack_b0 + 0.5);
        uVar18 = (ulong)(dStack_c0 + 0.5);
        uVar23 = (ulong)(local_a8 + 0.5);
        uVar24 = (ulong)(dStack_a0 + 0.5);
        uVar26 = (ulong)(local_98 + 0.5);
        uVar21 = (ulong)(local_b8 + 0.5);
        uVar4 = uVar13;
        if (uVar10 <= uVar13) {
          uVar4 = uVar10;
        }
        if (uVar13 <= uVar10) {
          uVar13 = uVar10;
        }
        uVar14 = (ulong)(dStack_90 + 0.5);
        uVar10 = uVar23;
        if (uVar18 <= uVar23) {
          uVar10 = uVar18;
        }
        if (uVar23 <= uVar18) {
          uVar23 = uVar18;
        }
        uVar18 = (ulong)(local_88 + 0.5);
        uVar3 = uVar24;
        if (uVar21 <= uVar24) {
          uVar3 = uVar21;
        }
        if (uVar24 <= uVar21) {
          uVar24 = uVar21;
        }
        uVar21 = uVar26;
        if (uVar4 <= uVar26) {
          uVar21 = uVar4;
        }
        uVar4 = uVar14;
        if (uVar10 <= uVar14) {
          uVar4 = uVar10;
        }
        uVar10 = uVar18;
        if (uVar3 <= uVar18) {
          uVar10 = uVar3;
        }
        if (uVar26 <= uVar13) {
          uVar26 = uVar13;
        }
        if (uVar14 <= uVar23) {
          uVar14 = uVar23;
        }
        if (uVar18 <= uVar24) {
          uVar18 = uVar24;
        }
        uVar13 = 0;
        if (uVar21 != 0) {
          uVar13 = uVar21 - 1;
        }
        uVar23 = 0;
        if (uVar4 != 0) {
          uVar23 = uVar4 - 1;
        }
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar10 - 1;
        }
        uVar10 = (ulong)(uVar26 < *(ulong *)(this + 0x40));
        uVar24 = uVar26;
        if (uVar26 < *(ulong *)(this + 0x40)) {
          uVar24 = uVar26 + 1;
        }
        uVar21 = uVar14;
        if (uVar14 < *(ulong *)(this + 0x48)) {
          uVar21 = uVar14 + 1;
        }
        if (uVar18 < *(ulong *)(this + 0x50)) {
          uVar18 = uVar18 + 1;
        }
        if (uVar13 < uVar24) {
          if (uVar23 < uVar21) {
            if (uVar4 < uVar18) {
              do {
                local_e0 = (double)(unkuint9)uVar13;
                uVar26 = uVar23;
                do {
                  local_d8 = (double)(unkuint9)uVar26;
                  uVar10 = uVar4;
                  do {
                    local_d0 = (double)(unkuint9)uVar10;
                    iVar8 = TriBoxOverlap((Vec3 *)&local_e0,(Vec3 *)&local_100,(Vec3 *)&local_c8,
                                          (Vec3 *)&dStack_b0,(Vec3 *)&local_98);
                    if ((iVar8 == 1) &&
                       (lVar15 = *(long *)(this + 0x70) +
                                 *(long *)(this + 0x50) * (uVar26 + uVar13 * *(long *)(this + 0x48))
                       , *(char *)(lVar15 + uVar10) == '\0')) {
                      *(undefined *)(lVar15 + uVar10) = 4;
                      *plVar32 = *plVar32 + 1;
                    }
                    uVar10 = uVar10 + 1;
                  } while (uVar18 != uVar10);
                  uVar26 = uVar26 + 1;
                } while (uVar26 != uVar21);
                uVar13 = uVar13 + 1;
              } while (uVar13 != uVar24);
            }
            else {
              local_e0 = (double)(unkuint9)((uVar26 + uVar10) - 1);
              local_d8 = (double)(unkuint9)((uVar14 + (uVar14 < *(ulong *)(this + 0x48))) - 1);
            }
          }
          else {
            local_e0 = (double)(unkuint9)((uVar26 + uVar10) - 1);
          }
        }
        uVar17 = uVar17 + 1;
        lVar12 = lVar12 + 3;
      } while (uVar17 != param_4);
    }
    if (param_6 == 0) {
      MarkOutsideSurface(this,0,0,0,*(ulong *)(this + 0x40),*(ulong *)(this + 0x48),1);
      MarkOutsideSurface(this,0,0,*(ulong *)(this + 0x50) - 1,*(ulong *)(this + 0x40),
                         *(ulong *)(this + 0x48),*(ulong *)(this + 0x50));
      MarkOutsideSurface(this,0,0,0,*(ulong *)(this + 0x40),1,*(ulong *)(this + 0x50));
      MarkOutsideSurface(this,0,*(ulong *)(this + 0x48) - 1,0,*(ulong *)(this + 0x40),
                         *(ulong *)(this + 0x48),*(ulong *)(this + 0x50));
      MarkOutsideSurface(this,0,0,0,1,*(ulong *)(this + 0x48),*(ulong *)(this + 0x50));
      MarkOutsideSurface(this,*(ulong *)(this + 0x40) - 1,0,0,*(ulong *)(this + 0x40),
                         *(ulong *)(this + 0x48),*(ulong *)(this + 0x50));
      FillOutsideSurface();
      FillInsideSurface();
    }
    else if (param_6 == 1) {
      lVar12 = *(long *)(this + 0x40);
      if (((lVar12 != 0) && (lVar15 = *(long *)(this + 0x48), lVar15 != 0)) &&
         (lVar19 = *(long *)(this + 0x50), lVar19 != 0)) {
        lVar22 = 0;
        do {
          lVar25 = 0;
          do {
            lVar27 = 0;
            do {
              lVar29 = *(long *)(this + 0x70) +
                       *(long *)(this + 0x50) * (lVar25 + lVar22 * *(long *)(this + 0x48));
              if (*(char *)(lVar29 + lVar27) != '\x04') {
                *(undefined *)(lVar29 + lVar27) = 2;
              }
              lVar27 = lVar27 + 1;
            } while (lVar19 != lVar27);
            lVar25 = lVar25 + 1;
          } while (lVar25 != lVar15);
          lVar22 = lVar22 + 1;
        } while (lVar22 != lVar12);
      }
    }
    else if (param_6 == 2) {
      raycastFill(this,param_7);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


