// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPlayTimeLeft
// Entry Point: 00a4dcc0
// Size: 340 bytes
// Signature: undefined getPlayTimeLeft(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSourceSample::getPlayTimeLeft() const */

float AudioSourceSample::getPlayTimeLeft(void)

{
  long *in_x0;
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  int iVar10;
  
  if ((*(uint *)(in_x0 + 0xf) >> 4 & 1) == 0) {
    fVar6 = 0.0;
    if ((((*(uint *)(in_x0 + 0xf) >> 3 & 1) != 0) && (in_x0[0x14] != 0)) &&
       (*(int *)(in_x0 + 0x11) != 0)) {
      AudioDeviceManager::getInstance();
      plVar1 = (long *)AudioDeviceManager::getCurrentAudioDevice();
      lVar2 = (**(code **)(*plVar1 + 0x1a8))();
      dVar8 = (double)(**(code **)(*plVar1 + 0x1b0))(plVar1,lVar2 - in_x0[0x14]);
      iVar10 = *(int *)(in_x0 + 0x11);
      fVar6 = (float)dVar8 - *(float *)(in_x0 + 0x13);
      fVar9 = *(float *)(in_x0 + 0x15);
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      fVar7 = (float)(**(code **)(*in_x0 + 0x28))();
      fVar6 = fVar7 * (float)iVar10 - (fVar9 + fVar6);
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
    }
  }
  else {
    lVar5 = (ulong)*(uint *)((long)in_x0 + 0xac) * 0x38;
    lVar2 = (long)(in_x0 + 0x16) + lVar5 + 4;
    if (1 < *(uint *)(in_x0 + 0x16)) {
      lVar2 = in_x0[0x1e] + lVar5;
    }
    if (*(long **)(lVar2 + 0x30) == (long *)0x0) {
      fVar6 = 0.0;
    }
    else {
      uVar3 = (**(code **)(**(long **)(lVar2 + 0x30) + 0x28))();
      if (*(long *)(lVar2 + 0x28) == 0) {
        if (*(long *)(lVar2 + 0x20) == 0) {
          uVar4 = 1;
        }
        else {
          uVar4 = (**(code **)(**(long **)(*(long *)(lVar2 + 0x20) + 0x48) + 0x28))();
        }
      }
      else {
        lVar2 = LoopSynthesisResource::getLoopSynthesisData();
        uVar4 = (ulong)*(uint *)(lVar2 + 0xc);
      }
      fVar6 = ((float)(uVar3 & 0xffffffff) / (float)(uVar4 & 0xffffffff)) * 1000.0;
    }
  }
  return fVar6;
}


