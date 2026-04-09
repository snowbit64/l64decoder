// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: basic_string<decltype(nullptr)>
// Entry Point: 0090a8c0
// Size: 144 bytes
// Signature: undefined __thiscall basic_string<decltype(nullptr)>(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * this, char * param_1)


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::basic_string<decltype(nullptr)>(char const*) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
basic_string<decltype(nullptr)>
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1)

{
  size_t __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  ulong uVar1;
  
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = this + 1;
    *this = SUB41((int)__n << 1,0);
    if (__n == 0) goto LAB_0090a934;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             operator_new(uVar1);
    *(size_t *)(this + 8) = __n;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = __dest;
    *(ulong *)this = uVar1 | 1;
  }
  memcpy(__dest,param_1,__n);
LAB_0090a934:
  __dest[__n] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return;
}


