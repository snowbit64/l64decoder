// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mult3x4
// Entry Point: 00855944
// Size: 480 bytes
// Signature: undefined __thiscall mult3x4(Matrix4x4 * this, Matrix4x4 * param_1, Matrix4x4 * param_2)


/* Matrix4x4::mult3x4(Matrix4x4 const&, Matrix4x4 const&) */

void __thiscall Matrix4x4::mult3x4(Matrix4x4 *this,Matrix4x4 *param_1,Matrix4x4 *param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  
  uVar1 = NEON_fmadd(*(undefined4 *)param_2,*(undefined4 *)param_1,
                     *(float *)(param_2 + 4) * *(float *)(param_1 + 0x10));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 0x20),uVar1);
  *(undefined4 *)this = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)param_2,*(undefined4 *)(param_1 + 4),
                     *(float *)(param_2 + 4) * *(float *)(param_1 + 0x14));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 0x24),uVar1);
  *(undefined4 *)(this + 4) = uVar1;
  uVar5 = *(undefined4 *)(param_2 + 8);
  uVar1 = NEON_fmadd(*(undefined4 *)param_2,*(undefined4 *)(param_1 + 8),
                     *(float *)(param_2 + 4) * *(float *)(param_1 + 0x18));
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0xc) = 0;
  uVar1 = NEON_fmadd(uVar5,uVar3,uVar1);
  *(undefined4 *)(this + 8) = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)param_1,
                     *(float *)(param_2 + 0x14) * *(float *)(param_1 + 0x10));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_1 + 0x20),uVar1);
  *(undefined4 *)(this + 0x10) = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_1 + 4),
                     *(float *)(param_2 + 0x14) * *(float *)(param_1 + 0x14));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_1 + 0x24),uVar1);
  *(undefined4 *)(this + 0x14) = uVar1;
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_1 + 8),
                     *(float *)(param_2 + 0x14) * *(float *)(param_1 + 0x18));
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x1c) = 0;
  uVar1 = NEON_fmadd(uVar5,uVar3,uVar1);
  *(undefined4 *)(this + 0x18) = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x20),*(undefined4 *)param_1,
                     *(float *)(param_2 + 0x24) * *(float *)(param_1 + 0x10));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x20),uVar1);
  *(undefined4 *)(this + 0x20) = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_1 + 4),
                     *(float *)(param_2 + 0x24) * *(float *)(param_1 + 0x14));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x24),uVar1);
  *(undefined4 *)(this + 0x24) = uVar1;
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_1 + 8),
                     *(float *)(param_2 + 0x24) * *(float *)(param_1 + 0x18));
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = 0;
  uVar1 = NEON_fmadd(uVar5,uVar3,uVar1);
  *(undefined4 *)(this + 0x28) = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x30),*(undefined4 *)param_1,
                     *(float *)(param_2 + 0x34) * *(float *)(param_1 + 0x10));
  fVar2 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_1 + 0x20),uVar1);
  *(float *)(this + 0x30) = fVar2 + *(float *)(param_1 + 0x30);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_1 + 4),
                     *(float *)(param_2 + 0x34) * *(float *)(param_1 + 0x14));
  fVar2 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_1 + 0x24),uVar1);
  *(float *)(this + 0x34) = fVar2 + *(float *)(param_1 + 0x34);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_1 + 8),
                     *(float *)(param_2 + 0x34) * *(float *)(param_1 + 0x18));
  fVar2 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_1 + 0x28),uVar1);
  fVar4 = *(float *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  *(float *)(this + 0x38) = fVar2 + fVar4;
  return;
}


