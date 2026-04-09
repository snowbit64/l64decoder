// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6674
// Entry Point: 007b6674
// Size: 224 bytes
// Signature: undefined FUN_007b6674(void)


void FUN_007b6674(AudioSourceSample *param_1,float *param_2)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(ulong *)(param_1 + 0x10) >> 0x28 & 1) == 0) {
    if ((((*(ulong *)(param_1 + 0x10) >> 0x27 & 1) != 0) &&
        (uVar2 = AudioSourceSample::getLoopSynthesisMinRpm(param_1,&fStack_4c), (uVar2 & 1) != 0))
       && (uVar2 = AudioSourceSample::getLoopSynthesisMaxRpm(param_1,&local_50), (uVar2 & 1) != 0))
    {
      fVar3 = (float)NEON_fmadd(*param_2,local_50 - fStack_4c,fStack_4c);
      fVar5 = *param_2;
      if (*(char *)(param_2 + 4) != '\0') {
        fVar5 = fVar3;
      }
      AudioSourceSample::setLoopSynthesisRpm(param_1,fVar5);
    }
  }
  else {
    fVar5 = *param_2;
    if (*(char *)(param_2 + 4) != '\0') {
      fVar3 = (float)LoopSynthesisSample::getMinRpm();
      fVar4 = (float)LoopSynthesisSample::getMaxRpm();
      fVar5 = (float)NEON_fmadd(fVar5,fVar4 - fVar3,fVar3);
    }
    LoopSynthesisSample::setRpm((LoopSynthesisSample *)param_1,fVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


