// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 008841c8
// Size: 48 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTRandomDuration::update() */

undefined8 BTRandomDuration::update(void)

{
  long in_x0;
  undefined4 uVar1;
  
  uVar1 = MathUtil::getRandomMinMax(*(float *)(in_x0 + 0x30),*(float *)(in_x0 + 0x34));
  *(undefined4 *)(*(long *)(in_x0 + 0x28) + 0xc0) = uVar1;
  return 1;
}


