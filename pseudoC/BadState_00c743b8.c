// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BadState
// Entry Point: 00c743b8
// Size: 368 bytes
// Signature: undefined __thiscall BadState(BadState * this, basic_string * param_1, char * param_2, char * param_3)


/* WARNING: Type propagation algorithm not settling */
/* CryptoPP::AuthenticatedSymmetricCipher::BadState::BadState(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char const*, char const*)
    */

void __thiscall
CryptoPP::AuthenticatedSymmetricCipher::BadState::BadState
          (BadState *this,basic_string *param_1,char *param_2,char *param_3)

{
  long lVar1;
  ulong *puVar2;
  byte local_a8 [16];
  void *local_98;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_006cadd8(local_a8,param_1,&DAT_004f56f4);
                    /* try { // try from 00c743fc to 00c74407 has its CatchHandler @ 00c745b0 */
  puVar2 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)local_a8);
  local_80 = (void *)puVar2[2];
  uStack_88 = puVar2[1];
  local_90 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 00c74420 to 00c7442f has its CatchHandler @ 00c74590 */
  puVar2 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_90);
  local_60 = (void *)puVar2[2];
  uStack_68 = puVar2[1];
  local_70 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 00c74448 to 00c74453 has its CatchHandler @ 00c74570 */
  puVar2 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_70);
  local_40 = (void *)puVar2[2];
  uStack_48 = puVar2[1];
  local_50 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  *(undefined4 *)(this + 8) = 6;
  *(undefined ***)this = &PTR__Exception_00fe0298;
                    /* try { // try from 00c74488 to 00c74493 has its CatchHandler @ 00c74528 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  *(undefined ***)this = &PTR__Exception_00feee88;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


