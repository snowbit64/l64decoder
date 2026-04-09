// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stopBufferGeneration
// Entry Point: 008b5470
// Size: 68 bytes
// Signature: undefined stopBufferGeneration(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoopSynthesisGenerator::stopBufferGeneration() */

void LoopSynthesisGenerator::stopBufferGeneration(void)

{
  long in_x0;
  
  if (*(StaticSoundGenerator **)(in_x0 + 0x28) != (StaticSoundGenerator *)0x0) {
    StaticSoundGenerator::reset(*(StaticSoundGenerator **)(in_x0 + 0x28),0);
  }
  if (*(StaticSoundGenerator **)(in_x0 + 0x30) != (StaticSoundGenerator *)0x0) {
    StaticSoundGenerator::reset(*(StaticSoundGenerator **)(in_x0 + 0x30),0);
  }
  *(undefined2 *)(in_x0 + 0x59) = 0x100;
  return;
}


