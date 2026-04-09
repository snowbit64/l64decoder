// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDelaySamples
// Entry Point: 00e3f2f0
// Size: 180 bytes
// Signature: undefined __thiscall setDelaySamples(Soloud * this, uint param_1, uint param_2)


/* SoLoud::Soloud::setDelaySamples(unsigned int, unsigned int) */

void __thiscall SoLoud::Soloud::setDelaySamples(Soloud *this,uint param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  local_40 = param_1;
  lockAudioMutex();
  puVar4 = (uint *)voiceGroupHandleToArray(this,param_1);
  puVar5 = &local_40;
  if (puVar4 != (uint *)0x0) {
    puVar5 = puVar4;
  }
  uVar1 = *puVar5;
  while (uVar1 != 0) {
    puVar5 = puVar5 + 1;
    iVar3 = getVoiceFromHandle(this,uVar1);
    if (iVar3 != -1) {
      *(uint *)(*(long *)(this + (long)iVar3 * 8 + 0xa0) + 0x1e0) = param_2;
    }
    uVar1 = *puVar5;
  }
  unlockAudioMutex();
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


