// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_encodepointer
// Entry Point: 00f064f4
// Size: 40 bytes
// Signature: undefined __cdecl lua_encodepointer(lua_State * param_1, ulong param_2)


/* lua_encodepointer(lua_State*, unsigned long) */

ulong lua_encodepointer(lua_State *param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  return *(long *)(lVar1 + 0xc30) + *(long *)(lVar1 + 0xc20) * param_2 ^
         *(long *)(lVar1 + 0xc28) + *(long *)(lVar1 + 0xc18) * param_2;
}


