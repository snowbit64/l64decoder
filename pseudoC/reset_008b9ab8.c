// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 008b9ab8
// Size: 24 bytes
// Signature: undefined __thiscall reset(StaticSoundGenerator * this, uint param_1)


/* StaticSoundGenerator::reset(unsigned int) */

void __thiscall StaticSoundGenerator::reset(StaticSoundGenerator *this,uint param_1)

{
  *(uint *)(this + 0x10) = param_1;
  if (*(long *)(this + 8) != 0) {
    stb_vorbis_seek();
    return;
  }
  return;
}


