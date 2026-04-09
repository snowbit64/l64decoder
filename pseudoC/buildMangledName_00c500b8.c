// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildMangledName
// Entry Point: 00c500b8
// Size: 304 bytes
// Signature: undefined __cdecl buildMangledName(IR_TextureDim param_1)


/* IR_TextureInfo::buildMangledName(IR_TextureDim) const */

void IR_TextureInfo::buildMangledName(IR_TextureDim param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_w1;
  undefined8 *in_x8;
  
  pcVar2 = (char *)(ulong)param_1;
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  cVar1 = (char)in_x8;
                    /* try { // try from 00c500dc to 00c501d7 has its CatchHandler @ 00c501e8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  push_back(cVar1);
  if (*pcVar2 != '\0') {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
  }
  switch(in_w1) {
  case 0:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(cVar1);
    break;
  case 1:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(cVar1);
    break;
  case 2:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    break;
  case 3:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(cVar1);
    break;
  case 4:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(cVar1);
    break;
  case 5:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(cVar1);
    break;
  case 6:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(cVar1);
  }
  if (*(int *)(pcVar2 + 4) == 2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(cVar1);
  }
  else if (*(int *)(pcVar2 + 4) == 1) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(cVar1);
  }
  if (pcVar2[1] != '\0') {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(cVar1);
  }
  return;
}


