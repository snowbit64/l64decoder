// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_unref
// Entry Point: 00f06640
// Size: 80 bytes
// Signature: undefined __cdecl lua_unref(lua_State * param_1, int param_2)


/* lua_unref(lua_State*, int) */

void lua_unref(lua_State *param_1,int param_2)

{
  double *pdVar1;
  long lVar2;
  int iVar3;
  
  if (0 < param_2) {
    lVar2 = *(long *)(param_1 + 0x18);
    pdVar1 = (double *)FUN_00f178d4(param_1,*(undefined8 *)(lVar2 + 0xbf0),param_2);
    iVar3 = *(int *)(lVar2 + 0xc00);
    *(undefined4 *)((long)pdVar1 + 0xc) = 3;
    *pdVar1 = (double)(long)iVar3;
    *(int *)(lVar2 + 0xc00) = param_2;
  }
  return;
}


