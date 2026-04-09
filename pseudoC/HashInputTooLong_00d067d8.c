// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: HashInputTooLong
// Entry Point: 00d067d8
// Size: 168 bytes
// Signature: undefined __thiscall HashInputTooLong(HashInputTooLong * this, basic_string * param_1)


/* CryptoPP::HashInputTooLong::HashInputTooLong(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
CryptoPP::HashInputTooLong::HashInputTooLong(HashInputTooLong *this,basic_string *param_1)

{
  long lVar1;
  long lVar2;
  byte local_40;
  void *local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  std::__ndk1::operator+
            ("IteratedHashBase: input data exceeds maximum allowed by hash function ",param_1);
  *(undefined4 *)(this + 8) = 4;
  *(undefined ***)this = &PTR__Exception_00fe0298;
                    /* try { // try from 00d06824 to 00d0682b has its CatchHandler @ 00d06880 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  *(undefined ***)this = &PTR__Exception_01002bf8;
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  *(undefined ***)this = &PTR__Exception_0100d350;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


