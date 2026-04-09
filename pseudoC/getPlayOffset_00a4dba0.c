// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPlayOffset
// Entry Point: 00a4dba0
// Size: 288 bytes
// Signature: undefined getPlayOffset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSourceSample::getPlayOffset() const */

float AudioSourceSample::getPlayOffset(void)

{
  uint *puVar1;
  long in_x0;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  double dVar7;
  
  if ((*(uint *)(in_x0 + 0x78) >> 4 & 1) == 0) {
    fVar6 = 0.0;
    if (((*(uint *)(in_x0 + 0x78) >> 3 & 1) != 0) && (*(long *)(in_x0 + 0xa0) != 0)) {
      AudioDeviceManager::getInstance();
      plVar2 = (long *)AudioDeviceManager::getCurrentAudioDevice();
      lVar3 = (**(code **)(*plVar2 + 0x1a8))();
      dVar7 = (double)(**(code **)(*plVar2 + 0x1b0))(plVar2,lVar3 - *(long *)(in_x0 + 0xa0));
      fVar6 = (float)dVar7 - *(float *)(in_x0 + 0x98);
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      fVar6 = *(float *)(in_x0 + 0xa8) + fVar6;
    }
  }
  else {
    puVar1 = (uint *)(in_x0 + 0xb0) + (ulong)*(uint *)(in_x0 + 0xac) * 0xe + 1;
    if (1 < *(uint *)(in_x0 + 0xb0)) {
      puVar1 = (uint *)(*(long *)(in_x0 + 0xf0) + (ulong)*(uint *)(in_x0 + 0xac) * 0x38);
    }
    if (*(long **)(puVar1 + 0xc) == (long *)0x0) {
      fVar6 = 0.0;
    }
    else {
      uVar4 = (**(code **)(**(long **)(puVar1 + 0xc) + 0x20))();
      if (*(long *)(puVar1 + 10) == 0) {
        if (*(long *)(puVar1 + 8) == 0) {
          uVar5 = 1;
        }
        else {
          uVar5 = (**(code **)(**(long **)(*(long *)(puVar1 + 8) + 0x48) + 0x28))();
        }
      }
      else {
        lVar3 = LoopSynthesisResource::getLoopSynthesisData();
        uVar5 = (ulong)*(uint *)(lVar3 + 0xc);
      }
      fVar6 = ((float)(uVar4 & 0xffffffff) / (float)(uVar5 & 0xffffffff)) * 1000.0;
    }
  }
  return fVar6;
}


