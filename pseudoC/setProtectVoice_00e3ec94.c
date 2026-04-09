// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setProtectVoice
// Entry Point: 00e3ec94
// Size: 248 bytes
// Signature: undefined __thiscall setProtectVoice(Soloud * this, uint param_1, bool param_2)


/* SoLoud::Soloud::setProtectVoice(unsigned int, bool) */

void __thiscall SoLoud::Soloud::setProtectVoice(Soloud *this,uint param_1,bool param_2)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_3c = 0;
  local_40 = param_1;
  lockAudioMutex();
  puVar3 = (uint *)voiceGroupHandleToArray(this,param_1);
  puVar5 = &local_40;
  if (puVar3 != (uint *)0x0) {
    puVar5 = puVar3;
  }
  uVar4 = *puVar5;
  if (uVar4 != 0) {
    if (param_2) {
      do {
        puVar5 = puVar5 + 1;
        iVar2 = getVoiceFromHandle(this,uVar4);
        if (iVar2 != -1) {
          *(uint *)(*(long *)(this + (long)iVar2 * 8 + 0xa0) + 0x14) =
               *(uint *)(*(long *)(this + (long)iVar2 * 8 + 0xa0) + 0x14) | 1;
        }
        uVar4 = *puVar5;
      } while (uVar4 != 0);
    }
    else {
      do {
        puVar5 = puVar5 + 1;
        iVar2 = getVoiceFromHandle(this,uVar4);
        if (iVar2 != -1) {
          *(uint *)(*(long *)(this + (long)iVar2 * 8 + 0xa0) + 0x14) =
               *(uint *)(*(long *)(this + (long)iVar2 * 8 + 0xa0) + 0x14) & 0xfffffffe;
        }
        uVar4 = *puVar5;
      } while (uVar4 != 0);
    }
  }
  unlockAudioMutex();
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


