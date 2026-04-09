// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stopProfiling
// Entry Point: 00bbb604
// Size: 16 bytes
// Signature: undefined stopProfiling(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LuauScriptSystem::stopProfiling() */

void LuauScriptSystem::stopProfiling(void)

{
  long in_x0;
  
  if (*(long *)(in_x0 + 0x110) != 0) {
    LuaScriptProfiler::stopProfiling();
    return;
  }
  return;
}


