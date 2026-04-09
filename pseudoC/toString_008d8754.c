// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: toString
// Entry Point: 008d8754
// Size: 700 bytes
// Signature: undefined toString(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ParticleSystem::toString() */

void ParticleSystem::toString(void)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  bool bVar4;
  long in_x0;
  basic_ostream *pbVar5;
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
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_160 = (undefined **)0xfd8f40;
  local_f0[0] = (undefined **)0xfd8f68;
                    /* try { // try from 008d87a8 to 008d87b3 has its CatchHandler @ 008d8a2c */
  std::__ndk1::ios_base::init(local_f0);
  local_68 = 0;
  local_60 = 0xffffffff;
  local_160 = &PTR__basic_ostringstream_00fd8ed0;
  local_f0[0] = &PTR__basic_ostringstream_00fd8ef8;
                    /* try { // try from 008d87d8 to 008d87df has its CatchHandler @ 008d8a10 */
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
  local_f8 = 0x10;
  uStack_110 = 0;
  local_118 = 0;
  local_158[0] = &PTR__basic_stringbuf_00fd8fa0;
  uStack_100 = 0;
  local_108 = (void *)0x0;
                    /* try { // try from 008d8804 to 008d8997 has its CatchHandler @ 008d8a40 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_160,"Particles: ",0xb);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(in_x0 + 0x1b0));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"/",1);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(in_x0 + 0x11c));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," Rate: ",7);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(float *)(in_x0 + 0x120));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (pbVar5," (particles/ms) Lifespan: ",0x1a);
  if (*(char *)(in_x0 + 0x138) == '\0') {
    pbVar5 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_160,
                        *(float *)(in_x0 + 0x134));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5," ms",3);
  }
  else {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_160,"Infinite",8);
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_160," Z-Sort: ",9);
  bVar4 = *(char *)(in_x0 + 0x16c) != '\0';
  pcVar2 = "false";
  if (bVar4) {
    pcVar2 = "true";
  }
  uVar1 = 4;
  if (!bVar4) {
    uVar1 = 5;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar2,uVar1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"\n",1);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_160,"Speed: ",7);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(float *)(in_x0 + 0x14c));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," NormalSpeed: ",0xe);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(float *)(in_x0 + 0x154));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," TangentSpeed: ",0xf);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(float *)(in_x0 + 0x158));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," Gravity: ",10);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(float *)(in_x0 + 0x160));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5," ",1);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(float *)(in_x0 + 0x164));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5," ",1);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(float *)(in_x0 + 0x168));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"\n",1);
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
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


