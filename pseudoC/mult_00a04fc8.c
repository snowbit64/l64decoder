// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mult
// Entry Point: 00a04fc8
// Size: 708 bytes
// Signature: undefined __thiscall mult(Matrix4x4 * this, Matrix4x4 * param_1, Matrix4x4 * param_2)


/* Matrix4x4::mult(Matrix4x4 const&, Matrix4x4 const&) */

void __thiscall Matrix4x4::mult(Matrix4x4 *this,Matrix4x4 *param_1,Matrix4x4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fmadd(*(undefined4 *)param_2,*(undefined4 *)param_1,
                     *(float *)(param_2 + 4) * *(float *)(param_1 + 0x10));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 0x20),uVar1);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_1 + 0x30),uVar1);
  *(undefined4 *)this = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)param_2,*(undefined4 *)(param_1 + 4),
                     *(float *)(param_2 + 4) * *(float *)(param_1 + 0x14));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 0x24),uVar1);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_1 + 0x34),uVar1);
  *(undefined4 *)(this + 4) = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)param_2,*(undefined4 *)(param_1 + 8),
                     *(float *)(param_2 + 4) * *(float *)(param_1 + 0x18));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 0x28),uVar1);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_1 + 0x38),uVar1);
  *(undefined4 *)(this + 8) = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)param_2,*(undefined4 *)(param_1 + 0xc),
                     *(float *)(param_2 + 4) * *(float *)(param_1 + 0x1c));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 0x2c),uVar1);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_1 + 0x3c),uVar1);
  *(undefined4 *)(this + 0xc) = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)param_1,
                     *(float *)(param_2 + 0x14) * *(float *)(param_1 + 0x10));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_1 + 0x20),uVar1);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_1 + 0x30),uVar1);
  *(undefined4 *)(this + 0x10) = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_1 + 4),
                     *(float *)(param_2 + 0x14) * *(float *)(param_1 + 0x14));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_1 + 0x24),uVar1);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_1 + 0x34),uVar1);
  *(undefined4 *)(this + 0x14) = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_1 + 8),
                     *(float *)(param_2 + 0x14) * *(float *)(param_1 + 0x18));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_1 + 0x28),uVar1);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_1 + 0x38),uVar1);
  *(undefined4 *)(this + 0x18) = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_1 + 0xc),
                     *(float *)(param_2 + 0x14) * *(float *)(param_1 + 0x1c));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_1 + 0x2c),uVar1);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_1 + 0x3c),uVar1);
  *(undefined4 *)(this + 0x1c) = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x20),*(undefined4 *)param_1,
                     *(float *)(param_2 + 0x24) * *(float *)(param_1 + 0x10));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x20),uVar1);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_1 + 0x30),uVar1);
  *(undefined4 *)(this + 0x20) = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_1 + 4),
                     *(float *)(param_2 + 0x24) * *(float *)(param_1 + 0x14));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x24),uVar1);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_1 + 0x34),uVar1);
  *(undefined4 *)(this + 0x24) = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_1 + 8),
                     *(float *)(param_2 + 0x24) * *(float *)(param_1 + 0x18));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x28),uVar1);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_1 + 0x38),uVar1);
  *(undefined4 *)(this + 0x28) = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_1 + 0xc),
                     *(float *)(param_2 + 0x24) * *(float *)(param_1 + 0x1c));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x2c),uVar1);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_1 + 0x3c),uVar1);
  *(undefined4 *)(this + 0x2c) = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x30),*(undefined4 *)param_1,
                     *(float *)(param_2 + 0x34) * *(float *)(param_1 + 0x10));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_1 + 0x20),uVar1);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_1 + 0x30),uVar1);
  *(undefined4 *)(this + 0x30) = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_1 + 4),
                     *(float *)(param_2 + 0x34) * *(float *)(param_1 + 0x14));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_1 + 0x24),uVar1);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_1 + 0x34),uVar1);
  *(undefined4 *)(this + 0x34) = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_1 + 8),
                     *(float *)(param_2 + 0x34) * *(float *)(param_1 + 0x18));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_1 + 0x28),uVar1);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_1 + 0x38),uVar1);
  *(undefined4 *)(this + 0x38) = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_1 + 0xc),
                     *(float *)(param_2 + 0x34) * *(float *)(param_1 + 0x1c));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_1 + 0x2c),uVar1);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_1 + 0x3c),uVar1);
  *(undefined4 *)(this + 0x3c) = uVar1;
  return;
}


