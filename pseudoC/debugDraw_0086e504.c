// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugDraw
// Entry Point: 0086e504
// Size: 4 bytes
// Signature: undefined __cdecl debugDraw(ConditionalAnimationInformation * param_1, int param_2, int param_3, ConditionalAnimationShared * param_4, uint * param_5)


/* ConditionalAnimationConditions::Condition::debugDraw(ConditionalAnimationInformation const&, int,
   int, ConditionalAnimationShared const&, unsigned int&) const */

void ConditionalAnimationConditions::Condition::debugDraw
               (ConditionalAnimationInformation *param_1,int param_2,int param_3,
               ConditionalAnimationShared *param_4,uint *param_5)

{
  uint *in_x5;
  
  ConditionalAnimationComparisons::debugDraw
            ((ConditionalAnimationComparisons *)param_1,
             (ConditionalAnimationInformation *)(ulong)(uint)param_2,param_3,(int)param_4,
             (ConditionalAnimationShared *)param_5,in_x5);
  return;
}


