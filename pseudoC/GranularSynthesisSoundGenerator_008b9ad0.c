// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GranularSynthesisSoundGenerator
// Entry Point: 008b9ad0
// Size: 52 bytes
// Signature: undefined __thiscall GranularSynthesisSoundGenerator(GranularSynthesisSoundGenerator * this)


/* GranularSynthesisSoundGenerator::GranularSynthesisSoundGenerator() */

void __thiscall
GranularSynthesisSoundGenerator::GranularSynthesisSoundGenerator
          (GranularSynthesisSoundGenerator *this)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0xbf800000,4);
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR__GranularSynthesisSoundGenerator_00fdda98;
  return;
}


