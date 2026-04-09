// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCallbacks
// Entry Point: 00b3b384
// Size: 268 bytes
// Signature: undefined __cdecl setCallbacks(char * param_1, char * param_2, char * param_3, char * param_4, char * param_5, char * param_6, char * param_7, char * param_8, char * param_9, char * param_10, void * param_11)


/* MasterServerManager::setCallbacks(char const*, char const*, char const*, char const*, char
   const*, char const*, char const*, char const*, char const*, char const*, void*) */

void MasterServerManager::setCallbacks
               (char *param_1,char *param_2,char *param_3,char *param_4,char *param_5,char *param_6,
               char *param_7,char *param_8,char *param_9,char *param_10,void *param_11)

{
  LuauScriptSystem *this;
  undefined8 in_stack_00000018;
  
  if (*(long *)(param_1 + 0x328) != 0) {
    ScriptSystemManager::getInstance();
    this = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::destroyObjectRef(this,*(void **)(param_1 + 0x328));
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0x238);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0x250);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0x268);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0x280);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0x298);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0x2b0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0x2c8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0x2e0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0x2f8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0x310);
  *(undefined8 *)(param_1 + 0x328) = in_stack_00000018;
  return;
}


