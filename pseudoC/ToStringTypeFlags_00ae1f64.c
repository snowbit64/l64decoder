// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ToStringTypeFlags
// Entry Point: 00ae1f64
// Size: 1028 bytes
// Signature: undefined __cdecl ToStringTypeFlags(uint param_1)


/* ToStringTypeFlags(unsigned int) */

void ToStringTypeFlags(uint param_1)

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
    *in_x8 = 0x12;
    *(undefined2 *)(in_x8 + 9) = 0x44;
    *(undefined8 *)(in_x8 + 1) = 0x454e494645444e55;
  }
  else {
    local_f0[0] = 0xfdbff0;
    local_170 = 0xfdbfc8;
    local_168 = 0;
    local_160 = 0xfdbeb0;
                    /* try { // try from 00ae1fcc to 00ae1fd7 has its CatchHandler @ 00ae2384 */
    std::__ndk1::ios_base::init(local_f0);
    local_f0[0] = 0xfdbed8;
    local_170 = 0xfdbe88;
    local_68 = 0;
    local_60 = 0xffffffff;
    local_160 = 0xfdbeb0;
                    /* try { // try from 00ae1ff8 to 00ae1fff has its CatchHandler @ 00ae2368 */
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
    local_f8 = 0x18;
    uStack_110 = 0;
    local_118 = 0;
    local_158[0] = &PTR__basic_stringbuf_00fd8fa0;
    uStack_100 = 0;
    local_108 = (void *)0x0;
    if ((param_1 >> 0x1d & 1) != 0) {
                    /* try { // try from 00ae2030 to 00ae22c3 has its CatchHandler @ 00ae2398 */
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_160,"ARRAY",5);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
      param_1 = param_1 ^ 0x20000000;
    }
    if ((param_1 >> 0x1c & 1) != 0) {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_160,"STRUCT",6);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
      param_1 = param_1 ^ 0x10000000;
    }
    if ((~param_1 & 0xff0000) == 0) {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_160,"EXTERNAL_MASK",0xd);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
      param_1 = param_1 ^ 0xff0000;
    }
    if ((param_1 >> 0x13 & 1) != 0) {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_160,"EXTERNAL_BLOCK",0xe);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
      param_1 = param_1 ^ 0x80000;
    }
    if ((param_1 >> 0x12 & 1) != 0) {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_160,"EXTERNAL_SAMPLED_IMAGE",0x16);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
      param_1 = param_1 ^ 0x40000;
    }
    if ((param_1 >> 0x11 & 1) != 0) {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_160,"EXTERNAL_SAMPLER",0x10);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
      param_1 = param_1 ^ 0x20000;
    }
    if ((param_1 >> 0x10 & 1) != 0) {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_160,"EXTERNAL_IMAGE",0xe);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
      param_1 = param_1 ^ 0x10000;
    }
    if ((param_1 >> 9 & 1) != 0) {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_160,"MATRIX",6);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
      param_1 = param_1 ^ 0x200;
    }
    if ((param_1 >> 8 & 1) != 0) {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_160,"VECTOR",6);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
      param_1 = param_1 ^ 0x100;
    }
    if ((param_1 >> 3 & 1) != 0) {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_160,"FLOAT",5);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
      param_1 = param_1 ^ 8;
    }
    if ((param_1 >> 2 & 1) != 0) {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_160,"INT",3);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
      param_1 = param_1 ^ 4;
    }
    if ((param_1 >> 1 & 1) != 0) {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_160,"BOOL",4);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
      param_1 = param_1 ^ 2;
    }
    if ((param_1 & 1) != 0) {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_160,"VOID",4);
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


