// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resetClip
// Entry Point: 0086a784
// Size: 116 bytes
// Signature: undefined resetClip(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ConditionalAnimationBlending::resetClip() */

void ConditionalAnimationBlending::resetClip(void)

{
  long in_x0;
  ulong uVar1;
  
  uVar1 = (*(long *)(in_x0 + 0x18) - *(long *)(in_x0 + 0x10) >> 3) * 0xb6db6db7;
  if ((int)uVar1 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    ConditionalAnimationClipInfo::reset();
    while (uVar1 = uVar1 - 1, uVar1 != 0) {
      ConditionalAnimationClipInfo::reset();
    }
  }
  return;
}


