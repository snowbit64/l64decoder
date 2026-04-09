// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_gettop
// Entry Point: 00f03114
// Size: 16 bytes
// Signature: undefined __cdecl lua_gettop(lua_State * param_1)


/* lua_gettop(lua_State*) */

ulong lua_gettop(lua_State *param_1)

{
  return (ulong)(*(long *)(param_1 + 8) - *(long *)(param_1 + 0x10)) >> 4;
}


