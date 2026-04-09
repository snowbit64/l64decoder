// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_buffinitsize
// Entry Point: 00f0788c
// Size: 76 bytes
// Signature: undefined __cdecl luaL_buffinitsize(lua_State * param_1, luaL_Buffer * param_2, ulong param_3)


/* luaL_buffinitsize(lua_State*, luaL_Buffer*, unsigned long) */

luaL_Buffer * luaL_buffinitsize(lua_State *param_1,luaL_Buffer *param_2,ulong param_3)

{
  luaL_Buffer *plVar1;
  
  plVar1 = param_2 + 0x20;
  *(lua_State **)(param_2 + 0x10) = param_1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(luaL_Buffer **)param_2 = plVar1;
  *(luaL_Buffer **)(param_2 + 8) = param_2 + 0x220;
  if (0x200 < param_3) {
    luaL_extendbuffer(param_2,param_3 - 0x200,-1);
    plVar1 = *(luaL_Buffer **)param_2;
  }
  return plVar1;
}


