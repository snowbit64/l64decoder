// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeDeleteMethod
// Entry Point: 00bb548c
// Size: 72 bytes
// Signature: undefined __cdecl executeDeleteMethod(void * param_1, _func_void_void_ptr * param_2)


/* ReflectionUtil::executeDeleteMethod(void*, void (*)(void*)) */

void ReflectionUtil::executeDeleteMethod(void *param_1,_func_void_void_ptr *param_2)

{
  LuauScriptSystem *this;
  void *pvVar1;
  
  ScriptSystemManager::getInstance();
  this = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
  pvVar1 = (void *)LuauScriptSystem::getClassInstance(this,param_1);
  (*param_2)(pvVar1);
  LuauScriptSystem::removeClassInstance(this,param_1);
  return;
}


