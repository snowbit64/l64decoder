// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPause
// Entry Point: 00e3ea24
// Size: 188 bytes
// Signature: undefined __thiscall setPause(Soloud * this, uint param_1, bool param_2)


/* SoLoud::Soloud::setPause(unsigned int, bool) */

void __thiscall SoLoud::Soloud::setPause(Soloud *this,uint param_1,bool param_2)

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
  if (uVar2 != 0) {
    do {
      puVar4 = puVar4 + 1;
      uVar2 = getVoiceFromHandle(this,uVar2);
      if (uVar2 != 0xffffffff) {
        setVoicePause(this,uVar2,param_2 & 1);
      }
      uVar2 = *puVar4;
    } while (uVar2 != 0);
  }
  unlockAudioMutex();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


