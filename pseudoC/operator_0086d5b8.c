// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator==
// Entry Point: 0086d5b8
// Size: 32 bytes
// Signature: undefined __thiscall operator==(ConditionalAnimationComparison * this, ConditionalAnimationComparison * param_1)


/* ConditionalAnimationComparison::TEMPNAMEPLACEHOLDERVALUE(ConditionalAnimationComparison const&)
   const */

bool __thiscall
ConditionalAnimationComparison::operator==
          (ConditionalAnimationComparison *this,ConditionalAnimationComparison *param_1)

{
  return *(int *)this == *(int *)param_1 && *(int *)(this + 4) == *(int *)(param_1 + 4);
}


