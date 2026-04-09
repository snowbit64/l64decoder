// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPanAbsolute
// Entry Point: 00e3ee4c
// Size: 328 bytes
// Signature: undefined __thiscall setPanAbsolute(Soloud * this, uint param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7)


/* SoLoud::Soloud::setPanAbsolute(unsigned int, float, float, float, float, float, float) */

void __thiscall
SoLoud::Soloud::setPanAbsolute
          (Soloud *this,uint param_1,float param_2,float param_3,float param_4,float param_5,
          float param_6,float param_7)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  float *pfVar6;
  uint *puVar7;
  uint local_80;
  undefined4 uStack_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uStack_7c = 0;
  local_80 = param_1;
  lockAudioMutex();
  puVar3 = (uint *)voiceGroupHandleToArray(this,param_1);
  puVar7 = &local_80;
  if (puVar3 != (uint *)0x0) {
    puVar7 = puVar3;
  }
  uVar4 = *puVar7;
  if (uVar4 != 0) {
    do {
      puVar7 = puVar7 + 1;
      iVar2 = getVoiceFromHandle(this,uVar4);
      if (iVar2 != -1) {
        lVar5 = *(long *)(this + (long)iVar2 * 8 + 0xa0);
        iVar2 = *(int *)(lVar5 + 0x4c);
        *(undefined4 *)(lVar5 + 0x90) = 0;
        *(float *)(lVar5 + 0x1c) = param_2;
        *(float *)(lVar5 + 0x20) = param_3;
        if (iVar2 == 8) {
          pfVar6 = (float *)(lVar5 + 0x38);
          *(float *)(lVar5 + 0x24) = param_6;
          *(float *)(lVar5 + 0x28) = param_7;
          *(float *)(lVar5 + 0x2c) = (param_2 + param_4) * 0.5;
          *(float *)(lVar5 + 0x30) = (param_3 + param_5) * 0.5;
          *(float *)(lVar5 + 0x34) = param_4;
        }
        else if (iVar2 == 6) {
          pfVar6 = (float *)(lVar5 + 0x30);
          *(float *)(lVar5 + 0x24) = param_6;
          *(float *)(lVar5 + 0x28) = param_7;
          *(float *)(lVar5 + 0x2c) = param_4;
        }
        else {
          if (iVar2 != 4) goto LAB_00e3eef0;
          pfVar6 = (float *)(lVar5 + 0x28);
          *(float *)(lVar5 + 0x24) = param_4;
        }
        *pfVar6 = param_5;
      }
LAB_00e3eef0:
      uVar4 = *puVar7;
    } while (uVar4 != 0);
  }
  unlockAudioMutex();
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


