// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeTriangles<unsigned_int>
// Entry Point: 0092eaa4
// Size: 252 bytes
// Signature: void __cdecl serializeTriangles<unsigned_int>(uint param_1, uint * param_2, basic_ostream * param_3)


/* void I3DSaveUtil::serializeTriangles<unsigned int>(unsigned int, unsigned int const*,
   std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&) */

void I3DSaveUtil::serializeTriangles<unsigned_int>
               (uint param_1,uint *param_2,basic_ostream *param_3)

{
  uint *puVar1;
  basic_ostream *pbVar2;
  ulong uVar3;
  
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_3,"      <Triangles count=\"",0x18);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,param_1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"\">\n",3);
  if (param_1 != 0) {
    uVar3 = 0;
    do {
      puVar1 = param_2 + (uVar3 & 0xffffffff);
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_3,"        <t vi=\"",0xf);
      pbVar2 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,*puVar1);
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar2," ",1);
      pbVar2 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,puVar1[1]);
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar2," ",1);
      pbVar2 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,puVar1[2]);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"\"/>\n",4);
      uVar3 = uVar3 + 3;
    } while ((ulong)param_1 + (ulong)param_1 * 2 != uVar3);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_3,"      </Triangles>\n",0x13);
  return;
}


