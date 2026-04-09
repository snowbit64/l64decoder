// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Lod
// Entry Point: 00a65564
// Size: 52 bytes
// Signature: undefined __thiscall Lod(Lod * this)


/* FoliageSystemDesc::Lod::Lod() */

void __thiscall FoliageSystemDesc::Lod::Lod(Lod *this)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 1;
  *(undefined8 *)(this + 0x34) = uVar1;
  *(undefined8 *)this = 0x40a0000042a00000;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x24) = 0x3f800000;
  return;
}


