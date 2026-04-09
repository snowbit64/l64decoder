// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initExitTransition
// Entry Point: 008683f4
// Size: 36 bytes
// Signature: undefined initExitTransition(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ConditionalAnimationItem::initExitTransition() */

void ConditionalAnimationItem::initExitTransition(void)

{
  long in_x0;
  
  if (*(float *)(in_x0 + 0x38) != 0.0) {
    *(undefined4 *)(in_x0 + 0x38) = 0;
    *(undefined4 *)(in_x0 + 0x34) = *(undefined4 *)(in_x0 + 0x30);
    *(undefined4 *)(in_x0 + 0x3c) = *(undefined4 *)(in_x0 + 0x2c);
    *(undefined4 *)(in_x0 + 0x40) = *(undefined4 *)(in_x0 + 0x2c);
  }
  return;
}


