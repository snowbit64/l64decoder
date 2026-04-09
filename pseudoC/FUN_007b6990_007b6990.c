// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6990
// Entry Point: 007b6990
// Size: 32 bytes
// Signature: undefined FUN_007b6990(void)


void FUN_007b6990(LoopSynthesisSample *param_1,float *param_2)

{
  if ((*(ulong *)(param_1 + 0x10) >> 0x28 & 1) != 0) {
    LoopSynthesisSample::setLoadFactor(param_1,*param_2);
    return;
  }
  if ((*(ulong *)(param_1 + 0x10) >> 0x27 & 1) == 0) {
    return;
  }
  AudioSourceSample::setLoopSynthesisLoadFactor((AudioSourceSample *)param_1,*param_2);
  return;
}


