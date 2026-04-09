// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveSetup
// Entry Point: 009b74bc
// Size: 2144 bytes
// Signature: undefined __thiscall solveSetup(Bt2RaycastVehicle * this, Bt2World * param_1, btAlignedObjectArray * param_2, btContactSolverInfo * param_3)


/* Bt2RaycastVehicle::solveSetup(Bt2World*, btAlignedObjectArray<btSolverBody>&, btContactSolverInfo
   const&) */

void __thiscall
Bt2RaycastVehicle::solveSetup
          (Bt2RaycastVehicle *this,Bt2World *param_1,btAlignedObjectArray *param_2,
          btContactSolverInfo *param_3)

{
  Bt2WheelInfo *pBVar1;
  long lVar2;
  float *pfVar3;
  undefined4 *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
  btRigidBody *pbVar13;
  btRigidBody *pbVar14;
  undefined4 *puVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  undefined auVar41 [16];
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  undefined4 local_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  float fStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  long local_b0;
  
  auVar41._8_8_ = param_1;
  auVar41._0_8_ = this;
  lVar6 = tpidr_el0;
  local_b0 = *(long *)(lVar6 + 0x28);
  if (*(int *)(*(long *)(this + 8) + 0xec) == 2) goto LAB_009b7cb4;
  uVar5 = *(uint *)(this + 0x3c);
  fVar29 = *(float *)(param_3 + 0xc);
  if ((int)uVar5 < 1) {
    fVar22 = 0.0;
  }
  else {
    fVar22 = 0.0;
    lVar10 = 0;
    lVar7 = *(long *)(this + 0x48);
    do {
      fVar16 = *(float *)(lVar7 + lVar10 + 0x188);
      if (0.0 <= fVar16) {
        fVar22 = (float)NEON_fmadd(*(undefined4 *)(lVar7 + lVar10 + 0x140),fVar16,fVar22);
      }
      lVar10 = lVar10 + 0x1a0;
    } while ((ulong)uVar5 * 0x1a0 - lVar10 != 0);
    if (0 < (int)uVar5) {
      lVar10 = 0;
      lVar11 = 0xf0;
      do {
        lVar9 = *(long *)(this + 0x88);
        pBVar1 = (Bt2WheelInfo *)(lVar7 + lVar10);
        lVar2 = lVar9 + lVar11;
        *(undefined8 *)(lVar2 + -0xe0) = 0;
        *(undefined4 *)(lVar2 + -0xd8) = 0x3e800000;
        *(undefined8 *)(lVar2 + -0x70) = 0;
        *(undefined4 *)(lVar2 + -0x5c) = 0;
        fVar16 = *(float *)(pBVar1 + 0x170);
        fVar18 = fVar29 * fVar16;
        if (0.0 <= *(float *)(pBVar1 + 0x188)) {
          fVar20 = *(float *)(pBVar1 + 0x140);
        }
        else {
          fVar20 = (float)NEON_fmadd(*(undefined4 *)(pBVar1 + 0x178),fVar18,
                                     *(undefined4 *)(pBVar1 + 0x140));
        }
        pfVar8 = (float *)(lVar7 + lVar10);
        pfVar3 = (float *)(lVar9 + lVar11);
        fVar18 = (float)NEON_fmadd(pfVar8[0x4f],fVar18,0x3f800000);
        pfVar8[0x50] = fVar20 / fVar18;
        pfVar3[3] = 0.0;
        pfVar3[0x1b] = 0.0;
        pfVar8[99] = pfVar8[0x35] + pfVar8[0x37];
        pfVar3[-0x34] = 0.0;
        pfVar3[-0x35] = fVar16 * fVar29 * pfVar8[0x5f];
        pbVar13 = *(btRigidBody **)(pfVar8 + 8);
        if (pbVar13 != (btRigidBody *)0x0) {
          pbVar14 = *(btRigidBody **)(this + (ulong)(uint)pfVar8[0x60] * 8 + 8);
          puVar15 = (undefined4 *)
                    (*(long *)(param_2 + 0x10) + (long)*(int *)(pbVar14 + 0xe8) * 0xf8);
          puVar4 = (undefined4 *)
                   (*(long *)(param_2 + 0x10) + (ulong)*(uint *)(pbVar13 + 0xe8) * 0xf8);
          if ((int)*(uint *)(pbVar13 + 0xe8) < 0) {
            puVar4 = &s_staticSolverBody;
          }
          *(undefined4 **)(pfVar3 + -0x3c) = puVar15;
          *(undefined4 **)(pfVar3 + -0x3a) = puVar4;
          fVar20 = pfVar8[0x29];
          fVar16 = pfVar8[0x2a];
          uVar17 = NEON_fmadd(*puVar15,fVar20,(float)puVar15[1] * fVar16);
          fVar18 = pfVar8[0x2b];
          uVar21 = NEON_fmadd(puVar15[4],fVar20,fVar16 * (float)puVar15[5]);
          uVar19 = NEON_fmadd(puVar15[8],fVar20,fVar16 * (float)puVar15[9]);
          local_b4 = 0;
          local_c0 = NEON_fmadd(puVar15[2],fVar18,uVar17);
          fStack_bc = (float)NEON_fmadd(puVar15[6],fVar18,uVar21);
          local_b8 = NEON_fmadd(puVar15[10],fVar18,uVar19);
          uVar17 = *puVar15;
          fVar16 = (float)puVar15[1];
          uVar19 = puVar15[4];
          fVar18 = (float)puVar15[5];
          uVar28 = puVar15[8];
          fVar30 = (float)puVar15[9];
          fVar31 = pfVar8[0x4c];
          fVar27 = pfVar8[0x44];
          fVar34 = pfVar8[0x4b];
          fVar20 = pfVar8[0x43];
          uVar23 = puVar15[2];
          uVar33 = NEON_fmadd(uVar17,fVar34,fVar16 * fVar31);
          uVar36 = NEON_fmadd(uVar19,fVar34,fVar31 * fVar18);
          uVar32 = NEON_fmadd(uVar28,fVar34,fVar31 * fVar30);
          uVar24 = puVar15[6];
          uVar25 = puVar15[10];
          uVar37 = NEON_fmadd(fVar20,uVar19,fVar27 * fVar18);
          fVar34 = pfVar8[0x4d];
          uVar40 = NEON_fmadd(fVar20,uVar17,fVar27 * fVar16);
          fVar31 = pfVar8[0x45];
          uVar21 = NEON_fmadd(fVar20,uVar28,fVar27 * fVar30);
          local_d0 = NEON_fmadd(uVar23,fVar34,uVar33);
          uStack_cc = NEON_fmadd(uVar24,fVar34,uVar36);
          local_c8 = NEON_fmadd(uVar25,fVar34,uVar32);
          fVar38 = (float)NEON_fmadd(fVar31,uVar24,uVar37);
          fVar27 = (float)NEON_fmadd(fVar31,uVar23,uVar40);
          fVar39 = pfVar8[0x47];
          fVar20 = (float)NEON_fmadd(fVar31,uVar25,uVar21);
          fVar35 = pfVar8[0x48];
          fVar26 = pfVar8[0x49];
          local_c4 = 0;
          pfVar12 = pfVar8 + 4;
          fVar34 = (float)NEON_fmadd(uVar17,fVar39,fVar16 * fVar35);
          fVar31 = (float)NEON_fmadd(uVar19,fVar39,fVar18 * fVar35);
          uVar17 = NEON_fmadd(*pfVar12 - (fVar27 + (float)puVar15[0xc]),local_c0,
                              fStack_bc * (pfVar8[5] - (fVar38 + (float)puVar15[0xd])));
          fVar20 = (float)NEON_fmadd(pfVar8[6] - (fVar20 + (float)puVar15[0xe]),local_b8,uVar17);
          fVar27 = (float)NEON_fmadd(uVar28,fVar39,fVar30 * fVar35);
          uVar17 = NEON_fmadd(uVar25,fVar26,fVar27);
          fVar20 = fVar20 - pfVar8[0x38];
          fVar18 = pfVar8[0x35] + pfVar8[0x37];
          fVar16 = pfVar8[0x35] - pfVar8[0x36];
          if (fVar20 <= fVar18) {
            fVar18 = fVar20;
          }
          uVar19 = NEON_fmadd(uVar23,fVar26,fVar34);
          if (fVar16 <= fVar20) {
            fVar16 = fVar18;
          }
          uVar21 = NEON_fmadd(uVar24,fVar26,fVar31);
          pfVar8[99] = fVar16;
          initWheelSuspSolverConstraint
                    (this,(SuspSolverConstraintInfo *)(lVar2 + -0xcc),(btVector3 *)&local_c0,
                     (btVector3 *)&local_d0,fVar20,pBVar1,pbVar14,pbVar13,(btSolverBody *)puVar15,
                     (btSolverBody *)puVar4,param_3);
          fVar16 = (float)NEON_fnmadd(uVar23,fVar26,-fVar34);
          fVar18 = (float)NEON_fnmadd(uVar25,fVar26,-fVar27);
          fVar20 = (float)NEON_fnmadd(uVar24,fVar26,-fVar31);
          local_d4 = 0;
          fStack_dc = (float)NEON_fmadd(uVar17,*pfVar8,pfVar8[2] * fVar16);
          local_e0 = (float)NEON_fmadd(uVar21,pfVar8[2],pfVar8[1] * fVar18);
          local_d8 = (float)NEON_fmadd(uVar19,pfVar8[1],*pfVar8 * fVar20);
          uVar17 = NEON_fmadd(local_e0,local_e0,fStack_dc * fStack_dc);
          fVar16 = (float)NEON_fmadd(local_d8,local_d8,uVar17);
          fVar16 = 1.0 / SQRT(fVar16);
          local_e0 = local_e0 * fVar16;
          fStack_dc = fStack_dc * fVar16;
          local_d8 = local_d8 * fVar16;
          local_e4 = 0;
          fStack_ec = (float)NEON_fmadd(pfVar8[2],local_e0,local_d8 * -*pfVar8);
          local_f0 = (float)NEON_fmadd(pfVar8[1],local_d8,fStack_dc * -pfVar8[2]);
          local_e8 = (float)NEON_fmadd(*pfVar8,fStack_dc,local_e0 * -pfVar8[1]);
          uVar17 = NEON_fmadd(local_f0,local_f0,fStack_ec * fStack_ec);
          fVar16 = (float)NEON_fmadd(local_e8,local_e8,uVar17);
          fVar16 = 1.0 / SQRT(fVar16);
          local_f0 = local_f0 * fVar16;
          fStack_ec = fStack_ec * fVar16;
          local_e8 = local_e8 * fVar16;
          initWheelSolverConstraintBase
                    (this,(SolverConstraintInfo *)(pfVar3 + -0x14),(btVector3 *)&local_f0,
                     (btVector3 *)pfVar12,(btVector3 *)&local_d0,pbVar14,pbVar13,
                     (btSolverBody *)puVar15,(btSolverBody *)puVar4,&fStack_f4,&local_f8,&fStack_fc,
                     &local_100);
          fVar18 = fStack_fc;
          fVar16 = local_100;
          pfVar3[2] = 0.0;
          fVar20 = 1.0 / (fStack_f4 + local_f8);
          fVar31 = fStack_fc - local_100;
          *pfVar3 = fVar20;
          pfVar3[1] = (local_100 - fStack_fc) * fVar20;
          initWheelSolverConstraintBase
                    (this,(SolverConstraintInfo *)(pfVar3 + 4),(btVector3 *)&local_e0,
                     (btVector3 *)pfVar12,(btVector3 *)&local_d0,pbVar14,pbVar13,
                     (btSolverBody *)puVar15,(btSolverBody *)puVar4,&fStack_f4,&local_f8,&fStack_fc,
                     &local_100);
          fVar20 = *(float *)(pBVar1 + 0x170);
          fVar27 = pfVar8[0x38];
          pfVar3[0x1a] = 0.0;
          fVar20 = 1.0 / (fVar27 * fVar20 * fVar27 + fStack_f4 + local_f8);
          pfVar3[0x1c] = 1.0 / (fStack_f4 + local_f8);
          fVar27 = ABS(fVar18 - fVar16);
          pfVar3[0x18] = fVar20;
          fVar18 = ABS(fStack_fc - local_100);
          pfVar3[0x19] = (local_100 - fStack_fc) * fVar20;
          fVar16 = pfVar8[0x50] * pfVar8[0x38];
          if (fStack_fc - local_100 < 0.0) {
            fVar16 = -(pfVar8[0x50] * pfVar8[0x38]);
          }
          if (fVar18 * 570.0 <= fVar27) {
            fVar20 = 570.0;
            if (fVar31 < 0.0) {
              fVar20 = -570.0;
            }
          }
          else {
            fVar20 = fVar31 / fVar18;
          }
          *(float *)(lVar2 + -0xe0) = fVar20;
          if (fVar16 <= fVar18) {
            fVar31 = 1.0;
            if (fVar18 - fVar16 < fVar18) {
              fVar31 = (fVar18 - fVar16) / fVar18;
            }
          }
          else {
            fVar31 = 1.0;
            if (fVar16 - fVar18 < fVar16) {
              fVar31 = (fVar16 - fVar18) / fVar16;
            }
          }
          *(float *)(lVar2 + -0xdc) = fVar31;
          if (0.2 <= fVar18) {
            if (fVar27 < 0.05) {
              fVar16 = 0.36;
              if (fVar20 < 0.0) {
                fVar16 = -0.36;
              }
              uVar17 = NEON_fmadd(fVar27 / 0.05,fVar20 - fVar16,fVar16);
              goto LAB_009b7b1c;
            }
          }
          else {
            fVar16 = 0.2;
            if (fVar31 < 0.0) {
              fVar16 = -0.2;
            }
            fVar34 = 0.36;
            if (fVar20 < 0.0) {
              fVar34 = -0.36;
            }
            uVar17 = NEON_fmadd(fVar18 / 0.2,fVar31 - fVar16,fVar16);
            *(undefined4 *)(lVar2 + -0xdc) = uVar17;
            uVar17 = NEON_fmadd(fVar18 / 0.2,fVar20 - fVar34,fVar34);
LAB_009b7b1c:
            *(undefined4 *)(lVar2 + -0xe0) = uVar17;
          }
          if (fVar18 < fVar27) {
            fVar18 = fVar27;
          }
          if (fVar18 < 0.05) {
            uVar17 = NEON_fmadd(fVar18 / -0.05,0x3f266666,0x3f666666);
            *(undefined4 *)(lVar2 + -0xd8) = uVar17;
          }
        }
        if ((ulong)uVar5 * 0x1a0 + -0x1a0 == lVar10) break;
        lVar7 = *(long *)(this + 0x48);
        lVar10 = lVar10 + 0x1a0;
        lVar11 = lVar11 + 0x168;
      } while( true );
    }
  }
  pfVar8 = *(float **)(this + 0x130);
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  fVar16 = *(float *)(this + 200);
  if (*pfVar8 <= fVar16) {
    uVar5 = *(uint *)(this + 0x128);
    if (1 < uVar5) {
      lVar10 = 0;
      do {
        fVar18 = *(float *)((long)pfVar8 + lVar10 + 4);
        if (fVar16 <= fVar18) {
          fVar20 = *(float *)(*(long *)(this + 0x138) + lVar10);
          fVar18 = (float)NEON_fmadd((fVar16 - *(float *)((long)pfVar8 + lVar10)) /
                                     (fVar18 - *(float *)((long)pfVar8 + lVar10)),
                                     ((float *)(*(long *)(this + 0x138) + lVar10))[1] - fVar20,
                                     fVar20);
          goto LAB_009b7c1c;
        }
        lVar10 = lVar10 + 4;
      } while ((ulong)uVar5 * 4 + -4 != lVar10);
    }
    fVar18 = *(float *)(*(long *)(this + 0x138) + (ulong)(uVar5 - 1) * 4);
  }
  else {
    fVar18 = **(float **)(this + 0x138);
  }
LAB_009b7c1c:
  fVar20 = fVar18 - *(float *)(this + 0xc4);
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  fVar31 = *(float *)(this + 0xb4);
  fVar27 = fVar29 * *(float *)(this + 0x98) * fVar20;
  *(float *)(this + 0xc4) = fVar18 - fVar20;
  *(float *)(this + 0xcc) = fVar27;
  if (fVar31 == 0.0) {
    fVar18 = *(float *)(this + 0xa0);
    fVar20 = *(float *)(this + 0xb8);
LAB_009b7c58:
    fVar34 = 0.0;
  }
  else {
    fVar20 = *(float *)(this + 0xb8);
    fVar18 = *(float *)(this + 0xa0);
    if ((fVar20 <= ABS(fVar22)) || (fVar34 = fVar31, fVar18 <= fVar16)) goto LAB_009b7c58;
  }
  pfVar8 = (float *)(this + 0xb0);
  if (*(float *)(this + 0x120) != 0.0) {
    pfVar8 = (float *)(this + 0xac);
  }
  fVar34 = (float)NEON_fmadd(*(float *)(this + 0xa8) - *pfVar8,fVar34,*pfVar8);
  fVar34 = (float)NEON_fmadd(*(float *)(this + 0x98) * fVar34,fVar29,0x3f800000);
  *(float *)(this + 200) = fVar16 / fVar34;
  auVar41 = CVTTransmission::solveSetup
                      (fVar29,fVar27,fVar31,*(float *)(this + 0x9c),fVar18,fVar16 / fVar34,fVar16,
                       fVar22,fVar20,*(float *)(this + 0xbc),*(float *)(this + 0xa4));
LAB_009b7cb4:
  if (*(long *)(lVar6 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(auVar41._0_8_,auVar41._8_8_);
  }
  return;
}


