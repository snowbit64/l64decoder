// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ValueTypeMismatch
// Entry Point: 00c73db4
// Size: 508 bytes
// Signature: undefined __thiscall ValueTypeMismatch(ValueTypeMismatch * this, basic_string * param_1, type_info * param_2, type_info * param_3)


/* WARNING: Type propagation algorithm not settling */
/* CryptoPP::NameValuePairs::ValueTypeMismatch::ValueTypeMismatch(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::type_info const&,
   std::type_info const&) */

void __thiscall
CryptoPP::NameValuePairs::ValueTypeMismatch::ValueTypeMismatch
          (ValueTypeMismatch *this,basic_string *param_1,type_info *param_2,type_info *param_3)

{
  long lVar1;
  ulong *puVar2;
  byte local_e8 [16];
  void *local_d8;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
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
  std::__ndk1::operator+("NameValuePairs: type mismatch for \'",param_1);
                    /* try { // try from 00c73df0 to 00c73dff has its CatchHandler @ 00c74088 */
  puVar2 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)local_e8);
  local_c0 = (void *)puVar2[2];
  uStack_c8 = puVar2[1];
  local_d0 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 00c73e1c to 00c73e23 has its CatchHandler @ 00c74068 */
  puVar2 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_d0);
  local_a0 = (void *)puVar2[2];
  uStack_a8 = puVar2[1];
  local_b0 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 00c73e3c to 00c73e4b has its CatchHandler @ 00c74048 */
  puVar2 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_b0);
  local_80 = (void *)puVar2[2];
  uStack_88 = puVar2[1];
  local_90 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 00c73e68 to 00c73e6f has its CatchHandler @ 00c74028 */
  puVar2 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_90);
  local_60 = (void *)puVar2[2];
  uStack_68 = puVar2[1];
  local_70 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 00c73e88 to 00c73e97 has its CatchHandler @ 00c74008 */
  puVar2 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_70);
  local_40 = (void *)puVar2[2];
  uStack_48 = puVar2[1];
  local_50 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  *(undefined4 *)(this + 8) = 1;
  *(undefined ***)this = &PTR__Exception_00fe0298;
                    /* try { // try from 00c73ecc to 00c73ed7 has its CatchHandler @ 00c73fb0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  *(undefined ***)this = &PTR__Exception_00fe9ee0;
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  *(type_info **)(this + 0x28) = param_2;
  *(type_info **)(this + 0x30) = param_3;
  *(undefined ***)this = &PTR__Exception_00feeba0;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


