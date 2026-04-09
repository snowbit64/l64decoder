// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update3dAudio
// Entry Point: 00e3b650
// Size: 468 bytes
// Signature: undefined update3dAudio(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::Soloud::update3dAudio() */

void SoLoud::Soloud::update3dAudio(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  Soloud *in_x0;
  ulong uVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint local_1068 [1024];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lockAudioMutex();
  uVar1 = *(uint *)(in_x0 + 0x54);
  if ((int)uVar1 < 1) {
    uVar6 = 0;
  }
  else {
    uVar4 = 0;
    uVar6 = 0;
    puVar5 = (uint *)(in_x0 + 0x354c);
    do {
      if ((*(long *)(in_x0 + uVar4 * 8 + 0xa0) != 0) &&
         (uVar2 = *(uint *)(*(long *)(in_x0 + uVar4 * 8 + 0xa0) + 0x14), (uVar2 >> 2 & 1) != 0)) {
        local_1068[uVar6] = (uint)uVar4;
        uVar6 = uVar6 + 1;
        *puVar5 = uVar2;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 0x1e;
    } while (uVar1 != uVar4);
  }
  unlockAudioMutex();
  update3dVoices(in_x0,local_1068,uVar6);
  lockAudioMutex();
  if (0 < (int)uVar6) {
    uVar4 = (ulong)uVar6;
    puVar5 = local_1068;
    do {
      uVar1 = *puVar5;
      uVar7 = (ulong)uVar1;
      lVar8 = *(long *)(in_x0 + uVar7 * 8 + 0xa0);
      if (lVar8 != 0) {
        updateVoiceRelativePlaySpeed(in_x0,uVar1);
        updateVoiceVolume(in_x0,uVar1);
        *(undefined4 *)(lVar8 + 0x1c) = *(undefined4 *)(in_x0 + uVar7 * 0x78 + 0x352c);
        *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)(in_x0 + uVar7 * 0x78 + 0x3530);
        *(undefined4 *)(lVar8 + 0x24) = *(undefined4 *)(in_x0 + uVar7 * 0x78 + 0x3534);
        *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(in_x0 + uVar7 * 0x78 + 0x3538);
        *(undefined4 *)(lVar8 + 0x2c) = *(undefined4 *)(in_x0 + uVar7 * 0x78 + 0x353c);
        *(undefined4 *)(lVar8 + 0x30) = *(undefined4 *)(in_x0 + uVar7 * 0x78 + 0x3540);
        *(undefined4 *)(lVar8 + 0x34) = *(undefined4 *)(in_x0 + uVar7 * 0x78 + 0x3544);
        uVar6 = *(uint *)(lVar8 + 0x14);
        *(undefined4 *)(lVar8 + 0x38) = *(undefined4 *)(in_x0 + uVar7 * 0x78 + 0x3548);
        if (0.004 <= *(float *)(lVar8 + 0x40)) {
          *(uint *)(lVar8 + 0x14) = uVar6 & 0xffffffef;
        }
        else {
          *(uint *)(lVar8 + 0x14) = uVar6 | 0x10;
          if ((uVar6 >> 5 & 1) != 0) {
            stopVoice(in_x0,uVar1);
          }
        }
      }
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  in_x0[0x224f0] = (Soloud)0x1;
  unlockAudioMutex();
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


