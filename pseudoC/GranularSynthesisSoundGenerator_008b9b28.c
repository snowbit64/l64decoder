// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GranularSynthesisSoundGenerator
// Entry Point: 008b9b28
// Size: 60 bytes
// Signature: undefined __thiscall ~GranularSynthesisSoundGenerator(GranularSynthesisSoundGenerator * this)


/* GranularSynthesisSoundGenerator::~GranularSynthesisSoundGenerator() */

void __thiscall
GranularSynthesisSoundGenerator::~GranularSynthesisSoundGenerator
          (GranularSynthesisSoundGenerator *this)

{
  *(undefined ***)this = &PTR__GranularSynthesisSoundGenerator_00fdda98;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x28));
  }
  operator_delete(this);
  return;
}


