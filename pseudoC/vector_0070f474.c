// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 0070f474
// Size: 172 bytes
// Signature: undefined __thiscall vector(vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>> * this, vector * param_1)


/* std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   >::vector(std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > const&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::vector(vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
         *this,vector *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  basic_string *pbVar4;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar3 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar3 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar3 >> 3) * -0x5555555555555555)) {
                    /* try { // try from 0070f518 to 0070f51f has its CatchHandler @ 0070f520 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 0070f4c4 to 0070f4c7 has its CatchHandler @ 0070f520 */
    pbVar4 = (basic_string *)operator_new(uVar3);
    *(basic_string **)this = pbVar4;
    *(basic_string **)(this + 8) = pbVar4;
    *(basic_string **)(this + 0x10) = pbVar4 + ((long)uVar3 >> 3) * 2;
    lVar2 = *(long *)(param_1 + 8);
    for (lVar1 = *(long *)param_1; lVar1 != lVar2; lVar1 = lVar1 + 0x18) {
                    /* try { // try from 0070f4e8 to 0070f4f3 has its CatchHandler @ 0070f528 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(pbVar4);
      pbVar4 = pbVar4 + 6;
    }
    *(basic_string **)(this + 8) = pbVar4;
  }
  return;
}


