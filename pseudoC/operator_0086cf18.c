// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator!=
// Entry Point: 0086cf18
// Size: 80 bytes
// Signature: undefined __thiscall operator!=(ConditionalAnimationValue * this, ConditionalAnimationValue * param_1)


/* ConditionalAnimationValue::TEMPNAMEPLACEHOLDERVALUE(ConditionalAnimationValue const&) const */

byte __thiscall
ConditionalAnimationValue::operator!=
          (ConditionalAnimationValue *this,ConditionalAnimationValue *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)param_1) {
    return 1;
  }
  if (iVar1 == 2) {
    bVar2 = *(float *)(this + 4) == *(float *)(param_1 + 4);
  }
  else {
    if (iVar1 != 1) {
      return 1;
    }
    bVar2 = this[4] == param_1[4];
  }
  return bVar2 ^ 1;
}


