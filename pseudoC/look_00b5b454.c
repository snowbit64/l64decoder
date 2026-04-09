// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: look
// Entry Point: 00b5b454
// Size: 336 bytes
// Signature: undefined __thiscall look(Matrix4x4 * this, Vector3 * param_1, Vector3 * param_2, Vector3 * param_3)


/* Matrix4x4::look(Vector3 const&, Vector3 const&, Vector3 const&) */

void __thiscall Matrix4x4::look(Matrix4x4 *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar10 = *(float *)param_2;
  fVar5 = *(float *)(param_2 + 4);
  fVar3 = *(float *)(param_2 + 8);
  fVar12 = 1.0;
  uVar1 = NEON_fmadd(fVar10,fVar10,fVar5 * fVar5);
  fVar2 = (float)NEON_fmadd(fVar3,fVar3,uVar1);
  fVar7 = 1.0;
  if (1e-06 < fVar2) {
    fVar12 = 1.0 / SQRT(fVar2);
  }
  fVar2 = fVar3 * fVar12;
  fVar4 = fVar5 * fVar12;
  fVar14 = (float)NEON_fmadd(fVar2,*(float *)param_3,*(float *)(param_3 + 8) * -(fVar10 * fVar12));
  fVar6 = fVar10 * fVar12;
  fVar11 = (float)NEON_fmadd(fVar4,*(float *)(param_3 + 8),
                             *(float *)(param_3 + 4) * -(fVar3 * fVar12));
  fVar13 = (float)NEON_fmadd(fVar6,*(float *)(param_3 + 4),*(float *)param_3 * -(fVar5 * fVar12));
  uVar1 = NEON_fmadd(fVar11,fVar11,fVar14 * fVar14);
  fVar15 = (float)NEON_fmadd(fVar13,fVar13,uVar1);
  if (1e-06 < fVar15) {
    fVar7 = 1.0 / SQRT(fVar15);
  }
  fVar16 = fVar14 * fVar7;
  *(float *)(this + 8) = -(fVar10 * fVar12);
  fVar15 = fVar13 * fVar7;
  *(float *)(this + 0x18) = -(fVar5 * fVar12);
  fVar5 = fVar11 * fVar7;
  *(float *)(this + 0x28) = -(fVar3 * fVar12);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  uVar8 = NEON_fmadd(fVar16,fVar2,fVar4 * -(fVar13 * fVar7));
  fVar10 = (float)NEON_fmadd(fVar15,fVar6,fVar2 * -(fVar11 * fVar7));
  uVar9 = NEON_fmadd(fVar5,fVar4,fVar6 * -(fVar14 * fVar7));
  *(undefined4 *)(this + 0x2c) = 0;
  *(float *)this = fVar5;
  *(undefined4 *)(this + 4) = uVar8;
  *(float *)(this + 0x10) = fVar16;
  *(float *)(this + 0x14) = fVar10;
  *(float *)(this + 0x20) = fVar15;
  *(undefined4 *)(this + 0x24) = uVar9;
  fVar3 = (float)NEON_fmadd(fVar5,*(undefined4 *)param_1,fVar16 * *(float *)(param_1 + 4));
  uVar1 = NEON_fnmadd(fVar15,*(undefined4 *)(param_1 + 8),-fVar3);
  *(undefined4 *)(this + 0x30) = uVar1;
  fVar3 = (float)NEON_fmadd(uVar8,*(undefined4 *)param_1,fVar10 * *(float *)(param_1 + 4));
  uVar1 = NEON_fnmadd(uVar9,*(undefined4 *)(param_1 + 8),-fVar3);
  *(undefined4 *)(this + 0x34) = uVar1;
  uVar1 = NEON_fmadd(fVar6,*(undefined4 *)param_1,fVar4 * *(float *)(param_1 + 4));
  uVar8 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  uVar1 = NEON_fmadd(fVar2,uVar8,uVar1);
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}


