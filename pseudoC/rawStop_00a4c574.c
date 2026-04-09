// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rawStop
// Entry Point: 00a4c574
// Size: 140 bytes
// Signature: undefined __thiscall rawStop(AudioSourceSample * this, float param_1, float param_2, bool param_3)


/* AudioSourceSample::rawStop(float, float, bool) */

void __thiscall
AudioSourceSample::rawStop(AudioSourceSample *this,float param_1,float param_2,bool param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)((long)(this + 0xb0) + ((ulong)*(uint *)(this + 0xac) * 0xe + 1) * 4);
  if (1 < *(uint *)(this + 0xb0)) {
    puVar1 = (uint *)(*(long *)(this + 0xf0) + (ulong)*(uint *)(this + 0xac) * 0x38);
  }
  if ((param_3) && (*(long *)(puVar1 + 10) != 0)) {
    LoopSynthesisGenerator::setStop();
  }
  if (*(long **)(puVar1 + 0xc) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a4c5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(puVar1 + 0xc) + 0x40))(param_1,param_2);
    return;
  }
  return;
}


