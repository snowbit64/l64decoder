// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearClip
// Entry Point: 00748fc4
// Size: 36 bytes
// Signature: undefined __thiscall clearClip(CharacterSet * this, uint param_1)


/* CharacterSet::clearClip(unsigned int) */

void __thiscall CharacterSet::clearClip(CharacterSet *this,uint param_1)

{
  uint uVar1;
  CharacterSet CVar2;
  
  CVar2 = this[0x51];
  uVar1 = *(uint *)(this + (ulong)param_1 * 4 + 0x54);
  *(uint *)(this + (ulong)param_1 * 4 + 0x54) = uVar1 & 0xfffffffe;
  this[0x51] = (CharacterSet)((byte)uVar1 & 1 | (byte)CVar2);
  return;
}


