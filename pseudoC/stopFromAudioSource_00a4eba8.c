// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stopFromAudioSource
// Entry Point: 00a4eba8
// Size: 336 bytes
// Signature: undefined stopFromAudioSource(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSourceSample::stopFromAudioSource() */

void AudioSourceSample::stopFromAudioSource(void)

{
  byte bVar1;
  long *in_x0;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  
  if ((*(uint *)(in_x0 + 0xf) >> 3 & 1) == 0) {
    if ((*(uint *)(in_x0 + 0xf) >> 1 & 1) == 0) {
      in_x0[0x14] = 0;
    }
    else {
      AudioDeviceManager::getInstance();
      plVar2 = (long *)AudioDeviceManager::getCurrentAudioDevice();
      lVar3 = (**(code **)(*plVar2 + 0x1a8))();
      in_x0[0x14] = lVar3;
      uVar5 = (**(code **)(*in_x0 + 0x48))();
      *(undefined4 *)(in_x0 + 0x15) = uVar5;
      uVar5 = (**(code **)(*in_x0 + 0x58))();
      *(undefined4 *)(in_x0 + 0x13) = uVar5;
    }
    goto LAB_00a4ec8c;
  }
  lVar4 = (ulong)*(uint *)((long)in_x0 + 0xac) * 0x38;
  lVar3 = (long)(in_x0 + 0x16) + lVar4 + 4;
  if (1 < *(uint *)(in_x0 + 0x16)) {
    lVar3 = in_x0[0x1e] + lVar4;
  }
  if (*(long **)(lVar3 + 0x30) != (long *)0x0) {
    lVar4 = *(long *)(lVar3 + 0x28);
    bVar1 = (**(code **)(**(long **)(lVar3 + 0x30) + 0x18))();
    if ((lVar4 == 0) || ((bVar1 & 1) == 0)) {
      if ((lVar4 == 0 & bVar1) != 0) goto LAB_00a4ec8c;
    }
    else if (*(char *)(*(long *)(lVar3 + 0x28) + 0x6a) == '\0') goto LAB_00a4ec8c;
  }
  *(uint *)(in_x0 + 0xf) = *(uint *)(in_x0 + 0xf) & 0xfffffff7;
LAB_00a4ec8c:
  lVar4 = (ulong)*(uint *)((long)in_x0 + 0xac) * 0x38;
  lVar3 = (long)(in_x0 + 0x16) + lVar4 + 4;
  if (1 < *(uint *)(in_x0 + 0x16)) {
    lVar3 = in_x0[0x1e] + lVar4;
  }
  if (*(long **)(lVar3 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x30) + 0x40))(0,0x3dcccccd);
  }
  *(uint *)(in_x0 + 0xf) = *(uint *)(in_x0 + 0xf) & 0xffffffef;
  return;
}


