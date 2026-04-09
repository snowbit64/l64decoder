// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_isyieldable
// Entry Point: 00f0b5b4
// Size: 20 bytes
// Signature: undefined __cdecl lua_isyieldable(lua_State * param_1)


/* lua_isyieldable(lua_State*) */

bool lua_isyieldable(lua_State *param_1)

{
  return *(ushort *)(param_1 + 0x50) <= *(ushort *)(param_1 + 0x52);
}


