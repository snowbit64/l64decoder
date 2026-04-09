// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_reservebuffer
// Entry Point: 00f078d8
// Size: 40 bytes
// Signature: undefined __cdecl luaL_reservebuffer(luaL_Buffer * param_1, ulong param_2, int param_3)


/* luaL_reservebuffer(luaL_Buffer*, unsigned long, int) */

void luaL_reservebuffer(luaL_Buffer *param_1,ulong param_2,int param_3)

{
  if ((ulong)(*(long *)(param_1 + 8) - *(long *)param_1) < param_2) {
    luaL_extendbuffer(param_1,param_2 - (*(long *)(param_1 + 8) - *(long *)param_1),param_3);
  }
  return;
}


