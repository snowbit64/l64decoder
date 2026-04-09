// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_singlestep
// Entry Point: 00f0a0a8
// Size: 16 bytes
// Signature: undefined __cdecl lua_singlestep(lua_State * param_1, int param_2)


/* lua_singlestep(lua_State*, int) */

void lua_singlestep(lua_State *param_1,int param_2)

{
  param_1[6] = (lua_State)(param_2 != 0);
  return;
}


