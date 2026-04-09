// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: transform
// Entry Point: 00b5ba98
// Size: 260 bytes
// Signature: undefined __thiscall transform(Plane * this, Matrix4x4 * param_1)


/* Plane::transform(Matrix4x4 const&) */

void __thiscall Plane::transform(Plane *this,Matrix4x4 *param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar3 = *(float *)this;
  fVar1 = *(float *)(this + 4);
  fVar8 = *(float *)(this + 8);
  uVar2 = NEON_fmadd(fVar3,*(undefined4 *)(param_1 + 4),fVar1 * *(float *)(param_1 + 0x14));
  uVar6 = NEON_fmadd(fVar3,*(undefined4 *)param_1,fVar1 * *(float *)(param_1 + 0x10));
  fVar4 = (float)NEON_fmadd(fVar8,*(undefined4 *)(param_1 + 0x24),uVar2);
  fVar5 = (float)NEON_fmadd(fVar8,*(undefined4 *)(param_1 + 0x20),uVar6);
  uVar2 = NEON_fmadd(fVar3,*(undefined4 *)(param_1 + 8),fVar1 * *(float *)(param_1 + 0x18));
  fVar11 = -*(float *)(this + 0xc);
  fVar7 = (float)NEON_fmadd(fVar8,*(undefined4 *)(param_1 + 0x28),uVar2);
  uVar2 = NEON_fmadd(fVar5,fVar5,fVar4 * fVar4);
  fVar9 = (float)NEON_fmadd(fVar7,fVar7,uVar2);
  fVar3 = fVar3 * fVar11;
  fVar1 = fVar1 * fVar11;
  fVar8 = fVar8 * fVar11;
  fVar11 = 1.0;
  if (1e-06 < fVar9) {
    fVar11 = 1.0 / SQRT(fVar9);
  }
  *(float *)this = fVar5 * fVar11;
  *(float *)(this + 4) = fVar4 * fVar11;
  *(float *)(this + 8) = fVar7 * fVar11;
  uVar2 = NEON_fmadd(fVar3,*(undefined4 *)(param_1 + 4),fVar1 * *(float *)(param_1 + 0x14));
  uVar6 = NEON_fmadd(fVar3,*(undefined4 *)param_1,fVar1 * *(float *)(param_1 + 0x10));
  fVar9 = (float)NEON_fmadd(fVar8,*(undefined4 *)(param_1 + 0x24),uVar2);
  fVar10 = (float)NEON_fmadd(fVar8,*(undefined4 *)(param_1 + 0x20),uVar6);
  uVar2 = NEON_fmadd(fVar3,*(undefined4 *)(param_1 + 8),fVar1 * *(float *)(param_1 + 0x18));
  fVar1 = (float)NEON_fmadd(fVar8,*(undefined4 *)(param_1 + 0x28),uVar2);
  fVar8 = (float)NEON_fmadd(fVar5 * fVar11,*(float *)(param_1 + 0x30) + fVar10,
                            (*(float *)(param_1 + 0x34) + fVar9) * fVar4 * fVar11);
  uVar2 = NEON_fnmadd(fVar7 * fVar11,*(float *)(param_1 + 0x38) + fVar1,-fVar8);
  *(undefined4 *)(this + 0xc) = uVar2;
  return;
}


