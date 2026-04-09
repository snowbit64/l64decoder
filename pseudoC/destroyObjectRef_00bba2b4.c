// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyObjectRef
// Entry Point: 00bba2b4
// Size: 92 bytes
// Signature: undefined __thiscall destroyObjectRef(LuauScriptSystem * this, void * param_1)


/* LuauScriptSystem::destroyObjectRef(void*) */

void __thiscall LuauScriptSystem::destroyObjectRef(LuauScriptSystem *this,void *param_1)

{
  ulong uVar1;
  
  checkYieldState();
  if (param_1 != (void *)0x0) {
    uVar1 = validateObjectRef(this,(ObjectRef *)param_1,"destruction");
    if ((uVar1 & 1) != 0) {
                    /* WARNING: Load size is inaccurate */
      lua_unref(*(lua_State **)(this + 8),*param_1);
    }
    operator_delete(param_1);
    return;
  }
  return;
}


