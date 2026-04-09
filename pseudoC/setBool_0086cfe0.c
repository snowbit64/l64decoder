// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBool
// Entry Point: 0086cfe0
// Size: 16 bytes
// Signature: undefined __thiscall setBool(ConditionalAnimationValue * this, bool param_1)


/* ConditionalAnimationValue::setBool(bool) */

void __thiscall ConditionalAnimationValue::setBool(ConditionalAnimationValue *this,bool param_1)

{
  this[4] = (ConditionalAnimationValue)param_1;
  *(undefined4 *)this = 1;
  return;
}


