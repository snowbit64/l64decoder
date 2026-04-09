// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findClosestSplinePosition
// Entry Point: 00896474
// Size: 1032 bytes
// Signature: undefined __thiscall findClosestSplinePosition(PedestrianSystem * this, Vector3 * param_1, Vector3 * param_2, float param_3, uint * param_4, float * param_5, float * param_6)


/* PedestrianSystem::findClosestSplinePosition(Vector3 const&, Vector3 const&, float, unsigned int&,
   float&, float&) */

void __thiscall
PedestrianSystem::findClosestSplinePosition
          (PedestrianSystem *this,Vector3 *param_1,Vector3 *param_2,float param_3,uint *param_4,
          float *param_5,float *param_6)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  float *pfVar11;
  long *plVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_f8;
  uint local_f4;
  undefined4 local_f0;
  float fStack_ec;
  undefined4 local_e8;
  undefined auStack_e0 [16];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 local_c0;
  float fStack_bc;
  undefined4 local_b8;
  long local_b0;
  
  lVar5 = tpidr_el0;
  local_b0 = *(long *)(lVar5 + 0x28);
  if (*(long *)(this + 0x258d0) != *(long *)(this + 0x258d8)) {
    bVar6 = true;
    if ((*(float *)param_2 == 0.0) && (*(float *)(param_2 + 4) == 0.0)) {
      bVar6 = *(float *)(param_2 + 8) != 0.0;
    }
    lVar8 = *(long *)(this + 0x258c8);
    if (lVar8 != 0) {
      uVar4 = *(uint *)(lVar8 + 0x10) >> 1;
      if ((*(uint *)(lVar8 + 0x10) & 1) != 0) {
        uVar4 = 1;
      }
      if (uVar4 != 0) {
        fVar26 = 0.0;
        fVar14 = param_3 + 1.0;
        uVar9 = 0;
        fVar20 = 3.402823e+38;
        fVar23 = *(float *)param_1 - fVar14;
        fVar24 = *(float *)(param_1 + 8) - fVar14;
        fVar25 = fVar14 + *(float *)param_1;
        fVar14 = fVar14 + *(float *)(param_1 + 8);
        local_f8 = 0.0;
        local_f4 = 0xffffffff;
        do {
          pfVar11 = (float *)(lVar8 + (ulong)uVar9 * 0x14);
          uVar13 = (ulong)uVar9;
          fVar15 = *pfVar11;
          fVar18 = pfVar11[2];
          fVar16 = fVar23;
          if (fVar23 < fVar15) {
            fVar16 = fVar15;
          }
          fVar15 = fVar25;
          if (fVar18 < fVar25) {
            fVar15 = fVar18;
          }
          if (fVar15 < fVar16) {
LAB_0089657c:
            uVar1 = *(uint *)(lVar8 + uVar13 * 0x14 + 0x10);
            uVar2 = uVar1 >> 1;
            if ((uVar1 & 1) != 0) {
              uVar2 = 1;
            }
            uVar9 = uVar2 + uVar9;
          }
          else {
            lVar10 = lVar8 + uVar13 * 0x14;
            fVar15 = *(float *)(lVar10 + 4);
            fVar18 = *(float *)(lVar10 + 0xc);
            fVar16 = fVar24;
            if (fVar24 < fVar15) {
              fVar16 = fVar15;
            }
            fVar15 = fVar14;
            if (fVar18 < fVar14) {
              fVar15 = fVar18;
            }
            if (fVar15 < fVar16) goto LAB_0089657c;
            uVar2 = *(uint *)(lVar8 + uVar13 * 0x14 + 0x10);
            if ((uVar2 & 1) != 0) {
              lVar8 = (ulong)(uVar2 >> 1) * 4;
              uVar3 = *(ushort *)(*(long *)(this + 0x258d0) + lVar8);
              plVar12 = (long *)(this + (ulong)uVar3 * 0x80 + 0x38);
              lVar10 = *plVar12;
              RawTransformGroup::updateWorldTransformation();
              fVar16 = *(float *)(param_1 + 4) - *(float *)(lVar10 + 0xec);
              fVar15 = *(float *)param_1 - *(float *)(lVar10 + 0xe8);
              fVar18 = *(float *)(param_1 + 8) - *(float *)(lVar10 + 0xf0);
              plVar7 = *(long **)(this + (ulong)uVar3 * 0x80 + 0x48);
              uVar19 = NEON_fmadd(fVar15,*(undefined4 *)(lVar10 + 0xb8),
                                  fVar16 * *(float *)(lVar10 + 0xbc));
              uVar22 = NEON_fmadd(fVar15,*(undefined4 *)(lVar10 + 200),
                                  fVar16 * *(float *)(lVar10 + 0xcc));
              uVar17 = NEON_fmadd(fVar15,*(undefined4 *)(lVar10 + 0xd8),
                                  fVar16 * *(float *)(lVar10 + 0xdc));
              local_d0 = NEON_fmadd(fVar18,*(undefined4 *)(lVar10 + 0xc0),uVar19);
              uStack_cc = NEON_fmadd(fVar18,*(undefined4 *)(lVar10 + 0xd0),uVar22);
              local_c8 = NEON_fmadd(fVar18,*(undefined4 *)(lVar10 + 0xe0),uVar17);
              fVar16 = (float)(**(code **)(*plVar7 + 0x20))(0x3a83126f,plVar7,&local_d0,&local_c0);
              lVar10 = *plVar12;
              RawTransformGroup::updateWorldTransformation();
              uVar17 = NEON_fmadd(local_c0,*(undefined4 *)(lVar10 + 0xb8),
                                  fStack_bc * *(float *)(lVar10 + 200));
              uVar19 = NEON_fmadd(local_c0,*(undefined4 *)(lVar10 + 0xbc),
                                  fStack_bc * *(float *)(lVar10 + 0xcc));
              fVar18 = (float)NEON_fmadd(local_b8,*(undefined4 *)(lVar10 + 0xd8),uVar17);
              fVar21 = (float)NEON_fmadd(local_b8,*(undefined4 *)(lVar10 + 0xdc),uVar19);
              uVar17 = NEON_fmadd(local_c0,*(undefined4 *)(lVar10 + 0xc0),
                                  fStack_bc * *(float *)(lVar10 + 0xd0));
              fVar15 = (float)NEON_fmadd(local_b8,*(undefined4 *)(lVar10 + 0xe0),uVar17);
              fVar18 = *(float *)param_1 - (fVar18 + *(float *)(lVar10 + 0xe8));
              fVar21 = *(float *)(param_1 + 4) - (*(float *)(lVar10 + 0xec) + fVar21);
              fVar15 = *(float *)(param_1 + 8) - (*(float *)(lVar10 + 0xf0) + fVar15);
              uVar17 = NEON_fmadd(fVar21,fVar21,fVar18 * fVar18);
              fVar15 = (float)NEON_fmadd(fVar15,fVar15,uVar17);
              if (fVar15 < fVar20) {
                plVar7 = *(long **)(this + (ulong)uVar3 * 0x80 + 0x48);
                (**(code **)(*plVar7 + 0x10))(fVar16,plVar7,auStack_e0,&local_f0);
                lVar10 = *plVar12;
                RawTransformGroup::updateWorldTransformation();
                fVar26 = 0.0;
                if (bVar6) {
                  uVar19 = NEON_fmadd(local_f0,*(undefined4 *)(lVar10 + 0xbc),
                                      fStack_ec * *(float *)(lVar10 + 0xcc));
                  uVar22 = NEON_fmadd(local_f0,*(undefined4 *)(lVar10 + 0xb8),
                                      fStack_ec * *(float *)(lVar10 + 200));
                  uVar17 = NEON_fmadd(local_f0,*(undefined4 *)(lVar10 + 0xc0),
                                      fStack_ec * *(float *)(lVar10 + 0xd0));
                  fVar20 = (float)NEON_fmadd(local_e8,*(undefined4 *)(lVar10 + 0xdc),uVar19);
                  uVar19 = NEON_fmadd(local_e8,*(undefined4 *)(lVar10 + 0xd8),uVar22);
                  uVar17 = NEON_fmadd(local_e8,*(undefined4 *)(lVar10 + 0xe0),uVar17);
                  uVar19 = NEON_fmadd(uVar19,*(undefined4 *)param_2,fVar20 * *(float *)(param_2 + 4)
                                     );
                  fVar20 = (float)NEON_fmadd(uVar17,*(undefined4 *)(param_2 + 8),uVar19);
                  fVar26 = 1.0;
                  if (fVar20 <= 0.0) {
                    fVar26 = -1.0;
                  }
                }
                local_f4 = (uint)*(ushort *)(*(long *)(this + 0x258d0) + lVar8);
                fVar20 = fVar15;
                local_f8 = fVar16;
              }
            }
            uVar9 = uVar9 + 1;
          }
          if (uVar9 == uVar4) goto LAB_008967f8;
          lVar8 = *(long *)(this + 0x258c8);
        } while( true );
      }
    }
  }
  bVar6 = false;
LAB_00896838:
  if (*(long *)(lVar5 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar6);
  }
  return;
LAB_008967f8:
  bVar6 = local_f4 != 0xffffffff;
  if (bVar6) {
    *param_4 = local_f4;
    *param_5 = local_f8;
    *param_6 = fVar26;
  }
  goto LAB_00896838;
}


