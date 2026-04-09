// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_pushlightuserdata
// Entry Point: 00f04b78
// Size: 32 bytes
// Signature: undefined __cdecl lua_pushlightuserdata(lua_State * param_1, void * param_2)


/* lua_pushlightuserdata(lua_State*, void*) */

void lua_pushlightuserdata(lua_State *param_1,void *param_2)

{
  void **ppvVar1;
  long lVar2;
  
  ppvVar1 = *(void ***)(param_1 + 8);
  *ppvVar1 = param_2;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)ppvVar1 + 0xc) = 2;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return;
}


