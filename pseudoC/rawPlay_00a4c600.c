// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rawPlay
// Entry Point: 00a4c600
// Size: 356 bytes
// Signature: undefined __thiscall rawPlay(AudioSourceSample * this, float param_1, float param_2, float param_3, Sample * param_4)


/* AudioSourceSample::rawPlay(float, float, float, Sample*) */

void __thiscall
AudioSourceSample::rawPlay
          (AudioSourceSample *this,float param_1,float param_2,float param_3,Sample *param_4)

{
  uint *puVar1;
  Sample *pSVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined4 uVar7;
  
  if (this[0x30] == (AudioSourceSample)0x0) {
    return;
  }
  puVar1 = (uint *)((long)(this + 0xb0) + ((ulong)*(uint *)(this + 0xac) * 0xe + 1) * 4);
  if (1 < *(uint *)(this + 0xb0)) {
    puVar1 = (uint *)(*(long *)(this + 0xf0) + (ulong)*(uint *)(this + 0xac) * 0x38);
  }
  if (*(long *)(puVar1 + 0xc) == 0) {
    return;
  }
  if (param_4 != (Sample *)0x0) {
    if ((*(ulong *)(param_4 + 0x10) >> 0x26 & 1) != 0) {
      uVar4 = StaticSample::getAudioSource();
      lVar3 = *(long *)(puVar1 + 10);
      goto joined_r0x00a4c6b4;
    }
    if (((*(ulong *)(param_4 + 0x10) >> 0x27 & 1) != 0) && (((byte)param_4[0x78] >> 4 & 1) != 0)) {
      pSVar2 = param_4 + (ulong)*(uint *)(param_4 + 0xac) * 0x38 + 0xb4;
      if (1 < *(uint *)(param_4 + 0xb0)) {
        pSVar2 = (Sample *)(*(long *)(param_4 + 0xf0) + (ulong)*(uint *)(param_4 + 0xac) * 0x38);
      }
      uVar4 = *(undefined8 *)(pSVar2 + 0x30);
      lVar3 = *(long *)(puVar1 + 10);
      goto joined_r0x00a4c6b4;
    }
  }
  uVar4 = 0;
  lVar3 = *(long *)(puVar1 + 10);
joined_r0x00a4c6b4:
  if (lVar3 != 0) {
    LoopSynthesisGenerator::setStart((LoopSynthesisGenerator *)(lVar3 + 0x10),param_2);
    param_2 = 0.0;
  }
  uVar5 = *(undefined4 *)(this + 0x88);
  if ((((byte)this[0x78] >> 3 & 1) == 0) &&
     ((0.0 < *(float *)(this + 0x80) || *(int *)(this + 0xb0) != 0) &&
      (0.0 < *(float *)(this + 0x80) || *(int *)(this + 0xb0) != 1))) {
    uVar5 = 1;
  }
  plVar6 = *(long **)(puVar1 + 0xc);
  uVar7 = Sample::getPitch();
                    /* WARNING: Could not recover jumptable at 0x00a4c72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x10))(param_1,uVar7,param_2,param_3,plVar6,uVar5,uVar4);
  return;
}


