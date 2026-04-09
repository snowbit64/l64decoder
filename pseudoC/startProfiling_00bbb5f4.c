// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startProfiling
// Entry Point: 00bbb5f4
// Size: 16 bytes
// Signature: undefined startProfiling(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LuauScriptSystem::startProfiling() */

void LuauScriptSystem::startProfiling(void)

{
  long in_x0;
  
  if (*(long *)(in_x0 + 0x110) != 0) {
    LuaScriptProfiler::startProfiling();
    return;
  }
  return;
}


