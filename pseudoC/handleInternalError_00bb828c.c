// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handleInternalError
// Entry Point: 00bb828c
// Size: 52 bytes
// Signature: undefined __thiscall handleInternalError(LuauScriptSystem * this, char * param_1)


/* LuauScriptSystem::handleInternalError(char const*) */

void __thiscall LuauScriptSystem::handleInternalError(LuauScriptSystem *this,char *param_1)

{
  checkYieldState();
  printCFunctionCallstack(this,*(lua_State **)(this + 8),param_1,1);
  return;
}


