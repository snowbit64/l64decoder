// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeVertexAttributes
// Entry Point: 0092e288
// Size: 308 bytes
// Signature: undefined __cdecl serializeVertexAttributes(uint param_1, basic_ostream * param_2)


/* WARNING: Type propagation algorithm not settling */
/* I3DSaveUtil::serializeVertexAttributes(unsigned int, std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void I3DSaveUtil::serializeVertexAttributes(uint param_1,basic_ostream *param_2)

{
  char *pcVar1;
  ulong uVar2;
  
  if ((param_1 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_2," normal=\"true\"",0xe);
  }
  if ((param_1 >> 1 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_2," uv0=\"true\"",0xb);
  }
  if ((param_1 >> 2 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_2," uv1=\"true\"",0xb);
  }
  if ((param_1 >> 3 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_2," uv2=\"true\"",0xb);
  }
  if ((param_1 >> 4 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_2," uv3=\"true\"",0xb);
  }
  if ((param_1 >> 5 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_2," color=\"true\"",0xd);
  }
  if ((param_1 >> 6 & 1) != 0) {
    if ((param_1 >> 8 & 1) == 0) {
      pcVar1 = " blendweights=\"true\"";
      uVar2 = 0x14;
    }
    else {
      pcVar1 = " singleblendweights=\"true\"";
      uVar2 = 0x1a;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,pcVar1,uVar2)
    ;
  }
  if ((param_1 >> 7 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_2," tangent=\"true\"",0xf);
  }
  if ((param_1 >> 9 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_2," generic=\"true\"",0xf);
  }
  return;
}


