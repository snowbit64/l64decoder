// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_pushboolean
// Entry Point: 00f04b50
// Size: 40 bytes
// Signature: undefined __cdecl lua_pushboolean(lua_State * param_1, int param_2)


/* lua_pushboolean(lua_State*, int) */

void lua_pushboolean(lua_State *param_1,int param_2)

{
  long lVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 8);
  *puVar2 = (uint)(param_2 != 0);
  lVar1 = *(long *)(param_1 + 8);
  puVar2[3] = 1;
  *(long *)(param_1 + 8) = lVar1 + 0x10;
  return;
}


