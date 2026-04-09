// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SteadyLoopSoundGenerator
// Entry Point: 008ba5fc
// Size: 160 bytes
// Signature: undefined __thiscall ~SteadyLoopSoundGenerator(SteadyLoopSoundGenerator * this)


/* SteadyLoopSoundGenerator::~SteadyLoopSoundGenerator() */

void __thiscall SteadyLoopSoundGenerator::~SteadyLoopSoundGenerator(SteadyLoopSoundGenerator *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(this + 0x50);
  plVar2 = *(long **)(this + 0x58);
  *(undefined ***)this = &PTR__SteadyLoopSoundGenerator_00fddb28;
  if (plVar1 != plVar2) {
    do {
      if (*plVar1 != 0) {
                    /* try { // try from 008ba688 to 008ba68b has its CatchHandler @ 008ba69c */
        stb_vorbis_close();
      }
      plVar1 = plVar1 + 1;
    } while (plVar1 != plVar2);
    plVar1 = *(long **)(this + 0x50);
  }
  if (plVar1 != (long *)0x0) {
    *(long **)(this + 0x58) = plVar1;
    operator_delete(plVar1);
  }
  if (*(void **)(this + 0x48) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x48));
  }
  *(undefined8 *)(this + 0x48) = 0;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x28));
  }
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


