// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NullAudioSource
// Entry Point: 00b0a67c
// Size: 160 bytes
// Signature: undefined __thiscall NullAudioSource(NullAudioSource * this, AudioSourceDesc * param_1, NullAudioDevice * param_2)


/* NullAudioSource::NullAudioSource(AudioSourceDesc const&, NullAudioDevice*) */

void __thiscall
NullAudioSource::NullAudioSource
          (NullAudioSource *this,AudioSourceDesc *param_1,NullAudioDevice *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  *(undefined8 *)(this + 0x10) = 0;
  plVar4 = *(long **)param_1;
  *(undefined4 *)(this + 0x20) = 1;
  *(undefined4 *)(this + 0xc) = 0x3f800000;
  *(NullAudioDevice **)(this + 0x28) = param_2;
  this[8] = (NullAudioSource)0x0;
  *(undefined ***)this = &PTR__NullAudioSource_00fe7628;
  uVar1 = (**(code **)(*plVar4 + 0x38))(plVar4);
  lVar2 = *plVar4;
  *(undefined4 *)(this + 0x24) = uVar1;
  uVar1 = (**(code **)(lVar2 + 0x20))(plVar4);
  lVar2 = *(long *)param_1;
  *(undefined4 *)(this + 0x20) = uVar1;
  lVar3 = *plVar4;
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(lVar2 + 0x14);
  uVar1 = (**(code **)(lVar3 + 0x28))(plVar4);
  *(undefined4 *)(this + 0x1c) = uVar1;
  return;
}


