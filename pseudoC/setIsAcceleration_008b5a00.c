// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setIsAcceleration
// Entry Point: 008b5a00
// Size: 36 bytes
// Signature: undefined __thiscall setIsAcceleration(LoopSynthesisGenerator * this, bool param_1)


/* LoopSynthesisGenerator::setIsAcceleration(bool) */

void __thiscall LoopSynthesisGenerator::setIsAcceleration(LoopSynthesisGenerator *this,bool param_1)

{
  LoopSynthesisGenerator LVar1;
  
  LVar1 = (LoopSynthesisGenerator)0x1;
  if ((!param_1) && (*(long *)(this + 8) != 0)) {
    LVar1 = (LoopSynthesisGenerator)(*(int *)(this + 0x38) == 2);
  }
  this[0x3c] = LVar1;
  return;
}


