// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUsedMemory
// Entry Point: 00bba804
// Size: 52 bytes
// Signature: undefined getUsedMemory(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LuauScriptSystem::getUsedMemory() */

int LuauScriptSystem::getUsedMemory(void)

{
  int iVar1;
  long in_x0;
  
  checkYieldState();
  iVar1 = lua_gc(*(lua_State **)(in_x0 + 8),3,0);
  return iVar1 << 10;
}


