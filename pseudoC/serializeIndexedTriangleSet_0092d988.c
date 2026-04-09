// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeIndexedTriangleSet
// Entry Point: 0092d988
// Size: 56 bytes
// Signature: undefined __cdecl serializeIndexedTriangleSet(IndexedTriangleSet * param_1, char * param_2, uint param_3, Vector3 * param_4, float param_5, basic_ostream * param_6)


/* I3DSaveUtil::serializeIndexedTriangleSet(IndexedTriangleSet*, char const*, unsigned int, Vector3
   const&, float, std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&) */

void I3DSaveUtil::serializeIndexedTriangleSet
               (IndexedTriangleSet *param_1,char *param_2,uint param_3,Vector3 *param_4,
               float param_5,basic_ostream *param_6)

{
  serializeIndexedTriangleSetStart(param_1,param_2,param_3,param_4,param_5,false,param_6);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_6,"    </IndexedTriangleSet>\n",0x1a);
  return;
}


