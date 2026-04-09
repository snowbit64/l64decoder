// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NonblockingRng
// Entry Point: 00d1a21c
// Size: 200 bytes
// Signature: undefined __thiscall NonblockingRng(NonblockingRng * this)


/* CryptoPP::NonblockingRng::NonblockingRng() */

void __thiscall CryptoPP::NonblockingRng::NonblockingRng(NonblockingRng *this)

{
  long lVar1;
  int iVar2;
  OS_RNG_Err *this_00;
  basic_string abStack_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Algorithm::Algorithm((Algorithm *)this,true);
  *(undefined ***)this = &PTR__NonblockingRng_0100ea50;
  iVar2 = __open_2("/dev/urandom",0);
  *(int *)(this + 8) = iVar2;
  if (iVar2 == -1) {
    this_00 = (OS_RNG_Err *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d1a2a4 to 00d1a2b3 has its CatchHandler @ 00d1a30c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               abStack_50,"open /dev/urandom");
                    /* try { // try from 00d1a2b8 to 00d1a2df has its CatchHandler @ 00d1a2e4 */
    OS_RNG_Err::OS_RNG_Err(this_00,abStack_50);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&OS_RNG_Err::typeinfo,Exception::~Exception);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


