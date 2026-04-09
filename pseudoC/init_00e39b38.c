// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00e39b38
// Size: 64 bytes
// Signature: undefined __thiscall init(AudioSourceInstance3dData * this, AudioSource * param_1)


/* SoLoud::AudioSourceInstance3dData::init(SoLoud::AudioSource&) */

void __thiscall
SoLoud::AudioSourceInstance3dData::init(AudioSourceInstance3dData *this,AudioSource *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar5 = NEON_fmov(0x3f800000,4);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x28) = uVar7;
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x40) = uVar2;
  *(undefined8 *)(this + 0x44) = uVar5;
  *(undefined8 *)(this + 0x18) = uVar6;
  *(undefined8 *)(this + 0x30) = uVar4;
  *(undefined8 *)(this + 0x38) = uVar3;
  return;
}


