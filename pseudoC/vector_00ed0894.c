// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00ed0894
// Size: 216 bytes
// Signature: undefined __thiscall vector(vector<Luau::ParseError,std::__ndk1::allocator<Luau::ParseError>> * this, vector * param_1)


/* std::__ndk1::vector<Luau::ParseError, std::__ndk1::allocator<Luau::ParseError>
   >::vector(std::__ndk1::vector<Luau::ParseError, std::__ndk1::allocator<Luau::ParseError> >
   const&) */

void __thiscall
std::__ndk1::vector<Luau::ParseError,std::__ndk1::allocator<Luau::ParseError>>::vector
          (vector<Luau::ParseError,std::__ndk1::allocator<Luau::ParseError>> *this,vector *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar2 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar2 != 0) {
    if (0x555555555555555 < (ulong)(((long)uVar2 >> 4) * -0x5555555555555555)) {
                    /* try { // try from 00ed0964 to 00ed096b has its CatchHandler @ 00ed096c */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00ed08e8 to 00ed08eb has its CatchHandler @ 00ed096c */
    puVar3 = (undefined8 *)operator_new(uVar2);
    *(undefined8 **)this = puVar3;
    *(undefined8 **)(this + 8) = puVar3;
    *(undefined8 **)(this + 0x10) = puVar3 + ((long)uVar2 >> 4) * 2;
    lVar5 = *(long *)param_1;
    lVar1 = *(long *)(param_1 + 8);
    if (lVar5 != lVar1) {
      do {
        puVar4 = puVar3;
        *puVar4 = &PTR__ParseError_010168f8;
        uVar6 = *(undefined8 *)(lVar5 + 8);
        puVar4[2] = *(undefined8 *)(lVar5 + 0x10);
        puVar4[1] = uVar6;
                    /* try { // try from 00ed0930 to 00ed0937 has its CatchHandler @ 00ed0974 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)(puVar4 + 3));
        lVar5 = lVar5 + 0x30;
        puVar3 = puVar4 + 6;
      } while (lVar5 != lVar1);
      puVar3 = puVar4 + 6;
    }
    *(undefined8 **)(this + 8) = puVar3;
  }
  return;
}


