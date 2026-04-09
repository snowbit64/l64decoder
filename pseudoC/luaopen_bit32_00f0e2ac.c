// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaopen_bit32
// Entry Point: 00f0e2ac
// Size: 40 bytes
// Signature: undefined __cdecl luaopen_bit32(lua_State * param_1)


/* luaopen_bit32(lua_State*) */

undefined8 luaopen_bit32(lua_State *param_1)

{
  luaL_register(param_1,"bit32",(luaL_Reg *)&PTR_s_arshift_010171a8);
  return 1;
}


