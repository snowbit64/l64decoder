// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_typename
// Entry Point: 00f035ac
// Size: 36 bytes
// Signature: undefined __cdecl lua_typename(lua_State * param_1, int param_2)


/* lua_typename(lua_State*, int) */

char * lua_typename(lua_State *param_1,int param_2)

{
  if (param_2 != -1) {
    return (&PTR_DAT_01017738)[param_2];
  }
  return "no value";
}


