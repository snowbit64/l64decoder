// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setInaudibleBehavior
// Entry Point: 00e3ef94
// Size: 288 bytes
// Signature: undefined __thiscall setInaudibleBehavior(Soloud * this, uint param_1, bool param_2, bool param_3)


/* SoLoud::Soloud::setInaudibleBehavior(unsigned int, bool, bool) */

void __thiscall
SoLoud::Soloud::setInaudibleBehavior(Soloud *this,uint param_1,bool param_2,bool param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uStack_4c = 0;
  local_50 = param_1;
  lockAudioMutex();
  puVar4 = (uint *)voiceGroupHandleToArray(this,param_1);
  puVar6 = &local_50;
  if (puVar4 != (uint *)0x0) {
    puVar6 = puVar4;
  }
  uVar5 = *puVar6;
  if (uVar5 != 0) {
    if (param_3) {
      do {
        puVar6 = puVar6 + 1;
        iVar3 = getVoiceFromHandle(this,uVar5);
        if (iVar3 != -1) {
          uVar1 = *(uint *)(*(long *)(this + (long)iVar3 * 8 + 0xa0) + 0x14);
          uVar5 = uVar1 | 0x40;
          if (!param_2) {
            uVar5 = uVar1 & 0xffffff9f;
          }
          *(uint *)(*(long *)(this + (long)iVar3 * 8 + 0xa0) + 0x14) = uVar5 | 0x20;
        }
        uVar5 = *puVar6;
      } while (uVar5 != 0);
    }
    else {
      do {
        puVar6 = puVar6 + 1;
        iVar3 = getVoiceFromHandle(this,uVar5);
        if (iVar3 != -1) {
          uVar5 = *(uint *)(*(long *)(this + (long)iVar3 * 8 + 0xa0) + 0x14) & 0xffffff9f;
          uVar1 = uVar5 | 0x40;
          if (!param_2) {
            uVar1 = uVar5;
          }
          *(uint *)(*(long *)(this + (long)iVar3 * 8 + 0xa0) + 0x14) = uVar1;
        }
        uVar5 = *puVar6;
      } while (uVar5 != 0);
    }
  }
  unlockAudioMutex();
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


