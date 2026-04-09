// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCallback
// Entry Point: 0075f488
// Size: 84 bytes
// Signature: undefined __thiscall setCallback(ScriptingNetworkManager * this, char * param_1, void * param_2)


/* ScriptingNetworkManager::setCallback(char const*, void*) */

void __thiscall
ScriptingNetworkManager::setCallback(ScriptingNetworkManager *this,char *param_1,void *param_2)

{
  LuauScriptSystem *this_00;
  
  if (*(long *)(this + 0x20) != 0) {
    ScriptSystemManager::getInstance();
    this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::destroyObjectRef(this_00,*(void **)(this + 0x20));
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x28));
  *(void **)(this + 0x20) = param_2;
  return;
}


