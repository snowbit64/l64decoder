// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: newLine
// Entry Point: 00b29410
// Size: 36 bytes
// Signature: undefined __cdecl newLine(basic_ostream * param_1, SerializationFlags param_2)


/* JSONUtil::newLine(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   JSONUtil::SerializationFlags) */

void JSONUtil::newLine(basic_ostream *param_1,SerializationFlags param_2)

{
  if ((param_2 & 1) == 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  }
  return;
}


