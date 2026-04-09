// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSpeedScale
// Entry Point: 00748e90
// Size: 12 bytes
// Signature: undefined __thiscall setSpeedScale(CharacterSet * this, uint param_1, float param_2)


/* CharacterSet::setSpeedScale(unsigned int, float) */

void __thiscall CharacterSet::setSpeedScale(CharacterSet *this,uint param_1,float param_2)

{
  *(float *)(this + (ulong)param_1 * 4 + 0x84) = param_2;
  return;
}


