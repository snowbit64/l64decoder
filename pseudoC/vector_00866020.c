// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00866020
// Size: 172 bytes
// Signature: undefined __thiscall vector(vector<ConditionalAnimationItem::LoadedCallbackInfo,std::__ndk1::allocator<ConditionalAnimationItem::LoadedCallbackInfo>> * this, vector * param_1)


/* std::__ndk1::vector<ConditionalAnimationItem::LoadedCallbackInfo,
   std::__ndk1::allocator<ConditionalAnimationItem::LoadedCallbackInfo>
   >::vector(std::__ndk1::vector<ConditionalAnimationItem::LoadedCallbackInfo,
   std::__ndk1::allocator<ConditionalAnimationItem::LoadedCallbackInfo> > const&) */

void __thiscall
std::__ndk1::
vector<ConditionalAnimationItem::LoadedCallbackInfo,std::__ndk1::allocator<ConditionalAnimationItem::LoadedCallbackInfo>>
::vector(vector<ConditionalAnimationItem::LoadedCallbackInfo,std::__ndk1::allocator<ConditionalAnimationItem::LoadedCallbackInfo>>
         *this,vector *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar2 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
                    /* try { // try from 008660c4 to 008660cb has its CatchHandler @ 008660cc */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00866054 to 0086605b has its CatchHandler @ 008660cc */
    puVar3 = (undefined8 *)operator_new(uVar2);
    *(undefined8 **)this = puVar3;
    *(undefined8 **)(this + 8) = puVar3;
    *(undefined8 **)(this + 0x10) = puVar3 + ((long)uVar2 >> 5) * 4;
    puVar5 = *(undefined8 **)param_1;
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (puVar5 != puVar1) {
      do {
        puVar4 = puVar3;
        *puVar4 = *puVar5;
                    /* try { // try from 0086608c to 00866097 has its CatchHandler @ 008660d4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)(puVar4 + 1));
        puVar5 = puVar5 + 4;
        puVar3 = puVar4 + 4;
      } while (puVar5 != puVar1);
      puVar3 = puVar4 + 4;
    }
    *(undefined8 **)(this + 8) = puVar3;
  }
  return;
}


