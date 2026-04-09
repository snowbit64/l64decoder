// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: yield
// Entry Point: 00bbb004
// Size: 80 bytes
// Signature: undefined yield(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LuauScriptSystem::yield() */

void LuauScriptSystem::yield(void)

{
  long in_x0;
  
  if (*(char *)(in_x0 + 0x118) == '\0') {
    *(undefined *)(in_x0 + 0x118) = 1;
    LuaScriptProfiler::setPaused(*(LuaScriptProfiler **)(in_x0 + 0x110),true);
    if (*(char *)(in_x0 + 0x119) == '\0') {
      Event::post();
      return;
    }
  }
  return;
}


