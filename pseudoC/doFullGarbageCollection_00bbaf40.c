// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doFullGarbageCollection
// Entry Point: 00bbaf40
// Size: 56 bytes
// Signature: undefined doFullGarbageCollection(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LuauScriptSystem::doFullGarbageCollection() */

void LuauScriptSystem::doFullGarbageCollection(void)

{
  long in_x0;
  
  lua_gc(*(lua_State **)(in_x0 + 8),2,0);
  lua_gc(*(lua_State **)(in_x0 + 8),3,0);
  return;
}


