// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assignClip
// Entry Point: 00748f7c
// Size: 72 bytes
// Signature: undefined __thiscall assignClip(CharacterSet * this, uint param_1, uint param_2)


/* CharacterSet::assignClip(unsigned int, unsigned int) */

void __thiscall CharacterSet::assignClip(CharacterSet *this,uint param_1,uint param_2)

{
  uint uVar1;
  CharacterSet CVar2;
  bool bVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_1;
  uVar1 = *(uint *)(this + uVar4 * 4 + 0x54);
  if ((uVar1 & 1) == 0) {
    bVar3 = true;
  }
  else {
    bVar3 = *(uint *)(this + uVar4 * 4 + 0x6c) != param_2;
  }
  CVar2 = this[0x51];
  *(uint *)(this + uVar4 * 4 + 0x6c) = param_2;
  *(uint *)(this + uVar4 * 4 + 0x54) = uVar1 | 1;
  this[0x51] = (CharacterSet)((byte)CVar2 | bVar3);
  return;
}


