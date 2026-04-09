// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deactivate
// Entry Point: 00899a58
// Size: 84 bytes
// Signature: undefined deactivate(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PedestrianAnimationBlender::deactivate() */

void PedestrianAnimationBlender::deactivate(void)

{
  long in_x0;
  
  if (*(CharacterSet **)(in_x0 + 0x58) != (CharacterSet *)0x0) {
    CharacterSet::disable(*(CharacterSet **)(in_x0 + 0x58),0);
    CharacterSet::disable(*(CharacterSet **)(in_x0 + 0x58),1);
    if (*(char *)(in_x0 + 0x76) != '\0') {
      CharacterSet::disable(*(CharacterSet **)(in_x0 + 0x58),2);
      return;
    }
  }
  return;
}


