// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reformatErrorMessage
// Entry Point: 00bb743c
// Size: 696 bytes
// Signature: undefined __thiscall reformatErrorMessage(LuauScriptSystem * this, char * param_1)


/* LuauScriptSystem::reformatErrorMessage(char const*) */

void __thiscall LuauScriptSystem::reformatErrorMessage(LuauScriptSystem *this,char *param_1)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  basic_ostream *pbVar7;
  size_t sVar8;
  ulong *in_x8;
  undefined *__dest;
  ulong local_188;
  ulong local_180;
  char *local_178;
  undefined **local_170;
  undefined **local_168 [8];
  ulong local_128;
  undefined8 uStack_120;
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined **local_100 [17];
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (this == (LuauScriptSystem *)0x0) {
    *(undefined *)in_x8 = 0x22;
    *(undefined2 *)((long)in_x8 + 0x11) = 0x72;
    *(undefined8 *)((long)in_x8 + 9) = 0x6f7272652041554c;
    *(undefined8 *)((long)in_x8 + 1) = 0x206e776f6e6b6e55;
    goto LAB_00bb76b8;
  }
  uVar4 = StringUtil::startsWith((char *)this,"[string \"");
  if (((uVar4 & 1) != 0) && (pcVar5 = strstr((char *)this,"\"]:"), pcVar5 != (char *)0x0)) {
    pcVar6 = strchr(pcVar5 + 3,0x3a);
    if (pcVar6 != (char *)0x0) {
      uVar3 = atoi(pcVar5 + 3);
      local_188 = 0;
      local_180 = 0;
      local_178 = (char *)0x0;
                    /* try { // try from 00bb74d4 to 00bb74db has its CatchHandler @ 00bb7720 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_188,(ulong)(this + 9));
      local_170 = (undefined **)0xfd8f40;
      local_100[0] = (undefined **)0xfd8f68;
                    /* try { // try from 00bb7500 to 00bb750b has its CatchHandler @ 00bb7710 */
      std::__ndk1::ios_base::init(local_100);
      local_78 = 0;
      local_70 = 0xffffffff;
      local_170 = &PTR__basic_ostringstream_00fd8ed0;
      local_100[0] = &PTR__basic_ostringstream_00fd8ef8;
                    /* try { // try from 00bb7530 to 00bb7537 has its CatchHandler @ 00bb76f4 */
      std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
      uStack_120 = 0;
      local_128 = 0;
      local_168[0] = &PTR__basic_stringbuf_00fd8fa0;
      uStack_110 = 0;
      local_118 = (void *)0x0;
      bVar2 = (local_188 & 1) != 0;
      pcVar5 = (char *)((ulong)&local_188 | 1);
      if (bVar2) {
        pcVar5 = local_178;
      }
      uVar4 = local_188 >> 1 & 0x7f;
      if (bVar2) {
        uVar4 = local_180;
      }
      local_108 = 0x10;
                    /* try { // try from 00bb757c to 00bb75d7 has its CatchHandler @ 00bb7728 */
      pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_170,pcVar5,uVar4);
      pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar7,"(",1);
      pbVar7 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,uVar3);
      pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar7,") :",3);
      sVar8 = strlen(pcVar6 + 1);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (pbVar7,pcVar6 + 1,sVar8);
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      local_100[0] = &PTR__basic_ostringstream_00fd8ef8;
      local_170 = &PTR__basic_ostringstream_00fd8ed0;
      local_168[0] = &PTR__basic_stringbuf_00fd8fa0;
      if ((local_128 & 1) != 0) {
        operator_delete(local_118);
      }
      std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
                ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_168);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_170);
      std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
                ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_100);
      if ((local_188 & 1) != 0) {
        operator_delete(local_178);
      }
      goto LAB_00bb76b8;
    }
  }
  sVar8 = strlen((char *)this);
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)sVar8 << 1);
    if (sVar8 != 0) goto LAB_00bb76a4;
  }
  else {
    uVar4 = sVar8 + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar4);
    in_x8[1] = sVar8;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar4 | 1;
LAB_00bb76a4:
    memcpy(__dest,this,sVar8);
  }
  __dest[sVar8] = 0;
LAB_00bb76b8:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


