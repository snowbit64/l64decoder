// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pair
// Entry Point: 00bf3b20
// Size: 88 bytes
// Signature: undefined __thiscall pair(pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,ShaderStructLayout> * this, pair * param_1)


/* std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const,
   ShaderStructLayout>::pair(std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, ShaderStructLayout> const&)
    */

void __thiscall
std::__ndk1::
pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,ShaderStructLayout>
::pair(pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,ShaderStructLayout>
       *this,pair *param_1)

{
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)this);
                    /* try { // try from 00bf3b44 to 00bf3b4b has its CatchHandler @ 00bf3ba8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x18));
  *(undefined2 *)(this + 0x30) = *(undefined2 *)(param_1 + 0xc);
                    /* try { // try from 00bf3b5c to 00bf3b5f has its CatchHandler @ 00bf3b78 */
  vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>::vector
            ((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>> *)
             (this + 0x38),(vector *)(param_1 + 0xe));
  *(pair *)(this + 0x50) = param_1[0x14];
  return;
}


