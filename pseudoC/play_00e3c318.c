// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: play
// Entry Point: 00e3c318
// Size: 692 bytes
// Signature: undefined __thiscall play(Soloud * this, AudioSource * param_1, float param_2, float param_3, float param_4, bool param_5, uint param_6)


/* SoLoud::Soloud::play(SoLoud::AudioSource&, float, float, float, bool, unsigned int) */

undefined8 __thiscall
SoLoud::Soloud::play
          (Soloud *this,AudioSource *param_1,float param_2,float param_3,float param_4,bool param_5,
          uint param_6)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long **pplVar7;
  float fVar8;
  
  if (((byte)param_1[8] & 1) != 0) {
    AudioSource::stop();
  }
  *(Soloud **)(param_1 + 0x78) = this;
  plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
  lockAudioMutex();
  uVar2 = findFreeVoice();
  if (-1 < (int)uVar2) {
    iVar6 = *(int *)(param_1 + 0x1c);
    if (iVar6 == 0) {
      iVar6 = *(int *)(this + 0x20cc);
      *(int *)(param_1 + 0x1c) = iVar6;
      *(int *)(this + 0x20cc) = iVar6 + 1;
    }
    iVar1 = *(int *)(this + 0x20c8);
    *(int *)(plVar3 + 0x30) = iVar6;
    pplVar7 = (long **)(this + (ulong)uVar2 * 8 + 0xa0);
    *pplVar7 = plVar3;
    *(uint *)((long)plVar3 + 0x184) = param_6;
    AudioSourceInstance::init((AudioSourceInstance *)plVar3,param_1,iVar1);
    AudioSourceInstance3dData::init
              ((AudioSourceInstance3dData *)(this + (ulong)uVar2 * 0x78 + 0x34e0),param_1);
    iVar6 = 0;
    if (*(int *)(this + 0x20c8) != 0xffffe) {
      iVar6 = *(int *)(this + 0x20c8) + 1;
    }
    *(int *)(this + 0x20c8) = iVar6;
    if (param_5) {
      *(uint *)((long)*pplVar7 + 0x14) = *(uint *)((long)*pplVar7 + 0x14) | 2;
    }
    setVoicePan(this,uVar2,param_3);
    fVar8 = *(float *)(param_1 + 0x10);
    if (0.0 <= param_2) {
      fVar8 = param_2;
    }
    setVoiceVolume(this,uVar2,fVar8);
    plVar3 = *pplVar7;
    fVar8 = 1.0;
    if (0.0 <= param_4) {
      fVar8 = param_4;
    }
    *(undefined8 *)((long)plVar3 + 0x164) = *(undefined8 *)((long)plVar3 + 0x24);
    *(undefined8 *)((long)plVar3 + 0x15c) = *(undefined8 *)((long)plVar3 + 0x1c);
    *(undefined8 *)((long)plVar3 + 0x174) = *(undefined8 *)((long)plVar3 + 0x34);
    *(undefined8 *)((long)plVar3 + 0x16c) = *(undefined8 *)((long)plVar3 + 0x2c);
    *(undefined4 *)((long)plVar3 + 0x17c) = *(undefined4 *)(plVar3 + 8);
    setVoiceRelativePlaySpeed(this,uVar2,fVar8);
    if (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) {
      lVar4 = (**(code **)**(undefined8 **)(param_1 + 0x38))();
      (*pplVar7)[0x31] = lVar4;
    }
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      lVar4 = (**(code **)**(undefined8 **)(param_1 + 0x40))();
      (*pplVar7)[0x32] = lVar4;
    }
    if (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
      lVar4 = (**(code **)**(undefined8 **)(param_1 + 0x48))();
      (*pplVar7)[0x33] = lVar4;
    }
    if (*(undefined8 **)(param_1 + 0x50) != (undefined8 *)0x0) {
      lVar4 = (**(code **)**(undefined8 **)(param_1 + 0x50))();
      (*pplVar7)[0x34] = lVar4;
    }
    if (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0) {
      lVar4 = (**(code **)**(undefined8 **)(param_1 + 0x58))();
      (*pplVar7)[0x35] = lVar4;
    }
    if (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0) {
      lVar4 = (**(code **)**(undefined8 **)(param_1 + 0x60))();
      (*pplVar7)[0x36] = lVar4;
    }
    if (*(undefined8 **)(param_1 + 0x68) != (undefined8 *)0x0) {
      lVar4 = (**(code **)**(undefined8 **)(param_1 + 0x68))();
      (*pplVar7)[0x37] = lVar4;
    }
    if (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0) {
      lVar4 = (**(code **)**(undefined8 **)(param_1 + 0x70))();
      (*pplVar7)[0x38] = lVar4;
    }
    this[0x224f0] = (Soloud)0x1;
    unlockAudioMutex();
    uVar5 = getHandleFromVoice(this,uVar2);
    return uVar5;
  }
  unlockAudioMutex();
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  return 7;
}


