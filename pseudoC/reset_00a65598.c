// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 00a65598
// Size: 44 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FoliageSystemDesc::Lod::reset() */

void FoliageSystemDesc::Lod::reset(void)

{
  undefined8 *in_x0;
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(in_x0 + 4) = 1;
  *(undefined8 *)((long)in_x0 + 0x34) = uVar1;
  *in_x0 = 0x40a0000042a00000;
  *(undefined8 *)((long)in_x0 + 0x2c) = 0;
  *(undefined8 *)((long)in_x0 + 0x24) = 0x3f800000;
  return;
}


