// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUserName
// Entry Point: 00c5c058
// Size: 24 bytes
// Signature: undefined __cdecl getUserName(basic_string * param_1)


/* EnvUtil::getUserName(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&) */

undefined8 EnvUtil::getUserName(basic_string *param_1)

{
  AndroidSysUtil::getUserName(param_1);
  return 1;
}


