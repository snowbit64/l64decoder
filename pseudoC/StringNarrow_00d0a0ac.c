// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StringNarrow
// Entry Point: 00d0a0ac
// Size: 396 bytes
// Signature: undefined __thiscall StringNarrow(CryptoPP * this, wchar_t * param_1, bool param_2)


/* CryptoPP::StringNarrow(wchar_t const*, bool) */

void __thiscall CryptoPP::StringNarrow(CryptoPP *this,wchar_t *param_1,bool param_2)

{
  char *__s;
  long lVar1;
  size_t sVar2;
  InvalidArgument *pIVar3;
  ulong *in_x8;
  basic_string abStack_78 [6];
  ulong local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (char *)0x0;
                    /* try { // try from 00d0a0e4 to 00d0a133 has its CatchHandler @ 00d0a280 */
  sVar2 = wcstombs((char *)0x0,(wchar_t *)this,0);
  if (sVar2 == 0xffffffffffffffff) {
    if (((ulong)param_1 & 1) != 0) {
      pIVar3 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d0a1b0 to 00d0a1bf has its CatchHandler @ 00d0a270 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 abStack_78,"StringNarrow: wcstombs() call failed");
                    /* try { // try from 00d0a1c4 to 00d0a1eb has its CatchHandler @ 00d0a25c */
      InvalidArgument::InvalidArgument(pIVar3,abStack_78);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pIVar3,&InvalidArgument::typeinfo,Exception::~Exception);
    }
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize((ulong)&local_60,(char)sVar2);
    __s = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      __s = local_50;
    }
    sVar2 = wcstombs(__s,(wchar_t *)this,sVar2);
    if (sVar2 == 0xffffffffffffffff) {
      if (((ulong)param_1 & 1) != 0) {
        pIVar3 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d0a1fc to 00d0a20b has its CatchHandler @ 00d0a258 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )abStack_78,"StringNarrow: wcstombs() call failed");
                    /* try { // try from 00d0a210 to 00d0a237 has its CatchHandler @ 00d0a23c */
        InvalidArgument::InvalidArgument(pIVar3,abStack_78);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(pIVar3,&InvalidArgument::typeinfo,Exception::~Exception);
      }
      *in_x8 = 0;
      in_x8[1] = 0;
      in_x8[2] = 0;
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
    }
    else {
      in_x8[1] = uStack_58;
      *in_x8 = local_60;
      in_x8[2] = (ulong)local_50;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


