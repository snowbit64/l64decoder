// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LoopSynthesisSample
// Entry Point: 008b3adc
// Size: 84 bytes
// Signature: undefined __thiscall ~LoopSynthesisSample(LoopSynthesisSample * this)


/* LoopSynthesisSample::~LoopSynthesisSample() */

void __thiscall LoopSynthesisSample::~LoopSynthesisSample(LoopSynthesisSample *this)

{
  *(undefined ***)this = &PTR__LoopSynthesisSample_00fdd968;
  *(undefined ***)(this + 0x20) = &PTR__LoopSynthesisSample_00fdda50;
                    /* try { // try from 008b3b04 to 008b3b07 has its CatchHandler @ 008b3b30 */
  Sample::unload();
  if (((byte)this[0x120] & 1) != 0) {
    operator_delete(*(void **)(this + 0x130));
  }
  LoopSynthesisGenerator::~LoopSynthesisGenerator((LoopSynthesisGenerator *)(this + 0x80));
  Sample::~Sample((Sample *)this);
  return;
}


