// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ToStringDecorationFlags
// Entry Point: 00ae23ac
// Size: 772 bytes
// Signature: undefined __cdecl ToStringDecorationFlags(uint param_1)


/* ToStringDecorationFlags(unsigned int) */

void ToStringDecorationFlags(uint param_1)

{
  long lVar1;
  basic_ostream *pbVar2;
  undefined *in_x8;
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
  if (param_1 == 0) {
    in_x8[5] = 0;
    *in_x8 = 8;
    *(undefined4 *)(in_x8 + 1) = 0x454e4f4e;
  }
  else {
    local_f0[0] = 0xfdbff0;
    local_170 = 0xfdbfc8;
    local_168 = 0;
    local_160 = 0xfdbeb0;
                    /* try { // try from 00ae2414 to 00ae241f has its CatchHandler @ 00ae26cc */
    std::__ndk1::ios_base::init(local_f0);
    local_f0[0] = 0xfdbed8;
    local_170 = 0xfdbe88;
    local_68 = 0;
    local_60 = 0xffffffff;
    local_160 = 0xfdbeb0;
                    /* try { // try from 00ae2440 to 00ae2447 has its CatchHandler @ 00ae26b0 */
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
    local_f8 = 0x18;
    uStack_110 = 0;
    local_118 = 0;
    local_158[0] = &PTR__basic_stringbuf_00fd8fa0;
    uStack_100 = 0;
    local_108 = (void *)0x0;
    if ((param_1 >> 7 & 1) != 0) {
                    /* try { // try from 00ae2478 to 00ae2613 has its CatchHandler @ 00ae26e0 */
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_160,"NON_WRITABLE",0xc);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
      param_1 = param_1 ^ 0x80;
    }
    if ((param_1 >> 6 & 1) != 0) {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_160,"FLAT",4);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
      param_1 = param_1 ^ 0x40;
    }
    if ((param_1 >> 5 & 1) != 0) {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_160,"NOPERSPECTIVE",0xd);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
      param_1 = param_1 ^ 0x20;
    }
    if ((param_1 >> 4 & 1) != 0) {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_160,"BUILT_IN",8);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
      param_1 = param_1 ^ 0x10;
    }
    if ((param_1 >> 3 & 1) != 0) {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_160,"COLUMN_MAJOR",0xc);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
      param_1 = param_1 ^ 8;
    }
    if ((param_1 >> 2 & 1) != 0) {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_160,"ROW_MAJOR",9);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
      param_1 = param_1 ^ 4;
    }
    if ((param_1 >> 1 & 1) != 0) {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_160,"BUFFER_BLOCK",0xc);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
      param_1 = param_1 ^ 2;
    }
    if ((param_1 & 1) != 0) {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_160,"BLOCK",5);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
      param_1 = param_1 ^ 1;
    }
    if (param_1 != 0) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_160,"???",3);
    }
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    local_170 = 0xfdbe88;
    local_160 = 0xfdbeb0;
    local_f0[0] = 0xfdbed8;
    local_158[0] = &PTR__basic_stringbuf_00fd8fa0;
    if ((local_118 & 1) != 0) {
      operator_delete(local_108);
    }
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
              ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_158);
    std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
              ((basic_iostream<char,std::__ndk1::char_traits<char>> *)&local_170);
    std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
              ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_f0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


