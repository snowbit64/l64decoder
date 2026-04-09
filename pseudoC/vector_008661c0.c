// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 008661c0
// Size: 216 bytes
// Signature: undefined __thiscall vector(vector<ConditionalAnimationBlending::Node,std::__ndk1::allocator<ConditionalAnimationBlending::Node>> * this, vector * param_1)


/* std::__ndk1::vector<ConditionalAnimationBlending::Node,
   std::__ndk1::allocator<ConditionalAnimationBlending::Node>
   >::vector(std::__ndk1::vector<ConditionalAnimationBlending::Node,
   std::__ndk1::allocator<ConditionalAnimationBlending::Node> > const&) */

void __thiscall
std::__ndk1::
vector<ConditionalAnimationBlending::Node,std::__ndk1::allocator<ConditionalAnimationBlending::Node>>
::vector(vector<ConditionalAnimationBlending::Node,std::__ndk1::allocator<ConditionalAnimationBlending::Node>>
         *this,vector *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  basic_string *pbVar4;
  undefined8 uVar5;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar3 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar3 != 0) {
    if (0x492492492492492 < (ulong)(((long)uVar3 >> 3) * 0x6db6db6db6db6db7)) {
                    /* try { // try from 00866290 to 00866297 has its CatchHandler @ 00866298 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 0086621c to 0086621f has its CatchHandler @ 00866298 */
    pbVar4 = (basic_string *)operator_new(uVar3);
    *(basic_string **)this = pbVar4;
    *(basic_string **)(this + 8) = pbVar4;
    *(basic_string **)(this + 0x10) = pbVar4 + ((long)uVar3 >> 3) * 2;
    lVar2 = *(long *)(param_1 + 8);
    for (lVar1 = *(long *)param_1; lVar1 != lVar2; lVar1 = lVar1 + 0x38) {
                    /* try { // try from 00866240 to 0086624b has its CatchHandler @ 008662a0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(pbVar4);
      uVar5 = *(undefined8 *)(lVar1 + 0x18);
      *(undefined8 *)((long)pbVar4 + 0x1d) = *(undefined8 *)(lVar1 + 0x1d);
      *(undefined8 *)(pbVar4 + 6) = uVar5;
      uVar5 = *(undefined8 *)(lVar1 + 0x28);
      pbVar4[0xc] = *(basic_string *)(lVar1 + 0x30);
      *(undefined8 *)(pbVar4 + 10) = uVar5;
      pbVar4 = pbVar4 + 0xe;
    }
    *(basic_string **)(this + 8) = pbVar4;
  }
  return;
}


