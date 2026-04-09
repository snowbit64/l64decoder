// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: play
// Entry Point: 00a4d9cc
// Size: 280 bytes
// Signature: undefined __thiscall play(AudioSourceSample * this, uint param_1, float param_2, float param_3, float param_4, Sample * param_5)


/* AudioSourceSample::play(unsigned int, float, float, float, Sample*) */

undefined8 __thiscall
AudioSourceSample::play
          (AudioSourceSample *this,uint param_1,float param_2,float param_3,float param_4,
          Sample *param_5)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  
  uVar1 = *(uint *)(*(long *)(this + 0x70) + 0x40);
  *(float *)(this + 0x58) = param_2;
  if ((uVar1 >> 0x10 & 1) == 0) {
    *(uint *)(*(long *)(this + 0x70) + 0x40) = uVar1 | 0x10000;
    AudioSource::setAudioSourceCullingDirty();
  }
  uVar1 = *(uint *)(this + 0x78);
  *(float *)(this + 0x98) = param_4;
  *(float *)(this + 0xa8) = param_3;
  *(uint *)(this + 0x88) = param_1;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(uint *)(this + 0x78) = uVar1 | 8;
  if ((uVar1 >> 4 & 1) == 0) {
    AudioDeviceManager::getInstance();
    plVar2 = (long *)AudioDeviceManager::getCurrentAudioDevice();
    if (param_5 != (Sample *)0x0) {
      lVar5 = *plVar2;
      *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_5 + 0x18);
      lVar5 = (**(code **)(lVar5 + 0x1a8))(plVar2);
      fVar6 = (float)(**(code **)(*(long *)param_5 + 0x50))(param_5);
      lVar3 = (**(code **)(*plVar2 + 0x1b8))((double)fVar6,plVar2);
      *(long *)(this + 0x90) = lVar3 + lVar5;
    }
    if (((byte)this[0x78] >> 1 & 1) != 0) {
      uVar4 = (**(code **)(*plVar2 + 0x1a8))(plVar2);
      *(undefined8 *)(this + 0xa0) = uVar4;
    }
  }
  else {
    rawPlay(this,param_2,param_3,param_4,param_5);
  }
  return 1;
}


