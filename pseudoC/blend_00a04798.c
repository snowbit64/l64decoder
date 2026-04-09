// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: blend
// Entry Point: 00a04798
// Size: 1312 bytes
// Signature: undefined __thiscall blend(ColorGradingCB * this, ColorGradingCB * param_1, ColorGradingCB * param_2, float param_3)


/* PostFxParams::ColorGradingCB::blend(PostFxParams::ColorGradingCB const&,
   PostFxParams::ColorGradingCB const&, float) */

void __thiscall
PostFxParams::ColorGradingCB::blend
          (ColorGradingCB *this,ColorGradingCB *param_1,ColorGradingCB *param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = 1.0 - param_3;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x10),fVar1 * *(float *)(param_2 + 0x10));
  *(undefined4 *)(this + 0x10) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)param_1,fVar1 * *(float *)param_2);
  *(undefined4 *)this = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x20),fVar1 * *(float *)(param_2 + 0x20));
  *(undefined4 *)(this + 0x20) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x30),fVar1 * *(float *)(param_2 + 0x30));
  *(undefined4 *)(this + 0x30) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x14),fVar1 * *(float *)(param_2 + 0x14));
  *(undefined4 *)(this + 0x14) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 4),fVar1 * *(float *)(param_2 + 4));
  *(undefined4 *)(this + 4) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x24),fVar1 * *(float *)(param_2 + 0x24));
  *(undefined4 *)(this + 0x24) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x34),fVar1 * *(float *)(param_2 + 0x34));
  *(undefined4 *)(this + 0x34) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x18),fVar1 * *(float *)(param_2 + 0x18));
  *(undefined4 *)(this + 0x18) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 8),fVar1 * *(float *)(param_2 + 8));
  *(undefined4 *)(this + 8) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x28),fVar1 * *(float *)(param_2 + 0x28));
  *(undefined4 *)(this + 0x28) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x38),fVar1 * *(float *)(param_2 + 0x38));
  *(undefined4 *)(this + 0x38) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x1c),fVar1 * *(float *)(param_2 + 0x1c));
  *(undefined4 *)(this + 0x1c) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xc),fVar1 * *(float *)(param_2 + 0xc));
  *(undefined4 *)(this + 0xc) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x2c),fVar1 * *(float *)(param_2 + 0x2c));
  *(undefined4 *)(this + 0x2c) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x3c),fVar1 * *(float *)(param_2 + 0x3c));
  *(undefined4 *)(this + 0x3c) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x50),fVar1 * *(float *)(param_2 + 0x50));
  *(undefined4 *)(this + 0x50) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x40),fVar1 * *(float *)(param_2 + 0x40));
  *(undefined4 *)(this + 0x40) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x60),fVar1 * *(float *)(param_2 + 0x60));
  *(undefined4 *)(this + 0x60) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x70),fVar1 * *(float *)(param_2 + 0x70));
  *(undefined4 *)(this + 0x70) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x54),fVar1 * *(float *)(param_2 + 0x54));
  *(undefined4 *)(this + 0x54) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x44),fVar1 * *(float *)(param_2 + 0x44));
  *(undefined4 *)(this + 0x44) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 100),fVar1 * *(float *)(param_2 + 100));
  *(undefined4 *)(this + 100) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x74),fVar1 * *(float *)(param_2 + 0x74));
  *(undefined4 *)(this + 0x74) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x58),fVar1 * *(float *)(param_2 + 0x58));
  *(undefined4 *)(this + 0x58) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x48),fVar1 * *(float *)(param_2 + 0x48));
  *(undefined4 *)(this + 0x48) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x68),fVar1 * *(float *)(param_2 + 0x68));
  *(undefined4 *)(this + 0x68) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x78),fVar1 * *(float *)(param_2 + 0x78));
  *(undefined4 *)(this + 0x78) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x5c),fVar1 * *(float *)(param_2 + 0x5c));
  *(undefined4 *)(this + 0x5c) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x4c),fVar1 * *(float *)(param_2 + 0x4c));
  *(undefined4 *)(this + 0x4c) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x6c),fVar1 * *(float *)(param_2 + 0x6c));
  *(undefined4 *)(this + 0x6c) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x7c),fVar1 * *(float *)(param_2 + 0x7c));
  *(undefined4 *)(this + 0x7c) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x90),fVar1 * *(float *)(param_2 + 0x90));
  *(undefined4 *)(this + 0x90) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x80),fVar1 * *(float *)(param_2 + 0x80));
  *(undefined4 *)(this + 0x80) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xa0),fVar1 * *(float *)(param_2 + 0xa0));
  *(undefined4 *)(this + 0xa0) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xb0),fVar1 * *(float *)(param_2 + 0xb0));
  *(undefined4 *)(this + 0xb0) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x94),fVar1 * *(float *)(param_2 + 0x94));
  *(undefined4 *)(this + 0x94) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x84),fVar1 * *(float *)(param_2 + 0x84));
  *(undefined4 *)(this + 0x84) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xa4),fVar1 * *(float *)(param_2 + 0xa4));
  *(undefined4 *)(this + 0xa4) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xb4),fVar1 * *(float *)(param_2 + 0xb4));
  *(undefined4 *)(this + 0xb4) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x98),fVar1 * *(float *)(param_2 + 0x98));
  *(undefined4 *)(this + 0x98) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x88),fVar1 * *(float *)(param_2 + 0x88));
  *(undefined4 *)(this + 0x88) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xa8),fVar1 * *(float *)(param_2 + 0xa8));
  *(undefined4 *)(this + 0xa8) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xb8),fVar1 * *(float *)(param_2 + 0xb8));
  *(undefined4 *)(this + 0xb8) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x9c),fVar1 * *(float *)(param_2 + 0x9c));
  *(undefined4 *)(this + 0x9c) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0x8c),fVar1 * *(float *)(param_2 + 0x8c));
  *(undefined4 *)(this + 0x8c) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xac),fVar1 * *(float *)(param_2 + 0xac));
  *(undefined4 *)(this + 0xac) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xbc),fVar1 * *(float *)(param_2 + 0xbc));
  *(undefined4 *)(this + 0xbc) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xd0),fVar1 * *(float *)(param_2 + 0xd0));
  *(undefined4 *)(this + 0xd0) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xc0),fVar1 * *(float *)(param_2 + 0xc0));
  *(undefined4 *)(this + 0xc0) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xe0),fVar1 * *(float *)(param_2 + 0xe0));
  *(undefined4 *)(this + 0xe0) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xf0),fVar1 * *(float *)(param_2 + 0xf0));
  *(undefined4 *)(this + 0xf0) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xd4),fVar1 * *(float *)(param_2 + 0xd4));
  *(undefined4 *)(this + 0xd4) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xc4),fVar1 * *(float *)(param_2 + 0xc4));
  *(undefined4 *)(this + 0xc4) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xe4),fVar1 * *(float *)(param_2 + 0xe4));
  *(undefined4 *)(this + 0xe4) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xf4),fVar1 * *(float *)(param_2 + 0xf4));
  *(undefined4 *)(this + 0xf4) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xd8),fVar1 * *(float *)(param_2 + 0xd8));
  *(undefined4 *)(this + 0xd8) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 200),fVar1 * *(float *)(param_2 + 200));
  *(undefined4 *)(this + 200) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xe8),fVar1 * *(float *)(param_2 + 0xe8));
  *(undefined4 *)(this + 0xe8) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xf8),fVar1 * *(float *)(param_2 + 0xf8));
  *(undefined4 *)(this + 0xf8) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xdc),fVar1 * *(float *)(param_2 + 0xdc));
  *(undefined4 *)(this + 0xdc) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xcc),fVar1 * *(float *)(param_2 + 0xcc));
  *(undefined4 *)(this + 0xcc) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xec),fVar1 * *(float *)(param_2 + 0xec));
  *(undefined4 *)(this + 0xec) = uVar2;
  uVar2 = NEON_fmadd(param_3,*(undefined4 *)(param_1 + 0xfc),fVar1 * *(float *)(param_2 + 0xfc));
  *(undefined4 *)(this + 0xfc) = uVar2;
  *(ulong *)(this + 0x100) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x100) >> 0x20) * fVar1 +
                (float)((ulong)*(undefined8 *)(param_1 + 0x100) >> 0x20) * param_3,
                (float)*(undefined8 *)(param_2 + 0x100) * fVar1 +
                (float)*(undefined8 *)(param_1 + 0x100) * param_3);
  return;
}


