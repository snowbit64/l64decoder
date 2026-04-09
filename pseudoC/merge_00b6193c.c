// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: merge
// Entry Point: 00b6193c
// Size: 480 bytes
// Signature: undefined __thiscall merge(BoundingSphere * this, BoundingVolume * param_1, Matrix4x4 * param_2)


/* BoundingSphere::merge(BoundingVolume const*, Matrix4x4 const*) */

void __thiscall
BoundingSphere::merge(BoundingSphere *this,BoundingVolume *param_1,Matrix4x4 *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  
  iVar1 = BoundingVolume::getType();
  if (iVar1 != 0) {
    return;
  }
  fVar2 = *(float *)(param_1 + 0xc);
  if (param_2 == (Matrix4x4 *)0x0) {
    fVar4 = *(float *)(param_1 + 0x10);
    fVar7 = *(float *)(param_1 + 0x14);
    fVar3 = *(float *)(param_1 + 0x18);
  }
  else {
    fVar5 = *(float *)(param_2 + 0x10);
    fVar4 = *(float *)(param_2 + 0x14);
    fVar3 = *(float *)(param_1 + 0x18);
    uVar9 = *(undefined4 *)param_2;
    uVar8 = *(undefined4 *)(param_2 + 4);
    uVar20 = *(undefined4 *)(param_2 + 0x20);
    uVar16 = *(undefined4 *)(param_2 + 0x24);
    fVar13 = *(float *)(param_2 + 0x18);
    uVar19 = *(undefined4 *)(param_2 + 8);
    uVar6 = NEON_fmadd(uVar8,0,fVar4 * fVar3);
    uVar15 = NEON_fmadd(uVar9,0,fVar5 * fVar3);
    uVar17 = NEON_fmadd(uVar8,0,fVar4 * 0.0);
    uVar21 = NEON_fmadd(uVar9,0,fVar5 * 0.0);
    uVar10 = NEON_fmadd(fVar3,uVar8,fVar4 * 0.0);
    uVar22 = *(undefined4 *)(param_2 + 0x28);
    fVar7 = (float)NEON_fmadd(uVar16,0,uVar6);
    uVar6 = NEON_fmadd(uVar20,0,uVar15);
    fVar18 = (float)NEON_fmadd(fVar3,uVar16,uVar17);
    uVar17 = NEON_fmadd(uVar19,0,fVar13 * fVar3);
    uVar23 = NEON_fmadd(uVar19,0,fVar13 * 0.0);
    uVar21 = NEON_fmadd(fVar3,uVar20,uVar21);
    fVar11 = (float)NEON_fmadd(uVar16,0,uVar10);
    uVar10 = NEON_fmadd(uVar6,uVar6,fVar7 * fVar7);
    uVar15 = NEON_fmadd(fVar3,uVar9,fVar5 * 0.0);
    uVar17 = NEON_fmadd(uVar22,0,uVar17);
    uVar23 = NEON_fmadd(fVar3,uVar22,uVar23);
    uVar21 = NEON_fmadd(uVar21,uVar21,fVar18 * fVar18);
    uVar6 = NEON_fmadd(fVar3,uVar19,fVar13 * 0.0);
    uVar15 = NEON_fmadd(uVar20,0,uVar15);
    fVar18 = (float)NEON_fmadd(uVar17,uVar17,uVar10);
    fVar3 = (float)NEON_fmadd(uVar23,uVar23,uVar21);
    uVar6 = NEON_fmadd(uVar22,0,uVar6);
    uVar10 = NEON_fmadd(uVar15,uVar15,fVar11 * fVar11);
    fVar7 = (float)NEON_fmadd(uVar6,uVar6,uVar10);
    if (fVar3 <= fVar18) {
      fVar3 = fVar18;
    }
    if (fVar3 <= fVar7) {
      fVar3 = fVar7;
    }
    fVar7 = *(float *)(param_1 + 0x10);
    uVar15 = *(undefined4 *)(param_1 + 0x14);
    fVar3 = SQRT(fVar3);
    uVar9 = NEON_fmadd(fVar2,uVar9,fVar7 * fVar5);
    uVar10 = NEON_fmadd(fVar2,uVar8,fVar7 * fVar4);
    uVar6 = NEON_fmadd(fVar2,uVar19,fVar7 * fVar13);
    fVar2 = (float)NEON_fmadd(uVar15,uVar20,uVar9);
    fVar4 = (float)NEON_fmadd(uVar15,uVar16,uVar10);
    fVar7 = (float)NEON_fmadd(uVar15,uVar22,uVar6);
    fVar2 = fVar2 + *(float *)(param_2 + 0x30);
    fVar4 = *(float *)(param_2 + 0x34) + fVar4;
    fVar7 = *(float *)(param_2 + 0x38) + fVar7;
  }
  fVar5 = *(float *)(this + 0x18);
  if (fVar5 != 0.0) {
    fVar12 = fVar5 - fVar3;
    fVar18 = *(float *)(this + 0x10) - fVar4;
    fVar11 = *(float *)(this + 0xc) - fVar2;
    fVar13 = *(float *)(this + 0x14) - fVar7;
    uVar6 = NEON_fmadd(fVar11,fVar11,fVar18 * fVar18);
    fVar14 = (float)NEON_fmadd(fVar13,fVar13,uVar6);
    if (fVar12 * fVar12 < fVar14) {
      fVar14 = SQRT(fVar14);
      fVar12 = ((fVar5 + fVar14) - fVar3) / (fVar14 + fVar14);
      *(float *)(this + 0xc) = fVar2 + fVar11 * fVar12;
      *(float *)(this + 0x10) = fVar4 + fVar18 * fVar12;
      *(float *)(this + 0x14) = fVar7 + fVar13 * fVar12;
      *(float *)(this + 0x18) = (fVar3 + fVar5 + fVar14) * 0.5;
      return;
    }
    if (0.0 <= fVar12) {
      return;
    }
  }
  *(float *)(this + 0x18) = fVar3;
  *(float *)(this + 0xc) = fVar2;
  *(float *)(this + 0x10) = fVar4;
  *(float *)(this + 0x14) = fVar7;
  return;
}


