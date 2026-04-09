// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sameTag
// Entry Point: 0086cf80
// Size: 20 bytes
// Signature: undefined __thiscall sameTag(ConditionalAnimationValue * this, ConditionalAnimationValue * param_1)


/* ConditionalAnimationValue::sameTag(ConditionalAnimationValue const&) const */

bool __thiscall
ConditionalAnimationValue::sameTag
          (ConditionalAnimationValue *this,ConditionalAnimationValue *param_1)

{
  return *(int *)this == *(int *)param_1;
}


