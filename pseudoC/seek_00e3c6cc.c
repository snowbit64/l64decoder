// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: seek
// Entry Point: 00e3c6cc
// Size: 228 bytes
// Signature: undefined __thiscall seek(Soloud * this, uint param_1, double param_2)


/* SoLoud::Soloud::seek(unsigned int, double) */

int __thiscall SoLoud::Soloud::seek(Soloud *this,uint param_1,double param_2)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_4c = 0;
  local_50 = param_1;
  lockAudioMutex();
  puVar3 = (uint *)voiceGroupHandleToArray(this,param_1);
  puVar6 = &local_50;
  if (puVar3 != (uint *)0x0) {
    puVar6 = puVar3;
  }
  uVar4 = *puVar6;
  if (uVar4 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    do {
      puVar6 = puVar6 + 1;
      iVar2 = getVoiceFromHandle(this,uVar4);
      if ((iVar2 != -1) &&
         (iVar2 = (**(code **)(**(long **)(this + (long)iVar2 * 8 + 0xa0) + 0x20))
                            (param_2,*(long **)(this + (long)iVar2 * 8 + 0xa0),
                             *(undefined8 *)(this + 0x58),*(undefined4 *)(this + 0x70)), iVar2 != 0)
         ) {
        iVar5 = iVar2;
      }
      uVar4 = *puVar6;
    } while (uVar4 != 0);
  }
  unlockAudioMutex();
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}


