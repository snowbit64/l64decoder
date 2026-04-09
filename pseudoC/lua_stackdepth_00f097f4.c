// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_stackdepth
// Entry Point: 00f097f4
// Size: 32 bytes
// Signature: undefined __cdecl lua_stackdepth(lua_State * param_1)


/* lua_stackdepth(lua_State*) */

int lua_stackdepth(lua_State *param_1)

{
  return (int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x40)) >> 3) * -0x33333333;
}


