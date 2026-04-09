// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: play
// Entry Point: 00b0fa74
// Size: 728 bytes
// Signature: undefined __thiscall play(SoftAudioSource * this, float param_1, float param_2, uint param_3, float param_4, float param_5, IAudioSource * param_6)


/* SoftAudioSource::play(float, float, unsigned int, float, float, IAudioSource*) */

void __thiscall
SoftAudioSource::play
          (SoftAudioSource *this,float param_1,float param_2,uint param_3,float param_4,
          float param_5,IAudioSource *param_6)

{
  AudioSource *this_00;
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  Soloud *this_01;
  long lVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  Bus *local_80;
  
  lVar1 = tpidr_el0;
  this_00 = (AudioSource *)(this + 8);
  lVar5 = *(long *)(lVar1 + 0x28);
  SoLoud::AudioSource::stop();
  iVar2 = *(int *)(this + 0x10c);
  if (iVar2 == -1) {
    iVar2 = SoftAudioDevice::getNumGroupEffects
                      (*(SoftAudioDevice **)(this + 0xa8),*(uint *)(this + 0xd0));
    if (iVar2 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = SoftAudioDevice::getGroupEffect
                        (*(SoftAudioDevice **)(this + 0xa8),*(uint *)(this + 0xd0),0);
    }
  }
  SoLoud::AudioSource::setMaxLoopCount(this_00,param_3);
  *(float *)(this + 0x108) = param_1;
  fVar8 = (float)SoftAudioDevice::getGroupVolume
                           (*(SoftAudioDevice **)(this + 0xa8),*(uint *)(this + 0xd0));
  fVar8 = fVar8 * *(float *)(this + 0x108);
  if (iVar2 == -1) {
    if (this[0xd4] == (SoftAudioSource)0x0) goto LAB_00b0fbc0;
  }
  else {
    SoftAudioDevice::getEffect((uint)*(undefined8 *)(this + 0xa8));
    if (this[0xd4] == (SoftAudioSource)0x0) {
      if (local_80 != (Bus *)0x0) {
        uVar3 = SoLoud::Bus::play(local_80,this_00,fVar8,0.0,param_2,true);
        goto LAB_00b0fbe0;
      }
LAB_00b0fbc0:
      uVar3 = SoLoud::Soloud::play(*(Soloud **)(this + 0xb8),this_00,fVar8,0.0,param_2,true,0);
      goto LAB_00b0fbe0;
    }
    if (local_80 != (Bus *)0x0) {
      uVar3 = SoLoud::Bus::play3d(local_80,this_00,*(float *)(this + 0xd8),*(float *)(this + 0xdc),
                                  *(float *)(this + 0xe0),*(float *)(this + 0xe4),
                                  *(float *)(this + 0xe8),*(float *)(this + 0xec),fVar8,param_2,true
                                 );
      goto LAB_00b0fbe0;
    }
  }
  uVar3 = SoLoud::Soloud::play3d
                    (*(Soloud **)(this + 0xb8),this_00,*(float *)(this + 0xd8),
                     *(float *)(this + 0xdc),*(float *)(this + 0xe0),*(float *)(this + 0xe4),
                     *(float *)(this + 0xe8),*(float *)(this + 0xec),fVar8,param_2,true,0);
LAB_00b0fbe0:
  fVar8 = 0.0;
  *(uint *)(this + 200) = uVar3;
  if (0.0 < param_5) {
    uVar4 = SoLoud::Soloud::getBackendSamplerate();
    uVar3 = *(uint *)(this + 200);
    fVar8 = (param_5 / 1000.0) * (float)(uVar4 & 0xffffffff);
  }
  SoLoud::Soloud::setRelativePlaySpeed(*(Soloud **)(this + 0xb8),uVar3,param_2);
  updateFrequencyFilter();
  SoLoud::Soloud::lockAudioMutex();
  uVar3 = SoLoud::Soloud::getVoiceFromHandle(*(Soloud **)(this + 0xb8),*(uint *)(this + 200));
  if ((uVar3 != 0xffffffff) &&
     (*(long *)(*(Soloud **)(this + 0xb8) + (long)(int)uVar3 * 8 + 0xa0) != 0)) {
    if ((param_6 != (IAudioSource *)0x0) &&
       (((*(uint *)(param_6 + 200) != 0 &&
         (iVar2 = SoLoud::Soloud::getVoiceFromHandle
                            (*(Soloud **)(this + 0xb8),*(uint *)(param_6 + 200)), iVar2 != -1)) &&
        (plVar7 = *(long **)(*(long *)(this + 0xb8) + (long)iVar2 * 8 + 0xa0), plVar7 != (long *)0x0
        )))) {
      fVar9 = (float)(**(code **)(*plVar7 + 0x30))(plVar7,2);
      fVar11 = *(float *)((long)plVar7 + 0x44);
      fVar12 = *(float *)(plVar7 + 10);
      uVar4 = SoLoud::Soloud::getBackendSamplerate();
      fVar10 = (float)NEON_ucvtf(*(undefined4 *)(plVar7 + 0x3c));
      fVar8 = (float)NEON_fmadd((fVar9 / fVar11) / fVar12,(float)(uVar4 & 0xffffffff),fVar8);
      fVar8 = fVar8 + fVar10;
    }
    this_01 = *(Soloud **)(this + 0xb8);
    lVar6 = *(long *)(this_01 + (long)(int)uVar3 * 8 + 0xa0);
    *(int *)(lVar6 + 0x1e0) = *(int *)(lVar6 + 0x1e0) + (int)(fVar8 + 0.5);
    SoLoud::Soloud::setVoicePause(this_01,uVar3,0);
  }
  SoLoud::Soloud::unlockAudioMutex();
  iVar2 = FUN_00f276a0(1,this + 0x110);
  if (iVar2 == 0) {
    SoftAudioDevice::notifySourceStartsPlaying(*(SoftAudioDevice **)(this + 0xa8),this);
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


