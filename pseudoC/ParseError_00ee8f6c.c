// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ParseError
// Entry Point: 00ee8f6c
// Size: 60 bytes
// Signature: undefined __thiscall ParseError(ParseError * this, Location * param_1, basic_string * param_2)


/* Luau::ParseError::ParseError(Luau::Location const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
Luau::ParseError::ParseError(ParseError *this,Location *param_1,basic_string *param_2)

{
  undefined8 uVar1;
  
  *(undefined ***)this = &PTR__ParseError_010168f8;
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = uVar1;
                    /* try { // try from 00ee8f94 to 00ee8f9b has its CatchHandler @ 00ee8fa8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x18));
  return;
}


