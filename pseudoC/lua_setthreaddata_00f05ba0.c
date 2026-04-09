// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_setthreaddata
// Entry Point: 00f05ba0
// Size: 8 bytes
// Signature: undefined __cdecl lua_setthreaddata(lua_State * param_1, void * param_2)


/* lua_setthreaddata(lua_State*, void*) */

void lua_setthreaddata(lua_State *param_1,void *param_2)

{
  *(void **)(param_1 + 0x78) = param_2;
  return;
}


