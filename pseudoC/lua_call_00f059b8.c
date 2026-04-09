// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_call
// Entry Point: 00f059b8
// Size: 92 bytes
// Signature: undefined __cdecl lua_call(lua_State * param_1, int param_2, int param_3)


/* lua_call(lua_State*, int, int) */

void lua_call(lua_State *param_1,int param_2,int param_3)

{
  FUN_00f0ac4c(param_1,*(long *)(param_1 + 8) + (long)~param_2 * 0x10);
  if (param_3 == -1) {
    if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x10) <= *(ulong *)(param_1 + 8)) {
      *(ulong *)(*(long *)(param_1 + 0x20) + 0x10) = *(ulong *)(param_1 + 8);
      return;
    }
  }
  return;
}


