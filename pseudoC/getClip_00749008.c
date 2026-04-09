// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getClip
// Entry Point: 00749008
// Size: 16 bytes
// Signature: undefined __thiscall getClip(CharacterSet * this, uint param_1)


/* CharacterSet::getClip(unsigned int) */

undefined8 __thiscall CharacterSet::getClip(CharacterSet *this,uint param_1)

{
  return *(undefined8 *)(*(long *)(*(long *)(this + 0x40) + 0x70) + (ulong)param_1 * 8);
}


