// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_pushvector
// Entry Point: 00f0474c
// Size: 36 bytes
// Signature: undefined __cdecl lua_pushvector(lua_State * param_1, float param_2, float param_3, float param_4)


/* lua_pushvector(lua_State*, float, float, float) */

void lua_pushvector(lua_State *param_1,float param_2,float param_3,float param_4)

{
  float *pfVar1;
  
  pfVar1 = *(float **)(param_1 + 8);
  *pfVar1 = param_2;
  pfVar1[1] = param_3;
  pfVar1[2] = param_4;
  pfVar1[3] = 5.605194e-45;
  *(float **)(param_1 + 8) = pfVar1 + 4;
  return;
}


