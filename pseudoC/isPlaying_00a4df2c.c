// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isPlaying
// Entry Point: 00a4df2c
// Size: 308 bytes
// Signature: undefined isPlaying(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSourceSample::isPlaying() const */

long * AudioSourceSample::isPlaying(void)

{
  double dVar1;
  uint uVar2;
  long *in_x0;
  long *plVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  
  if ((*(uint *)(in_x0 + 0xf) >> 4 & 1) == 0) {
    if (((*(uint *)(in_x0 + 0xf) >> 3 & 1) == 0) || (in_x0[0x14] == 0)) {
      plVar3 = (long *)0x0;
    }
    else if (*(int *)(in_x0 + 0x11) == 0) {
      plVar3 = (long *)0x1;
    }
    else {
      AudioDeviceManager::getInstance();
      plVar3 = (long *)AudioDeviceManager::getCurrentAudioDevice();
      lVar4 = (**(code **)(*plVar3 + 0x1a8))();
      dVar1 = (double)(**(code **)(*plVar3 + 0x1b0))(plVar3,lVar4 - in_x0[0x14]);
      iVar9 = *(int *)(in_x0 + 0x11);
      fVar6 = (float)dVar1 - *(float *)(in_x0 + 0x13);
      if ((float)dVar1 - *(float *)(in_x0 + 0x13) <= 0.0) {
        fVar6 = 0.0;
      }
      fVar8 = *(float *)(in_x0 + 0x15);
      fVar7 = (float)(**(code **)(*in_x0 + 0x28))();
      plVar3 = (long *)(ulong)(fVar8 + fVar6 < fVar7 * (float)iVar9);
    }
  }
  else {
    lVar5 = (ulong)*(uint *)((long)in_x0 + 0xac) * 0x38;
    lVar4 = (long)(in_x0 + 0x16) + lVar5 + 4;
    if (1 < *(uint *)(in_x0 + 0x16)) {
      lVar4 = in_x0[0x1e] + lVar5;
    }
    plVar3 = *(long **)(lVar4 + 0x30);
    if (plVar3 != (long *)0x0) {
      lVar5 = *(long *)(lVar4 + 0x28);
      uVar2 = (**(code **)(*plVar3 + 0x18))();
      plVar3 = (long *)(ulong)(lVar5 == 0 & uVar2);
      if ((lVar5 != 0) && ((uVar2 & 1) != 0)) {
        plVar3 = (long *)(ulong)(*(char *)(*(long *)(lVar4 + 0x28) + 0x6a) == '\0');
      }
    }
  }
  return plVar3;
}


