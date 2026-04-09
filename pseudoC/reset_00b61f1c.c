// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 00b61f1c
// Size: 28 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BoundingVolumeFactory::EnclosingSphere::reset() */

void BoundingVolumeFactory::EnclosingSphere::reset(void)

{
  long in_x0;
  
  *(undefined4 *)(in_x0 + 0x8c) = 0;
  *(undefined8 *)(in_x0 + 0xdc) = 0;
  *(undefined4 *)(in_x0 + 0x90) = 0;
  *(undefined4 *)(in_x0 + 0x94) = 0;
  *(undefined4 **)(in_x0 + 0xd0) = (undefined4 *)(in_x0 + 0x8c);
  *(undefined4 *)(in_x0 + 0xd8) = 0xbf800000;
  return;
}


