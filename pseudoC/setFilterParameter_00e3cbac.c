// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFilterParameter
// Entry Point: 00e3cbac
// Size: 296 bytes
// Signature: undefined __thiscall setFilterParameter(Soloud * this, uint param_1, uint param_2, uint param_3, float param_4)


/* SoLoud::Soloud::setFilterParameter(unsigned int, unsigned int, unsigned int, float) */

void __thiscall
SoLoud::Soloud::setFilterParameter
          (Soloud *this,uint param_1,uint param_2,uint param_3,float param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint *puVar4;
  long *plVar5;
  uint *puVar6;
  uint local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_2 < 8) {
    if (param_1 == 0) {
      lockAudioMutex();
      plVar5 = *(long **)(this + (ulong)param_2 * 8 + 0x2158);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x28))(param_4,plVar5,param_3);
      }
    }
    else {
      uStack_4c = 0;
      local_50 = param_1;
      lockAudioMutex();
      puVar4 = (uint *)voiceGroupHandleToArray(this,param_1);
      puVar6 = &local_50;
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
          (**(code **)(*plVar5 + 0x28))(param_4,plVar5,param_3);
        }
        uVar1 = *puVar6;
      }
    }
    unlockAudioMutex();
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


