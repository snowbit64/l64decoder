// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setStart
// Entry Point: 008b58e4
// Size: 224 bytes
// Signature: undefined __thiscall setStart(LoopSynthesisGenerator * this, float param_1)


/* LoopSynthesisGenerator::setStart(float) */

void __thiscall LoopSynthesisGenerator::setStart(LoopSynthesisGenerator *this,float param_1)

{
  uint uVar1;
  long **pplVar2;
  long *this_00;
  uint uVar3;
  float fVar4;
  
  this_00 = *(long **)(this + 0x28);
  if (this_00 != (long *)0x0) {
    this[0x58] = (LoopSynthesisGenerator)0x1;
    uVar3 = (uint)((param_1 * 44100.0) / 1000.0);
    uVar1 = *(uint *)(*this_00 + 0x30);
    if (uVar3 <= *(uint *)(*this_00 + 0x30)) {
      uVar1 = uVar3;
    }
    StaticSoundGenerator::reset((StaticSoundGenerator *)this_00,uVar1);
  }
  fVar4 = *(float *)(this + 0x68);
  if (fVar4 == 0.0) {
    pplVar2 = (long **)(this + 8);
    if (this[0x3c] != (LoopSynthesisGenerator)0x0) {
      pplVar2 = (long **)this;
    }
    if (*pplVar2 == (long *)0x0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = (float)(**(code **)(**pplVar2 + 0x28))();
    }
  }
  *(float *)(this + 0x70) = fVar4;
  *(undefined2 *)(this + 0x59) = 0;
  pplVar2 = (long **)(this + 8);
  if (this[0x3c] != (LoopSynthesisGenerator)0x0) {
    pplVar2 = (long **)this;
  }
  if (*pplVar2 != (long *)0x0) {
    (**(code **)(**pplVar2 + 0x50))();
  }
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008b59b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 0x50))();
    return;
  }
  return;
}


