// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6878
// Entry Point: 007b6878
// Size: 280 bytes
// Signature: undefined FUN_007b6878(void)


void FUN_007b6878(AudioSourceSample *param_1,char *param_2)

{
  float *pfVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_54;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pfVar1 = (float *)(param_2 + 0x100);
  *(undefined4 *)(param_2 + 0x100) = 0;
  *(undefined4 *)(param_2 + 0x108) = 4;
  if ((*(ulong *)(param_1 + 0x10) >> 0x28 & 1) == 0) {
    if ((*(ulong *)(param_1 + 0x10) >> 0x27 & 1) == 0) goto LAB_007b6964;
    if (*param_2 == '\0') {
      AudioSourceSample::getLoopSynthesisRpm(param_1,pfVar1);
      goto LAB_007b6964;
    }
    uVar4 = AudioSourceSample::getLoopSynthesisRpm(param_1,&fStack_4c);
    if ((((uVar4 & 1) == 0) ||
        (uVar4 = AudioSourceSample::getLoopSynthesisMinRpm(param_1,&local_50), (uVar4 & 1) == 0)) ||
       (uVar4 = AudioSourceSample::getLoopSynthesisMaxRpm(param_1,&local_54), (uVar4 & 1) == 0))
    goto LAB_007b6964;
    fVar5 = (fStack_4c - local_50) / (local_54 - local_50);
  }
  else {
    cVar2 = *param_2;
    fVar5 = (float)LoopSynthesisSample::getRpm();
    if (cVar2 == '\0') {
      *pfVar1 = fVar5;
      goto LAB_007b6964;
    }
    fVar6 = (float)LoopSynthesisSample::getMinRpm();
    fVar7 = (float)LoopSynthesisSample::getMaxRpm();
    fVar5 = (fVar5 - fVar6) / (fVar7 - fVar6);
  }
  *pfVar1 = fVar5 + 0.0;
LAB_007b6964:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


