// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_absindex
// Entry Point: 00f030e8
// Size: 44 bytes
// Signature: undefined __cdecl lua_absindex(lua_State * param_1, int param_2)


/* lua_absindex(lua_State*, int) */

int lua_absindex(lua_State *param_1,int param_2)

{
  if (0xffffd8ef < param_2 - 1U) {
    param_2 = param_2 + (int)((ulong)(*(long *)(param_1 + 8) - *(long *)(param_1 + 0x10)) >> 4) + 1;
  }
  return param_2;
}


