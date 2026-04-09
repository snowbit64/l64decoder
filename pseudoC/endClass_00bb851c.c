// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endClass
// Entry Point: 00bb851c
// Size: 40 bytes
// Signature: undefined endClass(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LuauScriptSystem::endClass() */

void LuauScriptSystem::endClass(void)

{
  long in_x0;
  
  checkYieldState();
  lua_settop(*(lua_State **)(in_x0 + 8),-2);
  return;
}


