// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InvalidChannelName
// Entry Point: 00cdb124
// Size: 340 bytes
// Signature: undefined __thiscall InvalidChannelName(InvalidChannelName * this, basic_string * param_1, basic_string * param_2)


/* CryptoPP::BufferedTransformation::InvalidChannelName::InvalidChannelName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
CryptoPP::BufferedTransformation::InvalidChannelName::InvalidChannelName
          (InvalidChannelName *this,basic_string *param_1,basic_string *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  byte local_88 [16];
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_006cadd8(local_88,param_1,": unexpected channel name \"");
  uVar1 = *(ulong *)(param_2 + 4);
  if ((*(byte *)param_2 & 1) == 0) {
    uVar1 = (long)param_2 + 1;
  }
                    /* try { // try from 00cdb17c to 00cdb183 has its CatchHandler @ 00cdb2d8 */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)local_88,uVar1);
  local_60 = (void *)puVar3[2];
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 00cdb19c to 00cdb1ab has its CatchHandler @ 00cdb2b8 */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_70);
  local_40 = (void *)puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  *(undefined4 *)(this + 8) = 1;
  *(undefined ***)this = &PTR__Exception_00fe0298;
                    /* try { // try from 00cdb1e0 to 00cdb1eb has its CatchHandler @ 00cdb278 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  *(undefined ***)this = &PTR__Exception_00fe9ee0;
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  *(undefined ***)this = &PTR__Exception_01008c80;
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


