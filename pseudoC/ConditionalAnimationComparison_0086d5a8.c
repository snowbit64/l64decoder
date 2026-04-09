// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConditionalAnimationComparison
// Entry Point: 0086d5a8
// Size: 16 bytes
// Signature: undefined __thiscall ConditionalAnimationComparison(ConditionalAnimationComparison * this, uint param_1, COMPARE_OPERATION param_2, ConditionalAnimationValue * param_3)


/* ConditionalAnimationComparison::ConditionalAnimationComparison(unsigned int,
   ConditionalAnimationComparison::COMPARE_OPERATION, ConditionalAnimationValue const&) */

void __thiscall
ConditionalAnimationComparison::ConditionalAnimationComparison
          (ConditionalAnimationComparison *this,uint param_1,COMPARE_OPERATION param_2,
          ConditionalAnimationValue *param_3)

{
  *(uint *)this = param_1;
  *(COMPARE_OPERATION *)(this + 4) = param_2;
  *(undefined8 *)(this + 8) = *(undefined8 *)param_3;
  return;
}


