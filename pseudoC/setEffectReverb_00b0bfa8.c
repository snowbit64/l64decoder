// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setEffectReverb
// Entry Point: 00b0bfa8
// Size: 784 bytes
// Signature: undefined __thiscall setEffectReverb(SoftAudioDevice * this, uint param_1, AudioReverbDesc * param_2, AudioReverbDesc * param_3, float param_4, float param_5)


/* SoftAudioDevice::setEffectReverb(unsigned int, AudioReverbDesc const&, AudioReverbDesc const&,
   float, float) */

void __thiscall
SoftAudioDevice::setEffectReverb
          (SoftAudioDevice *this,uint param_1,AudioReverbDesc *param_2,AudioReverbDesc *param_3,
          float param_4,float param_5)

{
  ulong uVar1;
  FDNReverbEffect *pFVar2;
  FDNReverbEffect *this_00;
  SoftAudioEffectBus *this_01;
  ulong uVar3;
  SoftAudioEffectBus *pSVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  
  uVar3 = (ulong)param_1;
  uVar1 = SoLoud::Soloud::getBackendSamplerate();
  pSVar4 = *(SoftAudioEffectBus **)(this + uVar3 * 0x18 + 0xea0);
  this_01 = pSVar4;
  if (pSVar4 == (SoftAudioEffectBus *)0x0) {
    fVar12 = (float)(uVar1 & 0xffffffff);
    pFVar2 = (FDNReverbEffect *)operator_new(0x68);
                    /* try { // try from 00b0c014 to 00b0c01b has its CatchHandler @ 00b0c2d0 */
    FDNReverbEffect::FDNReverbEffect(pFVar2,fVar12);
    this_00 = (FDNReverbEffect *)operator_new(0x68);
                    /* try { // try from 00b0c028 to 00b0c02f has its CatchHandler @ 00b0c2c4 */
    FDNReverbEffect::FDNReverbEffect(this_00,fVar12);
    this_01 = (SoftAudioEffectBus *)operator_new(0x8f8);
                    /* try { // try from 00b0c040 to 00b0c04b has its CatchHandler @ 00b0c2b8 */
    SoftAudioEffectBus::SoftAudioEffectBus(this_01,this,*(Soloud **)(this + 8),fVar12);
    SoftAudioEffectBus::setReverb(this_01,pFVar2,this_00,param_4);
    *(SoftAudioEffectBus **)(this + uVar3 * 0x18 + 0xea0) = this_01;
    *(FDNReverbEffect **)(this + uVar3 * 0x18 + 0xea8) = pFVar2;
    *(FDNReverbEffect **)(this + uVar3 * 0x18 + 0xeb0) = this_00;
  }
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  uVar9 = *(undefined8 *)(param_2 + 8);
  uVar8 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x1be4) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(this + 0x1bdc) = uVar7;
  *(undefined8 *)(this + 0x1bf4) = uVar6;
  *(undefined8 *)(this + 0x1bec) = uVar5;
  *(undefined8 *)(this + 0x1bd4) = uVar9;
  *(undefined8 *)(this + 0x1bcc) = uVar8;
  uVar9 = *(undefined8 *)(param_2 + 0x48);
  uVar8 = *(undefined8 *)(param_2 + 0x40);
  uVar7 = *(undefined8 *)(param_2 + 0x58);
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  uVar5 = *(undefined8 *)(param_2 + 0x5c);
  uVar11 = *(undefined8 *)(param_2 + 0x38);
  uVar10 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(this + 0x1c30) = *(undefined8 *)(param_2 + 100);
  *(undefined8 *)(this + 0x1c28) = uVar5;
  *(undefined8 *)(this + 0x1c14) = uVar9;
  *(undefined8 *)(this + 0x1c0c) = uVar8;
  *(undefined8 *)(this + 0x1c24) = uVar7;
  *(undefined8 *)(this + 0x1c1c) = uVar6;
  *(undefined8 *)(this + 0x1c04) = uVar11;
  *(undefined8 *)(this + 0x1bfc) = uVar10;
  uVar5 = *(undefined8 *)(param_3 + 0x30);
  uVar11 = *(undefined8 *)(param_3 + 0x48);
  uVar10 = *(undefined8 *)(param_3 + 0x40);
  uVar7 = *(undefined8 *)(param_3 + 100);
  uVar6 = *(undefined8 *)(param_3 + 0x5c);
  uVar9 = *(undefined8 *)(param_3 + 0x58);
  uVar8 = *(undefined8 *)(param_3 + 0x50);
  *(undefined8 *)(this + 0x1c70) = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(this + 0x1c68) = uVar5;
  *(undefined8 *)(this + 0x1c80) = uVar11;
  *(undefined8 *)(this + 0x1c78) = uVar10;
  *(undefined8 *)(this + 0x1c9c) = uVar7;
  *(undefined8 *)(this + 0x1c94) = uVar6;
  *(undefined8 *)(this + 0x1c90) = uVar9;
  *(undefined8 *)(this + 0x1c88) = uVar8;
  uVar7 = *(undefined8 *)(param_3 + 0x18);
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  uVar9 = *(undefined8 *)(param_3 + 8);
  uVar8 = *(undefined8 *)param_3;
  *(undefined8 *)(this + 0x1c60) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(this + 0x1c58) = uVar5;
  *(undefined8 *)(this + 0x1c50) = uVar7;
  *(undefined8 *)(this + 0x1c48) = uVar6;
  *(undefined8 *)(this + 0x1c40) = uVar9;
  *(undefined8 *)(this + 0x1c38) = uVar8;
  SoLoud::Soloud::lockAudioMutex();
  SoftAudioEffectBus::setReverb
            (this_01,*(FDNReverbEffect **)(this + uVar3 * 0x18 + 0xea8),
             *(FDNReverbEffect **)(this + uVar3 * 0x18 + 0xeb0),param_4);
  pFVar2 = *(FDNReverbEffect **)(this + uVar3 * 0x18 + 0xea8);
  FDNReverbEffect::setParameter(pFVar2,0,*(float *)(this + 0x1bd4) * param_5);
  FDNReverbEffect::setParameter(pFVar2,1,*(float *)(this + 0x1bd8));
  FDNReverbEffect::setParameter(pFVar2,2,*(float *)(this + 0x1bdc));
  FDNReverbEffect::setParameter(pFVar2,3,*(float *)(this + 0x1be0));
  FDNReverbEffect::setParameter(pFVar2,4,*(float *)(this + 0x1be4));
  FDNReverbEffect::setParameter(pFVar2,5,*(float *)(this + 0x1bec));
  FDNReverbEffect::setParameter(pFVar2,6,*(float *)(this + 0x1bf0));
  FDNReverbEffect::setParameter(pFVar2,7,*(float *)(this + 0x1c00));
  FDNReverbEffect::setParameter(pFVar2,8,*(float *)(this + 0x1c04));
  FDNReverbEffect::setParameter(pFVar2,9,*(float *)(this + 0x1c28));
  FDNReverbEffect::setParameter(pFVar2,10,*(float *)(this + 0x1c2c));
  pFVar2 = *(FDNReverbEffect **)(this + uVar3 * 0x18 + 0xeb0);
  FDNReverbEffect::setParameter(pFVar2,0,*(float *)(this + 0x1c40) * param_5);
  FDNReverbEffect::setParameter(pFVar2,1,*(float *)(this + 0x1c44));
  FDNReverbEffect::setParameter(pFVar2,2,*(float *)(this + 0x1c48));
  FDNReverbEffect::setParameter(pFVar2,3,*(float *)(this + 0x1c4c));
  FDNReverbEffect::setParameter(pFVar2,4,*(float *)(this + 0x1c50));
  FDNReverbEffect::setParameter(pFVar2,5,*(float *)(this + 0x1c58));
  FDNReverbEffect::setParameter(pFVar2,6,*(float *)(this + 0x1c5c));
  FDNReverbEffect::setParameter(pFVar2,7,*(float *)(this + 0x1c6c));
  FDNReverbEffect::setParameter(pFVar2,8,*(float *)(this + 0x1c70));
  FDNReverbEffect::setParameter(pFVar2,9,*(float *)(this + 0x1c94));
  FDNReverbEffect::setParameter(pFVar2,10,*(float *)(this + 0x1c98));
  SoLoud::Soloud::unlockAudioMutex();
  if (pSVar4 == (SoftAudioEffectBus *)0x0) {
    SoLoud::Soloud::playBackground(*(Soloud **)(this + 8),(AudioSource *)this_01,-1.0,false,0);
  }
  return;
}


