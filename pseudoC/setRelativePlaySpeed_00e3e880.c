// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRelativePlaySpeed
// Entry Point: 00e3e880
// Size: 220 bytes
// Signature: undefined __thiscall setRelativePlaySpeed(Soloud * this, uint param_1, float param_2)


/* SoLoud::Soloud::setRelativePlaySpeed(unsigned int, float) */

undefined4 __thiscall SoLoud::Soloud::setRelativePlaySpeed(Soloud *this,uint param_1,float param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_4c = 0;
  local_50 = param_1;
  lockAudioMutex();
  puVar4 = (uint *)voiceGroupHandleToArray(this,param_1);
  puVar5 = &local_50;
  if (puVar4 != (uint *)0x0) {
    puVar5 = puVar4;
  }
  uVar2 = *puVar5;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      puVar5 = puVar5 + 1;
      uVar2 = getVoiceFromHandle(this,uVar2);
      if (uVar2 != 0xffffffff) {
        *(undefined4 *)(*(long *)(this + (long)(int)uVar2 * 8 + 0xa0) + 0xf0) = 0;
        uVar3 = setVoiceRelativePlaySpeed(this,uVar2,param_2);
      }
      uVar2 = *puVar5;
    } while (uVar2 != 0);
  }
  unlockAudioMutex();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


