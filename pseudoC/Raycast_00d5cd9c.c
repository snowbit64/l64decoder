// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Raycast
// Entry Point: 00d5cd9c
// Size: 920 bytes
// Signature: undefined __thiscall Raycast(RMNode * this, Vec3 * param_1, Vec3 * param_2, long * param_3, double * param_4, Vec3 * param_5, Vec3 * param_6)


/* HACD::RMNode::Raycast(HACD::Vec3<double> const&, HACD::Vec3<double> const&, long&, double&,
   HACD::Vec3<double>&, HACD::Vec3<double>&) const */

uint __thiscall
HACD::RMNode::Raycast
          (RMNode *this,Vec3 *param_1,Vec3 *param_2,long *param_3,double *param_4,Vec3 *param_5,
          Vec3 *param_6)

{
  RMNode *pRVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
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
  double local_90;
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  uVar4 = 0;
  dVar20 = (*(double *)(this + 0x38) * 0.5 + *(double *)(this + 0x20) * 0.5) -
           *(double *)(param_1 + 8);
  dVar21 = (*(double *)(this + 0x30) * 0.5 + *(double *)(this + 0x18) * 0.5) - *(double *)param_1;
  dVar24 = (*(double *)(this + 0x40) * 0.5 + *(double *)(this + 0x28) * 0.5) -
           *(double *)(param_1 + 0x10);
  uVar14 = NEON_fmadd(dVar21,dVar21,dVar20 * dVar20);
  dVar23 = (double)NEON_fmadd(dVar24,dVar24,uVar14);
  dVar15 = *(double *)(this + 0x38) - *(double *)(this + 0x20);
  dVar16 = *(double *)(this + 0x30) - *(double *)(this + 0x18);
  dVar17 = *(double *)(this + 0x40) - *(double *)(this + 0x28);
  uVar14 = NEON_fmadd(dVar16,dVar16,dVar15 * dVar15);
  dVar15 = *(double *)(param_2 + 8);
  dVar17 = (double)NEON_fmadd(dVar17,dVar17,uVar14);
  dVar16 = *(double *)param_2;
  dVar17 = dVar17 * 0.25;
  uVar14 = NEON_fmadd(dVar21,dVar16,dVar20 * dVar15);
  dVar18 = *(double *)(param_2 + 0x10);
  dVar19 = (double)NEON_fmadd(dVar24,dVar18,uVar14);
  dVar20 = dVar20 - dVar15 * dVar19;
  dVar21 = dVar21 - dVar16 * dVar19;
  dVar24 = dVar24 - dVar18 * dVar19;
  uVar14 = NEON_fmadd(dVar21,dVar21,dVar20 * dVar20);
  dVar24 = (double)NEON_fmadd(dVar24,dVar24,uVar14);
  dVar19 = SQRT(dVar23) - SQRT(dVar17);
  if (dVar23 <= dVar17) {
    dVar19 = 0.0;
  }
  if ((dVar17 < dVar24) || (*param_4 <= dVar19)) goto LAB_00d5d0f4;
  if (this[0xe8] != (RMNode)0x0) {
    lVar11 = **(long **)(this + 0xe0);
    lVar2 = (*(long **)(this + 0xe0))[1];
    local_90 = 0.0;
    if (*(long *)(this + 0xd0) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      uVar13 = 0;
      while( true ) {
        pRVar1 = this + 0x48;
        if (*(long *)(this + 0xd8) != 0x10) {
          pRVar1 = *(RMNode **)(this + 200);
        }
        lVar12 = *(long *)(pRVar1 + uVar13 * 8);
        plVar10 = (long *)(lVar11 + lVar12 * 0x18);
        pdVar7 = (double *)(lVar2 + *plVar10 * 0x18);
        pdVar8 = (double *)(lVar2 + plVar10[1] * 0x18);
        pdVar9 = (double *)(lVar2 + plVar10[2] * 0x18);
        dVar17 = *pdVar8 - *pdVar7;
        dVar19 = pdVar8[1] - pdVar7[1];
        dVar20 = pdVar9[1] - pdVar7[1];
        dVar21 = pdVar8[2] - pdVar7[2];
        dVar22 = pdVar9[2] - pdVar7[2];
        dVar24 = *pdVar9 - *pdVar7;
        dVar23 = (double)NEON_fmadd(dVar21,dVar24,dVar22 * -dVar17);
        dVar21 = (double)NEON_fmadd(dVar19,dVar22,dVar20 * -dVar21);
        dVar17 = (double)NEON_fmadd(dVar17,dVar20,dVar24 * -dVar19);
        uVar14 = NEON_fmadd(dVar16,dVar21,dVar15 * dVar23);
        dVar15 = (double)NEON_fmadd(dVar18,dVar17,uVar14);
        if (((0.0 < dVar15) &&
            (lVar6 = IntersectRayTriangle
                               (param_1,param_2,(Vec3 *)pdVar7,(Vec3 *)pdVar8,(Vec3 *)pdVar9,
                                &local_90), lVar6 == 1)) && (local_90 < *param_4)) {
          uVar14 = NEON_fmadd(dVar21,dVar21,dVar23 * dVar23);
          dVar15 = (double)NEON_fmadd(dVar17,dVar17,uVar14);
          dVar15 = SQRT(dVar15);
          if (dVar15 != 0.0) {
            dVar21 = dVar21 / dVar15;
            dVar23 = dVar23 / dVar15;
            dVar17 = dVar17 / dVar15;
          }
          uVar4 = 1;
          *(double *)param_6 = dVar21;
          *(double *)(param_6 + 8) = dVar23;
          *(double *)(param_6 + 0x10) = dVar17;
          dVar15 = *(double *)param_2;
          dVar16 = *(double *)(param_2 + 0x10);
          dVar17 = *(double *)param_1;
          dVar18 = *(double *)(param_1 + 0x10);
          *(double *)(param_5 + 8) = *(double *)(param_2 + 8) * local_90 + *(double *)(param_1 + 8);
          *(double *)param_5 = dVar15 * local_90 + dVar17;
          *(double *)(param_5 + 0x10) = local_90 * dVar16 + dVar18;
          *param_4 = local_90;
          *param_3 = lVar12;
        }
        uVar13 = uVar13 + 1;
        if (*(ulong *)(this + 0xd0) <= uVar13) break;
        dVar16 = *(double *)param_2;
        dVar15 = *(double *)(param_2 + 8);
        dVar18 = *(double *)(param_2 + 0x10);
      }
    }
    goto LAB_00d5d0f4;
  }
  if (*(long *)(this + 0x10) < 0) {
    uVar4 = 0;
    lVar11 = *(long *)(this + 8);
    uVar5 = 0;
    if (-1 < lVar11) goto LAB_00d5d0a8;
LAB_00d5d0ec:
    uVar4 = uVar5;
    uVar5 = 0;
  }
  else {
    uVar4 = Raycast((RMNode *)
                    (*(long *)(*(long *)(this + 0xe0) + 0x20) + *(long *)(this + 0x10) * 0xf0),
                    param_1,param_2,param_3,param_4,param_5,param_6);
    lVar11 = *(long *)(this + 8);
    uVar5 = uVar4;
    if (lVar11 < 0) goto LAB_00d5d0ec;
LAB_00d5d0a8:
    uVar5 = Raycast((RMNode *)(*(long *)(*(long *)(this + 0xe0) + 0x20) + lVar11 * 0xf0),param_1,
                    param_2,param_3,param_4,param_5,param_6);
  }
  uVar4 = uVar4 | uVar5;
LAB_00d5d0f4:
  if (*(long *)(lVar3 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 & 1;
}


