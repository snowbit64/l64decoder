// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LoopSynthesisSample
// Entry Point: 008b3a44
// Size: 116 bytes
// Signature: undefined __thiscall LoopSynthesisSample(LoopSynthesisSample * this, char * param_1)


/* LoopSynthesisSample::LoopSynthesisSample(char const*) */

void __thiscall LoopSynthesisSample::LoopSynthesisSample(LoopSynthesisSample *this,char *param_1)

{
  Sample::Sample((Sample *)this,param_1);
  *(undefined ***)this = &PTR__LoopSynthesisSample_00fdd968;
  *(undefined ***)(this + 0x20) = &PTR__LoopSynthesisSample_00fdda50;
                    /* try { // try from 008b3a78 to 008b3a7f has its CatchHandler @ 008b3ac8 */
  LoopSynthesisGenerator::LoopSynthesisGenerator((LoopSynthesisGenerator *)(this + 0x80));
                    /* try { // try from 008b3a84 to 008b3a87 has its CatchHandler @ 008b3ab8 */
  LoopSynthesisStreamSource::LoopSynthesisStreamSource((LoopSynthesisStreamSource *)(this + 0x100));
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x10000000000;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  return;
}


