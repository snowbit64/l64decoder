// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StringWiden
// Entry Point: 00d0a29c
// Size: 396 bytes
// Signature: undefined __thiscall StringWiden(CryptoPP * this, char * param_1, bool param_2)


/* CryptoPP::StringWiden(char const*, bool) */

void __thiscall CryptoPP::StringWiden(CryptoPP *this,char *param_1,bool param_2)

{
  wchar_t *__pwcs;
  long lVar1;
  size_t sVar2;
  InvalidArgument *pIVar3;
  ulong *in_x8;
  basic_string abStack_78 [6];
  ulong local_60;
  ulong uStack_58;
  wchar_t *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (wchar_t *)0x0;
                    /* try { // try from 00d0a2d4 to 00d0a323 has its CatchHandler @ 00d0a470 */
  sVar2 = mbstowcs((wchar_t *)0x0,(char *)this,0);
  if (sVar2 == 0xffffffffffffffff) {
    if (((ulong)param_1 & 1) != 0) {
      pIVar3 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d0a3a0 to 00d0a3af has its CatchHandler @ 00d0a460 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 abStack_78,"StringWiden: mbstowcs() call failed");
                    /* try { // try from 00d0a3b4 to 00d0a3db has its CatchHandler @ 00d0a44c */
      InvalidArgument::InvalidArgument(pIVar3,abStack_78);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pIVar3,&InvalidArgument::typeinfo,Exception::~Exception);
    }
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
  }
  else {
    std::__ndk1::
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::resize
              ((ulong)&local_60,(wchar_t)sVar2);
    __pwcs = (wchar_t *)((ulong)&local_60 | 4);
    if ((local_60 & 1) != 0) {
      __pwcs = local_50;
    }
    sVar2 = mbstowcs(__pwcs,(char *)this,sVar2);
    if (sVar2 == 0xffffffffffffffff) {
      if (((ulong)param_1 & 1) != 0) {
        pIVar3 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d0a3ec to 00d0a3fb has its CatchHandler @ 00d0a448 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )abStack_78,"StringWiden: mbstowcs() call failed");
                    /* try { // try from 00d0a400 to 00d0a427 has its CatchHandler @ 00d0a42c */
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


