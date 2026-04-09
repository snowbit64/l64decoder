// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_pushnil
// Entry Point: 00f046d0
// Size: 20 bytes
// Signature: undefined __cdecl lua_pushnil(lua_State * param_1)


/* lua_pushnil(lua_State*) */

void lua_pushnil(lua_State *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar1 + 0xc) = 0;
  *(long *)(param_1 + 8) = lVar1 + 0x10;
  return;
}


