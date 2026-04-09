// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUserString
// Entry Point: 00c50668
// Size: 344 bytes
// Signature: undefined __cdecl getUserString(IR_TextureDim param_1)


/* IR_TextureInfo::getUserString(IR_TextureDim) const */

void IR_TextureInfo::getUserString(IR_TextureDim param_1)

{
  char *pcVar1;
  undefined4 in_w1;
  char *in_x8;
  
  pcVar1 = (char *)(ulong)param_1;
  in_x8[8] = '\0';
  *in_x8 = '\x0e';
  *(undefined4 *)(in_x8 + 1) = 0x74786574;
  *(undefined4 *)(in_x8 + 4) = 0x65727574;
  switch(in_w1) {
  case 0:
                    /* try { // try from 00c506c4 to 00c507b3 has its CatchHandler @ 00c507c0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(in_x8);
    break;
  case 1:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(in_x8);
    break;
  case 2:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(in_x8);
    break;
  case 3:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(in_x8);
    break;
  case 4:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(in_x8);
    break;
  case 5:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(in_x8);
    break;
  case 6:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(in_x8);
  }
  if (*(int *)(pcVar1 + 4) == 2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(in_x8);
  }
  else if (*(int *)(pcVar1 + 4) == 1) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(in_x8);
  }
  if (pcVar1[1] != '\0') {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(in_x8);
  }
  if (*pcVar1 != '\0') {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(in_x8);
  }
  return;
}


