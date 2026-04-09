// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fadeFilterParameter
// Entry Point: 00e3ccd4
// Size: 316 bytes
// Signature: undefined __thiscall fadeFilterParameter(Soloud * this, uint param_1, uint param_2, uint param_3, float param_4, double param_5)


/* SoLoud::Soloud::fadeFilterParameter(unsigned int, unsigned int, unsigned int, float, double) */

void __thiscall
SoLoud::Soloud::fadeFilterParameter
          (Soloud *this,uint param_1,uint param_2,uint param_3,float param_4,double param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint *puVar4;
  long *plVar5;
  uint *puVar6;
  uint local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_2 < 8) {
    if (param_1 == 0) {
      lockAudioMutex();
      plVar5 = *(long **)(this + (ulong)param_2 * 8 + 0x2158);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x30))(param_4,param_5,*(undefined8 *)(this + 0x2108),plVar5,param_3)
        ;
      }
    }
    else {
      uStack_5c = 0;
      local_60 = param_1;
      lockAudioMutex();
      puVar4 = (uint *)voiceGroupHandleToArray(this,param_1);
      puVar6 = &local_60;
      if (puVar4 != (uint *)0x0) {
        puVar6 = puVar4;
      }
      uVar1 = *puVar6;
      while (uVar1 != 0) {
        puVar6 = puVar6 + 1;
        iVar3 = getVoiceFromHandle(this,uVar1);
        if (((iVar3 != -1) && (*(long *)(this + (long)iVar3 * 8 + 0xa0) != 0)) &&
           (plVar5 = *(long **)(*(long *)(this + (long)iVar3 * 8 + 0xa0) + (ulong)param_2 * 8 +
                               0x188), plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x30))
                    (param_4,param_5,*(undefined8 *)(this + 0x2108),plVar5,param_3);
        }
        uVar1 = *puVar6;
      }
    }
    unlockAudioMutex();
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


