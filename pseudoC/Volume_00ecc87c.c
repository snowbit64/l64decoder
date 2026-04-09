// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Volume
// Entry Point: 00ecc87c
// Size: 36 bytes
// Signature: undefined __thiscall Volume(Volume * this, Parameters * param_1)


/* VHACD::Volume::Volume(VHACD::IVHACD::Parameters const&) */

void __thiscall VHACD::Volume::Volume(Volume *this,Parameters *param_1)

{
  undefined auVar1 [16];
  
  auVar1 = NEON_fmov(0x3ff0000000000000,8);
  *(Parameters **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(long *)(this + 0x28) = auVar1._8_8_;
  *(long *)(this + 0x20) = auVar1._0_8_;
  *(long *)(this + 0x38) = auVar1._8_8_;
  *(long *)(this + 0x30) = auVar1._0_8_;
  return;
}


