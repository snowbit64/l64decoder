// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeClassInstance
// Entry Point: 00bb8870
// Size: 40 bytes
// Signature: undefined __thiscall removeClassInstance(LuauScriptSystem * this, void * param_1)


/* LuauScriptSystem::removeClassInstance(void*) */

undefined8 __thiscall LuauScriptSystem::removeClassInstance(LuauScriptSystem *this,void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)lua_touserdata((lua_State *)param_1,1);
  *puVar1 = 0;
  return 0;
}


