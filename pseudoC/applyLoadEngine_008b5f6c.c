// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyLoadEngine
// Entry Point: 008b5f6c
// Size: 80 bytes
// Signature: undefined __thiscall applyLoadEngine(LoopSynthesisGenerator * this, uint param_1, float * param_2)


/* LoopSynthesisGenerator::applyLoadEngine(unsigned int, float*) */

void __thiscall
LoopSynthesisGenerator::applyLoadEngine(LoopSynthesisGenerator *this,uint param_1,float *param_2)

{
  LoadSoundSimulation::setRpm(*(LoadSoundSimulation **)(this + 0x10),*(float *)(this + 0x70));
  LoadSoundSimulation::setLoadFactor(*(LoadSoundSimulation **)(this + 0x10),*(float *)(this + 0x78))
  ;
  LoadSoundSimulation::process(*(LoadSoundSimulation **)(this + 0x10),param_2,param_1);
  return;
}


