// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: performCompleteGc
// Entry Point: 00bbb20c
// Size: 44 bytes
// Signature: undefined performCompleteGc(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LuauScriptSystem::performCompleteGc() */

void LuauScriptSystem::performCompleteGc(void)

{
  long in_x0;
  
  checkYieldState();
  lua_gc(*(lua_State **)(in_x0 + 8),2,0);
  return;
}


