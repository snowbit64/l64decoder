// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BadState
// Entry Point: 00c74ac0
// Size: 228 bytes
// Signature: undefined __thiscall BadState(BadState * this, basic_string * param_1, char * param_2)


/* CryptoPP::AuthenticatedSymmetricCipher::BadState::BadState(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char const*) */

void __thiscall
CryptoPP::AuthenticatedSymmetricCipher::BadState::BadState
          (BadState *this,basic_string *param_1,char *param_2)

{
  long lVar1;
  ulong *puVar2;
  byte local_68 [16];
  void *local_58;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_006cadd8(local_68,param_1,&DAT_004f56f4);
                    /* try { // try from 00c74b00 to 00c74b0b has its CatchHandler @ 00c74bdc */
  puVar2 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)local_68);
  local_40 = (void *)puVar2[2];
  uStack_48 = puVar2[1];
  local_50 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  *(undefined4 *)(this + 8) = 6;
  *(undefined ***)this = &PTR__Exception_00fe0298;
                    /* try { // try from 00c74b40 to 00c74b4b has its CatchHandler @ 00c74ba4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  *(undefined ***)this = &PTR__Exception_00feee88;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


