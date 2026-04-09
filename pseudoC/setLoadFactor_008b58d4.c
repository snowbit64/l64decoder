// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLoadFactor
// Entry Point: 008b58d4
// Size: 16 bytes
// Signature: undefined __thiscall setLoadFactor(LoopSynthesisGenerator * this, float param_1)


/* LoopSynthesisGenerator::setLoadFactor(float) */

void __thiscall LoopSynthesisGenerator::setLoadFactor(LoopSynthesisGenerator *this,float param_1)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fminnm(param_1,0x3f800000);
  *(undefined4 *)(this + 0x7c) = uVar1;
  return;
}


