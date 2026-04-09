// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findClosestSplinePosition
// Entry Point: 0071a87c
// Size: 980 bytes
// Signature: undefined __thiscall findClosestSplinePosition(TrafficSystem * this, Vector3 * param_1, Vector3 * param_2, float param_3, uint * param_4, float * param_5)


/* TrafficSystem::findClosestSplinePosition(Vector3 const&, Vector3 const&, float, unsigned int&,
   float&) */

void __thiscall
TrafficSystem::findClosestSplinePosition
          (TrafficSystem *this,Vector3 *param_1,Vector3 *param_2,float param_3,uint *param_4,
          float *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  float fVar10;
  float *pfVar11;
  ulong uVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
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
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  if (*(long *)(this + 0x71b8) != *(long *)(this + 0x71c0)) {
    bVar5 = true;
    if ((*(float *)param_2 == 0.0) && (*(float *)(param_2 + 4) == 0.0)) {
      bVar5 = *(float *)(param_2 + 8) != 0.0;
    }
    lVar7 = *(long *)(this + 0x71b0);
    if (lVar7 != 0) {
      uVar3 = *(uint *)(lVar7 + 0x10) >> 1;
      if ((*(uint *)(lVar7 + 0x10) & 1) != 0) {
        uVar3 = 1;
      }
      if (uVar3 != 0) {
        fVar22 = 0.0;
        uVar8 = 0;
        fVar14 = param_3 + 1.0;
        local_f4 = 0xffffffff;
        fVar23 = *(float *)param_1 - fVar14;
        fVar24 = *(float *)(param_1 + 8) - fVar14;
        fVar25 = fVar14 + *(float *)param_1;
        fVar14 = fVar14 + *(float *)(param_1 + 8);
        fVar10 = 3.402823e+38;
        do {
          pfVar11 = (float *)(lVar7 + (ulong)uVar8 * 0x14);
          uVar12 = (ulong)uVar8;
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
LAB_0071a960:
            uVar1 = *(uint *)(lVar7 + uVar12 * 0x14 + 0x10);
            uVar2 = uVar1 >> 1;
            if ((uVar1 & 1) != 0) {
              uVar2 = 1;
            }
            uVar8 = uVar2 + uVar8;
          }
          else {
            lVar9 = lVar7 + uVar12 * 0x14;
            fVar15 = *(float *)(lVar9 + 4);
            fVar18 = *(float *)(lVar9 + 0xc);
            fVar16 = fVar24;
            if (fVar24 < fVar15) {
              fVar16 = fVar15;
            }
            fVar15 = fVar14;
            if (fVar18 < fVar14) {
              fVar15 = fVar18;
            }
            if (fVar15 < fVar16) goto LAB_0071a960;
            uVar2 = *(uint *)(lVar7 + uVar12 * 0x14 + 0x10);
            if ((uVar2 & 1) != 0) {
              lVar9 = (ulong)(uVar2 >> 1) * 4;
              plVar13 = (long *)(*(long *)(this + 0x4ca0) +
                                (ulong)*(ushort *)(*(long *)(this + 0x71b8) + lVar9) * 0x88);
              lVar7 = *plVar13;
              RawTransformGroup::updateWorldTransformation();
              fVar16 = *(float *)(param_1 + 4) - *(float *)(lVar7 + 0xec);
              fVar15 = *(float *)param_1 - *(float *)(lVar7 + 0xe8);
              fVar18 = *(float *)(param_1 + 8) - *(float *)(lVar7 + 0xf0);
              uVar19 = NEON_fmadd(fVar15,*(undefined4 *)(lVar7 + 0xb8),
                                  fVar16 * *(float *)(lVar7 + 0xbc));
              uVar21 = NEON_fmadd(fVar15,*(undefined4 *)(lVar7 + 200),
                                  fVar16 * *(float *)(lVar7 + 0xcc));
              uVar17 = NEON_fmadd(fVar15,*(undefined4 *)(lVar7 + 0xd8),
                                  fVar16 * *(float *)(lVar7 + 0xdc));
              local_d0 = NEON_fmadd(fVar18,*(undefined4 *)(lVar7 + 0xc0),uVar19);
              uStack_cc = NEON_fmadd(fVar18,*(undefined4 *)(lVar7 + 0xd0),uVar21);
              local_c8 = NEON_fmadd(fVar18,*(undefined4 *)(lVar7 + 0xe0),uVar17);
              plVar6 = (long *)plVar13[1];
              fVar16 = (float)(**(code **)(*plVar6 + 0x20))(0x3a83126f,plVar6,&local_d0,&local_c0);
              lVar7 = *plVar13;
              RawTransformGroup::updateWorldTransformation();
              uVar17 = NEON_fmadd(local_c0,*(undefined4 *)(lVar7 + 0xb8),
                                  fStack_bc * *(float *)(lVar7 + 200));
              uVar19 = NEON_fmadd(local_c0,*(undefined4 *)(lVar7 + 0xbc),
                                  fStack_bc * *(float *)(lVar7 + 0xcc));
              fVar18 = (float)NEON_fmadd(local_b8,*(undefined4 *)(lVar7 + 0xd8),uVar17);
              fVar20 = (float)NEON_fmadd(local_b8,*(undefined4 *)(lVar7 + 0xdc),uVar19);
              uVar17 = NEON_fmadd(local_c0,*(undefined4 *)(lVar7 + 0xc0),
                                  fStack_bc * *(float *)(lVar7 + 0xd0));
              fVar15 = (float)NEON_fmadd(local_b8,*(undefined4 *)(lVar7 + 0xe0),uVar17);
              fVar18 = *(float *)param_1 - (fVar18 + *(float *)(lVar7 + 0xe8));
              fVar20 = *(float *)(param_1 + 4) - (*(float *)(lVar7 + 0xec) + fVar20);
              fVar15 = *(float *)(param_1 + 8) - (*(float *)(lVar7 + 0xf0) + fVar15);
              uVar17 = NEON_fmadd(fVar20,fVar20,fVar18 * fVar18);
              fVar15 = (float)NEON_fmadd(fVar15,fVar15,uVar17);
              if (fVar15 < fVar10) {
                plVar6 = (long *)plVar13[1];
                (**(code **)(*plVar6 + 0x10))(fVar16,plVar6,auStack_e0,&local_f0);
                lVar7 = *plVar13;
                RawTransformGroup::updateWorldTransformation();
                if (bVar5) {
                  uVar19 = NEON_fmadd(local_f0,*(undefined4 *)(lVar7 + 0xbc),
                                      fStack_ec * *(float *)(lVar7 + 0xcc));
                  uVar21 = NEON_fmadd(local_f0,*(undefined4 *)(lVar7 + 0xb8),
                                      fStack_ec * *(float *)(lVar7 + 200));
                  uVar17 = NEON_fmadd(local_f0,*(undefined4 *)(lVar7 + 0xc0),
                                      fStack_ec * *(float *)(lVar7 + 0xd0));
                  fVar18 = (float)NEON_fmadd(local_e8,*(undefined4 *)(lVar7 + 0xdc),uVar19);
                  uVar19 = NEON_fmadd(local_e8,*(undefined4 *)(lVar7 + 0xd8),uVar21);
                  uVar17 = NEON_fmadd(local_e8,*(undefined4 *)(lVar7 + 0xe0),uVar17);
                  uVar19 = NEON_fmadd(uVar19,*(undefined4 *)param_2,fVar18 * *(float *)(param_2 + 4)
                                     );
                  fVar18 = (float)NEON_fmadd(uVar17,*(undefined4 *)(param_2 + 8),uVar19);
                  if (fVar18 <= 0.0) goto LAB_0071abcc;
                }
                local_f4 = (uint)*(ushort *)(*(long *)(this + 0x71b8) + lVar9);
                fVar10 = fVar15;
                fVar22 = fVar16;
              }
            }
LAB_0071abcc:
            uVar8 = uVar8 + 1;
          }
          if (uVar8 == uVar3) goto LAB_0071abd8;
          lVar7 = *(long *)(this + 0x71b0);
        } while( true );
      }
    }
  }
  bVar5 = false;
LAB_0071ac0c:
  if (*(long *)(lVar4 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar5);
  }
  return;
LAB_0071abd8:
  bVar5 = local_f4 != 0xffffffff;
  if (bVar5) {
    *param_4 = local_f4;
    *param_5 = fVar22;
  }
  goto LAB_0071ac0c;
}


