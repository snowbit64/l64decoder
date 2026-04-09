// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initActivateTransition
// Entry Point: 008683bc
// Size: 56 bytes
// Signature: undefined initActivateTransition(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ConditionalAnimationItem::initActivateTransition() */

void ConditionalAnimationItem::initActivateTransition(void)

{
  long in_x0;
  float fVar1;
  
  if (*(float *)(in_x0 + 0x38) != 1.0) {
    fVar1 = *(float *)(in_x0 + 0x28);
    *(undefined4 *)(in_x0 + 0x38) = 0x3f800000;
    *(float *)(in_x0 + 0x3c) = fVar1;
    *(float *)(in_x0 + 0x40) = fVar1;
    *(undefined *)(in_x0 + 0xbc) = 1;
    if (fVar1 == 0.0) {
      *(undefined4 *)(in_x0 + 0x30) = 0x3f800000;
    }
  }
  return;
}


