// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_addlstring
// Entry Point: 00f079ec
// Size: 104 bytes
// Signature: undefined __cdecl luaL_addlstring(luaL_Buffer * param_1, char * param_2, ulong param_3)


/* luaL_addlstring(luaL_Buffer*, char const*, unsigned long) */

void luaL_addlstring(luaL_Buffer *param_1,char *param_2,ulong param_3)

{
  void *__dest;
  
  __dest = *(void **)param_1;
  if ((ulong)(*(long *)(param_1 + 8) - (long)__dest) < param_3) {
    luaL_extendbuffer(param_1,param_3 - (*(long *)(param_1 + 8) - (long)__dest),-1);
    __dest = *(void **)param_1;
  }
  memcpy(__dest,param_2,param_3);
  *(ulong *)param_1 = *(long *)param_1 + param_3;
  return;
}


