// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateClassStorageSlot
// Entry Point: 00bba318
// Size: 404 bytes
// Signature: undefined __thiscall updateClassStorageSlot(LuauScriptSystem * this, ClassTypeObject * param_1, ClassTypeObject * param_2)


/* LuauScriptSystem::updateClassStorageSlot(Value::ClassTypeObject*, Value::ClassTypeObject const*)
    */

void __thiscall
LuauScriptSystem::updateClassStorageSlot
          (LuauScriptSystem *this,ClassTypeObject *param_1,ClassTypeObject *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (this[0x118] == (LuauScriptSystem)0x0) {
    checkYieldState();
    lua_pushlightuserdata(*(lua_State **)(this + 8),param_1);
    if (param_2 == (ClassTypeObject *)0x0) {
      lua_pushnil(*(lua_State **)(this + 8));
      lua_settable(*(lua_State **)(this + 8),-10000);
      *(undefined8 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      return;
    }
    if (*(long *)param_2 == 0) {
      lua_pushnil(*(lua_State **)(this + 8));
    }
    else {
      lua_getfield(*(lua_State **)(this + 8),-10000,*(char **)(param_2 + 8));
      lua_pushstring(*(lua_State **)(this + 8),"userdata");
      lua_gettable(*(lua_State **)(this + 8),-2);
      lua_pushlightuserdata(*(lua_State **)(this + 8),*(void **)param_2);
      lua_gettable(*(lua_State **)(this + 8),-2);
    }
    lua_settable(*(lua_State **)(this + 8),-10000);
  }
  else {
    puVar2 = (undefined8 *)(this + 0x138);
    puVar3 = *(undefined8 **)(this + 0x138);
    puVar1 = puVar2;
    while (puVar3 != (undefined8 *)0x0) {
      while (puVar1 = puVar3, param_1 < (ClassTypeObject *)puVar1[4]) {
        puVar2 = puVar1;
        puVar3 = (undefined8 *)*puVar1;
        if ((undefined8 *)*puVar1 == (undefined8 *)0x0) {
          puVar3 = (undefined8 *)*puVar1;
          goto joined_r0x00bba454;
        }
      }
      if (param_1 <= (ClassTypeObject *)puVar1[4]) break;
      puVar2 = puVar1 + 1;
      puVar3 = (undefined8 *)*puVar2;
    }
    puVar3 = (undefined8 *)*puVar2;
joined_r0x00bba454:
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)operator_new(0x38);
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[4] = param_1;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = puVar1;
      *puVar2 = puVar3;
      puVar1 = puVar3;
      if (**(long **)(this + 0x130) != 0) {
        *(long *)(this + 0x130) = **(long **)(this + 0x130);
        puVar1 = (undefined8 *)*puVar2;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x138),(__tree_node_base *)puVar1);
      *(long *)(this + 0x140) = *(long *)(this + 0x140) + 1;
    }
    uVar4 = *(undefined8 *)param_2;
    puVar3[6] = *(undefined8 *)(param_2 + 8);
    puVar3[5] = uVar4;
  }
  uVar4 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)param_1 = uVar4;
  return;
}


