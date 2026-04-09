// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ToStringComponentType
// Entry Point: 00ae2d3c
// Size: 672 bytes
// Signature: undefined __cdecl ToStringComponentType(SpvReflectTypeDescription * param_1, uint param_2)


/* ToStringComponentType(SpvReflectTypeDescription const&, unsigned int) */

void ToStringComponentType(SpvReflectTypeDescription *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  basic_ostream *pbVar6;
  undefined2 *in_x8;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined **local_168 [8];
  ulong local_128;
  undefined8 uStack_120;
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 local_100 [17];
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x1c) & 0xf;
  if (uVar1 == 0) {
    *in_x8 = 0;
  }
  else {
    local_100[0] = 0xfdbff0;
    local_180 = 0xfdbfc8;
    local_178 = 0;
    local_170 = 0xfdbeb0;
                    /* try { // try from 00ae2db4 to 00ae2dbf has its CatchHandler @ 00ae2ff8 */
    std::__ndk1::ios_base::init(local_100);
    local_100[0] = 0xfdbed8;
    local_180 = 0xfdbe88;
    local_78 = 0;
    local_70 = 0xffffffff;
    local_170 = 0xfdbeb0;
                    /* try { // try from 00ae2de0 to 00ae2de7 has its CatchHandler @ 00ae2fdc */
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
    local_108 = 0x18;
    uStack_120 = 0;
    local_128 = 0;
    uStack_110 = 0;
    local_118 = (void *)0x0;
    local_168[0] = &PTR__basic_stringbuf_00fd8fa0;
    ppuVar5 = &PTR__basic_stringbuf_00fd8fa0;
    if (((byte)param_1[0x1d] >> 1 & 1) != 0) {
      if ((param_2 >> 3 & 1) == 0) {
        ppuVar5 = local_168[0];
        if ((param_2 >> 2 & 1) != 0) {
          local_168[0] = &PTR__basic_stringbuf_00fd8fa0;
                    /* try { // try from 00ae2e24 to 00ae2f57 has its CatchHandler @ 00ae300c */
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             ((basic_ostream *)&local_170,"row_major",9);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6," ",1);
          ppuVar5 = local_168[0];
        }
      }
      else {
        local_168[0] = &PTR__basic_stringbuf_00fd8fa0;
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           ((basic_ostream *)&local_170,"column_major",0xc);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6," ",1);
        ppuVar5 = local_168[0];
      }
    }
    local_168[0] = ppuVar5;
    if (uVar1 == 8) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_170,"float",5);
    }
    else if (uVar1 == 4) {
      pcVar3 = "uint";
      if (*(int *)(param_1 + 0x28) != 0) {
        pcVar3 = "int";
      }
      uVar2 = 3;
      if (*(int *)(param_1 + 0x28) == 0) {
        uVar2 = 4;
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_170,pcVar3,uVar2);
    }
    else if (uVar1 == 2) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_170,"bool",4);
    }
    if ((*(uint *)(param_1 + 0x1c) >> 9 & 1) == 0) {
      if ((*(uint *)(param_1 + 0x1c) >> 8 & 1) != 0) {
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_170,
                   *(uint *)(param_1 + 0x2c));
      }
    }
    else {
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_170,
                 *(uint *)(param_1 + 0x34));
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_170,"x",1);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_170,
                 *(uint *)(param_1 + 0x30));
    }
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    local_180 = 0xfdbe88;
    local_170 = 0xfdbeb0;
    local_100[0] = 0xfdbed8;
    local_168[0] = &PTR__basic_stringbuf_00fd8fa0;
    if ((local_128 & 1) != 0) {
      operator_delete(local_118);
    }
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
              ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_168);
    std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
              ((basic_iostream<char,std::__ndk1::char_traits<char>> *)&local_180);
    std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
              ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_100);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


