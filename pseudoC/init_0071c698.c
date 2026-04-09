// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 0071c698
// Size: 372 bytes
// Signature: undefined init(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TrafficVehicle::init() */

void TrafficVehicle::init(void)

{
  long in_x0;
  float fVar1;
  undefined auVar2 [16];
  
  *(undefined *)(in_x0 + 0x40) = 0;
  *(undefined8 *)(in_x0 + 0x160) = 0;
  *(undefined8 *)(in_x0 + 0x158) = 0;
  *(undefined8 *)(in_x0 + 0x50) = 0;
  *(undefined8 *)(in_x0 + 0x48) = 0;
  *(undefined8 *)(in_x0 + 0x198) = 0;
  *(undefined8 *)(in_x0 + 400) = 0;
  *(undefined8 *)(in_x0 + 0x1b8) = 0;
  *(undefined8 *)(in_x0 + 0x1b0) = 0;
  *(undefined8 *)(in_x0 + 0x1e8) = 0;
  *(undefined8 *)(in_x0 + 0x1e0) = 0;
  *(undefined8 *)(in_x0 + 0x200) = 0;
  *(undefined8 *)(in_x0 + 0x1f8) = 0;
  *(undefined8 *)(in_x0 + 0x208) = 0;
  *(undefined *)(in_x0 + 0x58) = 0;
  *(undefined8 *)(in_x0 + 0x17c) = 0x3f800000;
  *(undefined4 *)(in_x0 + 0x44) = 0x41a00000;
  *(undefined8 *)(in_x0 + 0x150) = 0;
  *(undefined8 *)(in_x0 + 0x2ac) = 0x3fc000003f000000;
  auVar2 = NEON_fmov(0x3f800000,4);
  *(undefined2 *)(in_x0 + 0x218) = 0x101;
  *(undefined *)(in_x0 + 0x23c) = 1;
  *(undefined4 *)(in_x0 + 0x5c) = 0;
  *(undefined4 *)(in_x0 + 0x1d4) = 0;
  *(long *)(in_x0 + 0x2e0) = auVar2._8_8_;
  *(long *)(in_x0 + 0x2d8) = auVar2._0_8_;
  auVar2 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(in_x0 + 0x174) = 0;
  *(undefined8 *)(in_x0 + 0x16c) = 0;
  *(undefined *)(in_x0 + 0x1d8) = 0;
  *(undefined8 *)(in_x0 + 700) = 0;
  *(undefined8 *)(in_x0 + 0x2b4) = 0;
  *(undefined8 *)(in_x0 + 0x188) = 0;
  *(long *)(in_x0 + 0x2f0) = auVar2._8_8_;
  *(long *)(in_x0 + 0x2e8) = auVar2._0_8_;
  *(long *)(in_x0 + 0x300) = auVar2._8_8_;
  *(long *)(in_x0 + 0x2f8) = auVar2._0_8_;
  *(undefined8 *)(in_x0 + 0x1a8) = 0;
  *(undefined4 *)(in_x0 + 0x168) = 0x7f7fffff;
  auVar2 = _DAT_004c5b80;
  *(undefined4 *)(in_x0 + 0x1f0) = 0;
  *(undefined8 *)(in_x0 + 0x310) = 0;
  *(undefined8 *)(in_x0 + 0x308) = 0;
  *(undefined8 *)(in_x0 + 800) = 0;
  *(undefined8 *)(in_x0 + 0x318) = 0;
  *(long *)(in_x0 + 0x330) = auVar2._8_8_;
  *(long *)(in_x0 + 0x328) = auVar2._0_8_;
  *(undefined4 *)(in_x0 + 0x214) = 0;
  *(undefined4 *)(in_x0 + 0x220) = 0;
  *(undefined4 *)(in_x0 + 0x230) = 0;
  *(undefined4 *)(in_x0 + 0x22c) = 0;
  *(undefined *)(in_x0 + 0x21a) = 0;
  *(undefined4 *)(in_x0 + 0x238) = 0;
  *(undefined8 *)(in_x0 + 0x240) = 0;
  *(undefined4 *)(in_x0 + 0x2a8) = 0;
  *(undefined8 *)(in_x0 + 0x2c8) = 0;
  *(undefined *)(in_x0 + 0x234) = 0;
  *(undefined8 *)(in_x0 + 0x28) = 0;
  *(undefined4 *)(in_x0 + 0x210) = 0;
  *(undefined4 *)(in_x0 + 0x368) = 0;
  *(undefined4 *)(in_x0 + 0x1c8) = 0;
  *(undefined8 *)(in_x0 + 0x370) = 0;
  *(undefined8 *)(in_x0 + 0x340) = 0;
  *(undefined8 *)(in_x0 + 0x338) = 0;
  *(undefined *)(in_x0 + 0x364) = 0;
  *(undefined8 *)(in_x0 + 0x35c) = 0;
  *(undefined8 *)(in_x0 + 0x354) = 0;
  fVar1 = (float)MathUtil::getRandom();
  *(undefined8 *)(in_x0 + 0x378) = 0;
  *(undefined4 *)(in_x0 + 0x390) = 0x3f800000;
  *(undefined4 *)(in_x0 + 0x3a4) = 0;
  *(undefined8 *)(in_x0 + 0x388) = 0;
  *(undefined8 *)(in_x0 + 0x380) = 0;
  *(undefined8 *)(in_x0 + 0x39c) = 0;
  *(undefined8 *)(in_x0 + 0x394) = 0;
  *(int *)(in_x0 + 0x36c) = (int)(fVar1 * 10.0);
  return;
}


