// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: transform
// Entry Point: 00b61838
// Size: 260 bytes
// Signature: undefined __thiscall transform(BoundingSphere * this, Matrix4x4 * param_1)


/* BoundingSphere::transform(Matrix4x4 const&) */

void __thiscall BoundingSphere::transform(BoundingSphere *this,Matrix4x4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  fVar3 = *(float *)(this + 0x18);
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)param_1;
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar10 = *(undefined4 *)(param_1 + 0x20);
  uVar11 = *(undefined4 *)(param_1 + 0x24);
  fVar12 = *(float *)(param_1 + 0x18);
  uVar16 = *(undefined4 *)(param_1 + 8);
  uVar8 = NEON_fmadd(uVar5,0,fVar2 * fVar3);
  uVar14 = NEON_fmadd(uVar5,0,fVar2 * 0.0);
  uVar13 = NEON_fmadd(uVar4,0,fVar1 * fVar3);
  uVar18 = NEON_fmadd(uVar4,0,fVar1 * 0.0);
  uVar6 = NEON_fmadd(fVar3,uVar5,fVar2 * 0.0);
  uVar17 = NEON_fmadd(uVar16,0,fVar12 * fVar3);
  uVar20 = NEON_fmadd(uVar16,0,fVar12 * 0.0);
  uVar19 = *(undefined4 *)(param_1 + 0x28);
  fVar9 = (float)NEON_fmadd(uVar11,0,uVar8);
  fVar15 = (float)NEON_fmadd(fVar3,uVar11,uVar14);
  uVar13 = NEON_fmadd(uVar10,0,uVar13);
  uVar14 = NEON_fmadd(fVar3,uVar10,uVar18);
  uVar8 = NEON_fmadd(fVar3,uVar4,fVar1 * 0.0);
  fVar7 = (float)NEON_fmadd(uVar11,0,uVar6);
  uVar17 = NEON_fmadd(uVar19,0,uVar17);
  uVar18 = NEON_fmadd(fVar3,uVar19,uVar20);
  uVar6 = NEON_fmadd(fVar3,uVar16,fVar12 * 0.0);
  uVar8 = NEON_fmadd(uVar10,0,uVar8);
  uVar13 = NEON_fmadd(uVar13,uVar13,fVar9 * fVar9);
  uVar14 = NEON_fmadd(uVar14,uVar14,fVar15 * fVar15);
  uVar6 = NEON_fmadd(uVar19,0,uVar6);
  uVar8 = NEON_fmadd(uVar8,uVar8,fVar7 * fVar7);
  fVar9 = (float)NEON_fmadd(uVar17,uVar17,uVar13);
  fVar3 = (float)NEON_fmadd(uVar18,uVar18,uVar14);
  fVar7 = (float)NEON_fmadd(uVar6,uVar6,uVar8);
  if (fVar3 <= fVar9) {
    fVar3 = fVar9;
  }
  if (fVar3 <= fVar7) {
    fVar3 = fVar7;
  }
  uVar13 = *(undefined4 *)(this + 0xc);
  fVar7 = *(float *)(this + 0x10);
  uVar6 = NEON_fmadd(uVar13,uVar4,fVar7 * fVar1);
  uVar8 = NEON_fmadd(uVar13,uVar5,fVar7 * fVar2);
  uVar4 = NEON_fmadd(uVar13,uVar16,fVar7 * fVar12);
  uVar5 = *(undefined4 *)(this + 0x14);
  fVar12 = *(float *)(param_1 + 0x34);
  fVar1 = (float)NEON_fmadd(uVar5,uVar10,uVar6);
  fVar7 = (float)NEON_fmadd(uVar5,uVar11,uVar8);
  fVar2 = (float)NEON_fmadd(uVar5,uVar19,uVar4);
  fVar9 = *(float *)(param_1 + 0x38);
  *(float *)(this + 0xc) = fVar1 + *(float *)(param_1 + 0x30);
  *(float *)(this + 0x10) = fVar12 + fVar7;
  *(float *)(this + 0x14) = fVar9 + fVar2;
  *(float *)(this + 0x18) = SQRT(fVar3);
  return;
}


