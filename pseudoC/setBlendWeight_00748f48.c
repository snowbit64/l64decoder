// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBlendWeight
// Entry Point: 00748f48
// Size: 52 bytes
// Signature: undefined __thiscall setBlendWeight(CharacterSet * this, uint param_1, float param_2)


/* CharacterSet::setBlendWeight(unsigned int, float) */

void __thiscall CharacterSet::setBlendWeight(CharacterSet *this,uint param_1,float param_2)

{
  CharacterSet CVar1;
  
  if (this[0x51] == (CharacterSet)0x0) {
    CVar1 = (CharacterSet)(*(float *)(this + (ulong)param_1 * 4 + 0xb4) != param_2);
  }
  else {
    CVar1 = (CharacterSet)0x1;
  }
  this[0x51] = CVar1;
  *(float *)(this + (ulong)param_1 * 4 + 0xb4) = param_2;
  return;
}


