// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getReverbPreset
// Entry Point: 00b0bf64
// Size: 60 bytes
// Signature: undefined __thiscall getReverbPreset(SoftAudioDevice * this, REVERB_PRESET_TYPES param_1, AudioReverbDesc * param_2)


/* SoftAudioDevice::getReverbPreset(AudioReverbDesc::REVERB_PRESET_TYPES, AudioReverbDesc&) */

void __thiscall
SoftAudioDevice::getReverbPreset
          (SoftAudioDevice *this,REVERB_PRESET_TYPES param_1,AudioReverbDesc *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *(undefined8 *)(this + (ulong)param_1 * 0x6c + 0x1cb4);
  uVar2 = *(undefined8 *)(this + (ulong)param_1 * 0x6c + 0x1ccc);
  uVar1 = *(undefined8 *)(this + (ulong)param_1 * 0x6c + 0x1cc4);
  uVar5 = *(undefined8 *)(this + (ulong)param_1 * 0x6c + 0x1cac);
  uVar4 = *(undefined8 *)(this + (ulong)param_1 * 0x6c + 0x1ca4);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(this + (ulong)param_1 * 0x6c + 0x1cbc);
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  *(undefined8 *)(param_2 + 0x28) = uVar2;
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  *(undefined8 *)(param_2 + 8) = uVar5;
  *(undefined8 *)param_2 = uVar4;
  uVar5 = *(undefined8 *)(this + (ulong)param_1 * 0x6c + 0x1cec);
  uVar4 = *(undefined8 *)(this + (ulong)param_1 * 0x6c + 0x1ce4);
  uVar3 = *(undefined8 *)(this + (ulong)param_1 * 0x6c + 0x1cfc);
  uVar2 = *(undefined8 *)(this + (ulong)param_1 * 0x6c + 0x1cf4);
  uVar1 = *(undefined8 *)(this + (ulong)param_1 * 0x6c + 0x1d00);
  uVar7 = *(undefined8 *)(this + (ulong)param_1 * 0x6c + 0x1cdc);
  uVar6 = *(undefined8 *)(this + (ulong)param_1 * 0x6c + 0x1cd4);
  *(undefined8 *)(param_2 + 100) = *(undefined8 *)(this + (ulong)param_1 * 0x6c + 0x1d08);
  *(undefined8 *)(param_2 + 0x5c) = uVar1;
  *(undefined8 *)(param_2 + 0x48) = uVar5;
  *(undefined8 *)(param_2 + 0x40) = uVar4;
  *(undefined8 *)(param_2 + 0x58) = uVar3;
  *(undefined8 *)(param_2 + 0x50) = uVar2;
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  return;
}


