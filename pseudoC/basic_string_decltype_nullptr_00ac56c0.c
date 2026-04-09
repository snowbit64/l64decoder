// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: basic_string<decltype(nullptr)>
// Entry Point: 00ac56c0
// Size: 148 bytes
// Signature: undefined __thiscall basic_string<decltype(nullptr)>(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * this, wchar_t * param_1)


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::basic_string<decltype(nullptr)>(wchar_t const*) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::basic_string<decltype(nullptr)>
          (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
           *this,wchar_t *param_1)

{
  size_t __n;
  wchar_t *__s1;
  ulong uVar1;
  
  __n = wcslen(param_1);
  if (0x3fffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 5) {
    __s1 = (wchar_t *)(this + 4);
    *this = SUB41((int)__n << 1,0);
    if (__n == 0) goto LAB_00ac5738;
  }
  else {
    uVar1 = __n + 4 & 0xfffffffffffffffc;
    __s1 = (wchar_t *)operator_new(uVar1 << 2);
    *(size_t *)(this + 8) = __n;
    *(wchar_t **)(this + 0x10) = __s1;
    *(ulong *)this = uVar1 | 1;
  }
                    /* try { // try from 00ac5728 to 00ac5737 has its CatchHandler @ 00ac5754 */
  wmemcpy(__s1,param_1,__n);
LAB_00ac5738:
  __s1[__n] = L'\0';
  return;
}


