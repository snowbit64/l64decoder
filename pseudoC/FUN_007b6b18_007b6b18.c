// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6b18
// Entry Point: 007b6b18
// Size: 72 bytes
// Signature: undefined FUN_007b6b18(void)


void FUN_007b6b18(AudioSourceSample *param_1,long param_2)

{
  ulong uVar1;
  float fVar2;
  
  *(undefined4 *)(param_2 + 0x100) = 0;
  uVar1 = *(ulong *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x108) = 4;
  if ((uVar1 >> 0x28 & 1) == 0) {
    if ((uVar1 >> 0x27 & 1) != 0) {
      AudioSourceSample::getLoopSynthesisMaxRpm(param_1,(float *)(param_2 + 0x100));
    }
  }
  else {
    fVar2 = (float)LoopSynthesisSample::getMaxRpm();
    *(float *)(param_2 + 0x100) = fVar2;
  }
  return;
}


