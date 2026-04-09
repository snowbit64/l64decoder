// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateCallbacks
// Entry Point: 00bb6798
// Size: 36 bytes
// Signature: undefined updateCallbacks(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LuauScriptSystem::updateCallbacks() */

void LuauScriptSystem::updateCallbacks(void)

{
  long in_x0;
  long lVar1;
  
  lVar1 = lua_callbacks(*(lua_State **)(in_x0 + 8));
  *(code **)(lVar1 + 0x48) = staticHandleDivideByZero;
  return;
}


