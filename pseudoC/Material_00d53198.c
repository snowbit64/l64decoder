// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Material
// Entry Point: 00d53198
// Size: 48 bytes
// Signature: undefined __thiscall Material(Material * this)


/* HACD::Material::Material() */

void __thiscall HACD::Material::Material(Material *this)

{
  undefined auVar1 [16];
  
  auVar1 = NEON_fmov(0x3fe0000000000000,8);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x30) = 0x3fe0000000000000;
  *(undefined8 *)(this + 0x38) = 0;
  *(long *)(this + 8) = auVar1._8_8_;
  *(long *)this = auVar1._0_8_;
  *(undefined8 *)(this + 0x18) = 0x3fd999999999999a;
  *(undefined8 *)(this + 0x10) = 0x3fe0000000000000;
  *(long *)(this + 0x28) = auVar1._8_8_;
  *(long *)(this + 0x20) = auVar1._0_8_;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0x3fd999999999999a;
  return;
}


