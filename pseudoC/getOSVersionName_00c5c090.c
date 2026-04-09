// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOSVersionName
// Entry Point: 00c5c090
// Size: 404 bytes
// Signature: undefined __cdecl getOSVersionName(basic_string * param_1)


/* EnvUtil::getOSVersionName(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&) */

void EnvUtil::getOSVersionName(basic_string *param_1)

{
  long lVar1;
  basic_ostream *this;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined **local_158 [8];
  ulong local_118;
  undefined8 uStack_110;
  void *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0 [17];
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_f0[0] = 0xfdbff0;
  local_170 = 0xfdbfc8;
  local_168 = 0;
  local_160 = 0xfdbeb0;
                    /* try { // try from 00c5c0f0 to 00c5c0fb has its CatchHandler @ 00c5c244 */
  std::__ndk1::ios_base::init(local_f0);
  local_f0[0] = 0xfdbed8;
  local_170 = 0xfdbe88;
  local_68 = 0;
  local_60 = 0xffffffff;
  local_160 = 0xfdbeb0;
                    /* try { // try from 00c5c11c to 00c5c123 has its CatchHandler @ 00c5c228 */
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
  local_f8 = 0x18;
  uStack_110 = 0;
  local_118 = 0;
  local_158[0] = &PTR__basic_stringbuf_00fd8fa0;
  uStack_100 = 0;
  local_108 = (void *)0x0;
                    /* try { // try from 00c5c150 to 00c5c177 has its CatchHandler @ 00c5c258 */
  this = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                   ((basic_ostream *)&local_160,"Android SDK",0xb);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this,
             *(int *)(*(long *)(AndroidSysUtil::s_pApp + 0x18) + 0x30));
                    /* try { // try from 00c5c178 to 00c5c183 has its CatchHandler @ 00c5c224 */
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  if ((*(byte *)param_1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 4));
  }
  local_170 = 0xfdbe88;
  local_f0[0] = 0xfdbed8;
  local_160 = 0xfdbeb0;
  local_158[0] = &PTR__basic_stringbuf_00fd8fa0;
  *(undefined8 *)(param_1 + 4) = local_178;
  *(undefined8 *)(param_1 + 2) = uStack_180;
  *(undefined8 *)param_1 = local_188;
  if ((local_118 & 1) != 0) {
    operator_delete(local_108);
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_158);
  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
            ((basic_iostream<char,std::__ndk1::char_traits<char>> *)&local_170);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_f0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


