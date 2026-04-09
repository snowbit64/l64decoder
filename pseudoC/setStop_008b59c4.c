// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setStop
// Entry Point: 008b59c4
// Size: 60 bytes
// Signature: undefined setStop(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoopSynthesisGenerator::setStop() */

void LoopSynthesisGenerator::setStop(void)

{
  long in_x0;
  
  if (*(char *)(in_x0 + 0x59) == '\0') {
    if (*(StaticSoundGenerator **)(in_x0 + 0x30) != (StaticSoundGenerator *)0x0) {
      StaticSoundGenerator::reset(*(StaticSoundGenerator **)(in_x0 + 0x30),0);
    }
    *(undefined2 *)(in_x0 + 0x58) = 0x100;
  }
  return;
}


