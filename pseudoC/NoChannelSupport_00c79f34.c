// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NoChannelSupport
// Entry Point: 00c79f34
// Size: 172 bytes
// Signature: undefined __thiscall NoChannelSupport(NoChannelSupport * this, basic_string * param_1)


/* CryptoPP::BufferedTransformation::NoChannelSupport::NoChannelSupport(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
CryptoPP::BufferedTransformation::NoChannelSupport::NoChannelSupport
          (NoChannelSupport *this,basic_string *param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_006cadd8(local_40,param_1,": this object doesn\'t support multiple channels");
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__Exception_00fe0298;
                    /* try { // try from 00c79f84 to 00c79f8b has its CatchHandler @ 00c79fe0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  *(undefined ***)this = &PTR__Exception_00fe0270;
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  *(undefined ***)this = &PTR__Exception_00ff06c0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


