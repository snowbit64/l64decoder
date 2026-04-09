// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AudioSourceInstance
// Entry Point: 00e39b78
// Size: 212 bytes
// Signature: undefined __thiscall AudioSourceInstance(AudioSourceInstance * this)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoLoud::AudioSourceInstance::AudioSourceInstance() */

void __thiscall SoLoud::AudioSourceInstance::AudioSourceInstance(AudioSourceInstance *this)

{
  undefined auVar1 [16];
  undefined8 uVar2;
  
  *(undefined ***)this = &PTR__AudioSourceInstance_01013cf0;
  Fader::Fader((Fader *)(this + 0x68));
  Fader::Fader((Fader *)(this + 0x98));
  Fader::Fader((Fader *)(this + 200));
  Fader::Fader((Fader *)(this + 0xf8));
  Fader::Fader((Fader *)(this + 0x128));
  auVar1 = NEON_fmov(0x3f800000,4);
  uVar2 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(this + 8) = 0;
  *(long *)(this + 0x30) = auVar1._8_8_;
  *(long *)(this + 0x28) = auVar1._0_8_;
  auVar1 = _DAT_004c4a10;
  *(undefined8 *)(this + 0x38) = uVar2;
  *(long *)(this + 0x20) = auVar1._8_8_;
  *(long *)(this + 0x18) = auVar1._0_8_;
  *(undefined8 *)(this + 0x180) = 0xffffffff00000000;
  *(undefined8 *)(this + 0x4c) = 0x3f80000000000001;
  *(undefined8 *)(this + 0xc) = 0x100000000;
  *(undefined8 *)(this + 0x44) = 0x472c4400472c4400;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x164) = 0;
  *(undefined8 *)(this + 0x15c) = 0;
  *(undefined8 *)(this + 0x174) = 0;
  *(undefined8 *)(this + 0x16c) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1dc) = 0;
  *(undefined8 *)(this + 0x1d4) = 0;
  return;
}


