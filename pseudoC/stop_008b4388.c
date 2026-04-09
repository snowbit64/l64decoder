// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stop
// Entry Point: 008b4388
// Size: 84 bytes
// Signature: undefined __thiscall stop(LoopSynthesisSample * this, float param_1, float param_2)


/* LoopSynthesisSample::stop(float, float) */

undefined8 __thiscall
LoopSynthesisSample::stop(LoopSynthesisSample *this,float param_1,float param_2)

{
  LoopSynthesisGenerator::setStop();
  if (*(long **)(this + 0x118) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x118) + 0x40))(param_1,param_2);
  }
  return 1;
}


