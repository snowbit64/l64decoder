// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: requestExit
// Entry Point: 00750360
// Size: 36 bytes
// Signature: undefined __thiscall requestExit(EngineManager * this, bool param_1, bool param_2, basic_string * param_3)


/* EngineManager::requestExit(bool, bool, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
EngineManager::requestExit(EngineManager *this,bool param_1,bool param_2,basic_string *param_3)

{
  this[0x2ae] = (EngineManager)param_1;
  this[0x2ad] = (EngineManager)0x1;
  this[0x2af] = (EngineManager)param_2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x2b0),param_3);
  return;
}


