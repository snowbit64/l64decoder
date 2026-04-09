// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00866384
// Size: 152 bytes
// Signature: undefined __thiscall vector(vector<ConditionalAnimationConditions::Condition,std::__ndk1::allocator<ConditionalAnimationConditions::Condition>> * this, vector * param_1)


/* std::__ndk1::vector<ConditionalAnimationConditions::Condition,
   std::__ndk1::allocator<ConditionalAnimationConditions::Condition>
   >::vector(std::__ndk1::vector<ConditionalAnimationConditions::Condition,
   std::__ndk1::allocator<ConditionalAnimationConditions::Condition> > const&) */

void __thiscall
std::__ndk1::
vector<ConditionalAnimationConditions::Condition,std::__ndk1::allocator<ConditionalAnimationConditions::Condition>>
::vector(vector<ConditionalAnimationConditions::Condition,std::__ndk1::allocator<ConditionalAnimationConditions::Condition>>
         *this,vector *param_1)

{
  vector *pvVar1;
  vector *pvVar2;
  ulong uVar3;
  vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>
  *this_00;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar3 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
                    /* try { // try from 00866414 to 0086641b has its CatchHandler @ 0086641c */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 008663b4 to 008663bb has its CatchHandler @ 0086641c */
    this_00 = (vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>
               *)operator_new(uVar3);
    *(vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>
      **)this = this_00;
    *(vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>
      **)(this + 8) = this_00;
    *(vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>
      **)(this + 0x10) = this_00 + ((long)uVar3 >> 5) * 0x20;
    pvVar2 = *(vector **)(param_1 + 8);
    for (pvVar1 = *(vector **)param_1; pvVar1 != pvVar2; pvVar1 = pvVar1 + 0x20) {
                    /* try { // try from 008663dc to 008663e7 has its CatchHandler @ 00866424 */
      vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>
      ::vector(this_00,pvVar1);
      *(vector *)(this_00 + 0x18) = pvVar1[0x18];
      this_00 = this_00 + 0x20;
    }
    *(vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>
      **)(this + 8) = this_00;
  }
  return;
}


