// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyLoadExhaust
// Entry Point: 008b5fbc
// Size: 80 bytes
// Signature: undefined __thiscall applyLoadExhaust(LoopSynthesisGenerator * this, uint param_1, float * param_2)


/* LoopSynthesisGenerator::applyLoadExhaust(unsigned int, float*) */

void __thiscall
LoopSynthesisGenerator::applyLoadExhaust(LoopSynthesisGenerator *this,uint param_1,float *param_2)

{
  LoadSoundSimulation::setRpm(*(LoadSoundSimulation **)(this + 0x20),*(float *)(this + 0x70));
  LoadSoundSimulation::setLoadFactor(*(LoadSoundSimulation **)(this + 0x20),*(float *)(this + 0x78))
  ;
  LoadSoundSimulation::process(*(LoadSoundSimulation **)(this + 0x20),param_2,param_1);
  return;
}


