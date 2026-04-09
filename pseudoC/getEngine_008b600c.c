// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEngine
// Entry Point: 008b600c
// Size: 136 bytes
// Signature: undefined __thiscall getEngine(LoopSynthesisGenerator * this, uint param_1, float * param_2)


/* LoopSynthesisGenerator::getEngine(unsigned int, float*) */

void __thiscall
LoopSynthesisGenerator::getEngine(LoopSynthesisGenerator *this,uint param_1,float *param_2)

{
  long **pplVar1;
  long *plVar2;
  
  pplVar1 = (long **)(this + 8);
  if (this[0x3c] != (LoopSynthesisGenerator)0x0) {
    pplVar1 = (long **)this;
  }
  plVar2 = *pplVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))(*(undefined4 *)(this + 0x70),plVar2);
                    /* WARNING: Could not recover jumptable at 0x008b6070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))(plVar2,(ulong)param_1,param_2);
    return;
  }
  memset(param_2,0,(ulong)param_1 << 2);
  return;
}


