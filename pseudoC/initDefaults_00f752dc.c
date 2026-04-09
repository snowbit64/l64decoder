// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initDefaults
// Entry Point: 00f752dc
// Size: 428 bytes
// Signature: undefined initDefaults(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btSoftBody::initDefaults() */

void btSoftBody::initDefaults(void)

{
  btSoftBody *in_x0;
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(in_x0 + 0x180) = 0;
  *(undefined8 *)(in_x0 + 0x188) = 0;
  *(undefined8 *)(in_x0 + 0x1ac) = 0x3f8000003dcccccd;
  *(undefined8 *)(in_x0 + 0x1a4) = 0x3f3333333f800000;
  *(undefined8 *)(in_x0 + 0x1bc) = 0x3f0000003f000000;
  *(undefined8 *)(in_x0 + 0x1b4) = 0x3f0000003f000000;
  uVar2 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(in_x0 + 0x100) = 8;
  *(undefined8 *)(in_x0 + 0x178) = 0x3f80000000000000;
  *(undefined8 *)(in_x0 + 0x19c) = 0x3dcccccd3f800000;
  *(undefined8 *)(in_x0 + 0x194) = 0x3e4ccccd;
  *(undefined8 *)(in_x0 + 0x1c4) = uVar2;
  *(undefined8 *)(in_x0 + 0x2b4) = 0;
  *(undefined4 *)(in_x0 + 400) = 0;
  *(undefined8 *)(in_x0 + 0x1d4) = 0x400000000;
  *(undefined8 *)(in_x0 + 0x1cc) = 0x100000000;
  *(undefined4 *)(in_x0 + 0x1dc) = 1;
  *(undefined8 *)(in_x0 + 700) = 0;
  *(undefined8 *)(in_x0 + 0x2d8) = 0x3f800000;
  *(undefined8 *)(in_x0 + 0x308) = 0x3f800000;
  *(undefined8 *)(in_x0 + 0x2ec) = 0;
  *(undefined2 *)(in_x0 + 600) = 0;
  *(undefined4 *)(in_x0 + 0x25c) = 0;
  *(undefined8 *)(in_x0 + 0x2a8) = 0;
  *(undefined8 *)(in_x0 + 0x2a0) = 0;
  *(undefined4 *)(in_x0 + 0x2b0) = 0x3f800000;
  *(undefined4 *)(in_x0 + 0x2c4) = 0x3f800000;
  *(undefined8 *)(in_x0 + 0x2d0) = 0;
  *(undefined8 *)(in_x0 + 0x2c8) = 0;
  *(undefined8 *)(in_x0 + 0x2e4) = 0;
  *(undefined4 *)(in_x0 + 0x2e0) = 0x3f800000;
  *(undefined4 *)(in_x0 + 0x2f4) = 0x3f800000;
  *(undefined8 *)(in_x0 + 0x2f8) = 0;
  *(undefined8 *)(in_x0 + 0x300) = 0;
  *(undefined8 *)(in_x0 + 0x340) = 0;
  *(undefined4 *)(in_x0 + 0x490) = 0;
  in_x0[0x4b4] = (btSoftBody)0x1;
  *(undefined8 *)(in_x0 + 0x49c) = 0;
  *(undefined8 *)(in_x0 + 0x494) = 0;
  *(undefined8 *)(in_x0 + 0x4ac) = 0;
  *(undefined8 *)(in_x0 + 0x4a4) = 0;
  *(undefined4 *)(in_x0 + 8) = 0x3f800000;
  *(undefined8 *)(in_x0 + 0x14) = 0;
  *(undefined8 *)(in_x0 + 0xc) = 0;
  *(undefined4 *)(in_x0 + 0x1c) = 0x3f800000;
  *(undefined8 *)(in_x0 + 0x20) = 0;
  *(undefined8 *)(in_x0 + 0x28) = 0;
  *(undefined4 *)(in_x0 + 0x30) = 0x3f800000;
  *(undefined4 *)(in_x0 + 0x44) = 0;
  *(undefined8 *)(in_x0 + 0x34) = 0;
  *(undefined8 *)(in_x0 + 0x3c) = 0;
  setSolver(in_x0,0);
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  puVar1 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x28,0x10);
  puVar1[4] = in_x0;
  puVar1[2] = 0;
  puVar1[3] = 0x3e800000ffffffff;
  *(undefined4 *)(puVar1 + 1) = 0x20;
  *(undefined8 **)(in_x0 + 200) = puVar1;
  *(undefined4 *)(in_x0 + 0x618) = 0x3f800000;
  *(undefined4 *)(in_x0 + 0x62c) = 0x3f800000;
  *puVar1 = &PTR__btConcaveShape_0101b908;
  *(undefined8 *)(in_x0 + 0x61c) = 0;
  *(undefined8 *)(in_x0 + 0x638) = 0;
  *(undefined8 *)(in_x0 + 0x624) = 0;
  *(undefined8 *)(in_x0 + 0x630) = 0;
  *(undefined4 *)(in_x0 + 0x640) = 0x3f800000;
  *(undefined4 *)(in_x0 + 0x664) = 0;
  *(undefined4 *)(in_x0 + 0x668) = 0x3f800000;
  *(undefined8 *)(in_x0 + 0x64c) = 0;
  *(undefined8 *)(in_x0 + 0x644) = 0;
  *(undefined8 *)(in_x0 + 0x65c) = 0;
  *(undefined8 *)(in_x0 + 0x654) = 0;
  return;
}


