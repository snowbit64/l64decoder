// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createNewMacro
// Entry Point: 00b91e48
// Size: 80 bytes
// Signature: undefined __thiscall createNewMacro(Preprocessor * this, basic_string * param_1)


/* Preprocessor::createNewMacro(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

undefined8 * __thiscall Preprocessor::createNewMacro(Preprocessor *this,basic_string *param_1)

{
  undefined8 *this_00;
  
  this_00 = (undefined8 *)operator_new(0x48);
  this_00[7] = 0;
  this_00[1] = 0;
  *this_00 = 0;
  this_00[3] = 0;
  this_00[2] = 0;
  this_00[5] = 0;
  this_00[4] = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            this_00,param_1);
  this_00[7] = 0;
  *(undefined4 *)(this_00 + 6) = 0;
  *(undefined *)(this_00 + 8) = 0;
  return this_00;
}


