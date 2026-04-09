// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_totalbytes
// Entry Point: 00f068bc
// Size: 32 bytes
// Signature: undefined __cdecl lua_totalbytes(lua_State * param_1, int param_2)


/* lua_totalbytes(lua_State*, int) */

undefined8 lua_totalbytes(lua_State *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x48);
  if (-1 < param_2) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)(uint)param_2 * 8 + 0x270);
  }
  return *puVar1;
}


