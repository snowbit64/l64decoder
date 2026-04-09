// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 008662b8
// Size: 172 bytes
// Signature: undefined __thiscall vector(vector<ConditionalAnimationConditions::Group,std::__ndk1::allocator<ConditionalAnimationConditions::Group>> * this, vector * param_1)


/* std::__ndk1::vector<ConditionalAnimationConditions::Group,
   std::__ndk1::allocator<ConditionalAnimationConditions::Group>
   >::vector(std::__ndk1::vector<ConditionalAnimationConditions::Group,
   std::__ndk1::allocator<ConditionalAnimationConditions::Group> > const&) */

void __thiscall
std::__ndk1::
vector<ConditionalAnimationConditions::Group,std::__ndk1::allocator<ConditionalAnimationConditions::Group>>
::vector(vector<ConditionalAnimationConditions::Group,std::__ndk1::allocator<ConditionalAnimationConditions::Group>>
         *this,vector *param_1)

{
  vector *pvVar1;
  vector *pvVar2;
  ulong uVar3;
  vector<ConditionalAnimationConditions::Condition,std::__ndk1::allocator<ConditionalAnimationConditions::Condition>>
  *this_00;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar3 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar3 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar3 >> 3) * -0x5555555555555555)) {
                    /* try { // try from 0086635c to 00866363 has its CatchHandler @ 00866364 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00866308 to 0086630b has its CatchHandler @ 00866364 */
    this_00 = (vector<ConditionalAnimationConditions::Condition,std::__ndk1::allocator<ConditionalAnimationConditions::Condition>>
               *)operator_new(uVar3);
    *(vector<ConditionalAnimationConditions::Condition,std::__ndk1::allocator<ConditionalAnimationConditions::Condition>>
      **)this = this_00;
    *(vector<ConditionalAnimationConditions::Condition,std::__ndk1::allocator<ConditionalAnimationConditions::Condition>>
      **)(this + 8) = this_00;
    *(vector<ConditionalAnimationConditions::Condition,std::__ndk1::allocator<ConditionalAnimationConditions::Condition>>
      **)(this + 0x10) = this_00 + ((long)uVar3 >> 3) * 8;
    pvVar2 = *(vector **)(param_1 + 8);
    for (pvVar1 = *(vector **)param_1; pvVar1 != pvVar2; pvVar1 = pvVar1 + 0x18) {
                    /* try { // try from 0086632c to 00866337 has its CatchHandler @ 0086636c */
      vector<ConditionalAnimationConditions::Condition,std::__ndk1::allocator<ConditionalAnimationConditions::Condition>>
      ::vector(this_00,pvVar1);
      this_00 = this_00 + 0x18;
    }
    *(vector<ConditionalAnimationConditions::Condition,std::__ndk1::allocator<ConditionalAnimationConditions::Condition>>
      **)(this + 8) = this_00;
  }
  return;
}


