// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_pushinteger
// Entry Point: 00f04704
// Size: 36 bytes
// Signature: undefined __cdecl lua_pushinteger(lua_State * param_1, int param_2)


/* lua_pushinteger(lua_State*, int) */

void lua_pushinteger(lua_State *param_1,int param_2)

{
  double *pdVar1;
  long lVar2;
  
  pdVar1 = *(double **)(param_1 + 8);
  *pdVar1 = (double)param_2;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return;
}


