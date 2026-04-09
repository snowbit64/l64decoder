// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTime
// Entry Point: 00748f00
// Size: 12 bytes
// Signature: undefined __thiscall getTime(CharacterSet * this, uint param_1)


/* CharacterSet::getTime(unsigned int) const */

undefined4 __thiscall CharacterSet::getTime(CharacterSet *this,uint param_1)

{
  return *(undefined4 *)(this + (ulong)param_1 * 4 + 0x9c);
}


