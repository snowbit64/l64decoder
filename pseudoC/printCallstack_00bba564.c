// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: printCallstack
// Entry Point: 00bba564
// Size: 68 bytes
// Signature: undefined __thiscall printCallstack(LuauScriptSystem * this, void * param_1, char * param_2, uint param_3)


/* LuauScriptSystem::printCallstack(void*, char const*, unsigned int) */

void __thiscall
LuauScriptSystem::printCallstack(LuauScriptSystem *this,void *param_1,char *param_2,uint param_3)

{
  checkYieldState();
  printCFunctionCallstack(this,(lua_State *)param_1,param_2,param_3);
  return;
}


