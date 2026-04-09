// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InvalidKeyLength
// Entry Point: 00c778d8
// Size: 388 bytes
// Signature: undefined __thiscall InvalidKeyLength(InvalidKeyLength * this, basic_string * param_1, ulong param_2)


/* WARNING: Type propagation algorithm not settling */
/* CryptoPP::InvalidKeyLength::InvalidKeyLength(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long) */

void __thiscall
CryptoPP::InvalidKeyLength::InvalidKeyLength
          (InvalidKeyLength *this,basic_string *param_1,ulong param_2)

{
  long lVar1;
  void *pvVar2;
  ulong *puVar3;
  byte local_a0 [16];
  void *local_90;
  byte local_88 [16];
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_006cadd8(local_88,param_1,&DAT_004f56f4);
                    /* try { // try from 00c77918 to 00c7792b has its CatchHandler @ 00c77ae4 */
  IntToString<unsigned_long>(param_2,10);
  pvVar2 = (void *)((ulong)local_a0 | 1);
  if ((local_a0[0] & 1) != 0) {
    pvVar2 = local_90;
  }
                    /* try { // try from 00c77948 to 00c7794f has its CatchHandler @ 00c77ac4 */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)local_88,(ulong)pvVar2);
  local_60 = (void *)puVar3[2];
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 00c77968 to 00c77977 has its CatchHandler @ 00c77aa4 */
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
                    /* try { // try from 00c779ac to 00c779b7 has its CatchHandler @ 00c77a5c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  *(undefined ***)this = &PTR__Exception_00fe9ee0;
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  *(undefined ***)this = &PTR__Exception_00ff05e0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


