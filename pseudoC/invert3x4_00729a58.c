// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: invert3x4
// Entry Point: 00729a58
// Size: 492 bytes
// Signature: undefined __thiscall invert3x4(Matrix4x4 * this, Matrix4x4 * param_1)


/* Matrix4x4::invert3x4(Matrix4x4 const&) */

bool __thiscall Matrix4x4::invert3x4(Matrix4x4 *this,Matrix4x4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar7 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x28),
                            *(float *)(param_1 + 0x24) * -*(float *)(param_1 + 8));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_1 + 4),*(float *)(param_1 + 0x18),
                     *(float *)(param_1 + 0x14) * -*(float *)(param_1 + 8));
  fVar3 = (float)NEON_fmadd(*(float *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x28),
                            *(float *)(param_1 + 0x24) * -*(float *)(param_1 + 0x18));
  uVar2 = NEON_fmadd(*(undefined4 *)param_1,fVar3,fVar7 * -*(float *)(param_1 + 0x10));
  fVar7 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x20),uVar1,uVar2);
  if (1e-36 < ABS(fVar7)) {
    fVar6 = 1.0 / fVar7;
    fVar9 = -fVar6;
    *(float *)this = fVar6 * fVar3;
    fVar4 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x28),
                              *(float *)(param_1 + 0x24) * -*(float *)(param_1 + 8));
    *(float *)(this + 4) = fVar4 * fVar9;
    uVar2 = *(undefined4 *)(param_1 + 4);
    fVar5 = *(float *)(param_1 + 8);
    fVar8 = *(float *)(param_1 + 0x14);
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(this + 0xc) = 0;
    fVar5 = (float)NEON_fmadd(uVar2,uVar1,fVar8 * -fVar5);
    *(float *)(this + 8) = fVar6 * fVar5;
    fVar8 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x28),
                              *(float *)(param_1 + 0x20) * -*(float *)(param_1 + 0x18));
    *(float *)(this + 0x10) = fVar8 * fVar9;
    fVar10 = (float)NEON_fmadd(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 0x28),
                               *(float *)(param_1 + 0x20) * -*(float *)(param_1 + 8));
    *(float *)(this + 0x14) = fVar6 * fVar10;
    fVar11 = *(float *)(param_1 + 8);
    fVar12 = *(float *)(param_1 + 0x10);
    uVar2 = *(undefined4 *)param_1;
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(this + 0x1c) = 0;
    fVar11 = (float)NEON_fmadd(uVar2,uVar1,fVar12 * -fVar11);
    *(float *)(this + 0x18) = fVar11 * fVar9;
    fVar12 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x24),
                               *(float *)(param_1 + 0x20) * -*(float *)(param_1 + 0x14));
    *(float *)(this + 0x20) = fVar6 * fVar12;
    fVar13 = (float)NEON_fmadd(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 0x24),
                               *(float *)(param_1 + 0x20) * -*(float *)(param_1 + 4));
    *(float *)(this + 0x24) = fVar13 * fVar9;
    uVar2 = *(undefined4 *)param_1;
    fVar14 = *(float *)(param_1 + 4);
    fVar15 = *(float *)(param_1 + 0x10);
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(this + 0x2c) = 0;
    fVar14 = (float)NEON_fmadd(uVar2,uVar1,fVar15 * -fVar14);
    *(float *)(this + 0x28) = fVar6 * fVar14;
    fVar3 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x30),fVar6 * fVar3,
                              fVar8 * fVar9 * *(float *)(param_1 + 0x34));
    uVar1 = NEON_fnmadd(*(undefined4 *)(param_1 + 0x38),fVar6 * fVar12,-fVar3);
    *(undefined4 *)(this + 0x30) = uVar1;
    fVar3 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x30),fVar4 * fVar9,
                              fVar6 * fVar10 * *(float *)(param_1 + 0x34));
    uVar1 = NEON_fnmadd(*(undefined4 *)(param_1 + 0x38),fVar13 * fVar9,-fVar3);
    *(undefined4 *)(this + 0x34) = uVar1;
    fVar3 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x30),fVar6 * fVar5,
                              fVar11 * fVar9 * *(float *)(param_1 + 0x34));
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(this + 0x3c) = 0x3f800000;
    uVar1 = NEON_fnmadd(uVar1,fVar6 * fVar14,-fVar3);
    *(undefined4 *)(this + 0x38) = uVar1;
  }
  return 1e-36 < ABS(fVar7);
}


