// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SoftAudioSource
// Entry Point: 00b0f788
// Size: 416 bytes
// Signature: undefined __thiscall SoftAudioSource(SoftAudioSource * this, AudioSourceDesc * param_1, SoftAudioDevice * param_2, Soloud * param_3)


/* SoftAudioSource::SoftAudioSource(AudioSourceDesc const&, SoftAudioDevice*, SoLoud::Soloud*) */

void __thiscall
SoftAudioSource::SoftAudioSource
          (SoftAudioSource *this,AudioSourceDesc *param_1,SoftAudioDevice *param_2,Soloud *param_3)

{
  AudioSource *this_00;
  SoftAudioSource SVar1;
  undefined4 uVar2;
  undefined8 *this_01;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  this_00 = (AudioSource *)(this + 8);
  *(undefined ***)this = &PTR__IAudioSource_00fe7d40;
  SoLoud::AudioSource::AudioSource(this_00);
  uVar6 = NEON_fmov(0xbf800000,4);
  *(Soloud **)(this + 0x80) = param_3;
  uVar4 = *(undefined8 *)param_1;
  *(SoftAudioDevice **)(this + 0xa8) = param_2;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xb0) = uVar4;
  *(Soloud **)(this + 0xb8) = param_3;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined ***)this = &PTR__SoftAudioSource_00fe7c10;
  *(undefined ***)(this + 8) = &PTR_setFilter_00fe7cd8;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x108) = 0x3f800000;
  SVar1 = *(SoftAudioSource *)(param_1 + 8);
  *(undefined8 *)(this + 0x100) = uVar6;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xf8) = 0xbf800000bf800000;
  *(undefined8 *)(this + 0xf0) = 0x3f8000003f800000;
  this[0xd4] = SVar1;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0x38) = 0x3c23d70a;
  *(undefined8 *)(this + 0x28) = 0x412000003f800000;
  *(undefined8 *)(this + 0x30) = 0x43fc00000;
  *(undefined4 *)(this + 0x10c) = 0xffffffff;
                    /* try { // try from 00b0f858 to 00b0f85f has its CatchHandler @ 00b0f938 */
  this_01 = (undefined8 *)operator_new(0x20);
  this_01[1] = 0;
  *this_01 = 0;
  this_01[3] = 0;
  this_01[2] = 0;
                    /* try { // try from 00b0f86c to 00b0f86f has its CatchHandler @ 00b0f928 */
  SoLoud::BiquadResonantFilter::BiquadResonantFilter((BiquadResonantFilter *)this_01);
  *(undefined8 **)(this + 0xc0) = this_01;
  lVar5 = *(long *)param_2;
  *this_01 = &PTR_createInstance_00fe7e00;
                    /* try { // try from 00b0f88c to 00b0f913 has its CatchHandler @ 00b0f938 */
  uVar3 = (**(code **)(lVar5 + 0x28))(param_2);
  SoLoud::BiquadResonantFilter::setParams
            ((BiquadResonantFilter *)this_01,1,(float)(uVar3 & 0xffffffff),5000.0,2.0);
  *(undefined4 *)(*(long *)(this + 0xc0) + 0x18) = 0;
  uVar2 = SoftAudioDevice::getLowPassFilterSlot();
  (***(code ***)(this + 8))(this_00,uVar2,*(undefined8 *)(this + 0xc0));
  uVar2 = SoftAudioBuffer::getNumChannels();
  *(undefined4 *)(this + 0x20) = uVar2;
  uVar3 = (**(code **)(**(long **)(this + 0xb0) + 0x28))(*(long **)(this + 0xb0));
  *(float *)(this + 0x14) = (float)(uVar3 & 0xffffffff);
  SoLoud::AudioSource::setInaudibleBehavior(this_00,true,false);
  return;
}


