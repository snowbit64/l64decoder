// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodeErr
// Entry Point: 00cb99d0
// Size: 180 bytes
// Signature: undefined __thiscall BERDecodeErr(BERDecodeErr * this)


/* WARNING: Removing unreachable block (ram,0x00cb9a48) */
/* CryptoPP::BERDecodeErr::BERDecodeErr() */

void __thiscall CryptoPP::BERDecodeErr::BERDecodeErr(BERDecodeErr *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__Exception_00fe0298;
  *(undefined4 *)(this + 8) = 1;
                    /* try { // try from 00cb9a28 to 00cb9a2f has its CatchHandler @ 00cb9a84 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  *(undefined ***)this = &PTR__Exception_00fe9ee0;
  *(undefined ***)this = &PTR__Exception_01002700;
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


