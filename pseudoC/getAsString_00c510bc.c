// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAsString
// Entry Point: 00c510bc
// Size: 580 bytes
// Signature: undefined __cdecl getAsString(bool param_1)


/* IR_QualFlags::getAsString(bool) const */

void IR_QualFlags::getAsString(bool param_1)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  uint *puVar4;
  ulong in_x1;
  uint uVar5;
  undefined8 *in_x8;
  undefined *puVar6;
  long lVar7;
  
  puVar4 = (uint *)(ulong)param_1;
  uVar5 = *puVar4;
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  if ((uVar5 & 1) != 0) {
                    /* try { // try from 00c510e8 to 00c5126f has its CatchHandler @ 00c51304 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    uVar5 = *puVar4;
  }
  if ((uVar5 >> 1 & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    uVar5 = *puVar4;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    uVar5 = *puVar4;
  }
  if ((uVar5 >> 3 & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    uVar5 = *puVar4;
  }
  if ((uVar5 >> 4 & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    uVar5 = *puVar4;
  }
  if ((uVar5 >> 5 & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    uVar5 = *puVar4;
  }
  if ((uVar5 >> 6 & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    uVar5 = *puVar4;
  }
  if ((uVar5 >> 7 & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    uVar5 = *puVar4;
  }
  if ((uVar5 >> 8 & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    uVar5 = *puVar4;
  }
  if ((uVar5 >> 9 & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    uVar5 = *puVar4;
  }
  if ((uVar5 & 0xc00) != 0) {
                    /* try { // try from 00c5128c to 00c512a3 has its CatchHandler @ 00c51300 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
  }
  if ((in_x1 & 1) != 0) {
    bVar2 = *(byte *)in_x8;
    bVar3 = bVar2 >> 1;
    uVar1 = (ulong)bVar3;
    if ((bVar2 & 1) != 0) {
      uVar1 = in_x8[1];
    }
    if (uVar1 != 0) {
      if ((bVar2 & 1) == 0) {
        puVar6 = (undefined *)((long)in_x8 + (ulong)bVar3);
        *(byte *)in_x8 = (bVar3 - 1) * '\x02';
      }
      else {
        lVar7 = in_x8[1] - 1;
        puVar6 = (undefined *)(in_x8[2] + lVar7);
        in_x8[1] = lVar7;
      }
      *puVar6 = 0;
    }
  }
  return;
}


