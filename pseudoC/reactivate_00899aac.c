// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reactivate
// Entry Point: 00899aac
// Size: 72 bytes
// Signature: undefined reactivate(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PedestrianAnimationBlender::reactivate() */

void PedestrianAnimationBlender::reactivate(void)

{
  long in_x0;
  
  if ((*(CharacterSet **)(in_x0 + 0x58) != (CharacterSet *)0x0) &&
     (CharacterSet::enable(*(CharacterSet **)(in_x0 + 0x58),0), *(char *)(in_x0 + 0x76) != '\0')) {
    CharacterSet::enable(*(CharacterSet **)(in_x0 + 0x58),2);
    return;
  }
  return;
}


