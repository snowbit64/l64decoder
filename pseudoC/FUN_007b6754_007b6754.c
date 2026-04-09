// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6754
// Entry Point: 007b6754
// Size: 292 bytes
// Signature: undefined FUN_007b6754(void)


void FUN_007b6754(AudioSourceSample *param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_54;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((*(ulong *)(param_1 + 0x10) >> 0x28 & 1) == 0) {
    if ((*(ulong *)(param_1 + 0x10) >> 0x27 & 1) == 0) goto LAB_007b6834;
    if (*param_2 == '\0') {
      uVar3 = AudioSourceSample::getLoopSynthesisTargetRpm(param_1,(float *)(param_2 + 0x100));
      if ((uVar3 & 1) == 0) goto LAB_007b6834;
    }
    else {
      uVar3 = AudioSourceSample::getLoopSynthesisTargetRpm(param_1,&fStack_4c);
      if ((((uVar3 & 1) == 0) ||
          (uVar3 = AudioSourceSample::getLoopSynthesisMinRpm(param_1,&local_50), (uVar3 & 1) == 0))
         || (uVar3 = AudioSourceSample::getLoopSynthesisMaxRpm(param_1,&local_54), (uVar3 & 1) == 0)
         ) goto LAB_007b6834;
      *(float *)(param_2 + 0x100) = (fStack_4c - local_50) / (local_54 - local_50) + 0.0;
    }
  }
  else {
    cVar1 = *param_2;
    fVar4 = (float)LoopSynthesisSample::getTargetRpm();
    if (cVar1 != '\0') {
      fVar5 = (float)LoopSynthesisSample::getMinRpm();
      fVar6 = (float)LoopSynthesisSample::getMaxRpm();
      fVar4 = (fVar4 - fVar5) / (fVar6 - fVar5) + 0.0;
    }
    *(float *)(param_2 + 0x100) = fVar4;
  }
  *(undefined4 *)(param_2 + 0x108) = 4;
LAB_007b6834:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


