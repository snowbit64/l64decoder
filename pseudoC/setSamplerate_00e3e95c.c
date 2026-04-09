// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSamplerate
// Entry Point: 00e3e95c
// Size: 200 bytes
// Signature: undefined __thiscall setSamplerate(Soloud * this, uint param_1, float param_2)


/* SoLoud::Soloud::setSamplerate(unsigned int, float) */

void __thiscall SoLoud::Soloud::setSamplerate(Soloud *this,uint param_1,float param_2)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_3c = 0;
  local_40 = param_1;
  lockAudioMutex();
  puVar3 = (uint *)voiceGroupHandleToArray(this,param_1);
  puVar4 = &local_40;
  if (puVar3 != (uint *)0x0) {
    puVar4 = puVar3;
  }
  uVar2 = *puVar4;
  while (uVar2 != 0) {
    puVar4 = puVar4 + 1;
    uVar2 = getVoiceFromHandle(this,uVar2);
    if (uVar2 != 0xffffffff) {
      *(float *)(*(long *)(this + (long)(int)uVar2 * 8 + 0xa0) + 0x44) = param_2;
      updateVoiceRelativePlaySpeed(this,uVar2);
    }
    uVar2 = *puVar4;
  }
  unlockAudioMutex();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


