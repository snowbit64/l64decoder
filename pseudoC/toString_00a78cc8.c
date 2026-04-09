// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: toString
// Entry Point: 00a78cc8
// Size: 564 bytes
// Signature: undefined toString(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BitmapImage::toString() */

void BitmapImage::toString(void)

{
  long lVar1;
  long in_x0;
  basic_ostream *pbVar2;
  undefined **local_160;
  undefined **local_158 [8];
  ulong local_118;
  undefined8 uStack_110;
  void *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined **local_f0 [17];
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_160 = (undefined **)0xfd8f40;
  local_f0[0] = (undefined **)0xfd8f68;
                    /* try { // try from 00a78d1c to 00a78d27 has its CatchHandler @ 00a78f18 */
  std::__ndk1::ios_base::init(local_f0);
  local_68 = 0;
  local_60 = 0xffffffff;
  local_160 = &PTR__basic_ostringstream_00fd8ed0;
  local_f0[0] = &PTR__basic_ostringstream_00fd8ef8;
                    /* try { // try from 00a78d4c to 00a78d53 has its CatchHandler @ 00a78efc */
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
  local_f8 = 0x10;
  uStack_110 = 0;
  local_118 = 0;
  local_158[0] = &PTR__basic_stringbuf_00fd8fa0;
  uStack_100 = 0;
  local_108 = (void *)0x0;
  if (*(long *)(in_x0 + 0x20) == 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_160,"BitmapImage not loaded",0x16);
  }
  else {
                    /* try { // try from 00a78d80 to 00a78e83 has its CatchHandler @ 00a78f2c */
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_160,"Width:",6);
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                        *(uint *)(in_x0 + 8));
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2," Height:",8);
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                        *(uint *)(in_x0 + 0xc));
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2," Depth:",7);
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                        *(uint *)(in_x0 + 0x10));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"\n",1);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_160,"Channels:",9);
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                        *(uint *)(in_x0 + 0x14));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"\n",1);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_160,"Format:",7);
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                        *(int *)(in_x0 + 0x30));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"\n",1);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_160,"Type:",5);
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                        *(int *)(in_x0 + 0x34));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"\n",1);
  }
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_f0[0] = &PTR__basic_ostringstream_00fd8ef8;
  local_160 = &PTR__basic_ostringstream_00fd8ed0;
  local_158[0] = &PTR__basic_stringbuf_00fd8fa0;
  if ((local_118 & 1) != 0) {
    operator_delete(local_108);
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_158);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_160);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_f0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


