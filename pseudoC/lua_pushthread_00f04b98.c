// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_pushthread
// Entry Point: 00f04b98
// Size: 96 bytes
// Signature: undefined __cdecl lua_pushthread(lua_State * param_1)


/* lua_pushthread(lua_State*) */

bool lua_pushthread(lua_State *param_1)

{
  lua_State **pplVar1;
  long lVar2;
  lua_State *plVar3;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
  }
  pplVar1 = *(lua_State ***)(param_1 + 8);
  *pplVar1 = param_1;
  lVar2 = *(long *)(param_1 + 0x18);
  *(undefined4 *)((long)pplVar1 + 0xc) = 9;
  plVar3 = *(lua_State **)(lVar2 + 0xa70);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return plVar3 == param_1;
}


