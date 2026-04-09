// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateSimdData
// Entry Point: 00b55998
// Size: 208 bytes
// Signature: undefined updateSimdData(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Frustum::updateSimdData() */

void Frustum::updateSimdData(void)

{
  long in_x0;
  undefined auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  *(ulong *)(in_x0 + 0x78) = CONCAT44(*(undefined4 *)(in_x0 + 8),*(undefined4 *)(in_x0 + 0x18));
  *(ulong *)(in_x0 + 0x70) =
       CONCAT44(*(undefined4 *)(in_x0 + 0x28),(int)*(undefined8 *)(in_x0 + 0x38));
  *(ulong *)(in_x0 + 0x88) = CONCAT44(*(undefined4 *)(in_x0 + 0x48),*(undefined4 *)(in_x0 + 0x58));
  *(undefined8 *)(in_x0 + 0x80) = 0;
  auVar1._8_4_ = *(undefined4 *)(in_x0 + 100);
  *(ulong *)(in_x0 + 0x98) = CONCAT44(*(undefined4 *)(in_x0 + 0xc),*(undefined4 *)(in_x0 + 0x1c));
  *(ulong *)(in_x0 + 0x90) =
       CONCAT44(*(undefined4 *)(in_x0 + 0x2c),(int)*(undefined8 *)(in_x0 + 0x3c));
  *(ulong *)(in_x0 + 0xa8) = CONCAT44(*(undefined4 *)(in_x0 + 0x4c),*(undefined4 *)(in_x0 + 0x5c));
  *(undefined8 *)(in_x0 + 0xa0) = 0;
  auVar1._12_4_ = *(undefined4 *)(in_x0 + 0x54);
  *(ulong *)(in_x0 + 0xb8) = CONCAT44(*(undefined4 *)(in_x0 + 0x10),*(undefined4 *)(in_x0 + 0x20));
  *(ulong *)(in_x0 + 0xb0) =
       CONCAT44(*(undefined4 *)(in_x0 + 0x30),(int)*(undefined8 *)(in_x0 + 0x40));
  *(ulong *)(in_x0 + 200) = CONCAT44(*(undefined4 *)(in_x0 + 0x50),*(undefined4 *)(in_x0 + 0x60));
  *(undefined8 *)(in_x0 + 0xc0) = 0;
  *(ulong *)(in_x0 + 0xd8) = CONCAT44(*(undefined4 *)(in_x0 + 0x14),*(undefined4 *)(in_x0 + 0x24));
  *(ulong *)(in_x0 + 0xd0) =
       CONCAT44(*(undefined4 *)(in_x0 + 0x34),(int)*(undefined8 *)(in_x0 + 0x44));
  *(long *)(in_x0 + 0xe8) = auVar1._8_8_;
  *(undefined8 *)(in_x0 + 0xe0) = auVar1._0_8_;
  return;
}


