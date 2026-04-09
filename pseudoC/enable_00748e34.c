// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enable
// Entry Point: 00748e34
// Size: 40 bytes
// Signature: undefined __thiscall enable(CharacterSet * this, uint param_1)


/* CharacterSet::enable(unsigned int) */

void __thiscall CharacterSet::enable(CharacterSet *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + (ulong)param_1 * 4 + 0x54);
  this[0x51] = (CharacterSet)(((byte)(uVar1 >> 1) ^ 0xff) & 1 | (byte)this[0x51]);
  *(uint *)(this + (ulong)param_1 * 4 + 0x54) = uVar1 | 2;
  return;
}


