// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~StaticSoundGenerator
// Entry Point: 008b943c
// Size: 28 bytes
// Signature: undefined __thiscall ~StaticSoundGenerator(StaticSoundGenerator * this)


/* StaticSoundGenerator::~StaticSoundGenerator() */

void __thiscall StaticSoundGenerator::~StaticSoundGenerator(StaticSoundGenerator *this)

{
  if (*(long *)(this + 8) != 0) {
                    /* try { // try from 008b944c to 008b944f has its CatchHandler @ 008b9458 */
    stb_vorbis_close();
  }
  return;
}


