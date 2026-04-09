// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getExhaust
// Entry Point: 008b6094
// Size: 84 bytes
// Signature: undefined __thiscall getExhaust(LoopSynthesisGenerator * this, uint param_1, float * param_2)


/* LoopSynthesisGenerator::getExhaust(unsigned int, float*) */

void __thiscall
LoopSynthesisGenerator::getExhaust(LoopSynthesisGenerator *this,uint param_1,float *param_2)

{
  (**(code **)(**(long **)(this + 0x18) + 0x40))(*(undefined4 *)(this + 0x70));
                    /* WARNING: Could not recover jumptable at 0x008b60e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x18) + 0x20))(*(long **)(this + 0x18),param_1,param_2);
  return;
}


