// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRpm
// Entry Point: 008b583c
// Size: 152 bytes
// Signature: undefined __thiscall setRpm(LoopSynthesisGenerator * this, float param_1)


/* LoopSynthesisGenerator::setRpm(float) */

void __thiscall LoopSynthesisGenerator::setRpm(LoopSynthesisGenerator *this,float param_1)

{
  long *plVar1;
  LoopSynthesisGenerator LVar2;
  long *plVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  
  plVar4 = *(long **)this;
  plVar3 = *(long **)(this + 8);
  fVar6 = 0.0;
  LVar2 = this[0x3c];
  plVar1 = plVar3;
  if (LVar2 != (LoopSynthesisGenerator)0x0) {
    plVar1 = plVar4;
  }
  if (plVar1 == (long *)0x0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = (float)(**(code **)(*plVar1 + 0x30))();
    plVar4 = *(long **)this;
    plVar3 = *(long **)(this + 8);
    LVar2 = this[0x3c];
  }
  if (LVar2 != (LoopSynthesisGenerator)0x0) {
    plVar3 = plVar4;
  }
  if (plVar3 != (long *)0x0) {
    fVar6 = (float)(**(code **)(*plVar3 + 0x28))();
  }
  if (param_1 <= fVar5) {
    fVar5 = param_1;
  }
  if (fVar6 <= fVar5) {
    fVar6 = fVar5;
  }
  *(float *)(this + 0x6c) = fVar6;
  return;
}


