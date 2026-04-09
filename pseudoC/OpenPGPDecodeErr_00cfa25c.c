// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OpenPGPDecodeErr
// Entry Point: 00cfa25c
// Size: 176 bytes
// Signature: undefined __thiscall OpenPGPDecodeErr(OpenPGPDecodeErr * this)


/* WARNING: Removing unreachable block (ram,0x00cfa2d0) */
/* CryptoPP::Integer::OpenPGPDecodeErr::OpenPGPDecodeErr() */

void __thiscall CryptoPP::Integer::OpenPGPDecodeErr::OpenPGPDecodeErr(OpenPGPDecodeErr *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__Exception_00fe0298;
  *(undefined4 *)(this + 8) = 4;
                    /* try { // try from 00cfa2c0 to 00cfa2c7 has its CatchHandler @ 00cfa30c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  *(undefined ***)this = &PTR__Exception_0100cb90;
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


