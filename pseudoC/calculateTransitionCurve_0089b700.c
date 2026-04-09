// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateTransitionCurve
// Entry Point: 0089b700
// Size: 1848 bytes
// Signature: undefined calculateTransitionCurve(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SimulatedPedestrian::calculateTransitionCurve() */

void SimulatedPedestrian::calculateTransitionCurve(void)

{
  long lVar1;
  long in_x0;
  long *plVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulong uVar16;
  float fVar17;
  ulong uVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_d8;
  float fStack_d4;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(*(long *)(in_x0 + 0x78) + 0x10);
  (**(code **)(*plVar2 + 0x10))
            (**(undefined4 **)(in_x0 + 200),plVar2,(Vector3 *)(in_x0 + 0xd8),&local_98);
  plVar2 = *(long **)(*(long *)(in_x0 + 0x78) + 0x10);
  (**(code **)(*plVar2 + 0x10))
            (*(undefined4 *)(*(long *)(in_x0 + 200) + 4),plVar2,(Vector3 *)(in_x0 + 0xe4),&local_a8)
  ;
  lVar3 = **(long **)(in_x0 + 0x78);
  RawTransformGroup::updateWorldTransformation();
  uVar8 = *(undefined4 *)(in_x0 + 0xd8);
  fVar5 = *(float *)(in_x0 + 0xdc);
  uVar12 = *(undefined4 *)(in_x0 + 0xe0);
  uVar6 = NEON_fmadd(uVar8,*(undefined4 *)(lVar3 + 0xb8),fVar5 * *(float *)(lVar3 + 200));
  fVar7 = (float)NEON_fmadd(uVar12,*(undefined4 *)(lVar3 + 0xd8),uVar6);
  *(float *)(in_x0 + 0xd8) = *(float *)(lVar3 + 0xe8) + fVar7;
  uVar6 = NEON_fmadd(uVar8,*(undefined4 *)(lVar3 + 0xbc),fVar5 * *(float *)(lVar3 + 0xcc));
  fVar7 = (float)NEON_fmadd(uVar12,*(undefined4 *)(lVar3 + 0xdc),uVar6);
  *(float *)(in_x0 + 0xdc) = *(float *)(lVar3 + 0xec) + fVar7;
  uVar6 = NEON_fmadd(uVar8,*(undefined4 *)(lVar3 + 0xc0),fVar5 * *(float *)(lVar3 + 0xd0));
  fVar5 = (float)NEON_fmadd(uVar12,*(undefined4 *)(lVar3 + 0xe0),uVar6);
  *(float *)(in_x0 + 0xe0) = *(float *)(lVar3 + 0xf0) + fVar5;
  lVar3 = **(long **)(in_x0 + 0x78);
  RawTransformGroup::updateWorldTransformation();
  uVar8 = *(undefined4 *)(in_x0 + 0xe4);
  fVar5 = *(float *)(in_x0 + 0xe8);
  uVar12 = *(undefined4 *)(in_x0 + 0xec);
  uVar6 = NEON_fmadd(uVar8,*(undefined4 *)(lVar3 + 0xb8),fVar5 * *(float *)(lVar3 + 200));
  fVar7 = (float)NEON_fmadd(uVar12,*(undefined4 *)(lVar3 + 0xd8),uVar6);
  *(float *)(in_x0 + 0xe4) = *(float *)(lVar3 + 0xe8) + fVar7;
  uVar6 = NEON_fmadd(uVar8,*(undefined4 *)(lVar3 + 0xbc),fVar5 * *(float *)(lVar3 + 0xcc));
  fVar7 = (float)NEON_fmadd(uVar12,*(undefined4 *)(lVar3 + 0xdc),uVar6);
  *(float *)(in_x0 + 0xe8) = *(float *)(lVar3 + 0xec) + fVar7;
  uVar6 = NEON_fmadd(uVar8,*(undefined4 *)(lVar3 + 0xc0),fVar5 * *(float *)(lVar3 + 0xd0));
  fVar5 = (float)NEON_fmadd(uVar12,*(undefined4 *)(lVar3 + 0xe0),uVar6);
  *(float *)(in_x0 + 0xec) = *(float *)(lVar3 + 0xf0) + fVar5;
  lVar3 = **(long **)(in_x0 + 0x78);
  RawTransformGroup::updateWorldTransformation();
  fVar5 = (float)((ulong)*(undefined8 *)(lVar3 + 0xb8) >> 0x20) * (float)local_98;
  uVar6 = NEON_fmadd((float)local_98,*(undefined4 *)(lVar3 + 0xc0),
                     local_98._4_4_ * *(float *)(lVar3 + 0xd0));
  local_98._0_4_ =
       (float)*(undefined8 *)(lVar3 + 200) * local_98._4_4_ +
       (float)*(undefined8 *)(lVar3 + 0xb8) * (float)local_98 +
       (float)*(undefined8 *)(lVar3 + 0xd8) * local_90;
  local_98._4_4_ =
       (float)((ulong)*(undefined8 *)(lVar3 + 200) >> 0x20) * local_98._4_4_ + fVar5 +
       (float)((ulong)*(undefined8 *)(lVar3 + 0xd8) >> 0x20) * local_90;
  local_90 = (float)NEON_fmadd(local_90,*(undefined4 *)(lVar3 + 0xe0),uVar6);
  lVar3 = **(long **)(in_x0 + 0x78);
  RawTransformGroup::updateWorldTransformation();
  uVar8 = NEON_fmadd((float)local_98,(float)local_98,local_98._4_4_ * local_98._4_4_);
  uVar6 = NEON_fmadd((float)local_a8,*(undefined4 *)(lVar3 + 0xc0),
                     local_a8._4_4_ * *(float *)(lVar3 + 0xd0));
  fVar19 = (float)NEON_fmadd(local_90,local_90,uVar8);
  fVar5 = (float)*(undefined8 *)(lVar3 + 200) * local_a8._4_4_ +
          (float)*(undefined8 *)(lVar3 + 0xb8) * (float)local_a8 +
          (float)*(undefined8 *)(lVar3 + 0xd8) * local_a0;
  fVar7 = (float)((ulong)*(undefined8 *)(lVar3 + 200) >> 0x20) * local_a8._4_4_ +
          (float)((ulong)*(undefined8 *)(lVar3 + 0xb8) >> 0x20) * (float)local_a8 +
          (float)((ulong)*(undefined8 *)(lVar3 + 0xd8) >> 0x20) * local_a0;
  local_a0 = (float)NEON_fmadd(local_a0,*(undefined4 *)(lVar3 + 0xe0),uVar6);
  fVar9 = 1.0;
  fVar17 = 1.0;
  if (1e-06 < fVar19) {
    fVar17 = 1.0 / SQRT(fVar19);
  }
  local_90 = local_90 * fVar17;
  local_98 = CONCAT44(local_98._4_4_ * fVar17,(float)local_98 * fVar17);
  fVar17 = (float)NEON_fmadd(local_a0,local_a0,fVar7 * fVar7 + fVar5 * fVar5);
  if (1e-06 < fVar17) {
    fVar9 = 1.0 / SQRT(fVar17);
  }
  local_a8 = CONCAT44(fVar7 * fVar9,fVar5 * fVar9);
  local_a0 = local_a0 * fVar9;
  plVar2 = *(long **)(*(long *)(*(long *)(in_x0 + 200) + 0x10) + 0x10);
  (**(code **)(*plVar2 + 0x10))
            (*(undefined4 *)(*(long *)(in_x0 + 200) + 0x18),plVar2,(Vector3 *)(in_x0 + 0xf0),
             &local_b8);
  plVar2 = *(long **)(*(long *)(*(long *)(in_x0 + 200) + 0x10) + 0x10);
  (**(code **)(*plVar2 + 0x10))
            (*(undefined4 *)(*(long *)(in_x0 + 200) + 0x1c),plVar2,(Vector3 *)(in_x0 + 0xfc),
             &local_c8);
  lVar3 = **(long **)(*(long *)(in_x0 + 200) + 0x10);
  RawTransformGroup::updateWorldTransformation();
  uVar8 = *(undefined4 *)(in_x0 + 0xf0);
  fVar5 = *(float *)(in_x0 + 0xf4);
  uVar12 = *(undefined4 *)(in_x0 + 0xf8);
  uVar6 = NEON_fmadd(uVar8,*(undefined4 *)(lVar3 + 0xb8),fVar5 * *(float *)(lVar3 + 200));
  fVar7 = (float)NEON_fmadd(uVar12,*(undefined4 *)(lVar3 + 0xd8),uVar6);
  *(float *)(in_x0 + 0xf0) = *(float *)(lVar3 + 0xe8) + fVar7;
  uVar6 = NEON_fmadd(uVar8,*(undefined4 *)(lVar3 + 0xbc),fVar5 * *(float *)(lVar3 + 0xcc));
  fVar7 = (float)NEON_fmadd(uVar12,*(undefined4 *)(lVar3 + 0xdc),uVar6);
  *(float *)(in_x0 + 0xf4) = *(float *)(lVar3 + 0xec) + fVar7;
  uVar6 = NEON_fmadd(uVar8,*(undefined4 *)(lVar3 + 0xc0),fVar5 * *(float *)(lVar3 + 0xd0));
  fVar5 = (float)NEON_fmadd(uVar12,*(undefined4 *)(lVar3 + 0xe0),uVar6);
  *(float *)(in_x0 + 0xf8) = *(float *)(lVar3 + 0xf0) + fVar5;
  lVar3 = **(long **)(*(long *)(in_x0 + 200) + 0x10);
  RawTransformGroup::updateWorldTransformation();
  uVar8 = *(undefined4 *)(in_x0 + 0xfc);
  fVar5 = *(float *)(in_x0 + 0x100);
  uVar12 = *(undefined4 *)(in_x0 + 0x104);
  uVar6 = NEON_fmadd(uVar8,*(undefined4 *)(lVar3 + 0xb8),fVar5 * *(float *)(lVar3 + 200));
  fVar7 = (float)NEON_fmadd(uVar12,*(undefined4 *)(lVar3 + 0xd8),uVar6);
  *(float *)(in_x0 + 0xfc) = *(float *)(lVar3 + 0xe8) + fVar7;
  uVar6 = NEON_fmadd(uVar8,*(undefined4 *)(lVar3 + 0xbc),fVar5 * *(float *)(lVar3 + 0xcc));
  fVar7 = (float)NEON_fmadd(uVar12,*(undefined4 *)(lVar3 + 0xdc),uVar6);
  *(float *)(in_x0 + 0x100) = *(float *)(lVar3 + 0xec) + fVar7;
  uVar6 = NEON_fmadd(uVar8,*(undefined4 *)(lVar3 + 0xc0),fVar5 * *(float *)(lVar3 + 0xd0));
  fVar5 = (float)NEON_fmadd(uVar12,*(undefined4 *)(lVar3 + 0xe0),uVar6);
  *(float *)(in_x0 + 0x104) = *(float *)(lVar3 + 0xf0) + fVar5;
  lVar3 = **(long **)(*(long *)(in_x0 + 200) + 0x10);
  RawTransformGroup::updateWorldTransformation();
  fVar5 = (float)((ulong)*(undefined8 *)(lVar3 + 0xb8) >> 0x20) * (float)local_b8;
  uVar6 = NEON_fmadd((float)local_b8,*(undefined4 *)(lVar3 + 0xc0),
                     local_b8._4_4_ * *(float *)(lVar3 + 0xd0));
  local_b8._0_4_ =
       (float)*(undefined8 *)(lVar3 + 200) * local_b8._4_4_ +
       (float)*(undefined8 *)(lVar3 + 0xb8) * (float)local_b8 +
       (float)*(undefined8 *)(lVar3 + 0xd8) * local_b0;
  local_b8._4_4_ =
       (float)((ulong)*(undefined8 *)(lVar3 + 200) >> 0x20) * local_b8._4_4_ + fVar5 +
       (float)((ulong)*(undefined8 *)(lVar3 + 0xd8) >> 0x20) * local_b0;
  local_b0 = (float)NEON_fmadd(local_b0,*(undefined4 *)(lVar3 + 0xe0),uVar6);
  lVar3 = **(long **)(*(long *)(in_x0 + 200) + 0x10);
  RawTransformGroup::updateWorldTransformation();
  uVar8 = NEON_fmadd((float)local_b8,(float)local_b8,local_b8._4_4_ * local_b8._4_4_);
  uVar6 = NEON_fmadd((float)local_c8,*(undefined4 *)(lVar3 + 0xc0),
                     local_c8._4_4_ * *(float *)(lVar3 + 0xd0));
  fVar17 = (float)NEON_fmadd(local_b0,local_b0,uVar8);
  fVar5 = (float)*(undefined8 *)(lVar3 + 200) * local_c8._4_4_ +
          (float)*(undefined8 *)(lVar3 + 0xb8) * (float)local_c8 +
          (float)*(undefined8 *)(lVar3 + 0xd8) * local_c0;
  fVar7 = (float)((ulong)*(undefined8 *)(lVar3 + 200) >> 0x20) * local_c8._4_4_ +
          (float)((ulong)*(undefined8 *)(lVar3 + 0xb8) >> 0x20) * (float)local_c8 +
          (float)((ulong)*(undefined8 *)(lVar3 + 0xd8) >> 0x20) * local_c0;
  local_c0 = (float)NEON_fmadd(local_c0,*(undefined4 *)(lVar3 + 0xe0),uVar6);
  fVar19 = 1.0;
  fVar9 = 1.0;
  if (1e-06 < fVar17) {
    fVar9 = 1.0 / SQRT(fVar17);
  }
  fVar17 = (float)local_b8 * fVar9;
  local_b0 = local_b0 * fVar9;
  local_b8 = CONCAT44(local_b8._4_4_ * fVar9,fVar17);
  fVar9 = (float)NEON_fmadd(local_c0,local_c0,fVar7 * fVar7 + fVar5 * fVar5);
  if (1e-06 < fVar9) {
    fVar19 = 1.0 / SQRT(fVar9);
  }
  uVar16 = *(ulong *)(in_x0 + 0xd8);
  fVar10 = *(float *)(in_x0 + 0xe0);
  local_c0 = local_c0 * fVar19;
  fVar13 = *(float *)(in_x0 + 0xfc);
  lVar3 = *(long *)(in_x0 + 200);
  fVar21 = (float)*(undefined8 *)(in_x0 + 0x100);
  fVar24 = (float)((ulong)*(undefined8 *)(in_x0 + 0x100) >> 0x20);
  fVar9 = (float)(uVar16 >> 0x20);
  fVar25 = fVar24 + ((float)((ulong)*(undefined8 *)(in_x0 + 0xf4) >> 0x20) - fVar24) * 0.5;
  *(ulong *)(in_x0 + 0xf4) =
       CONCAT44(fVar25,fVar21 + ((float)*(undefined8 *)(in_x0 + 0xf4) - fVar21) * 0.5);
  uVar20 = CONCAT44(fVar9 + ((float)((ulong)*(undefined8 *)(in_x0 + 0xe4) >> 0x20) - fVar9) * 0.5,
                    (float)uVar16 + ((float)*(undefined8 *)(in_x0 + 0xe4) - (float)uVar16) * 0.5);
  fVar21 = fVar10 + ((float)*(undefined8 *)(in_x0 + 0xec) - fVar10) * 0.5;
  fVar22 = fVar13 + ((float)((ulong)*(undefined8 *)(in_x0 + 0xec) >> 0x20) - fVar13) * 0.5;
  uVar18 = CONCAT44(fVar7 * fVar19,fVar5 * fVar19);
  *(ulong *)(in_x0 + 0xec) = CONCAT44(fVar22,fVar21);
  *(ulong *)(in_x0 + 0xe4) = uVar20;
  local_c8 = uVar18;
  if ((*(long *)(lVar3 + 0x10) == *(long *)(in_x0 + 0x78)) &&
     (*(float *)(lVar3 + 4) == *(float *)(lVar3 + 0x18))) {
    fVar7 = *(float *)(in_x0 + 0xa0);
    fVar5 = -1.5;
    if (fVar7 <= 0.0) {
      fVar5 = 1.5;
    }
    fVar5 = fVar7 + fVar5;
  }
  else {
    fVar5 = *(float *)(*(long *)(lVar3 + 0x10) + 0x1c);
    fVar5 = (float)MathUtil::getRandomMinMax(-fVar5,fVar5);
    fVar10 = *(float *)(in_x0 + 0xe0);
    uVar20 = (ulong)*(uint *)(in_x0 + 0xe4);
    fVar21 = *(float *)(in_x0 + 0xec);
    fVar22 = *(float *)(in_x0 + 0xf0);
    fVar25 = *(float *)(in_x0 + 0xf8);
    fVar13 = *(float *)(in_x0 + 0xfc);
    uVar16 = (ulong)*(uint *)(in_x0 + 0xd8);
    fVar9 = *(float *)(in_x0 + 0xdc);
    fVar7 = *(float *)(in_x0 + 0xa0);
    uVar18 = local_c8 & 0xffffffff;
    fVar24 = *(float *)(in_x0 + 0x104);
    fVar17 = (float)local_b8;
  }
  fVar19 = 0.1;
  *(float *)(in_x0 + 0xd0) = fVar5;
  fVar23 = (float)NEON_fmadd(local_90,fVar7,(int)uVar16);
  fVar10 = (float)NEON_fmsub((float)local_98,fVar7,fVar10);
  uVar12 = NEON_fmadd(local_b0,fVar5,fVar22);
  uVar11 = NEON_fmadd(local_a0,fVar7,(int)uVar20);
  uVar8 = NEON_fmsub(fVar17,fVar5,fVar25);
  uVar15 = NEON_fmsub((float)local_a8,fVar7,fVar21);
  uVar14 = NEON_fmadd(local_c0,fVar5,fVar13);
  uVar6 = NEON_fmsub((int)uVar18,fVar5,fVar24);
  fVar5 = 0.0;
  iVar4 = 10;
  *(float *)(in_x0 + 0xd8) = fVar23;
  *(float *)(in_x0 + 0xe0) = fVar10;
  *(undefined4 *)(in_x0 + 0xe4) = uVar11;
  *(undefined4 *)(in_x0 + 0xec) = uVar15;
  *(undefined4 *)(in_x0 + 0xf0) = uVar12;
  *(undefined4 *)(in_x0 + 0xf8) = uVar8;
  *(undefined4 *)(in_x0 + 0xfc) = uVar14;
  *(undefined4 *)(in_x0 + 0x104) = uVar6;
  do {
    CubicBezierUtil::getPosition
              (fVar19,(Vector3 *)(in_x0 + 0xd8),(Vector3 *)(in_x0 + 0xe4),(Vector3 *)(in_x0 + 0xf0),
               (Vector3 *)(in_x0 + 0xfc),(Vector3 *)&local_d8);
    iVar4 = iVar4 + -1;
    uVar6 = NEON_fmadd(fVar9 - fStack_d4,fVar9 - fStack_d4,(fVar23 - local_d8) * (fVar23 - local_d8)
                      );
    fVar7 = (float)NEON_fmadd(fVar10 - local_d0,fVar10 - local_d0,uVar6);
    fVar19 = fVar19 + 0.1;
    fVar5 = fVar5 + SQRT(fVar7);
    fVar9 = fStack_d4;
    fVar23 = local_d8;
    fVar10 = local_d0;
  } while (iVar4 != 0);
  *(float *)(in_x0 + 0xd4) =
       (*(float *)(*(long *)(in_x0 + 200) + 0xc) + *(float *)(*(long *)(in_x0 + 200) + 0x24)) /
       fVar5;
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


