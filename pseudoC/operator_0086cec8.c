// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator==
// Entry Point: 0086cec8
// Size: 80 bytes
// Signature: undefined __thiscall operator==(ConditionalAnimationValue * this, ConditionalAnimationValue * param_1)


/* ConditionalAnimationValue::TEMPNAMEPLACEHOLDERVALUE(ConditionalAnimationValue const&) const */

bool __thiscall
ConditionalAnimationValue::operator==
          (ConditionalAnimationValue *this,ConditionalAnimationValue *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 == *(int *)param_1) {
    if (iVar1 == 2) {
      return *(float *)(this + 4) == *(float *)(param_1 + 4);
    }
    if (iVar1 == 1) {
      return this[4] == param_1[4];
    }
  }
  return false;
}


