// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeCombinedFrustumBounds
// Entry Point: 00a57a70
// Size: 1756 bytes
// Signature: undefined __thiscall computeCombinedFrustumBounds(MergedShadowGroup * this, Vector3 * param_1, Vector3 * param_2, Vector3 * param_3, Vector3 * param_4, Vector3 * param_5, float * param_6, float * param_7)


/* LightSource::MergedShadowGroup::computeCombinedFrustumBounds(Vector3 const&, Vector3 const&,
   Vector3 const&, Vector3&, Vector3&, float&, float&) const */

void __thiscall
LightSource::MergedShadowGroup::computeCombinedFrustumBounds
          (MergedShadowGroup *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,
          Vector3 *param_4,Vector3 *param_5,float *param_6,float *param_7)

{
  long lVar1;
  MergedShadowGroup *this_00;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 local_f8;
  float local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  undefined4 local_9c;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)this;
  lVar4 = *(long *)(this + 8);
  *(undefined8 *)param_4 = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_4 + 8) = 0x7f7fffff;
  *(undefined8 *)param_5 = 0xff7fffffff7fffff;
  *(undefined4 *)(param_5 + 8) = 0xff7fffff;
  uVar3 = lVar4 - lVar2;
  *param_6 = 3.402823e+38;
  *param_7 = -3.402823e+38;
  if ((int)(uVar3 >> 3) != 0) {
    lVar4 = 0;
    this_00 = this;
    while( true ) {
      this_00 = (MergedShadowGroup *)
                computeWorldFrustumCorners
                          (this_00,*(LightSource **)(lVar2 + lVar4),(Vector3 *)&local_f8);
      uVar5 = NEON_fmadd(*(undefined4 *)param_1,local_f8,*(float *)(param_1 + 4) * local_f4);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 8),local_f0,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)(param_4 + 8),uVar5);
      *(undefined4 *)(param_4 + 8) = uVar5;
      *(undefined4 *)(param_5 + 8) = *(undefined4 *)(param_5 + 8);
      uVar5 = NEON_fmadd(*(undefined4 *)param_1,local_ec,*(float *)(param_1 + 4) * local_e8);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 8),local_e4,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)(param_4 + 8),uVar5);
      *(undefined4 *)(param_4 + 8) = uVar5;
      *(undefined4 *)(param_5 + 8) = *(undefined4 *)(param_5 + 8);
      uVar5 = NEON_fmadd(*(undefined4 *)param_1,local_e0,*(float *)(param_1 + 4) * local_dc);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 8),local_d8,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)(param_4 + 8),uVar5);
      *(undefined4 *)(param_4 + 8) = uVar5;
      *(undefined4 *)(param_5 + 8) = *(undefined4 *)(param_5 + 8);
      uVar5 = NEON_fmadd(*(undefined4 *)param_1,local_d4,*(float *)(param_1 + 4) * local_d0);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 8),local_cc,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)(param_4 + 8),uVar5);
      *(undefined4 *)(param_4 + 8) = uVar5;
      *(undefined4 *)(param_5 + 8) = *(undefined4 *)(param_5 + 8);
      uVar5 = NEON_fmadd(*(undefined4 *)param_1,local_c8,*(float *)(param_1 + 4) * local_c4);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 8),local_c0,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)(param_4 + 8),uVar5);
      *(undefined4 *)(param_4 + 8) = uVar5;
      *(undefined4 *)(param_5 + 8) = *(undefined4 *)(param_5 + 8);
      uVar5 = NEON_fmadd(*(undefined4 *)param_1,local_bc,*(float *)(param_1 + 4) * local_b8);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 8),local_b4,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)(param_4 + 8),uVar5);
      *(undefined4 *)(param_4 + 8) = uVar5;
      *(undefined4 *)(param_5 + 8) = *(undefined4 *)(param_5 + 8);
      uVar5 = NEON_fmadd(*(undefined4 *)param_1,local_b0,*(float *)(param_1 + 4) * local_ac);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 8),local_a8,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)(param_4 + 8),uVar5);
      *(undefined4 *)(param_4 + 8) = uVar5;
      *(undefined4 *)(param_5 + 8) = *(undefined4 *)(param_5 + 8);
      uVar5 = NEON_fmadd(*(undefined4 *)param_1,local_a4,*(float *)(param_1 + 4) * local_a0);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 8),local_9c,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)(param_4 + 8),uVar5);
      *(undefined4 *)(param_4 + 8) = uVar5;
      *(undefined4 *)(param_5 + 8) = *(undefined4 *)(param_5 + 8);
      uVar5 = NEON_fmadd(*(undefined4 *)param_2,local_f8,*(float *)(param_2 + 4) * local_f4);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_2 + 8),local_f0,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)(param_4 + 4),uVar5);
      *(undefined4 *)(param_4 + 4) = uVar5;
      *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_5 + 4);
      uVar5 = NEON_fmadd(*(undefined4 *)param_2,local_ec,*(float *)(param_2 + 4) * local_e8);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_2 + 8),local_e4,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)(param_4 + 4),uVar5);
      *(undefined4 *)(param_4 + 4) = uVar5;
      *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_5 + 4);
      uVar5 = NEON_fmadd(*(undefined4 *)param_2,local_e0,*(float *)(param_2 + 4) * local_dc);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_2 + 8),local_d8,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)(param_4 + 4),uVar5);
      *(undefined4 *)(param_4 + 4) = uVar5;
      *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_5 + 4);
      uVar5 = NEON_fmadd(*(undefined4 *)param_2,local_d4,*(float *)(param_2 + 4) * local_d0);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_2 + 8),local_cc,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)(param_4 + 4),uVar5);
      *(undefined4 *)(param_4 + 4) = uVar5;
      *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_5 + 4);
      uVar5 = NEON_fmadd(*(undefined4 *)param_2,local_c8,*(float *)(param_2 + 4) * local_c4);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_2 + 8),local_c0,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)(param_4 + 4),uVar5);
      *(undefined4 *)(param_4 + 4) = uVar5;
      *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_5 + 4);
      uVar5 = NEON_fmadd(*(undefined4 *)param_2,local_bc,*(float *)(param_2 + 4) * local_b8);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_2 + 8),local_b4,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)(param_4 + 4),uVar5);
      *(undefined4 *)(param_4 + 4) = uVar5;
      *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_5 + 4);
      uVar5 = NEON_fmadd(*(undefined4 *)param_2,local_b0,*(float *)(param_2 + 4) * local_ac);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_2 + 8),local_a8,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)(param_4 + 4),uVar5);
      *(undefined4 *)(param_4 + 4) = uVar5;
      *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_5 + 4);
      uVar5 = NEON_fmadd(*(undefined4 *)param_2,local_a4,*(float *)(param_2 + 4) * local_a0);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_2 + 8),local_9c,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)(param_4 + 4),uVar5);
      *(undefined4 *)(param_4 + 4) = uVar5;
      *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_5 + 4);
      uVar5 = NEON_fmadd(*(undefined4 *)param_3,local_f8,*(float *)(param_3 + 4) * local_f4);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_3 + 8),local_f0,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)param_4,uVar5);
      *(undefined4 *)param_4 = uVar5;
      *(undefined4 *)param_5 = *(undefined4 *)param_5;
      uVar5 = NEON_fmadd(*(undefined4 *)param_3,local_ec,*(float *)(param_3 + 4) * local_e8);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_3 + 8),local_e4,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)param_4,uVar5);
      *(undefined4 *)param_4 = uVar5;
      *(undefined4 *)param_5 = *(undefined4 *)param_5;
      uVar5 = NEON_fmadd(*(undefined4 *)param_3,local_e0,*(float *)(param_3 + 4) * local_dc);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_3 + 8),local_d8,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)param_4,uVar5);
      *(undefined4 *)param_4 = uVar5;
      *(undefined4 *)param_5 = *(undefined4 *)param_5;
      uVar5 = NEON_fmadd(*(undefined4 *)param_3,local_d4,*(float *)(param_3 + 4) * local_d0);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_3 + 8),local_cc,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)param_4,uVar5);
      *(undefined4 *)param_4 = uVar5;
      *(undefined4 *)param_5 = *(undefined4 *)param_5;
      uVar5 = NEON_fmadd(*(undefined4 *)param_3,local_c8,*(float *)(param_3 + 4) * local_c4);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_3 + 8),local_c0,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)param_4,uVar5);
      *(undefined4 *)param_4 = uVar5;
      *(undefined4 *)param_5 = *(undefined4 *)param_5;
      uVar5 = NEON_fmadd(*(undefined4 *)param_3,local_bc,*(float *)(param_3 + 4) * local_b8);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_3 + 8),local_b4,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)param_4,uVar5);
      *(undefined4 *)param_4 = uVar5;
      *(undefined4 *)param_5 = *(undefined4 *)param_5;
      uVar5 = NEON_fmadd(*(undefined4 *)param_3,local_b0,*(float *)(param_3 + 4) * local_ac);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_3 + 8),local_a8,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)param_4,uVar5);
      *(undefined4 *)param_4 = uVar5;
      *(undefined4 *)param_5 = *(undefined4 *)param_5;
      uVar5 = NEON_fmadd(*(undefined4 *)param_3,local_a4,*(float *)(param_3 + 4) * local_a0);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_3 + 8),local_9c,uVar5);
      uVar5 = NEON_fminnm(*(undefined4 *)param_4,uVar5);
      *(undefined4 *)param_4 = uVar5;
      *(undefined4 *)param_5 = *(undefined4 *)param_5;
      uVar5 = NEON_fmadd(*(undefined4 *)param_1,local_c8,*(float *)(param_1 + 4) * local_c4);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 8),local_c0,uVar5);
      fVar6 = (float)NEON_fminnm(*param_6,uVar5);
      *param_6 = fVar6;
      *param_7 = *param_7;
      uVar5 = NEON_fmadd(*(undefined4 *)param_1,local_bc,*(float *)(param_1 + 4) * local_b8);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 8),local_b4,uVar5);
      fVar6 = (float)NEON_fminnm(*param_6,uVar5);
      *param_6 = fVar6;
      *param_7 = *param_7;
      uVar5 = NEON_fmadd(*(undefined4 *)param_1,local_b0,*(float *)(param_1 + 4) * local_ac);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 8),local_a8,uVar5);
      fVar6 = (float)NEON_fminnm(*param_6,uVar5);
      *param_6 = fVar6;
      *param_7 = *param_7;
      uVar5 = NEON_fmadd(*(undefined4 *)param_1,local_a4,*(float *)(param_1 + 4) * local_a0);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 8),local_9c,uVar5);
      fVar6 = (float)NEON_fminnm(*param_6,uVar5);
      *param_6 = fVar6;
      *param_7 = *param_7;
      if ((uVar3 >> 3 & 0xffffffff) * 8 + -8 == lVar4) break;
      lVar2 = *(long *)this;
      lVar4 = lVar4 + 8;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


