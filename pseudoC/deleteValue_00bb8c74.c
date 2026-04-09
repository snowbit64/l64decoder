// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteValue
// Entry Point: 00bb8c74
// Size: 152 bytes
// Signature: undefined __thiscall deleteValue(LuauScriptSystem * this, Value * param_1)


/* LuauScriptSystem::deleteValue(Value&) */

void __thiscall LuauScriptSystem::deleteValue(LuauScriptSystem *this,Value *param_1)

{
  ulong uVar1;
  int *piVar2;
  
  switch(*(undefined4 *)(param_1 + 8)) {
  case 8:
    piVar2 = *(int **)param_1;
    checkYieldState();
    if (piVar2 != (int *)0x0) {
      uVar1 = validateObjectRef(this,(ObjectRef *)piVar2,"destruction");
      if ((uVar1 & 1) != 0) {
        lua_unref(*(lua_State **)(this + 8),*piVar2);
      }
      operator_delete(piVar2);
      return;
    }
    break;
  case 9:
  case 0xb:
  case 0xc:
    if (*(void **)param_1 != (void *)0x0) {
      operator_delete__(*(void **)param_1);
      return;
    }
  }
  return;
}


