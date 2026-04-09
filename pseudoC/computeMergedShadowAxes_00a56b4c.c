// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeMergedShadowAxes
// Entry Point: 00a56b4c
// Size: 792 bytes
// Signature: undefined __thiscall computeMergedShadowAxes(MergedShadowGroup * this, Vector3 * param_1, Vector3 * param_2, Vector3 * param_3)


/* LightSource::MergedShadowGroup::computeMergedShadowAxes(Vector3&, Vector3&, Vector3&) const */

void __thiscall
LightSource::MergedShadowGroup::computeMergedShadowAxes
          (MergedShadowGroup *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined8 *)param_3 = 0;
  lVar3 = *(long *)this;
  uVar2 = *(long *)(this + 8) - lVar3;
  uVar4 = uVar2 >> 3;
  if ((int)uVar4 != 0) {
    lVar5 = 0;
    while( true ) {
      lVar3 = *(long *)(lVar3 + lVar5);
      RawTransformGroup::updateWorldTransformation();
      Vector4::set((Vector4 *)&local_88,0.0,0.0,1.0,0.0);
      fVar18 = (float)*(undefined8 *)(lVar3 + 200) * fStack_84;
      fVar19 = (float)((ulong)*(undefined8 *)(lVar3 + 200) >> 0x20) * fStack_84;
      fVar6 = (float)*(undefined8 *)(lVar3 + 0xb8) * local_88;
      fVar9 = (float)((ulong)*(undefined8 *)(lVar3 + 0xb8) >> 0x20) * local_88;
      uVar12 = NEON_fmadd(local_88,*(undefined4 *)(lVar3 + 0xc0),
                          fStack_84 * *(float *)(lVar3 + 0xd0));
      fVar7 = (float)*(undefined8 *)(lVar3 + 0xd8) * local_80;
      fVar10 = (float)((ulong)*(undefined8 *)(lVar3 + 0xd8) >> 0x20) * local_80;
      uVar12 = NEON_fmadd(local_80,*(undefined4 *)(lVar3 + 0xe0),uVar12);
      fVar8 = (float)*(undefined8 *)(lVar3 + 0xe8) * fStack_7c;
      fVar11 = (float)((ulong)*(undefined8 *)(lVar3 + 0xe8) >> 0x20) * fStack_7c;
      fVar20 = (float)NEON_fmadd(fStack_7c,*(undefined4 *)(lVar3 + 0xf0),uVar12);
      Vector4::set((Vector4 *)&local_88,0.0,1.0,0.0,0.0);
      uVar13 = *(undefined8 *)(lVar3 + 200);
      uVar17 = *(undefined8 *)(lVar3 + 0xb8);
      uVar14 = *(undefined8 *)(lVar3 + 0xd8);
      uVar12 = NEON_fmadd(local_88,*(undefined4 *)(lVar3 + 0xc0),
                          fStack_84 * *(float *)(lVar3 + 0xd0));
      uVar12 = NEON_fmadd(local_80,*(undefined4 *)(lVar3 + 0xe0),uVar12);
      uVar15 = *(undefined8 *)(lVar3 + 0xe8);
      uVar16 = *(undefined4 *)(lVar3 + 0xf0);
      *(ulong *)param_1 =
           CONCAT44(fVar19 + fVar9 + fVar10 + fVar11 +
                    (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                    fVar18 + fVar6 + fVar7 + fVar8 + (float)*(undefined8 *)param_1);
      *(float *)(param_1 + 8) = fVar20 + *(float *)(param_1 + 8);
      fVar6 = (float)NEON_fmadd(fStack_7c,uVar16,uVar12);
      *(ulong *)param_3 =
           CONCAT44((float)((ulong)uVar13 >> 0x20) * fStack_84 +
                    (float)((ulong)uVar17 >> 0x20) * local_88 +
                    (float)((ulong)uVar14 >> 0x20) * local_80 +
                    (float)((ulong)uVar15 >> 0x20) * fStack_7c +
                    (float)((ulong)*(undefined8 *)param_3 >> 0x20),
                    (float)uVar13 * fStack_84 + (float)uVar17 * local_88 + (float)uVar14 * local_80
                    + (float)uVar15 * fStack_7c + (float)*(undefined8 *)param_3);
      *(float *)(param_3 + 8) = fVar6 + *(float *)(param_3 + 8);
      if ((uVar2 >> 3 & 0xffffffff) * 8 + -8 == lVar5) break;
      lVar3 = *(long *)this;
      lVar5 = lVar5 + 8;
    }
  }
  fVar11 = 1.0;
  fVar7 = -1.0 / (float)(uVar4 & 0xffffffff);
  fVar8 = (float)*(undefined8 *)param_1 * fVar7;
  fVar9 = (float)((ulong)*(undefined8 *)param_1 >> 0x20) * fVar7;
  fVar10 = *(float *)(param_1 + 8) * fVar7;
  fVar18 = (float)NEON_fmadd(fVar10,fVar10,fVar9 * fVar9 + fVar8 * fVar8);
  fVar6 = 1.0;
  if (1e-06 < fVar18) {
    fVar11 = 1.0 / SQRT(fVar18);
  }
  *(ulong *)param_1 = CONCAT44(fVar9 * fVar11,fVar8 * fVar11);
  *(float *)(param_1 + 8) = fVar10 * fVar11;
  fVar8 = *(float *)(param_3 + 4) * fVar7;
  fVar9 = *(float *)param_3 * fVar7;
  fVar7 = *(float *)(param_3 + 8) * fVar7;
  uVar12 = NEON_fmadd(fVar9,fVar9,fVar8 * fVar8);
  fVar10 = (float)NEON_fmadd(fVar7,fVar7,uVar12);
  if (1e-06 < fVar10) {
    fVar6 = 1.0 / SQRT(fVar10);
  }
  *(float *)param_3 = fVar9 * fVar6;
  *(float *)(param_3 + 4) = fVar8 * fVar6;
  *(float *)(param_3 + 8) = fVar7 * fVar6;
  fVar6 = (float)NEON_fmadd(fVar8 * fVar6,*(undefined4 *)(param_1 + 8),
                            *(float *)(param_1 + 4) * -(fVar7 * fVar6));
  *(float *)param_2 = fVar6;
  fVar7 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 8),*(undefined4 *)param_1,
                            *(float *)(param_1 + 8) * -*(float *)param_3);
  *(float *)(param_2 + 4) = fVar7;
  fVar8 = (float)NEON_fmadd(*(undefined4 *)param_3,*(undefined4 *)(param_1 + 4),
                            *(float *)param_1 * -*(float *)(param_3 + 4));
  uVar12 = NEON_fmadd(fVar6,fVar6,fVar7 * fVar7);
  fVar10 = (float)NEON_fmadd(fVar8,fVar8,uVar12);
  fVar9 = 1.0;
  if (1e-06 < fVar10) {
    fVar9 = 1.0 / SQRT(fVar10);
  }
  *(float *)(param_2 + 8) = fVar9 * -fVar8;
  *(ulong *)param_2 = CONCAT44(-fVar7 * fVar9,-fVar6 * fVar9);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


