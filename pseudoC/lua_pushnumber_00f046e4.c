// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_pushnumber
// Entry Point: 00f046e4
// Size: 32 bytes
// Signature: undefined __cdecl lua_pushnumber(lua_State * param_1, double param_2)


/* lua_pushnumber(lua_State*, double) */

void lua_pushnumber(lua_State *param_1,double param_2)

{
  double *pdVar1;
  long lVar2;
  
  pdVar1 = *(double **)(param_1 + 8);
  *pdVar1 = param_2;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)pdVar1 + 0xc) = 3;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return;
}


