// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getError
// Entry Point: 00efc6d4
// Size: 84 bytes
// Signature: undefined __thiscall getError(BytecodeBuilder * this, basic_string * param_1)


/* Luau::BytecodeBuilder::getError(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall Luau::BytecodeBuilder::getError(BytecodeBuilder *this,basic_string *param_1)

{
  BytecodeBuilder *pBVar1;
  undefined8 *in_x8;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
                    /* try { // try from 00efc6f0 to 00efc71b has its CatchHandler @ 00efc728 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  push_back((char)in_x8);
  pBVar1 = *(BytecodeBuilder **)(this + 0x10);
  if (((byte)*this & 1) == 0) {
    pBVar1 = this + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8,(ulong)pBVar1);
  return;
}


