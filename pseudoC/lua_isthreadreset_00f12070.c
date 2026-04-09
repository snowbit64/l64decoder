// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_isthreadreset
// Entry Point: 00f12070
// Size: 60 bytes
// Signature: undefined __cdecl lua_isthreadreset(lua_State * param_1)


/* lua_isthreadreset(lua_State*) */

bool lua_isthreadreset(lua_State *param_1)

{
  if (*(long *)(param_1 + 0x20) != *(long *)(param_1 + 0x40)) {
    return false;
  }
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    return false;
  }
  return param_1[3] == (lua_State)0x0;
}


