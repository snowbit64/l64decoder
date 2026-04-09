// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getWrappedTime
// Entry Point: 00748f0c
// Size: 60 bytes
// Signature: undefined __thiscall getWrappedTime(CharacterSet * this, uint param_1)


/* CharacterSet::getWrappedTime(unsigned int) const */

void __thiscall CharacterSet::getWrappedTime(CharacterSet *this,uint param_1)

{
  float __y;
  
  __y = (float)Clip::getDuration();
  fmodf(*(float *)(this + (ulong)param_1 * 4 + 0x9c),__y);
  return;
}


