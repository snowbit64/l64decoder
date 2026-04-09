// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: printCallstack
// Entry Point: 00bba6f0
// Size: 64 bytes
// Signature: undefined __thiscall printCallstack(LuauScriptSystem * this, char * param_1, uint param_2)


/* LuauScriptSystem::printCallstack(char const*, unsigned int) */

void __thiscall LuauScriptSystem::printCallstack(LuauScriptSystem *this,char *param_1,uint param_2)

{
  checkYieldState();
  printCFunctionCallstack(this,*(lua_State **)(this + 8),param_1,param_2);
  return;
}


