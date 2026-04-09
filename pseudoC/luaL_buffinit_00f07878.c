// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_buffinit
// Entry Point: 00f07878
// Size: 20 bytes
// Signature: undefined __cdecl luaL_buffinit(lua_State * param_1, luaL_Buffer * param_2)


/* luaL_buffinit(lua_State*, luaL_Buffer*) */

void luaL_buffinit(lua_State *param_1,luaL_Buffer *param_2)

{
  *(lua_State **)(param_2 + 0x10) = param_1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(luaL_Buffer **)param_2 = param_2 + 0x20;
  *(luaL_Buffer **)(param_2 + 8) = param_2 + 0x220;
  return;
}


