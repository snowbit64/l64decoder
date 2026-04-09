// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTime
// Entry Point: 00748ea8
// Size: 88 bytes
// Signature: undefined __thiscall setTime(CharacterSet * this, uint param_1, float param_2)


/* CharacterSet::setTime(unsigned int, float) */

void __thiscall CharacterSet::setTime(CharacterSet *this,uint param_1,float param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_1;
  if (((~*(uint *)(this + uVar1 * 4 + 0x54) & 3) == 0) &&
     (1e-07 < *(float *)(this + uVar1 * 4 + 0xb4))) {
    this[0x51] = (CharacterSet)((byte)this[0x51] | *(float *)(this + uVar1 * 4 + 0x9c) != param_2);
  }
  *(float *)(this + uVar1 * 4 + 0x9c) = param_2;
  return;
}


