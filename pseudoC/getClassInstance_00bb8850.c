// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getClassInstance
// Entry Point: 00bb8850
// Size: 32 bytes
// Signature: undefined __thiscall getClassInstance(LuauScriptSystem * this, void * param_1)


/* LuauScriptSystem::getClassInstance(void*) */

undefined8 __thiscall LuauScriptSystem::getClassInstance(LuauScriptSystem *this,void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)lua_touserdata((lua_State *)param_1,1);
  return *puVar1;
}


